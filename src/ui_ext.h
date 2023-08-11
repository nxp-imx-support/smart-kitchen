/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_ext.h
 *
 */

#ifndef UI_EXT_H
#define UI_EXT_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "generated/ui.h"

/*********************
 *      DEFINES
 *********************/
#define DARK_PANEL_ANIM_TIME	500
#define FADE_ANIM_TIME			300
#define SCREEN_TRANSITION_TIME	600

/**********************
 *      TYPEDEFS
 **********************/
typedef enum {
	UI_SCREEN_HOME,
	UI_SCREEN_OVEN,
	UI_SCREEN_HOOD,
	UI_SCREEN_AIRCON,
	_UI_SCREEN_LAST,
}ui_screen_t;

typedef enum {
	UI_AIRCON_MODE_FAN,
	UI_AIRCON_MODE_COOL,
	UI_AIRCON_MODE_DRY,
	_UI_AORCON_MODE_LAST,
}ui_aircon_mode_t;


/**********************
 * GLOBAL PROTOTYPES
 **********************/

void ui_ext_init(void);

void ui_screen_load(ui_screen_t screen);

void ui_date_set(const char * date_text);

void ui_time_set(uint32_t hours, uint32_t mins);

void ui_weather_set(const char * deg, const char * title, const char * info, const void * icon);


void ui_aircon_set_mode(ui_aircon_mode_t mode);

void ui_aircon_set_temperature(float temp);

void ui_aircon_enable_swing(bool en);

void ui_aircon_enable_fan_high(bool en);

void ui_aircon_set_timer(uint32_t hours, uint32_t mins);


void ui_oven_set_start(bool sterted);

void ui_oven_set_target_temperature(uint32_t temp);

void ui_oven_set_timer(uint32_t mins);

void ui_oven_set_time_left(int32_t mins);

void ui_oven_set_current_temperature(int32_t temp);

void ui_oven_set_status(const char * status);

void ui_oven_set_mode(uint32_t idx);


void ui_hood_set_light(bool on);

void ui_hood_set_fan_speed(uint32_t lvl);


/**
 * Called when the aircon timer increment or decrement button is called
 * @param d 	1 or -1
 */
void ui_aircon_timer_increment(int32_t d);

/**
 * Called when the aircon temperature increment or decrement button is called
 * @param d 	1 or -1
 */
void ui_aircon_temperature_increment(int32_t d);


void _ui_max_height_anim_cb(void * var, int32_t v);
void _ui_max_width_anim_cb(void * var, int32_t v);
lv_anim_t * _ui_start_img_seq_anim(lv_obj_t * obj, const lv_img_dsc_t * imgs[], uint32_t img_cnt, uint32_t period_time, bool backward);

void _ui_smog1_anim(lv_obj_t * obj, bool fast);
void _ui_smog2_anim(lv_obj_t * obj, bool fast);


/**********************
 * GLOBAL VARIABLES
 **********************/

extern bool ui_state_oven_on;
extern bool ui_state_oven_door;
extern bool ui_state_oven_fan_on;
extern uint32_t ui_state_oven_mode;
extern bool ui_state_aircon_swing_on;
extern bool ui_state_hood_light_on;
extern uint32_t ui_state_hood_fan_speed;
extern ui_aircon_mode_t ui_state_aircon_mode;

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_EXT_H*/
