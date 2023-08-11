/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_home.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_home.h"

/*********************
 *      DEFINES
 *********************/
#define SETTINGS_MENU_WIDTH 250

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void ui_home_menu_btn_click_event_cb(lv_event_t * e);
static void ui_oven_home_anim_door(bool open, uint32_t delay);

void voice1_Animation(lv_obj_t * TargetObject, int delay);
void voice2_Animation(lv_obj_t * TargetObject, int delay);
/**********************
 *  STATIC VARIABLES
 **********************/
LV_IMG_DECLARE(oven_menu_fan_1);
LV_IMG_DECLARE(oven_menu_fan_2);
LV_IMG_DECLARE(oven_menu_fan_3);
LV_IMG_DECLARE(oven_menu_fan_4);
LV_IMG_DECLARE(oven_menu_door_1);
LV_IMG_DECLARE(oven_menu_door_2);
LV_IMG_DECLARE(oven_menu_door_3);
LV_IMG_DECLARE(oven_menu_door_4);
LV_IMG_DECLARE(oven_menu_door_5);
LV_IMG_DECLARE(oven_menu_door_6);
LV_IMG_DECLARE(oven_menu_door_7);
LV_IMG_DECLARE(oven_menu_door_8);
LV_IMG_DECLARE(oven_menu_door_9);
LV_IMG_DECLARE(aircon_menu_cool_1);
LV_IMG_DECLARE(aircon_menu_cool_2);
LV_IMG_DECLARE(aircon_menu_cool_3);
LV_IMG_DECLARE(aircon_menu_cool_4);
LV_IMG_DECLARE(aircon_menu_cool_5);
LV_IMG_DECLARE(aircon_menu_cool_6);
LV_IMG_DECLARE(aircon_menu_fan_1);
LV_IMG_DECLARE(aircon_menu_fan_2);
LV_IMG_DECLARE(aircon_menu_fan_3);
LV_IMG_DECLARE(aircon_menu_fan_4);
LV_IMG_DECLARE(aircon_menu_fan_5);
LV_IMG_DECLARE(aircon_menu_fan_6);
LV_IMG_DECLARE(aircon_menu_swing_01);
LV_IMG_DECLARE(aircon_menu_swing_02);
LV_IMG_DECLARE(aircon_menu_swing_03);
LV_IMG_DECLARE(aircon_menu_swing_04);
LV_IMG_DECLARE(aircon_menu_swing_05);
LV_IMG_DECLARE(aircon_menu_swing_06);
LV_IMG_DECLARE(aircon_menu_swing_07);
LV_IMG_DECLARE(aircon_menu_swing_08);
LV_IMG_DECLARE(aircon_menu_swing_09);
LV_IMG_DECLARE(aircon_menu_swing_10);
LV_IMG_DECLARE(aircon_menu_swing_11);
LV_IMG_DECLARE(aircon_menu_swing_12);
LV_IMG_DECLARE(aircon_menu_swing_13);
LV_IMG_DECLARE(aircon_menu_swing_14);
LV_IMG_DECLARE(aircon_menu_swing_15);
LV_IMG_DECLARE(aircon_menu_swing_16);
LV_IMG_DECLARE(aircon_menu_swing_17);

static const lv_img_dsc_t * oven_fan_menu[] = {&oven_menu_fan_1, &oven_menu_fan_2, &oven_menu_fan_3,
												&oven_menu_fan_4};


static const lv_img_dsc_t * oven_menu_door[] = {&oven_menu_door_1, &oven_menu_door_2, &oven_menu_door_3, &oven_menu_door_4,
										   &oven_menu_door_5, &oven_menu_door_6, &oven_menu_door_7, &oven_menu_door_8, &oven_menu_door_9};

static const lv_img_dsc_t * aircon_menu_swing[] = {&aircon_menu_swing_01, &aircon_menu_swing_02, &aircon_menu_swing_03,
		&aircon_menu_swing_04, &aircon_menu_swing_05, &aircon_menu_swing_06,
		&aircon_menu_swing_07, &aircon_menu_swing_08, &aircon_menu_swing_09,
		&aircon_menu_swing_10, &aircon_menu_swing_11, &aircon_menu_swing_12,
		&aircon_menu_swing_13, &aircon_menu_swing_14, &aircon_menu_swing_15,
		&aircon_menu_swing_16, &aircon_menu_swing_17};

