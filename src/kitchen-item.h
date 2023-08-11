/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef KITCHEN_ITEM_H
#define KITCHEN_ITEM_H

#include "stdio.h"
#include "utilities.h"
#include "ui_ext.h"
#include "ui_aircon.h"
#include "ui_hood.h"
#include "ui_oven.h"

typedef void (*function_ptr_t)();

enum vitCommands
{
    null_cmd,
    enter_cmd,
    exit_cmd,
    run_demo_cmd,
    stop_demo_cmd,
    fan_off_cmd,
    fan_on_cmd,
    fan_low_cmd,
    fan_high_cmd,
    light_off_cmd,
    light_on_cmd,
    dry_mode_cmd,
    cool_mode_cmd,
    fan_mode_cmd,
    swing_off_cmd,
    swing_on_cmd,
    close_door_cmd,
    open_door_cmd
};

class KitchenItem
{
	public:
		void execute(int command_id);
		virtual ~KitchenItem(){};
	protected:
        int number_of_functions;
        int* command_map;
        int getIndex(unsigned short id);
		function_ptr_t* functions;
};


class Hood : public KitchenItem
{
	public:
		Hood();
		virtual ~Hood(){};
};


class Oven : public KitchenItem
{
	public:
		Oven();
		virtual ~Oven(){};
};


class Airconditioner : public KitchenItem
{
	public:
		Airconditioner();
		virtual ~Airconditioner(){};
};

#endif /*KITCHEN_ITEM_H*/

