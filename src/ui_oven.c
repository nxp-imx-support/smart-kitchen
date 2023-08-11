/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_oven.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui_oven.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void ui_oven_mode_btn_click_event_cb(lv_event_t * e);
static void ui_oven_mode_scroll_end_event_cb(lv_event_t * e);
static void oven_wheel_scroll_event_cb(lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/
LV_IMG_DECLARE(oven_fan_light_1);
LV_IMG_DECLARE(oven_fan_light_2);
LV_IMG_DECLARE(oven_fan_light_3);
LV_IMG_DECLARE(oven_fan_light_4);
LV_IMG_DECLARE(oven_door_01);
LV_IMG_DECLARE(oven_door_02);
LV_IMG_DECLARE(oven_door_03);
LV_IMG_DECLARE(oven_door_04);
LV_IMG_DECLARE(oven_door_05);
LV_IMG_DECLARE(oven_door_06);
LV_IMG_DECLARE(oven_door_07);
LV_IMG_DECLARE(oven_door_08);
LV_IMG_DECLARE(screen_oven_0002);
LV_IMG_DECLARE(screen_oven_0003);
LV_IMG_DECLARE(screen_oven_0004);
LV_IMG_DECLARE(screen_oven_0005);
LV_IMG_DECLARE(screen_oven_0006);
LV_IMG_DECLARE(screen_oven_0007);
LV_IMG_DECLARE(screen_oven_0008);
LV_IMG_DECLARE(screen_oven_0009);

static const lv_img_dsc_t * oven_fan[] = {&oven_fan_light_1, &oven_fan_light_2, &oven_fan_light_3,
		&oven_fan_light_4};


static const lv_img_dsc_t * oven_door[] = {&oven_door_01, &oven_door_02, &oven_door_03, &oven_door_04,
										   &oven_door_05, &oven_door_06, &oven_door_07, &oven_door_08};

static const lv_img_dsc_t * screen_oven[] = {&ui_img_menu_bg_png, &screen_oven_0002, &screen_oven_0003,
		&screen_oven_0004, &screen_oven_0005, &screen_oven_0006,
		&screen_oven_0007, &screen_oven_0008, &screen_oven_0009};


/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_oven_init(void)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(ui_Image_Oven_Fan, oven_fan, sizeof(oven_fan) / sizeof(oven_fan[0]), LV_DISP_DEF_REFR_PERIOD * 3, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;

	/*Oven modes*/
	lv_obj_set_flex_flow(ui_Group_Oven_Mode1, LV_FLEX_FLOW_ROW);
	lv_obj_set_flex_align(ui_Group_Oven_Mode1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END);
	lv_obj_set_scroll_snap_x(ui_Group_Oven_Mode1, LV_SCROLL_SNAP_CENTER);
	lv_obj_add_event_cb(ui_Group_Oven_Mode1, ui_oven_mode_scroll_end_event_cb, LV_EVENT_SCROLL_END, NULL);

	static int32_t d_up = 1;
	static int32_t d_down = -1;
	lv_obj_add_event_cb(ui_Image_Oven_Mode_Left, ui_oven_mode_btn_click_event_cb, LV_EVENT_CLICKED, &d_down);
	lv_obj_add_event_cb(ui_Image_Oven_Mode_Right, ui_oven_mode_btn_click_event_cb, LV_EVENT_CLICKED, &d_up);

	/*Oven target temperature*/
	lv_obj_set_flex_flow(ui_Group_Target_Temp, LV_FLEX_FLOW_COLUMN);
	lv_obj_set_flex_align(ui_Group_Target_Temp, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END);
	lv_obj_set_style_pad_row(ui_Group_Target_Temp, 20, 0);
	lv_obj_set_style_text_font(ui_Group_Target_Temp, &lv_font_montserrat_20, 0);
	lv_obj_set_style_text_color(ui_Group_Target_Temp, lv_color_hex(0xff9110), 0);
	lv_obj_add_flag(ui_Image_Wheel_Bg, LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);
	lv_obj_add_flag(ui_Label_Target_Temp, LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);

	lv_obj_add_event_cb(ui_Group_Target_Temp, oven_wheel_scroll_event_cb, LV_EVENT_SCROLL, ui_Label_Target_Temp_Numer);
	lv_obj_set_scroll_snap_y(ui_Group_Target_Temp, LV_SCROLL_SNAP_CENTER);

	uint32_t i;
	for(i = 0; i < 20; i++) {
		lv_obj_t * label = lv_label_create(ui_Group_Target_Temp);
		lv_label_set_text_fmt(label, "%d", 150 + i * 5);
		lv_obj_set_width(label, 80);
	}

	lv_obj_move_foreground(ui_Image_Wheel_Bg);
	lv_obj_move_foreground(ui_Label_Target_Temp);

	lv_obj_update_layout(ui_Group_Target_Temp);
	lv_obj_update_snap(ui_Group_Target_Temp, LV_ANIM_OFF);
	lv_event_send(ui_Group_Target_Temp, LV_EVENT_SCROLL, NULL);

	/*Oven timer*/
	lv_obj_set_flex_flow(ui_Group_Timer, LV_FLEX_FLOW_COLUMN);
	lv_obj_set_flex_align(ui_Group_Timer, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
	lv_obj_set_style_pad_row(ui_Group_Timer, 20, 0);
	lv_obj_set_style_text_font(ui_Group_Timer, &lv_font_montserrat_20, 0);
	lv_obj_set_style_text_color(ui_Group_Timer, lv_color_hex(0xff9110), 0);
	lv_obj_add_flag(ui_Image_Wheel_Bg1, LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);
	lv_obj_add_flag(ui_Label_Timer, LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);

	lv_obj_add_event_cb(ui_Group_Timer, oven_wheel_scroll_event_cb, LV_EVENT_SCROLL, ui_Label_Timer_Number);
	lv_obj_set_scroll_snap_y(ui_Group_Timer, LV_SCROLL_SNAP_CENTER);
	for(i = 0; i < 17; i++) {
		lv_obj_t * label = lv_label_create(ui_Group_Timer);
		lv_label_set_text_fmt(label, "%d", i * 5 + 10);
		lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_RIGHT, 0);
		lv_obj_set_width(label, 80);
	}

	lv_obj_move_foreground(ui_Image_Wheel_Bg1);
	lv_obj_move_foreground(ui_Label_Timer);

	lv_obj_update_layout(ui_Group_Timer);
	lv_obj_update_snap(ui_Group_Timer, LV_ANIM_OFF);
	lv_event_send(ui_Group_Timer, LV_EVENT_SCROLL, NULL);

	if(ui_state_oven_door) {
		ui_oven_anim_door(ui_state_oven_door, 0);
	} else {
		lv_obj_fade_out(ui_Image_Oven_Anim, 0, 0);
	}
}

void ui_oven_anim_in(uint32_t delay)
{
	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Oven_Bg, screen_oven, sizeof(screen_oven) / sizeof(screen_oven[0]), 60, false);
	ap->act_time = -delay;

	delay += SCREEN_TRANSITION_TIME;

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 0, 100);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Oven_Content1);
	lv_anim_set_delay(&a, delay);
	lv_anim_start(&a);

	if(ui_state_oven_on) {
		lv_obj_fade_in(ui_Image_Oven_Light, FADE_ANIM_TIME, delay);
		if(ui_state_oven_fan_on) lv_obj_fade_in(ui_Image_Oven_Fan, FADE_ANIM_TIME, delay + FADE_ANIM_TIME);
	}

	if(ui_state_oven_door) {
		ui_oven_anim_door(true, delay);
	}

}

