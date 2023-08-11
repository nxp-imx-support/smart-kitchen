/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_ext.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_ext.h"
#include "ui_home.h"
#include "ui_aircon.h"
#include "ui_oven.h"
#include "ui_hood.h"
 
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void ui_home_device_click_event_cb(lv_event_t * e);

static void img_seq_anim_cb(void * var, int32_t v);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/
bool ui_state_oven_on = true;
bool ui_state_oven_door = true;
bool ui_state_oven_fan_on = true;
uint32_t ui_state_oven_mode = 0;
bool ui_state_aircon_swing_on = false;
bool ui_state_hood_light_on = false;
uint32_t ui_state_hood_fan_speed = 1;
ui_aircon_mode_t ui_state_aircon_mode = UI_AIRCON_MODE_COOL;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_ext_init(void)
{
	printf("ui_ext_init: \n");
	ui_init();
	lv_obj_add_event_cb(ui_Group_Aircon_Content, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_add_event_cb(ui_Group_Oven_Content, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_add_event_cb(ui_Group_Hood_Content, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_add_event_cb(ui_BTN_Back1, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_add_event_cb(ui_BTN_Back2, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_add_event_cb(ui_BTN_Back3, ui_home_device_click_event_cb, LV_EVENT_CLICKED, NULL);

	ui_home_init();
	ui_aircon_init();
	ui_hood_init();
	ui_oven_init();

	ui_hood_set_fan_speed(ui_state_hood_fan_speed);
	ui_home_anim_in(0);

}

void ui_screen_load(ui_screen_t screen)
{
	static ui_screen_t screen_act;

	uint32_t delay;

	/*Animate out the current screen*/
	switch(screen_act) {
		case UI_SCREEN_HOME:
			delay = ui_home_anim_out();
			break;
		case UI_SCREEN_AIRCON:
			delay = ui_aircon_anim_out();
			break;
		case UI_SCREEN_OVEN:
			delay = ui_oven_anim_out();
			break;
		case UI_SCREEN_HOOD:
			delay = ui_hood_anim_out();
			break;
	}

	screen_act = screen;

	switch(screen_act) {
		case UI_SCREEN_HOME:
			lv_scr_load_anim(ui_Home, LV_SCR_LOAD_ANIM_NONE, 0,delay, false);
			ui_home_anim_in(delay);
			break;
		case UI_SCREEN_AIRCON:
			lv_scr_load_anim(ui_Aircon, LV_SCR_LOAD_ANIM_NONE, 0,delay, false);
			ui_aircon_anim_in(delay);
			break;
		case UI_SCREEN_OVEN:
			lv_scr_load_anim(ui_Oven, LV_SCR_LOAD_ANIM_NONE, 0,delay, false);
			ui_oven_anim_in(delay);
			break;
		case UI_SCREEN_HOOD:
			lv_scr_load_anim(ui_Hood, LV_SCR_LOAD_ANIM_NONE, 0,delay, false);
			ui_hood_anim_in(delay);
			break;
	}
}

void ui_date_set(const char * date_text)
{
	lv_label_set_text(ui_Label_Date, date_text);
}

void ui_time_set(uint32_t hours, uint32_t mins)
{
	lv_label_set_text_fmt(ui_Label_Time, "%02d:%02d", hours, mins);
}

void ui_weather_set(const char * deg, const char * title, const char * info, const void * icon)
{
	lv_label_set_text(ui_Label_Weather_Degree, deg);
	lv_label_set_text(ui_Label_Weather_Title, title);
	lv_label_set_text(ui_Label_Weather_Info, info);
	lv_img_set_src(ui_Image_Weather_Icon, icon);
}


void ui_aircon_set_mode(ui_aircon_mode_t mode)
{
	switch(mode) {
	case UI_AIRCON_MODE_DRY:
		lv_label_set_text(ui_Label_Aircon_Mode_Text, "Dry");
		break;
	case UI_AIRCON_MODE_COOL:
		lv_label_set_text(ui_Label_Aircon_Mode_Text, "Cool");
		break;
	case UI_AIRCON_MODE_FAN:
		lv_label_set_text(ui_Label_Aircon_Mode_Text, "Fan");
		break;
	default:
		break;
	}

	lv_roller_set_selected(ui_Roller_Aircon_Mode, mode, LV_ANIM_OFF);

	if(mode == UI_AIRCON_MODE_FAN) {
		lv_obj_fade_out(ui_Image_Aicon_Cool, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Image_Aircon_Menu_Cool, FADE_ANIM_TIME, 0);
	} else {
		lv_obj_fade_in(ui_Image_Aicon_Cool, FADE_ANIM_TIME, 0);
		lv_obj_fade_in(ui_Image_Aircon_Menu_Cool, FADE_ANIM_TIME, 0);
	}

}

void ui_aircon_set_temperature(float temp)
{
	temp = (temp * 10) / 10;
	int temp_int = (int)temp;
	int temp_dec = (temp - temp_int) * 10;
	lv_label_set_text_fmt(ui_Label_Aircon_Number, "%d", (int) temp_int);
	lv_label_set_text_fmt(ui_Label_Aircon_Number1, ".%d", (int) temp_dec);
	lv_obj_align_to(ui_Label_Aircon_Number1, ui_Label_Aircon_Number, LV_ALIGN_OUT_RIGHT_BOTTOM, 3, -20);
	lv_obj_align_to(ui_Label_Celsius, ui_Label_Aircon_Number, LV_ALIGN_OUT_RIGHT_TOP, 12, 20);

	lv_label_set_text_fmt(ui_Label_Aircon_Number2, "%d", (int) temp_int);
	lv_label_set_text_fmt(ui_Label_Aircon_Number3, ".%d", (int) temp_dec);
	lv_obj_align_to(ui_Label_Aircon_Number3, ui_Label_Aircon_Number2, LV_ALIGN_OUT_RIGHT_BOTTOM, 3, -20);
	lv_obj_align_to(ui_Label_Celsius3, ui_Label_Aircon_Number2, LV_ALIGN_OUT_RIGHT_TOP, 12, 20);
}

void ui_aircon_enable_swing(bool en)
{
	if(en) {
		lv_obj_add_state(ui_Switch_Swing, LV_STATE_CHECKED);
		if(ui_state_aircon_swing_on) {
			ui_aircon_swing_anim_start(0);
			ui_home_aircon_swing_anim_start(0);
		} else {
			ui_aircon_swing_anim_center(0);
			ui_home_aircon_swing_anim_center(0);
		}
	} else {
		lv_obj_clear_state(ui_Switch_Swing, LV_STATE_CHECKED);
		ui_aircon_swing_anim_close();
		ui_home_aircon_swing_anim_close();
	}

	ui_state_aircon_swing_on = en;
}

void ui_aircon_enable_fan_high(bool en)
{
	uint32_t frame_time;
	if(en) {
		frame_time = LV_DISP_DEF_REFR_PERIOD;
		lv_obj_add_state(ui_Switch_Fan_High, LV_STATE_CHECKED);
		lv_label_set_text(ui_Label_Aircon_Fan_Text, "High");
		lv_label_set_text(ui_Label_Aircon_Fan_Text1, "High");
	} else {
		frame_time = LV_DISP_DEF_REFR_PERIOD * 2;
		lv_obj_clear_state(ui_Switch_Fan_High, LV_STATE_CHECKED);
		lv_label_set_text(ui_Label_Aircon_Fan_Text, "Low");
		lv_label_set_text(ui_Label_Aircon_Fan_Text1, "Low");
	}

	ui_home_aircon_set_fan_speed(frame_time);
	ui_aircon_set_fan_speed(frame_time);
}

void ui_aircon_set_timer(uint32_t hours, uint32_t mins)
{
	lv_label_set_text_fmt(ui_Label_Aircon_Number5, "%02d:%02d", hours, mins);
}

void ui_oven_set_target_temperature(uint32_t temp)
{
	uint32_t child_id = (temp - 150) / 5;
	lv_obj_scroll_to_view(lv_obj_get_child(ui_Group_Target_Temp, child_id), LV_ANIM_OFF);
}

void ui_oven_set_timer(uint32_t mins)
{
	uint32_t child_id = (mins - 10) / 5;
	lv_obj_scroll_to_view(lv_obj_get_child(ui_Group_Timer, child_id), LV_ANIM_OFF);
	lv_bar_set_range(ui_Bar_Time_Left, 0, mins);
	lv_bar_set_range(ui_Bar_Time_Left1, 0, mins);
	ui_oven_set_time_left(mins);

}

void ui_oven_set_time_left(int32_t mins)
{
	lv_label_set_text_fmt(ui_Label_Time_Number, "%02d:%02d", mins / 60, mins % 60);
	lv_label_set_text_fmt(ui_Label_Time_Number1, "%02d:%02d", mins / 60, mins % 60);
	lv_label_set_text_fmt(ui_Label_Time_Number, "%02d:%02d", mins / 60, mins % 60);
	lv_label_set_text_fmt(ui_Label_Time_Number1, "%02d:%02d", mins / 60, mins % 60);
	lv_bar_set_value(ui_Bar_Time_Left, mins, LV_ANIM_OFF);
	lv_bar_set_value(ui_Bar_Time_Left1, mins, LV_ANIM_OFF);

}

void ui_oven_set_current_temperature(int32_t temp)
{
	lv_label_set_text_fmt(ui_Label_Oven_Number1, "%d", (int) temp);
	lv_obj_align_to(ui_Label_Oven_Number2, ui_Label_Oven_Number1, LV_ALIGN_OUT_RIGHT_BOTTOM, 3, -20);
	lv_obj_align_to(ui_Label_Celsius5, ui_Label_Oven_Number1, LV_ALIGN_OUT_RIGHT_TOP, 12, 20);

	lv_label_set_text_fmt(ui_Label_Temp_Number, "%d", (int) temp);
	lv_obj_align_to(ui_Label_Temp_Number1, ui_Label_Temp_Number, LV_ALIGN_OUT_RIGHT_BOTTOM, 3, -20);
	lv_obj_align_to(ui_Label_Celsius2, ui_Label_Temp_Number, LV_ALIGN_OUT_RIGHT_TOP, 12, 20);

}

void ui_oven_set_start(bool start)
{
	ui_state_oven_on = start;

	if(ui_state_oven_on) {
		if(ui_state_oven_fan_on) lv_obj_fade_in(ui_Image_Oven_Menu_Fan, FADE_ANIM_TIME, 0);
		lv_obj_fade_in(ui_Image_Oven_Light_Menu, FADE_ANIM_TIME, 0);
	}
}

void ui_oven_set_mode(uint32_t idx)
{
	ui_state_oven_mode = idx;
	ui_oven_mode_update(true);
}

void ui_oven_set_status(const char * status)
{
	lv_label_set_text(ui_Label_Status_Text, status);
	lv_label_set_text(ui_Label_Status_Text1, status);
}

void ui_hood_set_light(bool on)
{
	if(on) {
		lv_label_set_text(ui_Label_Hood_Light_Text, "On");
		lv_obj_add_state(ui_Switch_Hood_Light, LV_STATE_CHECKED);
		lv_obj_fade_in(ui_Image_Hood_Menu_Light, FADE_ANIM_TIME, 0);
		lv_obj_fade_in(ui_Image_Hood_Light, FADE_ANIM_TIME, 0);
	} else {
		lv_label_set_text(ui_Label_Hood_Light_Text, "Off");
		lv_obj_clear_state(ui_Switch_Hood_Light, LV_STATE_CHECKED);
		lv_obj_fade_out(ui_Image_Hood_Menu_Light, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Image_Hood_Light, FADE_ANIM_TIME, 0);
	}

	ui_state_hood_light_on = on;
}

void ui_hood_set_fan_speed(uint32_t lvl)
{
	ui_state_hood_fan_speed = lvl;
	lv_slider_set_value(ui_Slider_Hood_Fan, lvl, LV_ANIM_OFF);

	if(lvl == 0 || lvl == 1) {
		if(lv_obj_get_style_opa(ui_Group_Smog_Menu1, 0) != LV_OPA_COVER) {
			lv_obj_fade_in(ui_Group_Smog_Menu1, FADE_ANIM_TIME, 0);
		}
		if(lv_obj_get_style_opa(ui_Group_Smog1, 0) != LV_OPA_COVER) {
			lv_obj_fade_in(ui_Group_Smog1, FADE_ANIM_TIME, 0);
		}
		if(lv_obj_get_style_opa(ui_Group_Smog_Menu2, 0) != LV_OPA_COVER) {
			lv_obj_fade_in(ui_Group_Smog_Menu2, FADE_ANIM_TIME, 0);
		}
		if(lv_obj_get_style_opa(ui_Group_Smog2, 0) != LV_OPA_COVER) {
			lv_obj_fade_in(ui_Group_Smog2, FADE_ANIM_TIME, 0);
		}
	} else {
		lv_obj_fade_out(ui_Group_Smog_Menu1, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Group_Smog1, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Group_Smog_Menu2, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Group_Smog2, FADE_ANIM_TIME, 0);
	}

	switch(lvl) {
		case 0:
			lv_label_set_text(ui_Label_Hood_Fan_Text, "Off");
			_ui_smog1_anim(ui_Image_Smog1_Menu, false);
			_ui_smog2_anim(ui_Image_Smog2_Menu, false);
			_ui_smog1_anim(ui_Image_Smog1_Menu1, false);
			_ui_smog2_anim(ui_Image_Smog2_Menu1, false);
			_ui_smog1_anim(ui_Image_Smog11, false);
			_ui_smog2_anim(ui_Image_Smog21, false);
			_ui_smog1_anim(ui_Image_Smog12, false);
			_ui_smog2_anim(ui_Image_Smog22, false);
			break;
		case 1:
			lv_label_set_text(ui_Label_Hood_Fan_Text, "Low");
			_ui_smog1_anim(ui_Image_Smog1_Menu, true);
			_ui_smog2_anim(ui_Image_Smog2_Menu, true);
			_ui_smog1_anim(ui_Image_Smog1_Menu1, true);
			_ui_smog2_anim(ui_Image_Smog2_Menu1, true);
			_ui_smog1_anim(ui_Image_Smog11, true);
			_ui_smog2_anim(ui_Image_Smog21, true);
			_ui_smog1_anim(ui_Image_Smog12, true);
			_ui_smog2_anim(ui_Image_Smog22, true);
			break;
		case 2:
			lv_label_set_text(ui_Label_Hood_Fan_Text, "High");
			break;
	}
}

void _ui_max_width_anim_cb(void * var, int32_t v)
{
	lv_obj_set_style_max_width(var, LV_PCT(v), 0);
}

void _ui_max_height_anim_cb(void * var, int32_t v)
{
	lv_obj_set_style_max_height(var, LV_PCT(v), 0);
}

lv_anim_t * _ui_start_img_seq_anim(lv_obj_t * obj, const lv_img_dsc_t * imgs[], uint32_t img_cnt, uint32_t period_time, bool backward)
{
	obj->user_data = imgs;
	lv_anim_t a;
	lv_anim_init(&a);
	if(backward)  lv_anim_set_values(&a, img_cnt - 1, 0);
	else lv_anim_set_values(&a, 0, img_cnt - 1);
	lv_anim_set_exec_cb(&a, img_seq_anim_cb);
	lv_anim_set_var(&a, obj);
	lv_anim_set_user_data(&a, obj);
	lv_anim_set_time(&a, img_cnt * period_time);
	return lv_anim_start(&a);

}

void _ui_smog1_anim(lv_obj_t * obj, bool fast)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, fast ? 5000 : 15000);
    lv_anim_set_var(&PropertyAnimation_0, obj);
    lv_anim_set_exec_cb(&PropertyAnimation_0, lv_obj_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -328);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

void _ui_smog2_anim(lv_obj_t * obj, bool fast)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, fast ? 9000 : 27000);
    lv_anim_set_var(&PropertyAnimation_0, obj);
    lv_anim_set_exec_cb(&PropertyAnimation_0, lv_obj_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -468);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

/**********************
 *   STATIC FUNCTIONS
 **********************/




static void ui_home_device_click_event_cb(lv_event_t * e)
{
	lv_obj_t * obj = lv_event_get_target(e);
	if(obj == ui_Group_Aircon_Content) {
		ui_screen_load(UI_SCREEN_AIRCON);
	} else if(obj == ui_Group_Hood_Content) {
		ui_screen_load(UI_SCREEN_HOOD);
	}  else if(obj == ui_Group_Oven_Content) {
		ui_screen_load(UI_SCREEN_OVEN);
	}  else if(obj == ui_BTN_Back1) {
		ui_screen_load(UI_SCREEN_HOME);
	}  else if(obj == ui_BTN_Back2) {
		ui_screen_load(UI_SCREEN_HOME);
	}  else if(obj == ui_BTN_Back3) {
		ui_screen_load(UI_SCREEN_HOME);
	}
}

static void img_seq_anim_cb(void * var, int32_t v)
{
	lv_obj_t * obj = var;
	lv_img_dsc_t ** imgs = obj->user_data;
	lv_img_set_src(obj, imgs[v]);
}