static const lv_img_dsc_t * aircon_menu_fan[] = {&aircon_menu_fan_1, &aircon_menu_fan_2, &aircon_menu_fan_3,
		&aircon_menu_fan_4, &aircon_menu_fan_5, &aircon_menu_fan_6};

static const lv_img_dsc_t * aircon_menu_cool[] = {&aircon_menu_cool_1, &aircon_menu_cool_2, &aircon_menu_cool_3,
		&aircon_menu_cool_4, &aircon_menu_cool_5, &aircon_menu_cool_6};

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_home_init(void)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Cool, aircon_menu_cool, sizeof(aircon_menu_cool) / sizeof(aircon_menu_cool[0]), 100, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;

	a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Fan, aircon_menu_fan, sizeof(aircon_menu_fan) / sizeof(aircon_menu_fan[0]), 100, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;

	a = _ui_start_img_seq_anim(ui_Image_Oven_Menu_Fan, oven_fan_menu, sizeof(oven_fan_menu) / sizeof(oven_fan_menu[0]), LV_DISP_DEF_REFR_PERIOD * 3, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;


	voice1_Animation(ui_Image_Voice_Bg_1, 0);
	voice1_Animation(ui_Image_Voice_Bg_2, 100);
	voice2_Animation(ui_Image_Voice_Bg_3, 200);

	ui_home_aircon_swing_anim_center(0);
	if(ui_state_oven_door) {
		ui_oven_home_anim_door(ui_state_oven_door, 0);
	} else {
		lv_obj_fade_out(ui_Image_Oven_Anim_Menu, 0, 0);
	}

	lv_obj_fade_out(ui_Group_Smog_Menu1, 0, 0);
	lv_obj_fade_out(ui_Group_Smog_Menu2, 0, 0);

	lv_obj_set_flex_flow(ui_Panel_Settings, LV_FLEX_FLOW_COLUMN);
	lv_obj_set_flex_align(ui_Panel_Settings, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
	lv_obj_t * label = lv_label_create(ui_Panel_Settings);
	lv_label_set_text(label, "Settings");
	lv_obj_set_style_text_font(label, &ui_font_SemiBold, 0);
	lv_obj_set_style_text_font(label, &ui_font_SemiBold, 0);

	label = lv_label_create(ui_Panel_Settings);
	lv_label_set_text(label, "FW version: v1.2.3");
}

void ui_home_anim_in(uint32_t delay)
{
	if(ui_state_hood_fan_speed == 0 || ui_state_hood_fan_speed == 1) {
		lv_obj_fade_in(ui_Group_Smog_Menu1, FADE_ANIM_TIME, delay);
		lv_obj_fade_in(ui_Group_Smog_Menu2, FADE_ANIM_TIME, delay);
	}

	if(ui_state_hood_light_on) {
		lv_obj_fade_in(ui_Image_Hood_Menu_Light, FADE_ANIM_TIME, delay);
	}

	if(ui_state_oven_on) {
		if(ui_state_oven_fan_on) lv_obj_fade_in(ui_Image_Oven_Menu_Fan, FADE_ANIM_TIME, delay);
		lv_obj_fade_in(ui_Image_Oven_Light_Menu, FADE_ANIM_TIME, delay);
	}

	if(ui_state_oven_door) {
		ui_oven_home_anim_door(true, delay);
	}

	lv_obj_fade_in(ui_Image_Aircon, 0, delay);
	lv_obj_fade_in(ui_Image_Aircon_Menu_Swing, 0, delay);
	lv_obj_fade_in(ui_Image_Hood, 0, delay);
	lv_obj_fade_in(ui_Image_Oven_Menu, 0, delay);

	delay += FADE_ANIM_TIME;
	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_exec_cb(&a, _ui_max_width_anim_cb);
	lv_anim_set_values(&a, 0, 70);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_delay(&a, delay);
	lv_anim_set_var(&a, ui_Group_Oven_Content);
	lv_anim_start(&a);

	lv_anim_set_values(&a, 0, 40);
	lv_anim_set_var(&a, ui_Group_Hood_Content);
	lv_anim_start(&a);

	lv_anim_set_var(&a, ui_Group_Aircon_Content);
	lv_anim_start(&a);

	lv_anim_set_var(&a, ui_Group_Nxp_Logo);
	lv_anim_start(&a);

	lv_anim_set_values(&a, 0, 120);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_var(&a, ui_Group_Info);
	lv_anim_start(&a);

	delay += DARK_PANEL_ANIM_TIME;
	if(ui_state_aircon_mode != UI_AIRCON_MODE_FAN) {
		lv_obj_fade_in(ui_Image_Aircon_Menu_Cool, FADE_ANIM_TIME, delay);
	}

	lv_obj_fade_in(ui_Image_Aircon_Menu_Fan, FADE_ANIM_TIME, delay);

	if(ui_state_aircon_swing_on) ui_home_aircon_swing_anim_start(delay);
	else ui_home_aircon_swing_anim_center(delay);

	lv_img_set_src(ui_Image_Menu_Bg, &ui_img_menu_bg_png);

	lv_obj_add_event_cb(ui_BTN_Menu, ui_home_menu_btn_click_event_cb, LV_EVENT_CLICKED, NULL);
	lv_obj_set_ext_click_area(ui_BTN_Menu, 30);
}

uint32_t ui_home_anim_out(void)
{
	uint32_t delay = 0;

	ui_home_aircon_swing_anim_close();

	if(ui_state_oven_door) {
		ui_oven_home_anim_door(false, delay);
	}

	lv_obj_fade_out(ui_Image_Hood_Menu_Light, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Image_Aircon_Menu_Fan, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Image_Aircon_Menu_Cool, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Group_Smog_Menu1, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Group_Smog_Menu2, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Image_Oven_Menu_Fan, FADE_ANIM_TIME, 0);
	lv_obj_fade_out(ui_Image_Oven_Light_Menu, FADE_ANIM_TIME, FADE_ANIM_TIME);
	delay += FADE_ANIM_TIME;

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_var(&a, ui_Panel_Menu);
	lv_anim_set_values(&a, lv_obj_get_x( ui_Panel_Menu), 0);
	lv_anim_set_exec_cb(&a, lv_obj_set_x);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME / 2);
	lv_anim_start(&a);

	lv_anim_init(&a);
	lv_anim_set_exec_cb(&a, _ui_max_width_anim_cb);
	lv_anim_set_values(&a, 70, 0);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_delay(&a, delay);
	lv_anim_set_var(&a, ui_Group_Oven_Content);
	lv_anim_start(&a);

	lv_anim_set_values(&a, 40, 0);
	lv_anim_set_var(&a, ui_Group_Hood_Content);
	lv_anim_start(&a);

	lv_anim_set_var(&a, ui_Group_Aircon_Content);
	lv_anim_start(&a);

	lv_anim_set_var(&a, ui_Group_Nxp_Logo);
	lv_anim_start(&a);

	lv_anim_set_exec_cb(&a, lv_obj_set_height);
	lv_anim_set_values(&a, 120, 0);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_var(&a, ui_Group_Info);
	lv_anim_start(&a);

	delay += DARK_PANEL_ANIM_TIME;
	lv_obj_fade_out(ui_Image_Aircon_Menu_Swing, 0, delay);
	lv_obj_fade_out(ui_Image_Aircon, 0, delay);
	lv_obj_fade_out(ui_Image_Hood, 0, delay);
	lv_obj_fade_out(ui_Image_Oven_Menu, 0, delay);

	return delay;
}

