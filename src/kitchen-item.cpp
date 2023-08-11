/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include "kitchen-item.h"

int KitchenItem::getIndex(unsigned short id)
{
    for(int i=0; i<number_of_functions; i++)
    {
        if(command_map[i] == id) return i;
    }
    return -1;
}

void KitchenItem::execute(int command_id)
{
    int index;

    index = getIndex(command_id);
	if(index>=0) functions[index]();
}

void hoodEnter()	{ui_screen_load(UI_SCREEN_HOOD);}
void hoodExit()		{ui_screen_load(UI_SCREEN_HOME);}
void hoodFanOff()	{ui_hood_set_fan_speed(0);}
void hoodFanOn()	{ui_hood_set_fan_speed(1);}
void hoodFanHigh()	{ui_hood_set_fan_speed(2);}
void hoodLightOff()	{ui_hood_set_light(false);}
void hoodLightOn()	{ui_hood_set_light(true);}

Hood::Hood()
{
    number_of_functions = 8;
    command_map = new int[number_of_functions];
	functions = new function_ptr_t[number_of_functions];    

	functions[0] = &hoodEnter;
    functions[1] = &hoodExit;
	functions[2] = &hoodFanOff;
    functions[3] = &hoodFanOn;
    functions[4] = &hoodFanOn;
    functions[5] = &hoodFanHigh;
    functions[6] = &hoodLightOff;
    functions[7] = &hoodLightOn;

    command_map[0] = enter_cmd;
    command_map[1] = exit_cmd;
    command_map[2] = fan_off_cmd;
    command_map[3] = fan_on_cmd;	
    command_map[4] = fan_low_cmd;
    command_map[5] = fan_high_cmd;
    command_map[6] = light_off_cmd;
    command_map[7] = light_on_cmd;
};

void airconEnter()			{ui_screen_load(UI_SCREEN_AIRCON);}
void airconExit()			{ui_screen_load(UI_SCREEN_HOME);}
void airconDryMode()		{ui_aircon_set_mode(UI_AIRCON_MODE_DRY);}
void airconCoolMode()		{ui_aircon_set_mode(UI_AIRCON_MODE_COOL);}
void airconFanMode()		{ui_aircon_set_mode(UI_AIRCON_MODE_FAN);}
void airconSwingOff()		{ui_aircon_enable_swing(false);}
void airconSwingOn()		{ui_aircon_enable_swing(true);ui_aircon_swing_anim_start(0);}
void airconFanLow()			{ui_aircon_enable_fan_high(false);}
void airconFanHigh()		{ui_aircon_enable_fan_high(true);}

Airconditioner::Airconditioner()
{
	number_of_functions = 9;
    command_map = new int[number_of_functions];
	functions = new function_ptr_t[number_of_functions];    

	functions[0] = &airconEnter;
    functions[1] = &airconExit;
    functions[2] = &airconDryMode;
    functions[3] = &airconCoolMode;
    functions[4] = &airconFanMode;
    functions[5] = &airconSwingOff;
    functions[6] = &airconSwingOn;
    functions[7] = &airconFanLow;
    functions[8] = &airconFanHigh;
	
    command_map[0] = enter_cmd;
    command_map[1] = exit_cmd;
	command_map[2] = dry_mode_cmd;
	command_map[3] = cool_mode_cmd;
	command_map[4] = fan_mode_cmd;
	command_map[5] = swing_off_cmd;
	command_map[6] = swing_on_cmd;
	command_map[7] = fan_low_cmd;
	command_map[8] = fan_high_cmd;
}

void ovenZoomIn()		{ui_screen_load(UI_SCREEN_OVEN);}
void ovenZoomOut()		{ui_screen_load(UI_SCREEN_HOME);}
void ovenCloseDoor()	{ui_oven_anim_door(false, 0);}
void ovenOpenDoor()		{ui_oven_anim_door(true, 0);}


Oven::Oven()
{
	number_of_functions = 4;
    command_map = new int[number_of_functions];
	functions = new function_ptr_t[number_of_functions];    

	functions[0] = &ovenZoomIn;
    functions[1] = &ovenZoomOut;
	functions[2] = &ovenCloseDoor;
    functions[3] = &ovenOpenDoor;

    command_map[0] = enter_cmd;
    command_map[1] = exit_cmd;
    command_map[2] = close_door_cmd;
    command_map[3] = open_door_cmd;
	
}

