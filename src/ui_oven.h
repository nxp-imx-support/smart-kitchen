/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_oven.h
 *
 */

#ifndef UI_OVEN_H
#define UI_OVEN_H

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
 **********************/
void ui_oven_init(void);
void ui_oven_anim_in(uint32_t delay);
uint32_t ui_oven_anim_out(void);
void ui_oven_mode_update(bool scroll_to);
void ui_oven_anim_door(bool open, uint32_t delay);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_OVEN_H*/
