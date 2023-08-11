/*
* Copyright 2023 NXP
* SPDX-License-Identifier: MIT
*/

// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: nxp_smart_kitchen

#ifndef _NXP_SMART_KITCHEN_UI_H
#define _NXP_SMART_KITCHEN_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_Panel_Settings;
extern lv_obj_t * ui_Panel_Menu;
extern lv_obj_t * ui_Image_Menu_Bg;
extern lv_obj_t * ui_Group_Aircon_Content;
extern lv_obj_t * ui_Aircon_Line;
extern lv_obj_t * ui_Image_Aircon_Text;
extern lv_obj_t * ui_Label_Aircon_Number;
extern lv_obj_t * ui_Label_Aircon_Number1;
extern lv_obj_t * ui_Label_Celsius;
extern lv_obj_t * ui_Line1;
extern lv_obj_t * ui_Group_Aircon_Mode;
extern lv_obj_t * ui_Image_Cool;
extern lv_obj_t * ui_Label_Aircon_Mode_Text;
extern lv_obj_t * ui_Label_Mode;
extern lv_obj_t * ui_Group_Aircon_Fan;
extern lv_obj_t * ui_Image_Fsn;
extern lv_obj_t * ui_Label_Aircon_Fan_Text;
extern lv_obj_t * ui_Label_Celsius1;
extern lv_obj_t * ui_Group_Hood_Content;
extern lv_obj_t * ui_Hood_Line;
extern lv_obj_t * ui_Image_Hood_Text;
extern lv_obj_t * ui_Group_Hood_Light;
extern lv_obj_t * ui_Image_Lght;
extern lv_obj_t * ui_Line3;
extern lv_obj_t * ui_Label_Hood_Light_Text;
extern lv_obj_t * ui_Label_Lght;
extern lv_obj_t * ui_Group_Hood_Fan;
extern lv_obj_t * ui_Image_Fan;
extern lv_obj_t * ui_Line2;
extern lv_obj_t * ui_Label_Hood_Fan_Text;
extern lv_obj_t * ui_Label_Fan;
extern lv_obj_t * ui_Image_Hood;
extern lv_obj_t * ui_Image_Hood_Menu_Light;
extern lv_obj_t * ui_Group_Nxp_Logo;
extern lv_obj_t * ui_Label_Smart_Kitchen_Demo;
extern lv_obj_t * ui_Image_NXP_Logo;
extern lv_obj_t * ui_Group_Oven_Content;
extern lv_obj_t * ui_Oven_Line;
extern lv_obj_t * ui_Image_Oven_Text;
extern lv_obj_t * ui_Group_Temp_Time;
extern lv_obj_t * ui_Group_Temp;
extern lv_obj_t * ui_Label_Temp_Number;
extern lv_obj_t * ui_Label_Temp_Number1;
extern lv_obj_t * ui_Label_Celsius2;
extern lv_obj_t * ui_Group_Time1;
extern lv_obj_t * ui_Label_Time_Left;
extern lv_obj_t * ui_Label_Time_Number;
extern lv_obj_t * ui_Bar_Time_Left;
extern lv_obj_t * ui_Group_Temp_Time1;
extern lv_obj_t * ui_Group_Temp1;
extern lv_obj_t * ui_Label_Status;
extern lv_obj_t * ui_Label_Status_Text;
extern lv_obj_t * ui_Group_Oven_Mode;
extern lv_obj_t * ui_Label_Mode1;
extern lv_obj_t * ui_Label_Mode2;
extern lv_obj_t * ui_image_Oven_Mode_1;
extern lv_obj_t * ui_Group_Info;
extern lv_obj_t * ui_Group_Time;
extern lv_obj_t * ui_Label_Date;
extern lv_obj_t * ui_Label_Time;
extern lv_obj_t * ui_Group_Weather;
extern lv_obj_t * ui_Weather;
extern lv_obj_t * ui_Label_Weather_Title;
extern lv_obj_t * ui_Label_Weather_Info;
extern lv_obj_t * ui_Cloud_Group;
extern lv_obj_t * ui_Image_Weather_Icon;
extern lv_obj_t * ui_Label_Weather_Degree;
extern lv_obj_t * ui_Group_Mic;
extern lv_obj_t * ui_Label_Mic_Text;
extern lv_obj_t * ui_Label_Talk;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_Image_Mic;
extern lv_obj_t * ui_Group_Voice;
extern lv_obj_t * ui_Label_Voince;
extern lv_obj_t * ui_Image_Voice_Bg_3;
extern lv_obj_t * ui_Image_Voice_Bg_2;
extern lv_obj_t * ui_Image_Voice_Bg_1;
extern lv_obj_t * ui_Image_Mic_Voive;
extern lv_obj_t * ui_BTN_Menu;
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Image_Aircon;
extern lv_obj_t * ui_Image_Aircon_Menu_Swing;
extern lv_obj_t * ui_Image_Oven_Menu;
extern lv_obj_t * ui_Image_Oven_Light_Menu;
extern lv_obj_t * ui_Image_Oven_Menu_Fan;
extern lv_obj_t * ui_Image_Aircon_Menu_Fan;
extern lv_obj_t * ui_Image_Oven_Anim_Menu;
extern lv_obj_t * ui_Image_Aircon_Menu_Cool;
extern lv_obj_t * ui_Group_Smog_Menu1;
extern lv_obj_t * ui_Image_Smog1_Menu;
extern lv_obj_t * ui_Image_Smog2_Menu;
extern lv_obj_t * ui_Group_Smog_Menu2;
extern lv_obj_t * ui_Image_Smog1_Menu1;
extern lv_obj_t * ui_Image_Smog2_Menu1;
extern lv_obj_t * ui_Aircon;
extern lv_obj_t * ui_Panel_Aircon;
extern lv_obj_t * ui_Image_Aircon_Bg;
extern lv_obj_t * ui_Group_Aircon_Content2;
extern lv_obj_t * ui_Aircon_Line2;
extern lv_obj_t * ui_Group_Set_Temp;
extern lv_obj_t * ui_Label_set_Temp;
extern lv_obj_t * ui_Label_Aircon_Number2;
extern lv_obj_t * ui_Label_Aircon_Number3;
extern lv_obj_t * ui_Label_Celsius3;
extern lv_obj_t * ui_BTN_Temp_Up;
extern lv_obj_t * ui_Image_Up;
extern lv_obj_t * ui_BTN_Temp_Down;
extern lv_obj_t * ui_Image_Down;
extern lv_obj_t * ui_Group_Set_Timer;
extern lv_obj_t * ui_Label_Set_Timer;
extern lv_obj_t * ui_Label_Aircon_Number5;
extern lv_obj_t * ui_BTN_Temp_Up2;
extern lv_obj_t * ui_Image_Up1;
extern lv_obj_t * ui_BTN_Temp_Down2;
extern lv_obj_t * ui_Image_Down1;
extern lv_obj_t * ui_Group_Select_Mode;
extern lv_obj_t * ui_Label_Select_Mode;
extern lv_obj_t * ui_Group_Aircon_Mode1;
extern lv_obj_t * ui_Image_Cool1;
extern lv_obj_t * ui_Label_Aricon_Comp_Text;
extern lv_obj_t * ui_Label_Comp;
extern lv_obj_t * ui_Group_Aircon_Fan1;
extern lv_obj_t * ui_Image_Fsn1;
extern lv_obj_t * ui_Label_Aircon_Fan_Text1;
extern lv_obj_t * ui_Label_Celsius4;
extern lv_obj_t * ui_Line4;
extern lv_obj_t * ui_Roller_Aircon_Mode;
extern lv_obj_t * ui_Group_Switch;
extern lv_obj_t * ui_Label_Swing;
extern lv_obj_t * ui_Switch_Swing;
extern lv_obj_t * ui_Line5;
extern lv_obj_t * ui_Label_Fan_High;
extern lv_obj_t * ui_Switch_Fan_High;
extern lv_obj_t * ui_BTN_Menu1;
extern lv_obj_t * ui_BTN_Back1;
extern lv_obj_t * ui_Label_BACK1;
extern lv_obj_t * ui_Title_Bg1;
extern lv_obj_t * ui_Label_Title_Aircon;
extern lv_obj_t * ui_Image_Hood_Swing;
extern lv_obj_t * ui_Image_Aircon_Fan;
extern lv_obj_t * ui_Image_Aicon_Cool;
extern lv_obj_t * ui_Hood;
extern lv_obj_t * ui_Image_Hood_Bg;
extern lv_obj_t * ui_Panel_Hood;
extern lv_obj_t * ui_Title_Bg2;
extern lv_obj_t * ui_Label_Hood;
extern lv_obj_t * ui_Image_Hood_Light;
extern lv_obj_t * ui_Group_Smog1;
extern lv_obj_t * ui_Image_Smog11;
extern lv_obj_t * ui_Image_Smog12;
extern lv_obj_t * ui_Group_Smog2;
extern lv_obj_t * ui_Image_Smog21;
extern lv_obj_t * ui_Image_Smog22;
extern lv_obj_t * ui_Group_Hood_Content2;
extern lv_obj_t * ui_Hood_Line1;
extern lv_obj_t * ui_Group_Hood;
extern lv_obj_t * ui_Label_Light;
extern lv_obj_t * ui_Switch_Hood_Light;
extern lv_obj_t * ui_Line7;
extern lv_obj_t * ui_Label_Fan1;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_Slider_Hood_Fan;
extern lv_obj_t * ui_BTN_Menu2;
extern lv_obj_t * ui_BTN_Back2;
extern lv_obj_t * ui_Label_BACK2;
extern lv_obj_t * ui_Oven;
extern lv_obj_t * ui_Image_Oven_Bg;
extern lv_obj_t * ui_Panel_Oven;
extern lv_obj_t * ui_Image_Oven_Light;
extern lv_obj_t * ui_Image_Oven_Fan;
extern lv_obj_t * ui_Image_Oven_Anim;
extern lv_obj_t * ui_Group_Oven_Content1;
extern lv_obj_t * ui_Aircon_Line1;
extern lv_obj_t * ui_Group_Oven_Temp_Time;
extern lv_obj_t * ui_Group_Current_Temp;
extern lv_obj_t * ui_Label_Current_Temp;
extern lv_obj_t * ui_Label_Oven_Number1;
extern lv_obj_t * ui_Label_Oven_Number2;
extern lv_obj_t * ui_Label_Celsius5;
extern lv_obj_t * ui_Group_Oven_Status;
extern lv_obj_t * ui_Label_Status1;
extern lv_obj_t * ui_Label_Status_Text1;
extern lv_obj_t * ui_Group_Time3;
extern lv_obj_t * ui_Label_Time_Left1;
extern lv_obj_t * ui_Label_Time_Number1;
extern lv_obj_t * ui_Bar_Time_Left1;
extern lv_obj_t * ui_Group_Oven_Mode1;
extern lv_obj_t * ui_Group_Oven_Mode_Select;
extern lv_obj_t * ui_Image_Oven_1;
extern lv_obj_t * ui_Label_Mode4;
extern lv_obj_t * ui_Group_Oven_Mode_Select1;
extern lv_obj_t * ui_Image_Oven_2;
extern lv_obj_t * ui_Label_Mode5;
extern lv_obj_t * ui_Group_Oven_Mode_Select2;
extern lv_obj_t * ui_Image_Oven_3;
extern lv_obj_t * ui_Label_Mode6;
extern lv_obj_t * ui_Group_Oven_Mode_Select3;
extern lv_obj_t * ui_Image_Oven_4;
extern lv_obj_t * ui_Label_Mode7;
extern lv_obj_t * ui_Group_Oven_Mode_Select4;
extern lv_obj_t * ui_Image_Oven_5;
extern lv_obj_t * ui_Label_Mode8;
extern lv_obj_t * ui_Group_Oven_Mode_Select5;
extern lv_obj_t * ui_Image_Oven_6;
extern lv_obj_t * ui_Label_Mode9;
extern lv_obj_t * ui_Group_Oven_Mode_Select6;
extern lv_obj_t * ui_Image_Oven_7;
extern lv_obj_t * ui_Label_Mode10;
extern lv_obj_t * ui_Group_Oven_Mode_Select7;
extern lv_obj_t * ui_Image_Oven_8;
extern lv_obj_t * ui_Label_Mode11;
extern lv_obj_t * ui_Group_Oven_Mode_Select8;
extern lv_obj_t * ui_Image_Oven_9;
extern lv_obj_t * ui_Label_Mode12;
extern lv_obj_t * ui_Label_Mode3;
extern lv_obj_t * ui_Image_Oven_Mode_Right;
extern lv_obj_t * ui_Image_Oven_Mode_Left;
extern lv_obj_t * ui_Group_Oven_Settings;
extern lv_obj_t * ui_Group_Target_Temp;
extern lv_obj_t * ui_Image_Wheel_Bg;
extern lv_obj_t * ui_Label_Target_Temp_Numer;
extern lv_obj_t * ui_Label_Celsius6;
extern lv_obj_t * ui_Label_Target_Temp;
extern lv_obj_t * ui_Label_Settings;
extern lv_obj_t * ui_Line6;
extern lv_obj_t * ui_BTN_Oven;
extern lv_obj_t * ui_Label_Start;
extern lv_obj_t * ui_Group_Timer;
extern lv_obj_t * ui_Image_Wheel_Bg1;
extern lv_obj_t * ui_Label_Timer_Number;
extern lv_obj_t * ui_Label_Mins;
extern lv_obj_t * ui_Label_Timer;
extern lv_obj_t * ui_BTN_Menu3;
extern lv_obj_t * ui_BTN_Back3;
extern lv_obj_t * ui_Label_BACK3;
extern lv_obj_t * ui_Title_Bg3;
extern lv_obj_t * ui_Title_Bg4;
extern lv_obj_t * ui_Label_Oven_Title;


