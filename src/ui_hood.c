/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_hood.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_ext.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void ui_hood_switch_event_cb(lv_event_t * e);
static void ui_hood_slider_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/
LV_IMG_DECLARE(screen_hood_0002);
LV_IMG_DECLARE(screen_hood_0003);
LV_IMG_DECLARE(screen_hood_0004);
LV_IMG_DECLARE(screen_hood_0005);
LV_IMG_DECLARE(screen_hood_0006);
LV_IMG_DECLARE(screen_hood_0007);
LV_IMG_DECLARE(screen_hood_0008);
LV_IMG_DECLARE(screen_hood_0009);

static const lv_img_dsc_t * screen_hood[] = {&ui_img_menu_bg_png, &screen_hood_0002, &screen_hood_0003,
		&screen_hood_0004, &screen_hood_0005, &screen_hood_0006,
		&screen_hood_0007, &screen_hood_0008, &screen_hood_0009};

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_hood_init(void)
{
	lv_obj_add_event_cb(ui_Switch_Hood_Light, ui_hood_switch_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
	lv_obj_add_event_cb(ui_Slider_Hood_Fan, ui_hood_slider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

}

void ui_hood_anim_in(uint32_t delay)
{
	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Hood_Bg, screen_hood, sizeof(screen_hood) / sizeof(screen_hood[0]), 60, false);
	ap->act_time = -delay;

	delay += SCREEN_TRANSITION_TIME;

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 0, 40);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Hood_Content2);
	lv_anim_set_delay(&a, delay);
	lv_anim_start(&a);
	if(ui_state_hood_light_on) {
		lv_obj_fade_in(ui_Image_Hood_Light, FADE_ANIM_TIME, delay);
	}

	if(ui_state_hood_fan_speed == 0 || ui_state_hood_fan_speed == 1) {
		lv_obj_fade_in(ui_Group_Smog1, FADE_ANIM_TIME, delay);
		lv_obj_fade_in(ui_Group_Smog2, FADE_ANIM_TIME, delay);
	}
}

uint32_t ui_hood_anim_out(void)
{
	uint32_t delay = 0;
	lv_obj_fade_out(ui_Image_Hood_Light, FADE_ANIM_TIME, delay);
	lv_obj_fade_out(ui_Group_Smog1, FADE_ANIM_TIME, delay);
	lv_obj_fade_out(ui_Group_Smog2, FADE_ANIM_TIME, delay);

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 100, 0);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Hood_Content2);
	lv_anim_start(&a);

	delay += DARK_PANEL_ANIM_TIME + FADE_ANIM_TIME;

	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Hood_Bg, screen_hood, sizeof(screen_hood) / sizeof(screen_hood[0]), 60, true);
	ap->act_time = -delay;

	return  delay + SCREEN_TRANSITION_TIME;
}


/**********************
 *   STATIC FUNCTIONS
 **********************/
static void ui_hood_switch_event_cb(lv_event_t * e)
{
	lv_obj_t * obj = lv_event_get_target(e);
	if(lv_obj_has_state(obj, LV_STATE_CHECKED)) {
		ui_state_hood_light_on = true;
	} else {
		ui_state_hood_light_on = false;
	}
	ui_hood_set_light(ui_state_hood_light_on);
}

static void ui_hood_slider_event_cb(lv_event_t * e)
{
	ui_state_hood_fan_speed = lv_slider_get_value(ui_Slider_Hood_Fan);

	ui_hood_set_fan_speed(ui_state_hood_fan_speed);
}