void ui_home_aircon_swing_anim_close(void)
{
	uint32_t i;
	for(i = 0; i < sizeof(aircon_menu_swing) / sizeof(aircon_menu_swing[0]); i++) {
		if(lv_img_get_src(ui_Image_Aircon_Menu_Swing) == aircon_menu_swing[i]) {
			i++;
			_ui_start_img_seq_anim(ui_Image_Aircon_Menu_Swing, aircon_menu_swing, i, 30, true);
			break;
		}
	}
}

void ui_home_aircon_swing_anim_start(uint32_t delay)
{
	lv_anim_t * a = NULL;

	if(delay == 0) {
		uint32_t dim = sizeof(aircon_menu_swing) / sizeof(aircon_menu_swing[0]);
		uint32_t i;
		for(i = 0; i < dim; i++) {
			if(lv_img_get_src(ui_Image_Aircon_Menu_Swing) == aircon_menu_swing[i]) {
				break;
			}
		}
		if(i == dim) i = 0;
		a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Swing, aircon_menu_swing, sizeof(aircon_menu_swing) / sizeof(aircon_menu_swing[0]), 90, false);
		a->current_value = i;
		a->act_time = i * 60;
		a->repeat_delay = 240;
		a->playback_delay = 240;
		lv_img_set_src(ui_Image_Aircon_Menu_Swing, aircon_menu_swing[i]);
	} else {
		a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Swing, aircon_menu_swing, sizeof(aircon_menu_swing) / sizeof(aircon_menu_swing[0]), 90, false);
		a->act_time = -delay;
		a->repeat_delay = 240;
		a->playback_delay = 240;
	}

	a->playback_time = a->time;
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
	a->act_time = -delay;
}