LV_IMG_DECLARE(ui_img_menu_bg_png);    // assets/menu_bg.png
LV_IMG_DECLARE(ui_img_text_aircon_png);    // assets/text_aircon.png
LV_IMG_DECLARE(ui_img_icn_cool_png);    // assets/icn_cool.png
LV_IMG_DECLARE(ui_img_icn_fan_high_png);    // assets/icn_fan_high.png
LV_IMG_DECLARE(ui_img_text_hood_png);    // assets/text_hood.png
LV_IMG_DECLARE(ui_img_icn_light_on_png);    // assets/icn_light_on.png
LV_IMG_DECLARE(ui_img_hood_small_png);    // assets/hood_small.png
LV_IMG_DECLARE(ui_img_hood_menu_light_png);    // assets/hood_menu_light.png
LV_IMG_DECLARE(ui_img_nxp_png);    // assets/nxp.png
LV_IMG_DECLARE(ui_img_text_oven_png);    // assets/text_oven.png
LV_IMG_DECLARE(ui_img_icn_oven_1_png);    // assets/icn_oven_1.png
LV_IMG_DECLARE(ui_img_icn_weather_1_png);    // assets/icn_weather_1.png
LV_IMG_DECLARE(ui_img_icn_mic_png);    // assets/icn_mic.png
LV_IMG_DECLARE(ui_img_mic_bg_3_png);    // assets/mic_bg_3.png
LV_IMG_DECLARE(ui_img_mic_bg_2_png);    // assets/mic_bg_2.png
LV_IMG_DECLARE(ui_img_mic_bg_1_png);    // assets/mic_bg_1.png
LV_IMG_DECLARE(ui_img_mic_png);    // assets/mic.png
LV_IMG_DECLARE(ui_img_icn_menu_png);    // assets/icn_menu.png
LV_IMG_DECLARE(ui_img_aircon_small_png);    // assets/aircon_small.png
LV_IMG_DECLARE(ui_img_place_holder_image_png);    // assets/place_holder_image.png
LV_IMG_DECLARE(ui_img_oven_menu_png);    // assets/oven_menu.png
LV_IMG_DECLARE(ui_img_oven_light_menu_png);    // assets/oven_light_menu.png
LV_IMG_DECLARE(ui_img_smog_1_png);    // assets/smog_1.png
LV_IMG_DECLARE(ui_img_smog_2_png);    // assets/smog_2.png
LV_IMG_DECLARE(ui_img_aircon_bg_png);    // assets/aircon_bg.png
LV_IMG_DECLARE(ui_img_arrow_up_png);    // assets/arrow_up.png
LV_IMG_DECLARE(ui_img_arrow_down_png);    // assets/arrow_down.png
LV_IMG_DECLARE(ui_img_title_bg_png);    // assets/title_bg.png
LV_IMG_DECLARE(ui_img_hood_bg_png);    // assets/hood_bg.png
LV_IMG_DECLARE(ui_img_title_bg_2_png);    // assets/title_bg_2.png
LV_IMG_DECLARE(ui_img_hood_light_png);    // assets/hood_light.png
LV_IMG_DECLARE(ui_img_text_fan_param_png);    // assets/text_fan_param.png
LV_IMG_DECLARE(ui_img_oven_bg_png);    // assets/oven_bg.png
LV_IMG_DECLARE(ui_img_oven_light_png);    // assets/oven_light.png
LV_IMG_DECLARE(ui_img_icn_oven_fan_rear_png);    // assets/icn_oven_fan_rear.png
LV_IMG_DECLARE(ui_img_icn_oven_upper_lower_png);    // assets/icn_oven_upper_lower.png
LV_IMG_DECLARE(ui_img_icn_oven_fan_upper_lower_png);    // assets/icn_oven_fan_upper_lower.png
LV_IMG_DECLARE(ui_img_icn_oven_fan_lower_png);    // assets/icn_oven_fan_lower.png
LV_IMG_DECLARE(ui_img_icn_oven_gril_png);    // assets/icn_oven_gril.png
LV_IMG_DECLARE(ui_img_icn_oven_fan_gril_png);    // assets/icn_oven_fan_gril.png
LV_IMG_DECLARE(ui_img_icn_oven_upper_png);    // assets/icn_oven_upper.png
LV_IMG_DECLARE(ui_img_icn_oven_lower_png);    // assets/icn_oven_lower.png
LV_IMG_DECLARE(ui_img_icn_oven_defrost_png);    // assets/icn_oven_defrost.png
LV_IMG_DECLARE(ui_img_arrow_right_png);    // assets/arrow_right.png
LV_IMG_DECLARE(ui_img_arrow_left_png);    // assets/arrow_left.png
LV_IMG_DECLARE(ui_img_wheel_bg_png);    // assets/wheel_bg.png
LV_IMG_DECLARE(ui_img_btn_oven_png);    // assets/BTN_oven.png
LV_IMG_DECLARE(ui_img_wheel_bg_2_png);    // assets/wheel_bg_2.png


LV_FONT_DECLARE(ui_font_Big_Number);
LV_FONT_DECLARE(ui_font_Light);
LV_FONT_DECLARE(ui_font_SemiBold);
LV_FONT_DECLARE(ui_font_Small_Number);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
