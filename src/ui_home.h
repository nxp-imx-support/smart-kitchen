/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_home.h
 *
 */

#ifndef UI_HOME_H
#define UI_HOME_H

#ifdef __cplusplus
extern "C" {
#endif

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
 * GLOBAL PROTOTYPES
 ***********************/
void ui_home_init(void);
void ui_home_anim_in(uint32_t delay);
uint32_t ui_home_anim_out(void);
void ui_home_aircon_swing_anim_close(void);
void ui_home_aircon_swing_anim_start(uint32_t delay);
void ui_home_aircon_swing_anim_center(uint32_t delay);
void ui_home_aircon_set_fan_speed(uint32_t frame_time);


/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_HOME_H*/