void ui_home_aircon_swing_anim_center(uint32_t delay)
{
	uint32_t dim = sizeof(aircon_menu_swing) / sizeof(aircon_menu_swing[0]);
	uint32_t i;
	for(i = 0; i < dim; i++) {
		if(lv_img_get_src(ui_Image_Aircon_Menu_Swing) == aircon_menu_swing[i]) {
			i++;
			break;
		}
	}
	if(i == dim) i = 0;
	if(i > dim / 2) {
		lv_anim_t * a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Swing, &aircon_menu_swing[dim / 2], i - dim / 2, 60, true);
		a->act_time = -delay;
	} else {
		lv_anim_t * a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Swing, &aircon_menu_swing[i], dim / 2 - i, 60, false);
		a->act_time = -delay;
	}
}

void ui_home_aircon_set_fan_speed(uint32_t frame_time)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(ui_Image_Aircon_Menu_Fan, aircon_menu_fan, sizeof(aircon_menu_fan) / sizeof(aircon_menu_fan[0]), frame_time, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void ui_home_menu_btn_click_event_cb(lv_event_t * e)
{
	lv_coord_t x = lv_obj_get_x(ui_Panel_Menu);

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_var(&a, ui_Panel_Menu);
	if(x < 0) lv_anim_set_values(&a, -SETTINGS_MENU_WIDTH,  0);
	else lv_anim_set_values(&a, 0, -SETTINGS_MENU_WIDTH);
	lv_anim_set_exec_cb(&a, lv_obj_set_x);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME / 2);
	lv_anim_set_path_cb(&a, lv_anim_path_ease_out);
	lv_anim_start(&a);
}

static void ui_oven_home_anim_door(bool open, uint32_t delay)
{
	lv_anim_t * a;
	if(open) {
		/*Fade the first image to the background*/
		lv_obj_fade_in(ui_Image_Oven_Anim_Menu, FADE_ANIM_TIME, delay);

		a = _ui_start_img_seq_anim(ui_Image_Oven_Anim_Menu, oven_menu_door, sizeof(oven_menu_door) / sizeof(oven_menu_door[0]), LV_DISP_DEF_REFR_PERIOD, false);
		a->act_time -= delay + FADE_ANIM_TIME;
	} else {
		a = _ui_start_img_seq_anim(ui_Image_Oven_Anim_Menu, oven_menu_door, sizeof(oven_menu_door) / sizeof(oven_menu_door[0]), LV_DISP_DEF_REFR_PERIOD, true);
		a->act_time -= delay;

		lv_obj_fade_out(ui_Image_Oven_Anim_Menu, FADE_ANIM_TIME, delay + sizeof(oven_menu_door) / sizeof(oven_menu_door[0]) * LV_DISP_DEF_REFR_PERIOD);
	}
}


