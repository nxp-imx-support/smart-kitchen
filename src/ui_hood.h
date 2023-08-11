/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

/**
 * @file ui_hood.h
 *
 */

#ifndef UI_HOOD_H
#define UI_HOOD_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void ui_hood_init(void);
void ui_hood_anim_in(uint32_t delay);
uint32_t ui_hood_anim_out(void);


/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_HOOD_H*/