uint32_t ui_oven_anim_out(void)
{
	uint32_t delay = 0;

	lv_obj_fade_out(ui_Image_Oven_Fan, FADE_ANIM_TIME, delay);
	lv_obj_fade_out(ui_Image_Oven_Light, FADE_ANIM_TIME, delay + FADE_ANIM_TIME);

	if(ui_state_oven_door) {
		ui_oven_anim_door(false, delay);
	}

	lv_anim_t a;
	lv_anim_init(&a);
	lv_anim_set_values(&a, 100, 0);
	lv_anim_set_exec_cb(&a, _ui_max_height_anim_cb);
	lv_anim_set_time(&a, DARK_PANEL_ANIM_TIME);
	lv_anim_set_var(&a, ui_Group_Oven_Content1);
	lv_anim_start(&a);

	delay += FADE_ANIM_TIME + DARK_PANEL_ANIM_TIME;
	lv_anim_t * ap;
	ap = _ui_start_img_seq_anim(ui_Image_Oven_Bg, screen_oven, sizeof(screen_oven) / sizeof(screen_oven[0]), 60, true);
	ap->act_time = -delay;

	return delay + SCREEN_TRANSITION_TIME;
}

void ui_oven_mode_update(bool scroll_to)
{
	lv_obj_t * obj = lv_obj_get_child(ui_Group_Oven_Mode1, ui_state_oven_mode);
	if(scroll_to) {
		lv_obj_scroll_to_view(obj , LV_ANIM_ON);
	}

	lv_obj_t * child = lv_obj_get_child(obj, 0);
	lv_img_set_src(ui_image_Oven_Mode_1, lv_img_get_src(child));
	child = lv_obj_get_child(obj, 1);
	lv_label_set_text(ui_Label_Mode2, lv_label_get_text(child));

	if(ui_state_oven_mode == 0 || ui_state_oven_mode == 2 || ui_state_oven_mode == 3 || ui_state_oven_mode == 5 || ui_state_oven_mode == 8) {
		ui_state_oven_fan_on = true;
		if(lv_obj_get_style_opa(ui_Image_Oven_Menu_Fan, 0) == 0) {
			lv_obj_fade_in(ui_Image_Oven_Menu_Fan, FADE_ANIM_TIME, 0);
		}

		if(lv_obj_get_style_opa(ui_Image_Oven_Fan, 0) == 0) {
			lv_obj_fade_in(ui_Image_Oven_Fan, FADE_ANIM_TIME, 0);
		}
	} else {
		ui_state_oven_fan_on = false;
		lv_obj_fade_out(ui_Image_Oven_Menu_Fan, FADE_ANIM_TIME, 0);
		lv_obj_fade_out(ui_Image_Oven_Fan, FADE_ANIM_TIME, 0);
	}

}

