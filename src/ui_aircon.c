/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_aircon.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_aircon.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void ui_aircon_temperature_increment_event_cb(lv_event_t * e);
static void ui_aircon_timer_increment_event_cb(lv_event_t * e);
static void ui_aircon_switch_event_cb(lv_event_t * e);
static void ui_aircon_mode_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

LV_IMG_DECLARE(aircon_cool_1);
LV_IMG_DECLARE(aircon_cool_2);
LV_IMG_DECLARE(aircon_cool_3);
LV_IMG_DECLARE(aircon_cool_4);
LV_IMG_DECLARE(aircon_cool_5);
LV_IMG_DECLARE(aircon_cool_6);
LV_IMG_DECLARE(aircon_fan_1);
LV_IMG_DECLARE(aircon_fan_2);
LV_IMG_DECLARE(aircon_fan_3);
LV_IMG_DECLARE(aircon_fan_4);
LV_IMG_DECLARE(aircon_fan_5);
LV_IMG_DECLARE(aircon_fan_6);
LV_IMG_DECLARE(aircon_swing_1);
LV_IMG_DECLARE(aircon_swing_2);
LV_IMG_DECLARE(aircon_swing_3);
LV_IMG_DECLARE(aircon_swing_4);
LV_IMG_DECLARE(aircon_swing_5);
LV_IMG_DECLARE(aircon_swing_6);
LV_IMG_DECLARE(aircon_swing_7);
LV_IMG_DECLARE(aircon_swing_8);
LV_IMG_DECLARE(aircon_swing_9);
LV_IMG_DECLARE(aircon_swing_10);
LV_IMG_DECLARE(aircon_swing_11);
LV_IMG_DECLARE(aircon_swing_12);
LV_IMG_DECLARE(aircon_swing_13);
LV_IMG_DECLARE(aircon_swing_14);
LV_IMG_DECLARE(aircon_swing_15);

LV_IMG_DECLARE(ui_img_menu_bg_png);
LV_IMG_DECLARE(screen_aircon_0002);
LV_IMG_DECLARE(screen_aircon_0003);
LV_IMG_DECLARE(screen_aircon_0004);
LV_IMG_DECLARE(screen_aircon_0005);
LV_IMG_DECLARE(screen_aircon_0006);
LV_IMG_DECLARE(screen_aircon_0007);
LV_IMG_DECLARE(screen_aircon_0008);


static const lv_img_dsc_t * aircon_cool[] = {&aircon_cool_1, &aircon_cool_2, &aircon_cool_3,
		&aircon_cool_4, &aircon_cool_5, &aircon_cool_6};

static const lv_img_dsc_t * aircon_fan[] = {&aircon_fan_1, &aircon_fan_2, &aircon_fan_3,
		&aircon_fan_4, &aircon_fan_5, &aircon_fan_6};

static const lv_img_dsc_t * aircon_swing[] = {&aircon_swing_1, &aircon_swing_2, &aircon_swing_3,
		&aircon_swing_4, &aircon_swing_5, &aircon_swing_6,
		&aircon_swing_7, &aircon_swing_8, &aircon_swing_9,
		&aircon_swing_10, &aircon_swing_11, &aircon_swing_12,
		&aircon_swing_13, &aircon_swing_14, &aircon_swing_15};

static const lv_img_dsc_t * screen_aircon[] = {&ui_img_menu_bg_png, &screen_aircon_0002, &screen_aircon_0003,
		&screen_aircon_0004, &screen_aircon_0005, &screen_aircon_0006,
		&screen_aircon_0007, &screen_aircon_0008};


/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_aircon_init(void)
{
	lv_anim_t * a;

	a = _ui_start_img_seq_anim(ui_Image_Aicon_Cool, aircon_cool, sizeof(aircon_cool) / sizeof(aircon_cool[0]), 100, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;

	a = _ui_start_img_seq_anim(ui_Image_Aircon_Fan, aircon_fan, sizeof(aircon_fan) / sizeof(aircon_fan[0]), 100, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;

	static int32_t d_up = 1;
	static int32_t d_down = -1;
	lv_obj_add_event_cb(ui_BTN_Temp_Up, ui_aircon_temperature_increment_event_cb, LV_EVENT_ALL, &d_up);
	lv_obj_add_event_cb(ui_BTN_Temp_Down, ui_aircon_temperature_increment_event_cb, LV_EVENT_ALL, &d_down);
	lv_obj_add_event_cb(ui_BTN_Temp_Up2, ui_aircon_timer_increment_event_cb, LV_EVENT_ALL, &d_up);
	lv_obj_add_event_cb(ui_BTN_Temp_Down2, ui_aircon_timer_increment_event_cb, LV_EVENT_ALL, &d_down);
	lv_obj_add_event_cb(ui_Switch_Fan_High, ui_aircon_switch_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
	lv_obj_add_event_cb(ui_Switch_Swing, ui_aircon_switch_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
	lv_obj_add_event_cb(ui_Roller_Aircon_Mode, ui_aircon_mode_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

}

void ui_aircon_anim_in(uint32_t delay)
{
	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Aircon_Bg, screen_aircon, sizeof(screen_aircon) / sizeof(screen_aircon[0]), 60, false);
	ap->act_time = -delay;

	delay += SCREEN_TRANSITION_TIME;

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 0, 100);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Aircon_Content2);
	lv_anim_set_delay(&a, delay);
	lv_anim_start(&a);

	lv_obj_fade_in(ui_Image_Hood_Swing, 0, delay);
	if(ui_state_aircon_mode != UI_AIRCON_MODE_FAN) {
		lv_obj_fade_in(ui_Image_Aicon_Cool, FADE_ANIM_TIME, delay);
	}
	lv_obj_fade_in(ui_Image_Aircon_Fan, FADE_ANIM_TIME, delay);
	if(ui_state_aircon_swing_on) ui_aircon_swing_anim_start(delay);
	else ui_aircon_swing_anim_center(delay);
}

uint32_t ui_aircon_anim_out(void)
{
	uint32_t delay = 0;

	ui_aircon_swing_anim_close();
	lv_obj_fade_out(ui_Image_Aircon_Fan, FADE_ANIM_TIME, delay);
	lv_obj_fade_out(ui_Image_Aicon_Cool, FADE_ANIM_TIME, delay);

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 40, 0);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Aircon_Content2);
	lv_anim_start(&a);

	delay += DARK_PANEL_ANIM_TIME;
	lv_obj_fade_out(ui_Image_Hood_Swing, 0, delay);

	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Aircon_Bg, screen_aircon, sizeof(screen_aircon) / sizeof(screen_aircon[0]), 60, true);
	ap->act_time = -delay;


	return delay + SCREEN_TRANSITION_TIME;
}