/**********************
 *   STATIC FUNCTIONS
 **********************/

void ui_oven_anim_door(bool open, uint32_t delay)
{
	lv_anim_t * a;
	if(open) {
		/*Fade the first image to the background*/
		lv_obj_fade_in(ui_Image_Oven_Anim, FADE_ANIM_TIME, delay);

		a = _ui_start_img_seq_anim(ui_Image_Oven_Anim, oven_door, sizeof(oven_door) / sizeof(oven_door[0]), LV_DISP_DEF_REFR_PERIOD, false);
		a->act_time -= delay + FADE_ANIM_TIME;
	} else {
		a = _ui_start_img_seq_anim(ui_Image_Oven_Anim, oven_door, sizeof(oven_door) / sizeof(oven_door[0]), LV_DISP_DEF_REFR_PERIOD, true);
		a->act_time -= delay;

		lv_obj_fade_out(ui_Image_Oven_Anim, FADE_ANIM_TIME, delay + sizeof(oven_door) / sizeof(oven_door[0]) * LV_DISP_DEF_REFR_PERIOD);
	}
}


static void ui_oven_mode_btn_click_event_cb(lv_event_t * e)
{
	lv_obj_t * obj = lv_event_get_target(e);
	lv_obj_t * parent = lv_obj_get_parent(obj);

	int32_t * d = lv_event_get_user_data(e);
	lv_coord_t sx = lv_obj_get_scroll_x(parent);
	lv_coord_t w = lv_obj_get_width(parent);
	int32_t id = (sx + w / 2) / w;
	id += *d;
	if(id < 0) return;
	if(id > 8) return;

	ui_oven_set_mode(id);
}

static void ui_oven_mode_scroll_end_event_cb(lv_event_t * e)
{
	lv_indev_t * indev = lv_indev_get_act();
	if(indev && indev->proc.state == LV_INDEV_STATE_PRESSED) return;

	lv_obj_t * obj = lv_event_get_target(e);
	lv_coord_t sx = lv_obj_get_scroll_x(obj);

	lv_coord_t w = lv_obj_get_width(obj);
	int32_t id = (sx + w / 2) / w;
	ui_state_oven_mode = id;
	ui_oven_mode_update(false);
}

static void oven_wheel_scroll_event_cb(lv_event_t * e)
{
	lv_obj_t * cont = lv_event_get_target(e);

	lv_area_t cont_a;
	lv_obj_get_coords(cont, &cont_a);
	lv_coord_t cont_y_center = cont_a.y1 + lv_area_get_height(&cont_a) / 2;

	int32_t inv = lv_obj_get_style_flex_track_place(cont, 0) == LV_FLEX_ALIGN_START ? 1 : -1;
	lv_coord_t y_min = LV_COORD_MAX;
	lv_obj_t * y_min_obj = NULL;
	lv_coord_t r = lv_obj_get_height(cont) * 55 / 100;
	uint32_t i;
	uint32_t child_cnt = lv_obj_get_child_cnt(cont);
	for(i = 0; i < child_cnt; i++) {
		lv_obj_t * child = lv_obj_get_child(cont, i);
		if(lv_obj_has_flag(child, LV_OBJ_FLAG_FLOATING)) continue;
		lv_area_t child_a;
		lv_obj_get_coords(child, &child_a);

		lv_coord_t child_y_center = child_a.y1 + lv_area_get_height(&child_a) / 2;
		lv_coord_t diff_y = child_y_center - cont_y_center;
		diff_y = LV_ABS(diff_y);
		if(diff_y < y_min) {
			y_min = diff_y;
			y_min_obj = child;
		}

		/*Get the x of diff_y on a circle.*/
		lv_coord_t x;
		/*If diff_y is out of the circle use the last point of the circle (the radius)*/
		if(diff_y >= r) {
			x = r;
		}
		else {
			/*Use Pythagoras theorem to get x from radius and y*/
			uint32_t x_sqr = r * r - diff_y * diff_y;
			lv_sqrt_res_t res;
			lv_sqrt(x_sqr, &res, 0x8000);   /*Use lvgl's built in sqrt root function*/
			x = r - res.i;
		}

		/*Translate the item by the calculated X coordinate*/
		lv_obj_set_style_translate_x(child, inv * x, 0);
	}

	lv_obj_t * large_label = lv_event_get_user_data(e);
	lv_label_set_text(large_label, lv_label_get_text(y_min_obj));
}