void ui_aircon_swing_anim_start(uint32_t delay)
{
	lv_anim_t * a = NULL;

	if(delay == 0) {
		uint32_t dim = sizeof(aircon_swing) / sizeof(aircon_swing[0]);
		uint32_t i;
		for(i = 0; i < dim; i++) {
			if(lv_img_get_src(ui_Image_Hood_Swing) == aircon_swing[i]) {
				break;
			}
		}
		if(i == dim) i = 0;
		a = _ui_start_img_seq_anim(ui_Image_Hood_Swing, aircon_swing, sizeof(aircon_swing) / sizeof(aircon_swing[0]), 90, false);
		a->current_value = i;
		a->act_time = i * 90;
		a->repeat_delay = 240;
		a->playback_delay = 240;
		lv_img_set_src(ui_Image_Hood_Swing, aircon_swing[i]);
	} else {
		a = _ui_start_img_seq_anim(ui_Image_Hood_Swing, aircon_swing, sizeof(aircon_swing) / sizeof(aircon_swing[0]), 90, false);
		a->act_time = -delay;
		a->repeat_delay = 240;
		a->playback_delay = 240;
	}

	a->playback_time = a->time;
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

void ui_aircon_swing_anim_center(uint32_t delay)
{
	uint32_t dim = sizeof(aircon_swing) / sizeof(aircon_swing[0]);
	uint32_t i;
	for(i = 0; i < dim; i++) {
		if(lv_img_get_src(ui_Image_Hood_Swing) == aircon_swing[i]) {
			i++;
			break;
		}
	}
	if(i == dim) i = 0;
	if(i > dim / 2) {
		lv_anim_t * a = _ui_start_img_seq_anim(ui_Image_Hood_Swing, &aircon_swing[dim / 2], i - dim / 2, 60, true);
		a->act_time = -delay;
	} else {
		lv_anim_t * a = _ui_start_img_seq_anim(ui_Image_Hood_Swing, &aircon_swing[i], dim / 2 - i, 60, false);
		a->act_time = -delay;
	}
}

void ui_aircon_swing_anim_close(void)
{
	uint32_t i;
	for(i = 0; i < sizeof(aircon_swing) / sizeof(aircon_swing[0]); i++) {
		if(lv_img_get_src(ui_Image_Hood_Swing) == aircon_swing[i]) {
			i++;
			_ui_start_img_seq_anim(ui_Image_Hood_Swing, aircon_swing, i, 30, true);
			break;
		}
	}
}


void ui_aircon_set_fan_speed(uint32_t frame_time)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(ui_Image_Aircon_Fan, aircon_fan, sizeof(aircon_fan) / sizeof(aircon_fan[0]), frame_time, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

/**********************
 *  STATIC FUNCTIONS
 **********************/

static void ui_aircon_temperature_increment_event_cb(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);
	if(code == LV_EVENT_PRESSED || code == LV_EVENT_LONG_PRESSED_REPEAT) {
		int32_t * d = lv_event_get_user_data(e);
		//ui_aircon_temperature_increment(*d);
	}
}

static void ui_aircon_timer_increment_event_cb(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);
	if(code == LV_EVENT_PRESSED || code == LV_EVENT_LONG_PRESSED_REPEAT) {
		int32_t * d = lv_event_get_user_data(e);
		//ui_aircon_timer_increment(*d);
	}
}


static void ui_aircon_switch_event_cb(lv_event_t * e)
{
	lv_obj_t * obj = lv_event_get_target(e);
	if(obj == ui_Switch_Fan_High) {
		ui_aircon_enable_fan_high(lv_obj_has_state(obj, LV_STATE_CHECKED));
	}
	else if(obj == ui_Switch_Swing) {
		if(lv_obj_has_state(obj, LV_STATE_CHECKED)) {
			ui_aircon_swing_anim_start(0);
			ui_state_aircon_swing_on = true;
		} else {
			ui_aircon_swing_anim_center(0);
			ui_state_aircon_swing_on = false;
		}
	}
}


static void ui_aircon_mode_event_cb(lv_event_t * e)
{
	ui_state_aircon_mode = lv_roller_get_selected(ui_Roller_Aircon_Mode);
	ui_aircon_set_mode(ui_state_aircon_mode);
}



