/*
* Copyright 2023 NXP
* SPDX-License-Identifier: MIT
*/

// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: nxp_smart_kitchen

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_Panel_Settings;
lv_obj_t * ui_Panel_Menu;
lv_obj_t * ui_Image_Menu_Bg;
lv_obj_t * ui_Group_Aircon_Content;
lv_obj_t * ui_Aircon_Line;
lv_obj_t * ui_Image_Aircon_Text;
lv_obj_t * ui_Label_Aircon_Number;
lv_obj_t * ui_Label_Aircon_Number1;
lv_obj_t * ui_Label_Celsius;
lv_obj_t * ui_Line1;
lv_obj_t * ui_Group_Aircon_Mode;
lv_obj_t * ui_Image_Cool;
lv_obj_t * ui_Label_Aircon_Mode_Text;
lv_obj_t * ui_Label_Mode;
lv_obj_t * ui_Group_Aircon_Fan;
lv_obj_t * ui_Image_Fsn;
lv_obj_t * ui_Label_Aircon_Fan_Text;
lv_obj_t * ui_Label_Celsius1;
lv_obj_t * ui_Group_Hood_Content;
lv_obj_t * ui_Hood_Line;
lv_obj_t * ui_Image_Hood_Text;
lv_obj_t * ui_Group_Hood_Light;
lv_obj_t * ui_Image_Lght;
lv_obj_t * ui_Line3;
lv_obj_t * ui_Label_Hood_Light_Text;
lv_obj_t * ui_Label_Lght;
lv_obj_t * ui_Group_Hood_Fan;
lv_obj_t * ui_Image_Fan;
lv_obj_t * ui_Line2;
lv_obj_t * ui_Label_Hood_Fan_Text;
lv_obj_t * ui_Label_Fan;
lv_obj_t * ui_Image_Hood;
lv_obj_t * ui_Image_Hood_Menu_Light;
lv_obj_t * ui_Group_Nxp_Logo;
lv_obj_t * ui_Label_Smart_Kitchen_Demo;
lv_obj_t * ui_Image_NXP_Logo;
lv_obj_t * ui_Group_Oven_Content;
lv_obj_t * ui_Oven_Line;
lv_obj_t * ui_Image_Oven_Text;
lv_obj_t * ui_Group_Temp_Time;
lv_obj_t * ui_Group_Temp;
lv_obj_t * ui_Label_Temp_Number;
lv_obj_t * ui_Label_Temp_Number1;
lv_obj_t * ui_Label_Celsius2;
lv_obj_t * ui_Group_Time1;
lv_obj_t * ui_Label_Time_Left;
lv_obj_t * ui_Label_Time_Number;
lv_obj_t * ui_Bar_Time_Left;
lv_obj_t * ui_Group_Temp_Time1;
lv_obj_t * ui_Group_Temp1;
lv_obj_t * ui_Label_Status;
lv_obj_t * ui_Label_Status_Text;
lv_obj_t * ui_Group_Oven_Mode;
lv_obj_t * ui_Label_Mode1;
lv_obj_t * ui_Label_Mode2;
lv_obj_t * ui_image_Oven_Mode_1;
lv_obj_t * ui_Group_Info;
lv_obj_t * ui_Group_Time;
lv_obj_t * ui_Label_Date;
lv_obj_t * ui_Label_Time;
lv_obj_t * ui_Group_Weather;
lv_obj_t * ui_Weather;
lv_obj_t * ui_Label_Weather_Title;
lv_obj_t * ui_Label_Weather_Info;
lv_obj_t * ui_Cloud_Group;
lv_obj_t * ui_Image_Weather_Icon;
lv_obj_t * ui_Label_Weather_Degree;
lv_obj_t * ui_Group_Mic;
lv_obj_t * ui_Label_Mic_Text;
lv_obj_t * ui_Label_Talk;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Image_Mic;
lv_obj_t * ui_Group_Voice;
lv_obj_t * ui_Label_Voince;
lv_obj_t * ui_Label_VoinceIn;
lv_obj_t * ui_Image_Voice_Bg_3;
lv_obj_t * ui_Image_Voice_Bg_2;
lv_obj_t * ui_Image_Voice_Bg_1;
lv_obj_t * ui_Image_Mic_Voive;
lv_obj_t * ui_BTN_Menu;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Image_Aircon;
lv_obj_t * ui_Image_Aircon_Menu_Swing;
lv_obj_t * ui_Image_Oven_Menu;
lv_obj_t * ui_Image_Oven_Light_Menu;
lv_obj_t * ui_Image_Oven_Menu_Fan;
lv_obj_t * ui_Image_Aircon_Menu_Fan;
lv_obj_t * ui_Image_Oven_Anim_Menu;
lv_obj_t * ui_Image_Aircon_Menu_Cool;
lv_obj_t * ui_Group_Smog_Menu1;
lv_obj_t * ui_Image_Smog1_Menu;
lv_obj_t * ui_Image_Smog2_Menu;
lv_obj_t * ui_Group_Smog_Menu2;
lv_obj_t * ui_Image_Smog1_Menu1;
lv_obj_t * ui_Image_Smog2_Menu1;
lv_obj_t * ui_Aircon;
lv_obj_t * ui_Panel_Aircon;
lv_obj_t * ui_Image_Aircon_Bg;
lv_obj_t * ui_Group_Aircon_Content2;
lv_obj_t * ui_Aircon_Line2;
lv_obj_t * ui_Group_Set_Temp;
lv_obj_t * ui_Label_set_Temp;
lv_obj_t * ui_Label_Aircon_Number2;
lv_obj_t * ui_Label_Aircon_Number3;
lv_obj_t * ui_Label_Celsius3;
lv_obj_t * ui_BTN_Temp_Up;
lv_obj_t * ui_Image_Up;
lv_obj_t * ui_BTN_Temp_Down;
lv_obj_t * ui_Image_Down;
lv_obj_t * ui_Group_Set_Timer;
lv_obj_t * ui_Label_Set_Timer;
lv_obj_t * ui_Label_Aircon_Number5;
lv_obj_t * ui_BTN_Temp_Up2;
lv_obj_t * ui_Image_Up1;
lv_obj_t * ui_BTN_Temp_Down2;
lv_obj_t * ui_Image_Down1;
lv_obj_t * ui_Group_Select_Mode;
lv_obj_t * ui_Label_Select_Mode;
lv_obj_t * ui_Group_Aircon_Mode1;
lv_obj_t * ui_Image_Cool1;
lv_obj_t * ui_Label_Aricon_Comp_Text;
lv_obj_t * ui_Label_Comp;
lv_obj_t * ui_Group_Aircon_Fan1;
lv_obj_t * ui_Image_Fsn1;
lv_obj_t * ui_Label_Aircon_Fan_Text1;
lv_obj_t * ui_Label_Celsius4;
lv_obj_t * ui_Line4;
lv_obj_t * ui_Roller_Aircon_Mode;
lv_obj_t * ui_Group_Switch;
lv_obj_t * ui_Label_Swing;
lv_obj_t * ui_Switch_Swing;
lv_obj_t * ui_Line5;
lv_obj_t * ui_Label_Fan_High;
lv_obj_t * ui_Switch_Fan_High;
lv_obj_t * ui_BTN_Menu1;
lv_obj_t * ui_BTN_Back1;
lv_obj_t * ui_Label_BACK1;
lv_obj_t * ui_Title_Bg1;
lv_obj_t * ui_Label_Title_Aircon;
lv_obj_t * ui_Image_Hood_Swing;
lv_obj_t * ui_Image_Aircon_Fan;
lv_obj_t * ui_Image_Aicon_Cool;
lv_obj_t * ui_Hood;
lv_obj_t * ui_Image_Hood_Bg;
lv_obj_t * ui_Panel_Hood;
lv_obj_t * ui_Title_Bg2;
lv_obj_t * ui_Label_Hood;
lv_obj_t * ui_Image_Hood_Light;
lv_obj_t * ui_Group_Smog1;
lv_obj_t * ui_Image_Smog11;
lv_obj_t * ui_Image_Smog12;
lv_obj_t * ui_Group_Smog2;
lv_obj_t * ui_Image_Smog21;
lv_obj_t * ui_Image_Smog22;
lv_obj_t * ui_Group_Hood_Content2;
lv_obj_t * ui_Hood_Line1;
lv_obj_t * ui_Group_Hood;
lv_obj_t * ui_Label_Light;
lv_obj_t * ui_Switch_Hood_Light;
lv_obj_t * ui_Line7;
lv_obj_t * ui_Label_Fan1;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Slider_Hood_Fan;
lv_obj_t * ui_BTN_Menu2;
lv_obj_t * ui_BTN_Back2;
lv_obj_t * ui_Label_BACK2;
lv_obj_t * ui_Oven;
lv_obj_t * ui_Image_Oven_Bg;
lv_obj_t * ui_Panel_Oven;
lv_obj_t * ui_Image_Oven_Light;
lv_obj_t * ui_Image_Oven_Fan;
lv_obj_t * ui_Image_Oven_Anim;
lv_obj_t * ui_Group_Oven_Content1;
lv_obj_t * ui_Aircon_Line1;
lv_obj_t * ui_Group_Oven_Temp_Time;
lv_obj_t * ui_Group_Current_Temp;
lv_obj_t * ui_Label_Current_Temp;
lv_obj_t * ui_Label_Oven_Number1;
lv_obj_t * ui_Label_Oven_Number2;
lv_obj_t * ui_Label_Celsius5;
lv_obj_t * ui_Group_Oven_Status;
lv_obj_t * ui_Label_Status1;
lv_obj_t * ui_Label_Status_Text1;
lv_obj_t * ui_Group_Time3;
lv_obj_t * ui_Label_Time_Left1;
lv_obj_t * ui_Label_Time_Number1;
lv_obj_t * ui_Bar_Time_Left1;
lv_obj_t * ui_Group_Oven_Mode1;
lv_obj_t * ui_Group_Oven_Mode_Select;
lv_obj_t * ui_Image_Oven_1;
lv_obj_t * ui_Label_Mode4;
lv_obj_t * ui_Group_Oven_Mode_Select1;
lv_obj_t * ui_Image_Oven_2;
lv_obj_t * ui_Label_Mode5;
lv_obj_t * ui_Group_Oven_Mode_Select2;
lv_obj_t * ui_Image_Oven_3;
lv_obj_t * ui_Label_Mode6;
lv_obj_t * ui_Group_Oven_Mode_Select3;
lv_obj_t * ui_Image_Oven_4;
lv_obj_t * ui_Label_Mode7;
lv_obj_t * ui_Group_Oven_Mode_Select4;
lv_obj_t * ui_Image_Oven_5;
lv_obj_t * ui_Label_Mode8;
lv_obj_t * ui_Group_Oven_Mode_Select5;
lv_obj_t * ui_Image_Oven_6;
lv_obj_t * ui_Label_Mode9;
lv_obj_t * ui_Group_Oven_Mode_Select6;
lv_obj_t * ui_Image_Oven_7;
lv_obj_t * ui_Label_Mode10;
lv_obj_t * ui_Group_Oven_Mode_Select7;
lv_obj_t * ui_Image_Oven_8;
lv_obj_t * ui_Label_Mode11;
lv_obj_t * ui_Group_Oven_Mode_Select8;
lv_obj_t * ui_Image_Oven_9;
lv_obj_t * ui_Label_Mode12;
lv_obj_t * ui_Label_Mode3;
lv_obj_t * ui_Image_Oven_Mode_Right;
lv_obj_t * ui_Image_Oven_Mode_Left;
lv_obj_t * ui_Group_Oven_Settings;
lv_obj_t * ui_Group_Target_Temp;
lv_obj_t * ui_Image_Wheel_Bg;
lv_obj_t * ui_Label_Target_Temp_Numer;
lv_obj_t * ui_Label_Celsius6;
lv_obj_t * ui_Label_Target_Temp;
lv_obj_t * ui_Label_Settings;
lv_obj_t * ui_Line6;
lv_obj_t * ui_BTN_Oven;
lv_obj_t * ui_Label_Start;
lv_obj_t * ui_Group_Timer;
lv_obj_t * ui_Image_Wheel_Bg1;
lv_obj_t * ui_Label_Timer_Number;
lv_obj_t * ui_Label_Mins;
lv_obj_t * ui_Label_Timer;
lv_obj_t * ui_BTN_Menu3;
lv_obj_t * ui_BTN_Back3;
lv_obj_t * ui_Label_BACK3;
lv_obj_t * ui_Title_Bg3;
lv_obj_t * ui_Title_Bg4;
lv_obj_t * ui_Label_Oven_Title;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

//SetMessageToLabelVoiceIn
void ui_SetMessageToVoiceInLable(char *message);

void ui_SetMessageToVoiceInLable(char *message)
{
    lv_label_set_text(ui_Label_VoinceIn, message);
}

// ui_EloAnimation0
// FUNCTION HEADER
void Smog1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void Smog1_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 5000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -328);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

// ui_EloAnimation0
// FUNCTION HEADER
void Smog2_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void Smog2_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 9000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -468);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

// ui_EloAnimation0
// FUNCTION HEADER
void voice1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void voice1_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, 220, 256);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 400);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 400);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_1, 256, 220);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 400);

    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 400);

    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}

// ui_EloAnimation0
// FUNCTION HEADER
void voice2_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void voice2_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 800);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, 200, 280);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);

    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);

    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 400);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);

    lv_anim_set_playback_time(&PropertyAnimation_1, 400);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);

    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
static void ui_event_BTN_Oven(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(ta, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_Label_Start, _UI_LABEL_PROPERTY_TEXT, "STOP");
    }
    if(event == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(ta, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_Label_Start, _UI_LABEL_PROPERTY_TEXT, "START");
    }
}

///////////////////// SCREENS ////////////////////
void ui_Home_screen_init(void)
{

    // ui_Home
	printf("ui_Home_screen_init: \n");
    ui_Home = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Home, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Home, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Home, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel_Settings

    ui_Panel_Settings = lv_obj_create(ui_Home);

    lv_obj_set_width(ui_Panel_Settings, 250);
    lv_obj_set_height(ui_Panel_Settings, lv_pct(100));

    lv_obj_set_x(ui_Panel_Settings, 0);
    lv_obj_set_y(ui_Panel_Settings, 0);

    lv_obj_set_align(ui_Panel_Settings, LV_ALIGN_TOP_RIGHT);

    lv_obj_clear_flag(ui_Panel_Settings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel_Settings, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Settings, 32, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_Panel_Settings, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Panel_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Panel_Settings, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Panel_Settings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel_Settings, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel_Menu

    ui_Panel_Menu = lv_obj_create(ui_Home);

    lv_obj_set_width(ui_Panel_Menu, lv_pct(100));
    lv_obj_set_height(ui_Panel_Menu, lv_pct(100));

    lv_obj_set_x(ui_Panel_Menu, 0);
    lv_obj_set_y(ui_Panel_Menu, 0);

    lv_obj_set_align(ui_Panel_Menu, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel_Menu, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Menu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Menu, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Menu, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Menu, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Menu, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Menu_Bg

    ui_Image_Menu_Bg = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Menu_Bg, &ui_img_menu_bg_png);

    lv_obj_set_width(ui_Image_Menu_Bg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Menu_Bg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Menu_Bg, 0);
    lv_obj_set_y(ui_Image_Menu_Bg, 0);

    lv_obj_set_align(ui_Image_Menu_Bg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Menu_Bg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Menu_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Menu_Bg, 0, 0);

    // ui_Group_Aircon_Content

    ui_Group_Aircon_Content = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Aircon_Content, 390);
    lv_obj_set_height(ui_Group_Aircon_Content, 286);

    lv_obj_set_x(ui_Group_Aircon_Content, 0);
    lv_obj_set_y(ui_Group_Aircon_Content, 0);

    lv_obj_clear_flag(ui_Group_Aircon_Content, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Aircon_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Aircon_Content, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Content, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Aircon_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_Group_Aircon_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Aircon_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Aircon_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Aircon_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Aircon_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Aircon_Line

    ui_Aircon_Line = lv_obj_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Aircon_Line, 20);
    lv_obj_set_height(ui_Aircon_Line, 286);

    lv_obj_set_x(ui_Aircon_Line, -17);
    lv_obj_set_y(ui_Aircon_Line, -10);

    lv_obj_clear_flag(ui_Aircon_Line, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Aircon_Line, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Aircon_Line, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Aircon_Line, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Aircon_Text

    ui_Image_Aircon_Text = lv_img_create(ui_Group_Aircon_Content);
    lv_img_set_src(ui_Image_Aircon_Text, &ui_img_text_aircon_png);

    lv_obj_set_width(ui_Image_Aircon_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Aircon_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Aircon_Text, 15);
    lv_obj_set_y(ui_Image_Aircon_Text, -20);

    lv_obj_set_align(ui_Image_Aircon_Text, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_add_flag(ui_Image_Aircon_Text, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Text, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Text, 0, 0);

    // ui_Label_Aircon_Number

    ui_Label_Aircon_Number = lv_label_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Label_Aircon_Number, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Number, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Number, 51);
    lv_obj_set_y(ui_Label_Aircon_Number, 16);

    lv_obj_set_align(ui_Label_Aircon_Number, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_Label_Aircon_Number, "24");

    lv_obj_set_style_text_color(ui_Label_Aircon_Number, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aircon_Number, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Number, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Aircon_Number1

    ui_Label_Aircon_Number1 = lv_label_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Label_Aircon_Number1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Number1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Number1, 148);
    lv_obj_set_y(ui_Label_Aircon_Number1, -2);

    lv_obj_set_align(ui_Label_Aircon_Number1, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_Label_Aircon_Number1, ".5");

    lv_obj_set_style_text_color(ui_Label_Aircon_Number1, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Number1, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius

    ui_Label_Celsius = lv_label_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Label_Celsius, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius, 162);
    lv_obj_set_y(ui_Label_Celsius, -84);

    lv_obj_set_align(ui_Label_Celsius, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_Label_Celsius, "°C");

    lv_obj_set_style_text_color(ui_Label_Celsius, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Line1

    ui_Line1 = lv_obj_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Line1, 2);
    lv_obj_set_height(ui_Line1, 107);

    lv_obj_set_x(ui_Line1, 212);
    lv_obj_set_y(ui_Line1, 70);

    lv_obj_set_align(ui_Line1, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Line1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line1, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Aircon_Mode

    ui_Group_Aircon_Mode = lv_obj_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Group_Aircon_Mode, 114);
    lv_obj_set_height(ui_Group_Aircon_Mode, 46);

    lv_obj_set_x(ui_Group_Aircon_Mode, 232);
    lv_obj_set_y(ui_Group_Aircon_Mode, 40);

    lv_obj_set_align(ui_Group_Aircon_Mode, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Aircon_Mode, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Aircon_Mode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Mode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Cool

    ui_Image_Cool = lv_img_create(ui_Group_Aircon_Mode);
    lv_img_set_src(ui_Image_Cool, &ui_img_icn_cool_png);

    lv_obj_set_width(ui_Image_Cool, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Cool, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Cool, 3);
    lv_obj_set_y(ui_Image_Cool, 0);

    lv_obj_set_align(ui_Image_Cool, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Cool, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Cool, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Cool, 0, 0);

    // ui_Label_Aircon_Mode_Text

    ui_Label_Aircon_Mode_Text = lv_label_create(ui_Group_Aircon_Mode);

    lv_obj_set_width(ui_Label_Aircon_Mode_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Mode_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Mode_Text, 15);
    lv_obj_set_y(ui_Label_Aircon_Mode_Text, 8);

    lv_obj_set_align(ui_Label_Aircon_Mode_Text, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Aircon_Mode_Text, "Cool");

    lv_obj_set_style_text_color(ui_Label_Aircon_Mode_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Mode_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aircon_Mode_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Mode_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mode

    ui_Label_Mode = lv_label_create(ui_Group_Aircon_Mode);

    lv_obj_set_width(ui_Label_Mode, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mode, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode, 15);
    lv_obj_set_y(ui_Label_Mode, -14);

    lv_obj_set_align(ui_Label_Mode, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode, "MODE");

    lv_obj_set_style_text_color(ui_Label_Mode, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Aircon_Fan

    ui_Group_Aircon_Fan = lv_obj_create(ui_Group_Aircon_Content);

    lv_obj_set_width(ui_Group_Aircon_Fan, 114);
    lv_obj_set_height(ui_Group_Aircon_Fan, 46);

    lv_obj_set_x(ui_Group_Aircon_Fan, 232);
    lv_obj_set_y(ui_Group_Aircon_Fan, 97);

    lv_obj_set_align(ui_Group_Aircon_Fan, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Aircon_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Aircon_Fan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Fan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Fsn

    ui_Image_Fsn = lv_img_create(ui_Group_Aircon_Fan);
    lv_img_set_src(ui_Image_Fsn, &ui_img_icn_fan_high_png);

    lv_obj_set_width(ui_Image_Fsn, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Fsn, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Fsn, 2);
    lv_obj_set_y(ui_Image_Fsn, 0);

    lv_obj_set_align(ui_Image_Fsn, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Fsn, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Fsn, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Fsn, 0, 0);

    // ui_Label_Aircon_Fan_Text

    ui_Label_Aircon_Fan_Text = lv_label_create(ui_Group_Aircon_Fan);

    lv_obj_set_width(ui_Label_Aircon_Fan_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Fan_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Fan_Text, 15);
    lv_obj_set_y(ui_Label_Aircon_Fan_Text, 8);

    lv_obj_set_align(ui_Label_Aircon_Fan_Text, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Aircon_Fan_Text, "High");

    lv_obj_set_style_text_color(ui_Label_Aircon_Fan_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Fan_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aircon_Fan_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Fan_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius1

    ui_Label_Celsius1 = lv_label_create(ui_Group_Aircon_Fan);

    lv_obj_set_width(ui_Label_Celsius1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius1, 15);
    lv_obj_set_y(ui_Label_Celsius1, -14);

    lv_obj_set_align(ui_Label_Celsius1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Celsius1, "FAN");

    lv_obj_set_style_text_color(ui_Label_Celsius1, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Celsius1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Hood_Content

    ui_Group_Hood_Content = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Hood_Content, 332);
    lv_obj_set_height(ui_Group_Hood_Content, 167);

    lv_obj_set_x(ui_Group_Hood_Content, 425);
    lv_obj_set_y(ui_Group_Hood_Content, 1);

    lv_obj_clear_flag(ui_Group_Hood_Content, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Hood_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Hood_Content, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Hood_Content, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Hood_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_Group_Hood_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Hood_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Hood_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Hood_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Hood_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Hood_Line

    ui_Hood_Line = lv_obj_create(ui_Group_Hood_Content);

    lv_obj_set_width(ui_Hood_Line, 20);
    lv_obj_set_height(ui_Hood_Line, 166);

    lv_obj_set_x(ui_Hood_Line, -17);
    lv_obj_set_y(ui_Hood_Line, -10);

    lv_obj_clear_flag(ui_Hood_Line, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Hood_Line, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Hood_Line, lv_color_hex(0xACFF62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Hood_Line, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Hood_Text

    ui_Image_Hood_Text = lv_img_create(ui_Group_Hood_Content);
    lv_img_set_src(ui_Image_Hood_Text, &ui_img_text_hood_png);

    lv_obj_set_width(ui_Image_Hood_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Hood_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Hood_Text, 15);
    lv_obj_set_y(ui_Image_Hood_Text, 0);

    lv_obj_set_align(ui_Image_Hood_Text, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Hood_Text, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood_Text, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood_Text, 0, 0);

    // ui_Group_Hood_Light

    ui_Group_Hood_Light = lv_obj_create(ui_Group_Hood_Content);

    lv_obj_set_width(ui_Group_Hood_Light, 62);
    lv_obj_set_height(ui_Group_Hood_Light, 117);

    lv_obj_set_x(ui_Group_Hood_Light, 45);
    lv_obj_set_y(ui_Group_Hood_Light, 11);

    lv_obj_clear_flag(ui_Group_Hood_Light, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Hood_Light, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Hood_Light, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Lght

    ui_Image_Lght = lv_img_create(ui_Group_Hood_Light);
    lv_img_set_src(ui_Image_Lght, &ui_img_icn_light_on_png);

    lv_obj_set_width(ui_Image_Lght, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Lght, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Lght, 0);
    lv_obj_set_y(ui_Image_Lght, 0);

    lv_obj_set_align(ui_Image_Lght, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Image_Lght, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Lght, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Lght, 0, 0);

    // ui_Line3

    ui_Line3 = lv_obj_create(ui_Group_Hood_Light);

    lv_obj_set_width(ui_Line3, 40);
    lv_obj_set_height(ui_Line3, 2);

    lv_obj_set_x(ui_Line3, 0);
    lv_obj_set_y(ui_Line3, 10);

    lv_obj_set_align(ui_Line3, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line3, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Hood_Light_Text

    ui_Label_Hood_Light_Text = lv_label_create(ui_Group_Hood_Light);

    lv_obj_set_width(ui_Label_Hood_Light_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Hood_Light_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Hood_Light_Text, 0);
    lv_obj_set_y(ui_Label_Hood_Light_Text, 25);

    lv_obj_set_align(ui_Label_Hood_Light_Text, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Hood_Light_Text, "On");

    lv_obj_set_style_text_color(ui_Label_Hood_Light_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Hood_Light_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Hood_Light_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Hood_Light_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Lght

    ui_Label_Lght = lv_label_create(ui_Group_Hood_Light);

    lv_obj_set_width(ui_Label_Lght, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Lght, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Lght, 0);
    lv_obj_set_y(ui_Label_Lght, 0);

    lv_obj_set_align(ui_Label_Lght, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Lght, "LIGHT");

    lv_obj_set_style_text_color(ui_Label_Lght, lv_color_hex(0xACFF62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Lght, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Lght, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Lght, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Hood_Fan

    ui_Group_Hood_Fan = lv_obj_create(ui_Group_Hood_Content);

    lv_obj_set_width(ui_Group_Hood_Fan, 62);
    lv_obj_set_height(ui_Group_Hood_Fan, 117);

    lv_obj_set_x(ui_Group_Hood_Fan, 238);
    lv_obj_set_y(ui_Group_Hood_Fan, 11);

    lv_obj_clear_flag(ui_Group_Hood_Fan, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Hood_Fan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Hood_Fan, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Fan

    ui_Image_Fan = lv_img_create(ui_Group_Hood_Fan);
    lv_img_set_src(ui_Image_Fan, &ui_img_icn_fan_high_png);

    lv_obj_set_width(ui_Image_Fan, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Fan, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Fan, 0);
    lv_obj_set_y(ui_Image_Fan, -7);

    lv_obj_set_align(ui_Image_Fan, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_Image_Fan, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Fan, 0, 0);

    // ui_Line2

    ui_Line2 = lv_obj_create(ui_Group_Hood_Fan);

    lv_obj_set_width(ui_Line2, 40);
    lv_obj_set_height(ui_Line2, 2);

    lv_obj_set_x(ui_Line2, 0);
    lv_obj_set_y(ui_Line2, 10);

    lv_obj_set_align(ui_Line2, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line2, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Hood_Fan_Text

    ui_Label_Hood_Fan_Text = lv_label_create(ui_Group_Hood_Fan);

    lv_obj_set_width(ui_Label_Hood_Fan_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Hood_Fan_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Hood_Fan_Text, 0);
    lv_obj_set_y(ui_Label_Hood_Fan_Text, 25);

    lv_obj_set_align(ui_Label_Hood_Fan_Text, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Hood_Fan_Text, "High");

    lv_obj_set_style_text_color(ui_Label_Hood_Fan_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Hood_Fan_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Hood_Fan_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Hood_Fan_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Fan

    ui_Label_Fan = lv_label_create(ui_Group_Hood_Fan);

    lv_obj_set_width(ui_Label_Fan, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Fan, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Fan, 0);
    lv_obj_set_y(ui_Label_Fan, 0);

    lv_obj_set_align(ui_Label_Fan, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Fan, "FAN");

    lv_obj_set_style_text_color(ui_Label_Fan, lv_color_hex(0xACFF62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Fan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Fan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Fan, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Hood

    ui_Image_Hood = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Hood, &ui_img_hood_small_png);

    lv_obj_set_width(ui_Image_Hood, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Hood, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Hood, -12);
    lv_obj_set_y(ui_Image_Hood, -248);

    lv_obj_set_align(ui_Image_Hood, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Hood, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood, 0, 0);

    // ui_Image_Hood_Menu_Light

    ui_Image_Hood_Menu_Light = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Hood_Menu_Light, &ui_img_hood_menu_light_png);

    lv_obj_set_width(ui_Image_Hood_Menu_Light, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Hood_Menu_Light, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Hood_Menu_Light, 4);
    lv_obj_set_y(ui_Image_Hood_Menu_Light, -61);

    lv_obj_set_align(ui_Image_Hood_Menu_Light, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Hood_Menu_Light, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood_Menu_Light, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood_Menu_Light, 0, 0);

    // ui_Group_Nxp_Logo

    ui_Group_Nxp_Logo = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Nxp_Logo, 388);
    lv_obj_set_height(ui_Group_Nxp_Logo, 50);

    lv_obj_set_x(ui_Group_Nxp_Logo, 0);
    lv_obj_set_y(ui_Group_Nxp_Logo, -6);

    lv_obj_set_align(ui_Group_Nxp_Logo, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Nxp_Logo, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Nxp_Logo, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Nxp_Logo, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Nxp_Logo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Smart_Kitchen_Demo

    ui_Label_Smart_Kitchen_Demo = lv_label_create(ui_Group_Nxp_Logo);

    lv_obj_set_width(ui_Label_Smart_Kitchen_Demo, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Smart_Kitchen_Demo, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Smart_Kitchen_Demo, -20);
    lv_obj_set_y(ui_Label_Smart_Kitchen_Demo, 0);

    lv_obj_set_align(ui_Label_Smart_Kitchen_Demo, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Smart_Kitchen_Demo, "Smart Kitchen Demo");

    lv_obj_set_style_text_color(ui_Label_Smart_Kitchen_Demo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Smart_Kitchen_Demo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Smart_Kitchen_Demo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Smart_Kitchen_Demo, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_NXP_Logo

    ui_Image_NXP_Logo = lv_img_create(ui_Group_Nxp_Logo);
    lv_img_set_src(ui_Image_NXP_Logo, &ui_img_nxp_png);

    lv_obj_set_width(ui_Image_NXP_Logo, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_NXP_Logo, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_NXP_Logo, 20);
    lv_obj_set_y(ui_Image_NXP_Logo, 0);

    lv_obj_set_align(ui_Image_NXP_Logo, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_NXP_Logo, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_NXP_Logo, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_NXP_Logo, 0, 0);

    // ui_Group_Oven_Content

    ui_Group_Oven_Content = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Oven_Content, 759);
    lv_obj_set_height(ui_Group_Oven_Content, 302);

    lv_obj_set_x(ui_Group_Oven_Content, 0);
    lv_obj_set_y(ui_Group_Oven_Content, 3);

    lv_obj_set_align(ui_Group_Oven_Content, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_clear_flag(ui_Group_Oven_Content, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Oven_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Oven_Content, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Content, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Oven_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_Group_Oven_Content, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Oven_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Oven_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Oven_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Oven_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Oven_Line

    ui_Oven_Line = lv_obj_create(ui_Group_Oven_Content);

    lv_obj_set_width(ui_Oven_Line, 20);
    lv_obj_set_height(ui_Oven_Line, 301);

    lv_obj_set_x(ui_Oven_Line, -17);
    lv_obj_set_y(ui_Oven_Line, -10);

    lv_obj_clear_flag(ui_Oven_Line, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Oven_Line, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Oven_Line, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Oven_Line, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_Text

    ui_Image_Oven_Text = lv_img_create(ui_Group_Oven_Content);
    lv_img_set_src(ui_Image_Oven_Text, &ui_img_text_oven_png);

    lv_obj_set_width(ui_Image_Oven_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Text, 15);
    lv_obj_set_y(ui_Image_Oven_Text, 0);

    lv_obj_set_align(ui_Image_Oven_Text, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Oven_Text, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Text, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Text, 0, 0);

    // ui_Group_Temp_Time

    ui_Group_Temp_Time = lv_obj_create(ui_Group_Oven_Content);

    lv_obj_set_width(ui_Group_Temp_Time, 286);
    lv_obj_set_height(ui_Group_Temp_Time, lv_pct(100));

    lv_obj_set_x(ui_Group_Temp_Time, 0);
    lv_obj_set_y(ui_Group_Temp_Time, 0);

    lv_obj_set_align(ui_Group_Temp_Time, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Temp_Time, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Temp_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Temp_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Temp_Time, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Temp_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Temp_Time, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Temp_Time, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Temp

    ui_Group_Temp = lv_obj_create(ui_Group_Temp_Time);

    lv_obj_set_width(ui_Group_Temp, lv_pct(75));
    lv_obj_set_height(ui_Group_Temp, lv_pct(50));

    lv_obj_set_x(ui_Group_Temp, 12);
    lv_obj_set_y(ui_Group_Temp, 0);

    lv_obj_set_align(ui_Group_Temp, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Temp, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Temp, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Temp, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Temp, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Temp_Number

    ui_Label_Temp_Number = lv_label_create(ui_Group_Temp);

    lv_obj_set_width(ui_Label_Temp_Number, 153);
    lv_obj_set_height(ui_Label_Temp_Number, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Temp_Number, -63);
    lv_obj_set_y(ui_Label_Temp_Number, 0);

    lv_obj_set_align(ui_Label_Temp_Number, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Temp_Number, "178");

    lv_obj_set_style_text_color(ui_Label_Temp_Number, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Temp_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Temp_Number, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Temp_Number, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Temp_Number1

    ui_Label_Temp_Number1 = lv_label_create(ui_Group_Temp);

    lv_obj_set_width(ui_Label_Temp_Number1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Temp_Number1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Temp_Number1, 148);
    lv_obj_set_y(ui_Label_Temp_Number1, -2);

    lv_obj_set_align(ui_Label_Temp_Number1, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_Label_Temp_Number1, ".0");

    lv_obj_set_style_text_color(ui_Label_Temp_Number1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Temp_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Temp_Number1, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius2

    ui_Label_Celsius2 = lv_label_create(ui_Group_Temp);

    lv_obj_set_width(ui_Label_Celsius2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius2, 69);
    lv_obj_set_y(ui_Label_Celsius2, -37);

    lv_obj_set_align(ui_Label_Celsius2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Celsius2, "°C");

    lv_obj_set_style_text_color(ui_Label_Celsius2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius2, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Time1

    ui_Group_Time1 = lv_obj_create(ui_Group_Temp_Time);

    lv_obj_set_width(ui_Group_Time1, lv_pct(75));
    lv_obj_set_height(ui_Group_Time1, lv_pct(50));

    lv_obj_set_x(ui_Group_Time1, 0);
    lv_obj_set_y(ui_Group_Time1, 0);

    lv_obj_set_align(ui_Group_Time1, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Time1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Time1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Time1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Time_Left

    ui_Label_Time_Left = lv_label_create(ui_Group_Time1);

    lv_obj_set_width(ui_Label_Time_Left, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Time_Left, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Time_Left, 10);
    lv_obj_set_y(ui_Label_Time_Left, -6);

    lv_obj_set_align(ui_Label_Time_Left, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Time_Left, "TIME\nLEFT");

    lv_obj_set_style_text_color(ui_Label_Time_Left, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time_Left, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Time_Left, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time_Left, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Time_Number

    ui_Label_Time_Number = lv_label_create(ui_Group_Time1);

    lv_obj_set_width(ui_Label_Time_Number, 121);
    lv_obj_set_height(ui_Label_Time_Number, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Time_Number, 2);
    lv_obj_set_y(ui_Label_Time_Number, -6);

    lv_obj_set_align(ui_Label_Time_Number, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Time_Number, "00:18");

    lv_obj_set_style_text_color(ui_Label_Time_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Time_Number, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time_Number, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Bar_Time_Left

    ui_Bar_Time_Left = lv_bar_create(ui_Group_Time1);
    lv_bar_set_range(ui_Bar_Time_Left, 0, 100);
    lv_bar_set_value(ui_Bar_Time_Left, 25, LV_ANIM_OFF);

    lv_obj_set_width(ui_Bar_Time_Left, 206);
    lv_obj_set_height(ui_Bar_Time_Left, 10);

    lv_obj_set_x(ui_Bar_Time_Left, 0);
    lv_obj_set_y(ui_Bar_Time_Left, -16);

    lv_obj_set_align(ui_Bar_Time_Left, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_style_radius(ui_Bar_Time_Left, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Bar_Time_Left, lv_color_hex(0x4A4441), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar_Time_Left, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar_Time_Left, lv_color_hex(0xFF9110), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar_Time_Left, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_Group_Temp_Time1

    ui_Group_Temp_Time1 = lv_obj_create(ui_Group_Oven_Content);

    lv_obj_set_width(ui_Group_Temp_Time1, 165);
    lv_obj_set_height(ui_Group_Temp_Time1, lv_pct(100));

    lv_obj_set_x(ui_Group_Temp_Time1, 295);
    lv_obj_set_y(ui_Group_Temp_Time1, 0);

    lv_obj_set_align(ui_Group_Temp_Time1, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Temp_Time1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Temp_Time1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Temp_Time1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Temp1

    ui_Group_Temp1 = lv_obj_create(ui_Group_Temp_Time1);

    lv_obj_set_width(ui_Group_Temp1, lv_pct(79));
    lv_obj_set_height(ui_Group_Temp1, lv_pct(28));

    lv_obj_set_x(ui_Group_Temp1, 0);
    lv_obj_set_y(ui_Group_Temp1, 0);

    lv_obj_set_align(ui_Group_Temp1, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Temp1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Temp1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Temp1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Temp1, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Temp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Temp1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Temp1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Status

    ui_Label_Status = lv_label_create(ui_Group_Temp1);

    lv_obj_set_width(ui_Label_Status, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Status, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Status, 0);
    lv_obj_set_y(ui_Label_Status, 3);

    lv_obj_set_align(ui_Label_Status, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Status, "STATUS");

    lv_obj_set_style_text_color(ui_Label_Status, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Status, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Status, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Status_Text

    ui_Label_Status_Text = lv_label_create(ui_Group_Temp1);

    lv_obj_set_width(ui_Label_Status_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Status_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Status_Text, 0);
    lv_obj_set_y(ui_Label_Status_Text, 30);

    lv_obj_set_align(ui_Label_Status_Text, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Status_Text, "Baking");

    lv_obj_set_style_text_color(ui_Label_Status_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Status_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Status_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Status_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode

    ui_Group_Oven_Mode = lv_obj_create(ui_Group_Temp_Time1);

    lv_obj_set_width(ui_Group_Oven_Mode, lv_pct(100));
    lv_obj_set_height(ui_Group_Oven_Mode, lv_pct(71));

    lv_obj_set_x(ui_Group_Oven_Mode, 0);
    lv_obj_set_y(ui_Group_Oven_Mode, 0);

    lv_obj_set_align(ui_Group_Oven_Mode, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mode1

    ui_Label_Mode1 = lv_label_create(ui_Group_Oven_Mode);

    lv_obj_set_width(ui_Label_Mode1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mode1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode1, 0);
    lv_obj_set_y(ui_Label_Mode1, 7);

    lv_obj_set_align(ui_Label_Mode1, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Mode1, "MODE");

    lv_obj_set_style_text_color(ui_Label_Mode1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mode2

    ui_Label_Mode2 = lv_label_create(ui_Group_Oven_Mode);

    lv_obj_set_width(ui_Label_Mode2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mode2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode2, 0);
    lv_obj_set_y(ui_Label_Mode2, 37);

    lv_obj_set_align(ui_Label_Mode2, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Mode2, "Fan Forcet\nLower Element\nConvection");

    lv_obj_set_style_text_color(ui_Label_Mode2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode2, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_image_Oven_Mode_1

    ui_image_Oven_Mode_1 = lv_img_create(ui_Group_Oven_Mode);
    lv_img_set_src(ui_image_Oven_Mode_1, &ui_img_icn_oven_1_png);

    lv_obj_set_width(ui_image_Oven_Mode_1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_image_Oven_Mode_1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_image_Oven_Mode_1, 2);
    lv_obj_set_y(ui_image_Oven_Mode_1, -5);

    lv_obj_set_align(ui_image_Oven_Mode_1, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_image_Oven_Mode_1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_image_Oven_Mode_1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_image_Oven_Mode_1, 0, 0);

    // ui_Group_Info

    ui_Group_Info = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Info, 303);
    lv_obj_set_height(ui_Group_Info, 720);

    lv_obj_set_x(ui_Group_Info, 416);
    lv_obj_set_y(ui_Group_Info, -20);

    lv_obj_set_align(ui_Group_Info, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Info, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Info, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Info, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Time

    ui_Group_Time = lv_obj_create(ui_Group_Info);

    lv_obj_set_height(ui_Group_Time, 218);
    lv_obj_set_width(ui_Group_Time, lv_pct(84));

    lv_obj_set_x(ui_Group_Time, 0);
    lv_obj_set_y(ui_Group_Time, 0);

    lv_obj_set_align(ui_Group_Time, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Time, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Time, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Time, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Time, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Date

    ui_Label_Date = lv_label_create(ui_Group_Time);

    lv_obj_set_width(ui_Label_Date, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Date, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Date, 0);
    lv_obj_set_y(ui_Label_Date, 32);

    lv_obj_set_align(ui_Label_Date, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Date, "Saturday  |  Jun 23");

    lv_obj_set_style_text_color(ui_Label_Date, lv_color_hex(0xD8D5D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Date, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Time

    ui_Label_Time = lv_label_create(ui_Group_Time);

    lv_obj_set_width(ui_Label_Time, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Time, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Time, 0);
    lv_obj_set_y(ui_Label_Time, 32);

    lv_obj_set_align(ui_Label_Time, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Time, "09:35");

    lv_obj_set_style_text_color(ui_Label_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Weather

    ui_Group_Weather = lv_obj_create(ui_Group_Info);

    lv_obj_set_height(ui_Group_Weather, 150);
    lv_obj_set_width(ui_Group_Weather, lv_pct(84));

    lv_obj_set_x(ui_Group_Weather, 0);
    lv_obj_set_y(ui_Group_Weather, 220);

    lv_obj_set_align(ui_Group_Weather, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Weather, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Weather, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Weather, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Weather, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Weather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Weather, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Weather, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Weather

    ui_Weather = lv_obj_create(ui_Group_Weather);

    lv_obj_set_width(ui_Weather, 175);
    lv_obj_set_height(ui_Weather, 90);

    lv_obj_set_x(ui_Weather, 0);
    lv_obj_set_y(ui_Weather, 0);

    lv_obj_set_align(ui_Weather, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Weather, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Weather, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Weather, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Weather_Title

    ui_Label_Weather_Title = lv_label_create(ui_Weather);

    lv_obj_set_width(ui_Label_Weather_Title, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Weather_Title, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Weather_Title, 0);
    lv_obj_set_y(ui_Label_Weather_Title, 0);

    lv_label_set_text(ui_Label_Weather_Title, "Mondly Cloud");

    lv_obj_set_style_text_color(ui_Label_Weather_Title, lv_color_hex(0xD8D5D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Weather_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Weather_Title, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Weather_Info

    ui_Label_Weather_Info = lv_label_create(ui_Weather);

    lv_obj_set_width(ui_Label_Weather_Info, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Weather_Info, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Weather_Info, 0);
    lv_obj_set_y(ui_Label_Weather_Info, 32);

    lv_label_set_text(ui_Label_Weather_Info, "Rain: 90%\nHumidity: 65%");

    lv_obj_set_style_text_color(ui_Label_Weather_Info, lv_color_hex(0xD8D5D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Weather_Info, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label_Weather_Info, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label_Weather_Info, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Weather_Info, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Cloud_Group

    ui_Cloud_Group = lv_obj_create(ui_Group_Weather);

    lv_obj_set_width(ui_Cloud_Group, 63);
    lv_obj_set_height(ui_Cloud_Group, 90);

    lv_obj_set_x(ui_Cloud_Group, 0);
    lv_obj_set_y(ui_Cloud_Group, 0);

    lv_obj_set_align(ui_Cloud_Group, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Cloud_Group, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Cloud_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Cloud_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Weather_Icon

    ui_Image_Weather_Icon = lv_img_create(ui_Cloud_Group);
    lv_img_set_src(ui_Image_Weather_Icon, &ui_img_icn_weather_1_png);

    lv_obj_set_width(ui_Image_Weather_Icon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Weather_Icon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Weather_Icon, 0);
    lv_obj_set_y(ui_Image_Weather_Icon, 0);

    lv_obj_set_align(ui_Image_Weather_Icon, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Weather_Icon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Weather_Icon, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Weather_Icon, 0, 0);

    // ui_Label_Weather_Degree

    ui_Label_Weather_Degree = lv_label_create(ui_Cloud_Group);

    lv_obj_set_width(ui_Label_Weather_Degree, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Weather_Degree, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Weather_Degree, 2);
    lv_obj_set_y(ui_Label_Weather_Degree, -1);

    lv_obj_set_align(ui_Label_Weather_Degree, LV_ALIGN_BOTTOM_MID);

    lv_label_set_text(ui_Label_Weather_Degree, "36.5°");

    lv_obj_set_style_text_color(ui_Label_Weather_Degree, lv_color_hex(0xD8D5D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Weather_Degree, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Weather_Degree, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Mic

    ui_Group_Mic = lv_obj_create(ui_Group_Info);

    lv_obj_set_height(ui_Group_Mic, 349);
    lv_obj_set_width(ui_Group_Mic, lv_pct(84));

    lv_obj_set_x(ui_Group_Mic, 0);
    lv_obj_set_y(ui_Group_Mic, 372);

    lv_obj_set_align(ui_Group_Mic, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Group_Mic, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_Group_Mic, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Mic, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Mic, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mic_Text

    ui_Label_Mic_Text = lv_label_create(ui_Group_Mic);

    lv_obj_set_width(ui_Label_Mic_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mic_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mic_Text, 0);
    lv_obj_set_y(ui_Label_Mic_Text, -41);

    lv_obj_set_align(ui_Label_Mic_Text, LV_ALIGN_BOTTOM_MID);

    lv_label_set_text(ui_Label_Mic_Text, "\"Hey Oven\"\n\"Hey Hood\"\n\"Hey Aircon\"");

    lv_obj_set_style_text_color(ui_Label_Mic_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mic_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label_Mic_Text, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label_Mic_Text, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mic_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mic_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Talk

    ui_Label_Talk = lv_label_create(ui_Group_Mic);

    lv_obj_set_width(ui_Label_Talk, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Talk, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Talk, 0);
    lv_obj_set_y(ui_Label_Talk, -33);

    lv_obj_set_align(ui_Label_Talk, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Talk, "Talk to you appliance");

    lv_obj_set_style_text_color(ui_Label_Talk, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Talk, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Talk, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel5

    ui_Panel5 = lv_obj_create(ui_Group_Mic);

    lv_obj_set_width(ui_Panel5, 30);
    lv_obj_set_height(ui_Panel5, 2);

    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, 0);

    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image_Mic

    ui_Image_Mic = lv_img_create(ui_Group_Mic);
    lv_img_set_src(ui_Image_Mic, &ui_img_icn_mic_png);

    lv_obj_set_width(ui_Image_Mic, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Mic, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Mic, 0);
    lv_obj_set_y(ui_Image_Mic, 50);

    lv_obj_set_align(ui_Image_Mic, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Mic, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Mic, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Mic, 0, 0);

    // ui_Group_Voice

    ui_Group_Voice = lv_obj_create(ui_Group_Info);

    lv_obj_set_height(ui_Group_Voice, 349);
    lv_obj_set_width(ui_Group_Voice, lv_pct(84));

    lv_obj_set_x(ui_Group_Voice, 0);
    lv_obj_set_y(ui_Group_Voice, 372);

    lv_obj_set_align(ui_Group_Voice, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Voice, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Voice, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Voice, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Voince

    ui_Label_Voince = lv_label_create(ui_Group_Voice);

    lv_obj_set_width(ui_Label_Voince, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Voince, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Voince, 0);
    lv_obj_set_y(ui_Label_Voince, -85);

    lv_obj_set_align(ui_Label_Voince, LV_ALIGN_BOTTOM_MID);

    lv_label_set_text(ui_Label_Voince, ">>");

    lv_obj_set_style_text_color(ui_Label_Voince, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Voince, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label_Voince, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label_Voince, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Voince, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Voince, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_VoiceIn
    
    ui_Label_VoinceIn = lv_label_create(ui_Group_Voice);

    lv_obj_set_width(ui_Label_VoinceIn, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_VoinceIn, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_VoinceIn, 0);
    lv_obj_set_y(ui_Label_VoinceIn, -40);

    lv_obj_set_align(ui_Label_VoinceIn, LV_ALIGN_BOTTOM_MID);

    lv_label_set_text(ui_Label_VoinceIn, ">>");

    lv_obj_set_style_text_color(ui_Label_VoinceIn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_VoinceIn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label_VoinceIn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label_VoinceIn, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_VoinceIn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_VoinceIn, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Voice_Bg_3

    ui_Image_Voice_Bg_3 = lv_img_create(ui_Group_Voice);
    lv_img_set_src(ui_Image_Voice_Bg_3, &ui_img_mic_bg_3_png);

    lv_obj_set_width(ui_Image_Voice_Bg_3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Voice_Bg_3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Voice_Bg_3, 0);
    lv_obj_set_y(ui_Image_Voice_Bg_3, -25);

    lv_obj_set_align(ui_Image_Voice_Bg_3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Voice_Bg_3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Voice_Bg_3, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Voice_Bg_3, 74, 74);

    // ui_Image_Voice_Bg_2

    ui_Image_Voice_Bg_2 = lv_img_create(ui_Group_Voice);
    lv_img_set_src(ui_Image_Voice_Bg_2, &ui_img_mic_bg_2_png);

    lv_obj_set_width(ui_Image_Voice_Bg_2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Voice_Bg_2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Voice_Bg_2, 0);
    lv_obj_set_y(ui_Image_Voice_Bg_2, -25);

    lv_obj_set_align(ui_Image_Voice_Bg_2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Voice_Bg_2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Voice_Bg_2, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Voice_Bg_2, 64, 64);

    // ui_Image_Voice_Bg_1

    ui_Image_Voice_Bg_1 = lv_img_create(ui_Group_Voice);
    lv_img_set_src(ui_Image_Voice_Bg_1, &ui_img_mic_bg_1_png);

    lv_obj_set_width(ui_Image_Voice_Bg_1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Voice_Bg_1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Voice_Bg_1, 0);
    lv_obj_set_y(ui_Image_Voice_Bg_1, -25);

    lv_obj_set_align(ui_Image_Voice_Bg_1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Voice_Bg_1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Voice_Bg_1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Voice_Bg_1, 51, 51);

    // ui_Image_Mic_Voive

    ui_Image_Mic_Voive = lv_img_create(ui_Group_Voice);
    lv_img_set_src(ui_Image_Mic_Voive, &ui_img_mic_png);

    lv_obj_set_width(ui_Image_Mic_Voive, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Mic_Voive, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Mic_Voive, 0);
    lv_obj_set_y(ui_Image_Mic_Voive, -25);

    lv_obj_set_align(ui_Image_Mic_Voive, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Mic_Voive, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Mic_Voive, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Mic_Voive, 0, 0);

    // ui_BTN_Menu

    ui_BTN_Menu = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_BTN_Menu, &ui_img_icn_menu_png);

    lv_obj_set_width(ui_BTN_Menu, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BTN_Menu, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BTN_Menu, 0);
    lv_obj_set_y(ui_BTN_Menu, 0);

    lv_obj_set_align(ui_BTN_Menu, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Menu, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE);
    lv_obj_clear_flag(ui_BTN_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_BTN_Menu, 0, 0);

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);

    lv_obj_set_x(ui_Button1, 620);
    lv_obj_set_y(ui_Button1, 61);

    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image_Aircon

    ui_Image_Aircon = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Aircon, &ui_img_aircon_small_png);

    lv_obj_set_width(ui_Image_Aircon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Aircon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Aircon, 41);
    lv_obj_set_y(ui_Image_Aircon, 23);

    lv_obj_add_flag(ui_Image_Aircon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon, 0, 0);

    // ui_Image_Aircon_Menu_Swing

    ui_Image_Aircon_Menu_Swing = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Aircon_Menu_Swing, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Aircon_Menu_Swing, 298);
    lv_obj_set_height(ui_Image_Aircon_Menu_Swing, 39);

    lv_obj_set_x(ui_Image_Aircon_Menu_Swing, 52);
    lv_obj_set_y(ui_Image_Aircon_Menu_Swing, 116);

    lv_obj_add_flag(ui_Image_Aircon_Menu_Swing, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Menu_Swing, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Menu_Swing, 0, 0);

    // ui_Image_Oven_Menu

    ui_Image_Oven_Menu = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Oven_Menu, &ui_img_oven_menu_png);

    lv_obj_set_width(ui_Image_Oven_Menu, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Menu, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Menu, 477);
    lv_obj_set_y(ui_Image_Oven_Menu, 397);

    lv_obj_add_flag(ui_Image_Oven_Menu, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Menu, 0, 0);

    // ui_Image_Oven_Light_Menu

    ui_Image_Oven_Light_Menu = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Oven_Light_Menu, &ui_img_oven_light_menu_png);

    lv_obj_set_width(ui_Image_Oven_Light_Menu, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Light_Menu, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Light_Menu, 487);
    lv_obj_set_y(ui_Image_Oven_Light_Menu, 398);

    lv_obj_add_flag(ui_Image_Oven_Light_Menu, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Light_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Light_Menu, 0, 0);

    // ui_Image_Oven_Menu_Fan

    ui_Image_Oven_Menu_Fan = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Oven_Menu_Fan, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Oven_Menu_Fan, 71);
    lv_obj_set_height(ui_Image_Oven_Menu_Fan, 70);

    lv_obj_set_x(ui_Image_Oven_Menu_Fan, -6);
    lv_obj_set_y(ui_Image_Oven_Menu_Fan, 184);

    lv_obj_set_align(ui_Image_Oven_Menu_Fan, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_Menu_Fan, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Menu_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Menu_Fan, 0, 0);

    // ui_Image_Aircon_Menu_Fan

    ui_Image_Aircon_Menu_Fan = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Aircon_Menu_Fan, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Aircon_Menu_Fan, 45);
    lv_obj_set_height(ui_Image_Aircon_Menu_Fan, 45);

    lv_obj_set_x(ui_Image_Aircon_Menu_Fan, 300);
    lv_obj_set_y(ui_Image_Aircon_Menu_Fan, 32);

    lv_obj_add_flag(ui_Image_Aircon_Menu_Fan, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Menu_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Menu_Fan, 0, 0);

    // ui_Image_Oven_Anim_Menu

    ui_Image_Oven_Anim_Menu = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Oven_Anim_Menu, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Oven_Anim_Menu, 279);
    lv_obj_set_height(ui_Image_Oven_Anim_Menu, 277);

    lv_obj_set_x(ui_Image_Oven_Anim_Menu, 477);
    lv_obj_set_y(ui_Image_Oven_Anim_Menu, 397);

    lv_obj_add_flag(ui_Image_Oven_Anim_Menu, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Anim_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Anim_Menu, 0, 0);

    // ui_Image_Aircon_Menu_Cool

    ui_Image_Aircon_Menu_Cool = lv_img_create(ui_Panel_Menu);
    lv_img_set_src(ui_Image_Aircon_Menu_Cool, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Aircon_Menu_Cool, 46);
    lv_obj_set_height(ui_Image_Aircon_Menu_Cool, 46);

    lv_obj_set_x(ui_Image_Aircon_Menu_Cool, 254);
    lv_obj_set_y(ui_Image_Aircon_Menu_Cool, 31);

    lv_obj_add_flag(ui_Image_Aircon_Menu_Cool, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Menu_Cool, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Menu_Cool, 0, 0);

    // ui_Group_Smog_Menu1

    ui_Group_Smog_Menu1 = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Smog_Menu1, 256);
    lv_obj_set_height(ui_Group_Smog_Menu1, 152);

    lv_obj_set_x(ui_Group_Smog_Menu1, -65);
    lv_obj_set_y(ui_Group_Smog_Menu1, -341);

    lv_obj_set_align(ui_Group_Smog_Menu1, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Smog_Menu1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Smog_Menu1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Smog_Menu1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Smog1_Menu

    ui_Image_Smog1_Menu = lv_img_create(ui_Group_Smog_Menu1);
    lv_img_set_src(ui_Image_Smog1_Menu, &ui_img_smog_1_png);

    lv_obj_set_height(ui_Image_Smog1_Menu, 656);
    lv_obj_set_width(ui_Image_Smog1_Menu, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog1_Menu, 7);
    lv_obj_set_y(ui_Image_Smog1_Menu, 0);

    lv_obj_set_align(ui_Image_Smog1_Menu, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog1_Menu, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog1_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog1_Menu, 0, 0);

    // ui_Image_Smog2_Menu

    ui_Image_Smog2_Menu = lv_img_create(ui_Group_Smog_Menu1);
    lv_img_set_src(ui_Image_Smog2_Menu, &ui_img_smog_2_png);

    lv_obj_set_height(ui_Image_Smog2_Menu, 936);
    lv_obj_set_width(ui_Image_Smog2_Menu, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog2_Menu, 5);
    lv_obj_set_y(ui_Image_Smog2_Menu, 0);

    lv_obj_set_align(ui_Image_Smog2_Menu, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog2_Menu, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog2_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog2_Menu, 0, 0);

    // ui_Group_Smog_Menu2

    ui_Group_Smog_Menu2 = lv_obj_create(ui_Panel_Menu);

    lv_obj_set_width(ui_Group_Smog_Menu2, 256);
    lv_obj_set_height(ui_Group_Smog_Menu2, 157);

    lv_obj_set_x(ui_Group_Smog_Menu2, 46);
    lv_obj_set_y(ui_Group_Smog_Menu2, -335);

    lv_obj_set_align(ui_Group_Smog_Menu2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Smog_Menu2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Smog_Menu2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Smog_Menu2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Smog1_Menu1

    ui_Image_Smog1_Menu1 = lv_img_create(ui_Group_Smog_Menu2);
    lv_img_set_src(ui_Image_Smog1_Menu1, &ui_img_smog_1_png);

    lv_obj_set_height(ui_Image_Smog1_Menu1, 656);
    lv_obj_set_width(ui_Image_Smog1_Menu1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog1_Menu1, 7);
    lv_obj_set_y(ui_Image_Smog1_Menu1, 0);

    lv_obj_set_align(ui_Image_Smog1_Menu1, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog1_Menu1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog1_Menu1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog1_Menu1, 0, 0);

    // ui_Image_Smog2_Menu1

    ui_Image_Smog2_Menu1 = lv_img_create(ui_Group_Smog_Menu2);
    lv_img_set_src(ui_Image_Smog2_Menu1, &ui_img_smog_2_png);

    lv_obj_set_height(ui_Image_Smog2_Menu1, 936);
    lv_obj_set_width(ui_Image_Smog2_Menu1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog2_Menu1, 0);
    lv_obj_set_y(ui_Image_Smog2_Menu1, 0);

    lv_obj_set_align(ui_Image_Smog2_Menu1, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog2_Menu1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog2_Menu1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog2_Menu1, 0, 0);

}
void ui_Aircon_screen_init(void)
{

    // ui_Aircon

    ui_Aircon = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Aircon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Panel_Aircon

    ui_Panel_Aircon = lv_obj_create(ui_Aircon);

    lv_obj_set_width(ui_Panel_Aircon, lv_pct(100));
    lv_obj_set_height(ui_Panel_Aircon, lv_pct(100));

    lv_obj_set_x(ui_Panel_Aircon, 0);
    lv_obj_set_y(ui_Panel_Aircon, 0);

    lv_obj_set_align(ui_Panel_Aircon, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel_Aircon, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel_Aircon, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Aircon, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Aircon, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Aircon, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Aircon, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Aircon, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Aircon_Bg

    ui_Image_Aircon_Bg = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_Image_Aircon_Bg, &ui_img_aircon_bg_png);

    lv_obj_set_width(ui_Image_Aircon_Bg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Aircon_Bg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Aircon_Bg, 0);
    lv_obj_set_y(ui_Image_Aircon_Bg, 0);

    lv_obj_set_align(ui_Image_Aircon_Bg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Aircon_Bg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Bg, 0, 0);

    // ui_Group_Aircon_Content2

    ui_Group_Aircon_Content2 = lv_obj_create(ui_Panel_Aircon);

    lv_obj_set_width(ui_Group_Aircon_Content2, 396);
    lv_obj_set_height(ui_Group_Aircon_Content2, lv_pct(100));

    lv_obj_set_x(ui_Group_Aircon_Content2, -50);
    lv_obj_set_y(ui_Group_Aircon_Content2, 0);

    lv_obj_set_align(ui_Group_Aircon_Content2, LV_ALIGN_TOP_RIGHT);

    lv_obj_clear_flag(ui_Group_Aircon_Content2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Aircon_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Aircon_Content2, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Content2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Aircon_Content2, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Group_Aircon_Content2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Group_Aircon_Content2, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Group_Aircon_Content2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Group_Aircon_Content2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Aircon_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Aircon_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Aircon_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Aircon_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Aircon_Line2

    ui_Aircon_Line2 = lv_obj_create(ui_Group_Aircon_Content2);

    lv_obj_set_height(ui_Aircon_Line2, 20);
    lv_obj_set_width(ui_Aircon_Line2, lv_pct(105));

    lv_obj_set_x(ui_Aircon_Line2, -10);
    lv_obj_set_y(ui_Aircon_Line2, -17);

    lv_obj_clear_flag(ui_Aircon_Line2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Aircon_Line2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Aircon_Line2, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Aircon_Line2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Set_Temp

    ui_Group_Set_Temp = lv_obj_create(ui_Group_Aircon_Content2);

    lv_obj_set_height(ui_Group_Set_Temp, 180);
    lv_obj_set_width(ui_Group_Set_Temp, lv_pct(95));

    lv_obj_set_x(ui_Group_Set_Temp, 0);
    lv_obj_set_y(ui_Group_Set_Temp, 10);

    lv_obj_set_align(ui_Group_Set_Temp, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Set_Temp, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Set_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Set_Temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Set_Temp, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Set_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Set_Temp, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Set_Temp, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_set_Temp

    ui_Label_set_Temp = lv_label_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_Label_set_Temp, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_set_Temp, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_set_Temp, 0);
    lv_obj_set_y(ui_Label_set_Temp, 10);

    lv_obj_set_align(ui_Label_set_Temp, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_set_Temp, "SET TEMPEREATURE");

    lv_obj_set_style_text_color(ui_Label_set_Temp, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_set_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_set_Temp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_set_Temp, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Aircon_Number2

    ui_Label_Aircon_Number2 = lv_label_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_Label_Aircon_Number2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Number2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Number2, -259);
    lv_obj_set_y(ui_Label_Aircon_Number2, 20);

    lv_obj_set_align(ui_Label_Aircon_Number2, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Aircon_Number2, "21");

    lv_obj_set_style_text_color(ui_Label_Aircon_Number2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Number2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aircon_Number2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Number2, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Aircon_Number3

    ui_Label_Aircon_Number3 = lv_label_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_Label_Aircon_Number3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Number3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Number3, -220);
    lv_obj_set_y(ui_Label_Aircon_Number3, 43);

    lv_obj_set_align(ui_Label_Aircon_Number3, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Aircon_Number3, ".5");

    lv_obj_set_style_text_color(ui_Label_Aircon_Number3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Number3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Number3, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius3

    ui_Label_Celsius3 = lv_label_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_Label_Celsius3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius3, -219);
    lv_obj_set_y(ui_Label_Celsius3, -21);

    lv_obj_set_align(ui_Label_Celsius3, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Celsius3, "°C");

    lv_obj_set_style_text_color(ui_Label_Celsius3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius3, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BTN_Temp_Up

    ui_BTN_Temp_Up = lv_btn_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_BTN_Temp_Up, 85);
    lv_obj_set_height(ui_BTN_Temp_Up, 65);

    lv_obj_set_x(ui_BTN_Temp_Up, -105);
    lv_obj_set_y(ui_BTN_Temp_Up, 16);

    lv_obj_set_align(ui_BTN_Temp_Up, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Temp_Up, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Temp_Up, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Temp_Up, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Up, lv_color_hex(0x29BAE6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Up, lv_color_hex(0xCDF6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Up, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_BTN_Temp_Up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_BTN_Temp_Up, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Up, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Up, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Up, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Up, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Up, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Up, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Image_Up

    ui_Image_Up = lv_img_create(ui_BTN_Temp_Up);
    lv_img_set_src(ui_Image_Up, &ui_img_arrow_up_png);

    lv_obj_set_width(ui_Image_Up, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Up, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Up, 0);
    lv_obj_set_y(ui_Image_Up, 0);

    lv_obj_set_align(ui_Image_Up, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Up, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Up, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Up, 0, 0);

    // ui_BTN_Temp_Down

    ui_BTN_Temp_Down = lv_btn_create(ui_Group_Set_Temp);

    lv_obj_set_width(ui_BTN_Temp_Down, 85);
    lv_obj_set_height(ui_BTN_Temp_Down, 65);

    lv_obj_set_x(ui_BTN_Temp_Down, -2);
    lv_obj_set_y(ui_BTN_Temp_Down, 15);

    lv_obj_set_align(ui_BTN_Temp_Down, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Temp_Down, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Temp_Down, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Temp_Down, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Down, lv_color_hex(0x29BAE6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Down, lv_color_hex(0xCDF6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Down, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_BTN_Temp_Down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_BTN_Temp_Down, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Down, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Down, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Down, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Down, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Down, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Down, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Image_Down

    ui_Image_Down = lv_img_create(ui_BTN_Temp_Down);
    lv_img_set_src(ui_Image_Down, &ui_img_arrow_down_png);

    lv_obj_set_width(ui_Image_Down, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Down, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Down, 0);
    lv_obj_set_y(ui_Image_Down, 0);

    lv_obj_set_align(ui_Image_Down, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Down, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Down, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Down, 0, 0);

    // ui_Group_Set_Timer

    ui_Group_Set_Timer = lv_obj_create(ui_Group_Aircon_Content2);

    lv_obj_set_height(ui_Group_Set_Timer, 158);
    lv_obj_set_width(ui_Group_Set_Timer, lv_pct(95));

    lv_obj_set_x(ui_Group_Set_Timer, 0);
    lv_obj_set_y(ui_Group_Set_Timer, 190);

    lv_obj_set_align(ui_Group_Set_Timer, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Set_Timer, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Set_Timer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Set_Timer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Set_Timer, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Set_Timer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Set_Timer, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Set_Timer, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Set_Timer

    ui_Label_Set_Timer = lv_label_create(ui_Group_Set_Timer);

    lv_obj_set_width(ui_Label_Set_Timer, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Set_Timer, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Set_Timer, 0);
    lv_obj_set_y(ui_Label_Set_Timer, 17);

    lv_obj_set_align(ui_Label_Set_Timer, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Set_Timer, "SET TIMER");

    lv_obj_set_style_text_color(ui_Label_Set_Timer, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Set_Timer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Set_Timer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Set_Timer, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Aircon_Number5

    ui_Label_Aircon_Number5 = lv_label_create(ui_Group_Set_Timer);

    lv_obj_set_width(ui_Label_Aircon_Number5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Number5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Number5, -221);
    lv_obj_set_y(ui_Label_Aircon_Number5, 21);

    lv_obj_set_align(ui_Label_Aircon_Number5, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Aircon_Number5, "15 : 30");

    lv_obj_set_style_text_color(ui_Label_Aircon_Number5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Number5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Number5, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BTN_Temp_Up2

    ui_BTN_Temp_Up2 = lv_btn_create(ui_Group_Set_Timer);

    lv_obj_set_width(ui_BTN_Temp_Up2, 85);
    lv_obj_set_height(ui_BTN_Temp_Up2, 65);

    lv_obj_set_x(ui_BTN_Temp_Up2, -105);
    lv_obj_set_y(ui_BTN_Temp_Up2, 16);

    lv_obj_set_align(ui_BTN_Temp_Up2, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Temp_Up2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Temp_Up2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Temp_Up2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Up2, lv_color_hex(0x29BAE6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Up2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Up2, lv_color_hex(0xCDF6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Up2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Up2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Up2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_BTN_Temp_Up2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_BTN_Temp_Up2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Up2, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Up2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Up2, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Up2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Up2, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Up2, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Image_Up1

    ui_Image_Up1 = lv_img_create(ui_BTN_Temp_Up2);
    lv_img_set_src(ui_Image_Up1, &ui_img_arrow_up_png);

    lv_obj_set_width(ui_Image_Up1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Up1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Up1, 0);
    lv_obj_set_y(ui_Image_Up1, 0);

    lv_obj_set_align(ui_Image_Up1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Up1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Up1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Up1, 0, 0);

    // ui_BTN_Temp_Down2

    ui_BTN_Temp_Down2 = lv_btn_create(ui_Group_Set_Timer);

    lv_obj_set_width(ui_BTN_Temp_Down2, 85);
    lv_obj_set_height(ui_BTN_Temp_Down2, 65);

    lv_obj_set_x(ui_BTN_Temp_Down2, -2);
    lv_obj_set_y(ui_BTN_Temp_Down2, 15);

    lv_obj_set_align(ui_BTN_Temp_Down2, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Temp_Down2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Temp_Down2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Temp_Down2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Down2, lv_color_hex(0x29BAE6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Down2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Down2, lv_color_hex(0xCDF6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Down2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Down2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Down2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_BTN_Temp_Down2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_BTN_Temp_Down2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Temp_Down2, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_BTN_Temp_Down2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_BTN_Temp_Down2, lv_color_hex(0x18C220), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Temp_Down2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Temp_Down2, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Temp_Down2, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Image_Down1

    ui_Image_Down1 = lv_img_create(ui_BTN_Temp_Down2);
    lv_img_set_src(ui_Image_Down1, &ui_img_arrow_down_png);

    lv_obj_set_width(ui_Image_Down1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Down1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Down1, 0);
    lv_obj_set_y(ui_Image_Down1, 0);

    lv_obj_set_align(ui_Image_Down1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Down1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Down1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Down1, 0, 0);

    // ui_Group_Select_Mode

    ui_Group_Select_Mode = lv_obj_create(ui_Group_Aircon_Content2);

    lv_obj_set_height(ui_Group_Select_Mode, 208);
    lv_obj_set_width(ui_Group_Select_Mode, lv_pct(95));

    lv_obj_set_x(ui_Group_Select_Mode, 0);
    lv_obj_set_y(ui_Group_Select_Mode, 346);

    lv_obj_set_align(ui_Group_Select_Mode, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Select_Mode, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Select_Mode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Select_Mode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Select_Mode, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Select_Mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Select_Mode, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Select_Mode, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Select_Mode

    ui_Label_Select_Mode = lv_label_create(ui_Group_Select_Mode);

    lv_obj_set_width(ui_Label_Select_Mode, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Select_Mode, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Select_Mode, 0);
    lv_obj_set_y(ui_Label_Select_Mode, 21);

    lv_obj_set_align(ui_Label_Select_Mode, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Select_Mode, "SELECT MODE");

    lv_obj_set_style_text_color(ui_Label_Select_Mode, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Select_Mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Select_Mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Select_Mode, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Aircon_Mode1

    ui_Group_Aircon_Mode1 = lv_obj_create(ui_Group_Select_Mode);

    lv_obj_set_width(ui_Group_Aircon_Mode1, 114);
    lv_obj_set_height(ui_Group_Aircon_Mode1, 46);

    lv_obj_set_x(ui_Group_Aircon_Mode1, -20);
    lv_obj_set_y(ui_Group_Aircon_Mode1, -5);

    lv_obj_set_align(ui_Group_Aircon_Mode1, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Group_Aircon_Mode1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Aircon_Mode1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Mode1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Cool1

    ui_Image_Cool1 = lv_img_create(ui_Group_Aircon_Mode1);
    lv_img_set_src(ui_Image_Cool1, &ui_img_icn_cool_png);

    lv_obj_set_width(ui_Image_Cool1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Cool1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Cool1, 3);
    lv_obj_set_y(ui_Image_Cool1, 0);

    lv_obj_set_align(ui_Image_Cool1, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Cool1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Cool1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Cool1, 0, 0);

    // ui_Label_Aricon_Comp_Text

    ui_Label_Aricon_Comp_Text = lv_label_create(ui_Group_Aircon_Mode1);

    lv_obj_set_width(ui_Label_Aricon_Comp_Text, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aricon_Comp_Text, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aricon_Comp_Text, 15);
    lv_obj_set_y(ui_Label_Aricon_Comp_Text, 8);

    lv_obj_set_align(ui_Label_Aricon_Comp_Text, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Aricon_Comp_Text, "On");

    lv_obj_set_style_text_color(ui_Label_Aricon_Comp_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aricon_Comp_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aricon_Comp_Text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aricon_Comp_Text, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Comp

    ui_Label_Comp = lv_label_create(ui_Group_Aircon_Mode1);

    lv_obj_set_width(ui_Label_Comp, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Comp, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Comp, 15);
    lv_obj_set_y(ui_Label_Comp, -14);

    lv_obj_set_align(ui_Label_Comp, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Comp, "Comp.");

    lv_obj_set_style_text_color(ui_Label_Comp, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Comp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Comp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Comp, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Aircon_Fan1

    ui_Group_Aircon_Fan1 = lv_obj_create(ui_Group_Select_Mode);

    lv_obj_set_width(ui_Group_Aircon_Fan1, 114);
    lv_obj_set_height(ui_Group_Aircon_Fan1, 46);

    lv_obj_set_x(ui_Group_Aircon_Fan1, -20);
    lv_obj_set_y(ui_Group_Aircon_Fan1, 60);

    lv_obj_set_align(ui_Group_Aircon_Fan1, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Group_Aircon_Fan1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Aircon_Fan1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Aircon_Fan1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Fsn1

    ui_Image_Fsn1 = lv_img_create(ui_Group_Aircon_Fan1);
    lv_img_set_src(ui_Image_Fsn1, &ui_img_icn_fan_high_png);

    lv_obj_set_width(ui_Image_Fsn1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Fsn1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Fsn1, 2);
    lv_obj_set_y(ui_Image_Fsn1, 0);

    lv_obj_set_align(ui_Image_Fsn1, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Fsn1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Fsn1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Fsn1, 0, 0);

    // ui_Label_Aircon_Fan_Text1

    ui_Label_Aircon_Fan_Text1 = lv_label_create(ui_Group_Aircon_Fan1);

    lv_obj_set_width(ui_Label_Aircon_Fan_Text1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Aircon_Fan_Text1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Aircon_Fan_Text1, 15);
    lv_obj_set_y(ui_Label_Aircon_Fan_Text1, 8);

    lv_obj_set_align(ui_Label_Aircon_Fan_Text1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Aircon_Fan_Text1, "High");

    lv_obj_set_style_text_color(ui_Label_Aircon_Fan_Text1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Aircon_Fan_Text1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Aircon_Fan_Text1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Aircon_Fan_Text1, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius4

    ui_Label_Celsius4 = lv_label_create(ui_Group_Aircon_Fan1);

    lv_obj_set_width(ui_Label_Celsius4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius4, 15);
    lv_obj_set_y(ui_Label_Celsius4, -14);

    lv_obj_set_align(ui_Label_Celsius4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Celsius4, "FAN");

    lv_obj_set_style_text_color(ui_Label_Celsius4, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Celsius4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius4, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Line4

    ui_Line4 = lv_obj_create(ui_Group_Select_Mode);

    lv_obj_set_width(ui_Line4, 2);
    lv_obj_set_height(ui_Line4, 107);

    lv_obj_set_x(ui_Line4, 25);
    lv_obj_set_y(ui_Line4, 25);

    lv_obj_set_align(ui_Line4, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line4, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Roller_Aircon_Mode

    ui_Roller_Aircon_Mode = lv_roller_create(ui_Group_Select_Mode);
    lv_roller_set_options(ui_Roller_Aircon_Mode, "FAN\nCOOL\nDRY", LV_ROLLER_MODE_INFINITE);

    lv_obj_set_width(ui_Roller_Aircon_Mode, 176);
    lv_obj_set_height(ui_Roller_Aircon_Mode, 117);

    lv_obj_set_x(ui_Roller_Aircon_Mode, 0);
    lv_obj_set_y(ui_Roller_Aircon_Mode, 24);

    lv_obj_set_align(ui_Roller_Aircon_Mode, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_text_color(ui_Roller_Aircon_Mode, lv_color_hex(0x9D9D9D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Roller_Aircon_Mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Roller_Aircon_Mode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Roller_Aircon_Mode, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Roller_Aircon_Mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Roller_Aircon_Mode, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Roller_Aircon_Mode, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller_Aircon_Mode, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller_Aircon_Mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Roller_Aircon_Mode, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_Roller_Aircon_Mode, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Roller_Aircon_Mode, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Roller_Aircon_Mode, &ui_font_SemiBold, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller_Aircon_Mode, lv_color_hex(0x20A1C5), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller_Aircon_Mode, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    // ui_Group_Switch

    ui_Group_Switch = lv_obj_create(ui_Group_Aircon_Content2);

    lv_obj_set_height(ui_Group_Switch, 91);
    lv_obj_set_width(ui_Group_Switch, lv_pct(95));

    lv_obj_set_x(ui_Group_Switch, 0);
    lv_obj_set_y(ui_Group_Switch, 565);

    lv_obj_set_align(ui_Group_Switch, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Switch, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Switch, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Switch, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Swing

    ui_Label_Swing = lv_label_create(ui_Group_Switch);

    lv_obj_set_width(ui_Label_Swing, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Swing, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Swing, 0);
    lv_obj_set_y(ui_Label_Swing, 0);

    lv_obj_set_align(ui_Label_Swing, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Swing, "SWING");

    lv_obj_set_style_text_color(ui_Label_Swing, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Swing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Swing, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Swing, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch_Swing

    ui_Switch_Swing = lv_switch_create(ui_Group_Switch);

    lv_obj_set_width(ui_Switch_Swing, 70);
    lv_obj_set_height(ui_Switch_Swing, 40);

    lv_obj_set_x(ui_Switch_Swing, 84);
    lv_obj_set_y(ui_Switch_Swing, 1);

    lv_obj_set_align(ui_Switch_Swing, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_radius(ui_Switch_Swing, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Swing, lv_color_hex(0x6A6A6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Swing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Switch_Swing, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Swing, lv_color_hex(0x29BAE6), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Switch_Swing, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_radius(ui_Switch_Swing, 100, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Swing, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Swing, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Switch_Swing, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Switch_Swing, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Switch_Swing, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Switch_Swing, -5, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Line5

    ui_Line5 = lv_obj_create(ui_Group_Switch);

    lv_obj_set_width(ui_Line5, 2);
    lv_obj_set_height(ui_Line5, 65);

    lv_obj_set_x(ui_Line5, 0);
    lv_obj_set_y(ui_Line5, 0);

    lv_obj_set_align(ui_Line5, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line5, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Fan_High

    ui_Label_Fan_High = lv_label_create(ui_Group_Switch);

    lv_obj_set_width(ui_Label_Fan_High, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Fan_High, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Fan_High, -104);
    lv_obj_set_y(ui_Label_Fan_High, 0);

    lv_obj_set_align(ui_Label_Fan_High, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Fan_High, "FAN\nHIGH");

    lv_obj_set_style_text_color(ui_Label_Fan_High, lv_color_hex(0x52DAFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Fan_High, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Fan_High, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Fan_High, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch_Fan_High

    ui_Switch_Fan_High = lv_switch_create(ui_Group_Switch);

    lv_obj_set_width(ui_Switch_Fan_High, 70);
    lv_obj_set_height(ui_Switch_Fan_High, 40);

    lv_obj_set_x(ui_Switch_Fan_High, -17);
    lv_obj_set_y(ui_Switch_Fan_High, 0);

    lv_obj_set_align(ui_Switch_Fan_High, LV_ALIGN_RIGHT_MID);

    lv_obj_add_state(ui_Switch_Fan_High, LV_STATE_CHECKED);

    lv_obj_set_style_radius(ui_Switch_Fan_High, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Fan_High, lv_color_hex(0x6A6A6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Fan_High, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Switch_Fan_High, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Fan_High, lv_color_hex(0x29BAE6), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Switch_Fan_High, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_radius(ui_Switch_Fan_High, 100, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Fan_High, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Fan_High, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Switch_Fan_High, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Switch_Fan_High, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Switch_Fan_High, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Switch_Fan_High, -5, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_BTN_Menu1

    ui_BTN_Menu1 = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_BTN_Menu1, &ui_img_icn_menu_png);

    lv_obj_set_width(ui_BTN_Menu1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BTN_Menu1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BTN_Menu1, 0);
    lv_obj_set_y(ui_BTN_Menu1, 0);

    lv_obj_set_align(ui_BTN_Menu1, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Menu1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_BTN_Menu1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_BTN_Menu1, 0, 0);

    // ui_BTN_Back1

    ui_BTN_Back1 = lv_btn_create(ui_Panel_Aircon);

    lv_obj_set_width(ui_BTN_Back1, 155);
    lv_obj_set_height(ui_BTN_Back1, 65);

    lv_obj_set_x(ui_BTN_Back1, -55);
    lv_obj_set_y(ui_BTN_Back1, -3);

    lv_obj_add_flag(ui_BTN_Back1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Back1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Back1, 65, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Back1, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Back1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_BACK1

    ui_Label_BACK1 = lv_label_create(ui_BTN_Back1);

    lv_obj_set_width(ui_Label_BACK1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_BACK1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_BACK1, 13);
    lv_obj_set_y(ui_Label_BACK1, 0);

    lv_obj_set_align(ui_Label_BACK1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_BACK1, "BACK");

    lv_obj_set_style_text_color(ui_Label_BACK1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_BACK1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_BACK1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Title_Bg1

    ui_Title_Bg1 = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_Title_Bg1, &ui_img_title_bg_png);

    lv_obj_set_width(ui_Title_Bg1, 799);
    lv_obj_set_height(ui_Title_Bg1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Title_Bg1, -18);
    lv_obj_set_y(ui_Title_Bg1, 31);

    lv_obj_set_align(ui_Title_Bg1, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_add_flag(ui_Title_Bg1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Title_Bg1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Title_Bg1, 0, 0);

    // ui_Label_Title_Aircon

    ui_Label_Title_Aircon = lv_label_create(ui_Title_Bg1);

    lv_obj_set_width(ui_Label_Title_Aircon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Title_Aircon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Title_Aircon, -76);
    lv_obj_set_y(ui_Label_Title_Aircon, 1);

    lv_obj_set_align(ui_Label_Title_Aircon, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Title_Aircon, "Air Conditioner");

    lv_obj_set_style_text_color(ui_Label_Title_Aircon, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Title_Aircon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Title_Aircon, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Hood_Swing

    ui_Image_Hood_Swing = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_Image_Hood_Swing, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Hood_Swing, 639);
    lv_obj_set_height(ui_Image_Hood_Swing, 113);

    lv_obj_set_x(ui_Image_Hood_Swing, -208);
    lv_obj_set_y(ui_Image_Hood_Swing, 76);

    lv_obj_set_align(ui_Image_Hood_Swing, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Hood_Swing, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood_Swing, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood_Swing, 0, 0);

    // ui_Image_Aircon_Fan

    ui_Image_Aircon_Fan = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_Image_Aircon_Fan, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Aircon_Fan, 98);
    lv_obj_set_height(ui_Image_Aircon_Fan, 98);

    lv_obj_set_x(ui_Image_Aircon_Fan, 54);
    lv_obj_set_y(ui_Image_Aircon_Fan, -91);

    lv_obj_set_align(ui_Image_Aircon_Fan, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Aircon_Fan, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aircon_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aircon_Fan, 0, 0);

    // ui_Image_Aicon_Cool

    ui_Image_Aicon_Cool = lv_img_create(ui_Panel_Aircon);
    lv_img_set_src(ui_Image_Aicon_Cool, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Aicon_Cool, 92);
    lv_obj_set_height(ui_Image_Aicon_Cool, 102);

    lv_obj_set_x(ui_Image_Aicon_Cool, -42);
    lv_obj_set_y(ui_Image_Aicon_Cool, -101);

    lv_obj_set_align(ui_Image_Aicon_Cool, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Aicon_Cool, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Aicon_Cool, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Aicon_Cool, 0, 0);

}
void ui_Hood_screen_init(void)
{

    // ui_Hood

    ui_Hood = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Hood, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image_Hood_Bg

    ui_Image_Hood_Bg = lv_img_create(ui_Hood);
    lv_img_set_src(ui_Image_Hood_Bg, &ui_img_hood_bg_png);

    lv_obj_set_width(ui_Image_Hood_Bg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Hood_Bg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Hood_Bg, 0);
    lv_obj_set_y(ui_Image_Hood_Bg, 0);

    lv_obj_set_align(ui_Image_Hood_Bg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Hood_Bg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood_Bg, 0, 0);

    // ui_Panel_Hood

    ui_Panel_Hood = lv_obj_create(ui_Hood);

    lv_obj_set_width(ui_Panel_Hood, lv_pct(100));
    lv_obj_set_height(ui_Panel_Hood, lv_pct(100));

    lv_obj_set_x(ui_Panel_Hood, 0);
    lv_obj_set_y(ui_Panel_Hood, 0);

    lv_obj_set_align(ui_Panel_Hood, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel_Hood, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel_Hood, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Hood, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Hood, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Hood, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Hood, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Hood, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Title_Bg2

    ui_Title_Bg2 = lv_img_create(ui_Panel_Hood);
    lv_img_set_src(ui_Title_Bg2, &ui_img_title_bg_2_png);

    lv_obj_set_width(ui_Title_Bg2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Title_Bg2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Title_Bg2, 145);
    lv_obj_set_y(ui_Title_Bg2, -30);

    lv_obj_set_align(ui_Title_Bg2, LV_ALIGN_TOP_RIGHT);

    lv_obj_add_flag(ui_Title_Bg2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Title_Bg2, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Title_Bg2, 0, 0);

    // ui_Label_Hood

    ui_Label_Hood = lv_label_create(ui_Title_Bg2);

    lv_obj_set_width(ui_Label_Hood, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Hood, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Hood, 62);
    lv_obj_set_y(ui_Label_Hood, -1);

    lv_obj_set_align(ui_Label_Hood, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Hood, "Hood");

    lv_obj_set_style_text_color(ui_Label_Hood, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Hood, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Hood, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Hood_Light

    ui_Image_Hood_Light = lv_img_create(ui_Panel_Hood);
    lv_img_set_src(ui_Image_Hood_Light, &ui_img_hood_light_png);

    lv_obj_set_width(ui_Image_Hood_Light, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Hood_Light, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Hood_Light, -188);
    lv_obj_set_y(ui_Image_Hood_Light, 49);

    lv_obj_set_align(ui_Image_Hood_Light, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Hood_Light, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Hood_Light, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Hood_Light, 0, 0);

    // ui_Group_Smog1

    ui_Group_Smog1 = lv_obj_create(ui_Panel_Hood);

    lv_obj_set_width(ui_Group_Smog1, 256);
    lv_obj_set_height(ui_Group_Smog1, 317);

    lv_obj_set_x(ui_Group_Smog1, -375);
    lv_obj_set_y(ui_Group_Smog1, -175);

    lv_obj_set_align(ui_Group_Smog1, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Smog1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Smog1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Smog1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Smog11

    ui_Image_Smog11 = lv_img_create(ui_Group_Smog1);
    lv_img_set_src(ui_Image_Smog11, &ui_img_smog_1_png);

    lv_obj_set_height(ui_Image_Smog11, 656);
    lv_obj_set_width(ui_Image_Smog11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog11, 7);
    lv_obj_set_y(ui_Image_Smog11, 0);

    lv_obj_set_align(ui_Image_Smog11, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog11, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog11, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog11, 0, 0);

    // ui_Image_Smog12

    ui_Image_Smog12 = lv_img_create(ui_Group_Smog1);
    lv_img_set_src(ui_Image_Smog12, &ui_img_smog_2_png);

    lv_obj_set_height(ui_Image_Smog12, 936);
    lv_obj_set_width(ui_Image_Smog12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog12, 5);
    lv_obj_set_y(ui_Image_Smog12, 0);

    lv_obj_set_align(ui_Image_Smog12, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog12, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog12, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog12, 0, 0);

    // ui_Group_Smog2

    ui_Group_Smog2 = lv_obj_create(ui_Panel_Hood);

    lv_obj_set_width(ui_Group_Smog2, 256);
    lv_obj_set_height(ui_Group_Smog2, 312);

    lv_obj_set_x(ui_Group_Smog2, -148);
    lv_obj_set_y(ui_Group_Smog2, -173);

    lv_obj_set_align(ui_Group_Smog2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Smog2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Smog2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Smog2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Smog21

    ui_Image_Smog21 = lv_img_create(ui_Group_Smog2);
    lv_img_set_src(ui_Image_Smog21, &ui_img_smog_1_png);

    lv_obj_set_height(ui_Image_Smog21, 656);
    lv_obj_set_width(ui_Image_Smog21, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog21, 7);
    lv_obj_set_y(ui_Image_Smog21, 0);

    lv_obj_set_align(ui_Image_Smog21, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog21, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog21, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog21, 0, 0);

    // ui_Image_Smog22

    ui_Image_Smog22 = lv_img_create(ui_Group_Smog2);
    lv_img_set_src(ui_Image_Smog22, &ui_img_smog_2_png);

    lv_obj_set_height(ui_Image_Smog22, 936);
    lv_obj_set_width(ui_Image_Smog22, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Smog22, 5);
    lv_obj_set_y(ui_Image_Smog22, 0);

    lv_obj_set_align(ui_Image_Smog22, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_Image_Smog22, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Smog22, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Smog22, 0, 0);

    // ui_Group_Hood_Content2

    ui_Group_Hood_Content2 = lv_obj_create(ui_Panel_Hood);

    lv_obj_set_width(ui_Group_Hood_Content2, 555);
    lv_obj_set_height(ui_Group_Hood_Content2, lv_pct(16));

    lv_obj_set_x(ui_Group_Hood_Content2, -50);
    lv_obj_set_y(ui_Group_Hood_Content2, 85);

    lv_obj_set_align(ui_Group_Hood_Content2, LV_ALIGN_TOP_RIGHT);

    lv_obj_clear_flag(ui_Group_Hood_Content2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Hood_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Hood_Content2, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Hood_Content2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Hood_Content2, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Group_Hood_Content2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Group_Hood_Content2, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Group_Hood_Content2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Group_Hood_Content2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Hood_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Hood_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Hood_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Hood_Content2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Hood_Line1

    ui_Hood_Line1 = lv_obj_create(ui_Group_Hood_Content2);

    lv_obj_set_height(ui_Hood_Line1, 20);
    lv_obj_set_width(ui_Hood_Line1, lv_pct(105));

    lv_obj_set_x(ui_Hood_Line1, -10);
    lv_obj_set_y(ui_Hood_Line1, -17);

    lv_obj_clear_flag(ui_Hood_Line1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Hood_Line1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Hood_Line1, lv_color_hex(0xACF26A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Hood_Line1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Hood

    ui_Group_Hood = lv_obj_create(ui_Group_Hood_Content2);

    lv_obj_set_height(ui_Group_Hood, 81);
    lv_obj_set_width(ui_Group_Hood, lv_pct(98));

    lv_obj_set_x(ui_Group_Hood, 0);
    lv_obj_set_y(ui_Group_Hood, 10);

    lv_obj_set_align(ui_Group_Hood, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Hood, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Hood, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Hood, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Light

    ui_Label_Light = lv_label_create(ui_Group_Hood);

    lv_obj_set_width(ui_Label_Light, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Light, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Light, 4);
    lv_obj_set_y(ui_Label_Light, 0);

    lv_obj_set_align(ui_Label_Light, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Light, "LIGHT");

    lv_obj_set_style_text_color(ui_Label_Light, lv_color_hex(0xACF26A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Light, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Light, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Light, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch_Hood_Light

    ui_Switch_Hood_Light = lv_switch_create(ui_Group_Hood);

    lv_obj_set_width(ui_Switch_Hood_Light, 70);
    lv_obj_set_height(ui_Switch_Hood_Light, 40);

    lv_obj_set_x(ui_Switch_Hood_Light, 88);
    lv_obj_set_y(ui_Switch_Hood_Light, 1);

    lv_obj_set_align(ui_Switch_Hood_Light, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_radius(ui_Switch_Hood_Light, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Hood_Light, lv_color_hex(0x6A6A6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Hood_Light, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Switch_Hood_Light, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Hood_Light, lv_color_hex(0x73CA29), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Switch_Hood_Light, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_set_style_radius(ui_Switch_Hood_Light, 100, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Switch_Hood_Light, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch_Hood_Light, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Switch_Hood_Light, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Switch_Hood_Light, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Switch_Hood_Light, -5, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Switch_Hood_Light, -5, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Line7

    ui_Line7 = lv_obj_create(ui_Group_Hood);

    lv_obj_set_width(ui_Line7, 2);
    lv_obj_set_height(ui_Line7, 51);

    lv_obj_set_x(ui_Line7, -62);
    lv_obj_set_y(ui_Line7, 0);

    lv_obj_set_align(ui_Line7, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line7, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line7, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Fan1

    ui_Label_Fan1 = lv_label_create(ui_Group_Hood);

    lv_obj_set_width(ui_Label_Fan1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Fan1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Fan1, -248);
    lv_obj_set_y(ui_Label_Fan1, -1);

    lv_obj_set_align(ui_Label_Fan1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Fan1, "FAN");

    lv_obj_set_style_text_color(ui_Label_Fan1, lv_color_hex(0xACF26A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Fan1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Fan1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Fan1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image7

    ui_Image7 = lv_img_create(ui_Group_Hood);
    lv_img_set_src(ui_Image7, &ui_img_text_fan_param_png);

    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image7, -15);
    lv_obj_set_y(ui_Image7, 22);

    lv_obj_set_align(ui_Image7, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image7, 0, 0);

    // ui_Slider_Hood_Fan

    ui_Slider_Hood_Fan = lv_slider_create(ui_Group_Hood);
    lv_slider_set_range(ui_Slider_Hood_Fan, 0, 2);
    lv_slider_set_value(ui_Slider_Hood_Fan, 1, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Hood_Fan) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider_Hood_Fan, 0,
                                                                                                    LV_ANIM_OFF);

    lv_obj_set_width(ui_Slider_Hood_Fan, 168);
    lv_obj_set_height(ui_Slider_Hood_Fan, 15);

    lv_obj_set_x(ui_Slider_Hood_Fan, -31);
    lv_obj_set_y(ui_Slider_Hood_Fan, -17);

    lv_obj_set_align(ui_Slider_Hood_Fan, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_radius(ui_Slider_Hood_Fan, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider_Hood_Fan, lv_color_hex(0x626562), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Hood_Fan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider_Hood_Fan, lv_color_hex(0x73CA29), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Hood_Fan, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Slider_Hood_Fan, 100, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider_Hood_Fan, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Hood_Fan, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Slider_Hood_Fan, 8, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Slider_Hood_Fan, 8, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Slider_Hood_Fan, 8, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Slider_Hood_Fan, 8, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_BTN_Menu2

    ui_BTN_Menu2 = lv_img_create(ui_Panel_Hood);
    lv_img_set_src(ui_BTN_Menu2, &ui_img_icn_menu_png);

    lv_obj_set_width(ui_BTN_Menu2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BTN_Menu2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BTN_Menu2, 0);
    lv_obj_set_y(ui_BTN_Menu2, 0);

    lv_obj_set_align(ui_BTN_Menu2, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Menu2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_BTN_Menu2, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_BTN_Menu2, 0, 0);

    // ui_BTN_Back2

    ui_BTN_Back2 = lv_btn_create(ui_Panel_Hood);

    lv_obj_set_width(ui_BTN_Back2, 155);
    lv_obj_set_height(ui_BTN_Back2, 65);

    lv_obj_set_x(ui_BTN_Back2, -55);
    lv_obj_set_y(ui_BTN_Back2, -3);

    lv_obj_add_flag(ui_BTN_Back2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Back2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Back2, 65, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Back2, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Back2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_BACK2

    ui_Label_BACK2 = lv_label_create(ui_BTN_Back2);

    lv_obj_set_width(ui_Label_BACK2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_BACK2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_BACK2, 13);
    lv_obj_set_y(ui_Label_BACK2, 0);

    lv_obj_set_align(ui_Label_BACK2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_BACK2, "BACK");

    lv_obj_set_style_text_color(ui_Label_BACK2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_BACK2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_BACK2, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Oven_screen_init(void)
{

    // ui_Oven

    ui_Oven = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Oven, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image_Oven_Bg

    ui_Image_Oven_Bg = lv_img_create(ui_Oven);
    lv_img_set_src(ui_Image_Oven_Bg, &ui_img_oven_bg_png);

    lv_obj_set_width(ui_Image_Oven_Bg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Bg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Bg, 0);
    lv_obj_set_y(ui_Image_Oven_Bg, 0);

    lv_obj_set_align(ui_Image_Oven_Bg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_Bg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Bg, 0, 0);

    // ui_Panel_Oven

    ui_Panel_Oven = lv_obj_create(ui_Oven);

    lv_obj_set_width(ui_Panel_Oven, lv_pct(100));
    lv_obj_set_height(ui_Panel_Oven, lv_pct(100));

    lv_obj_set_x(ui_Panel_Oven, 1);
    lv_obj_set_y(ui_Panel_Oven, 0);

    lv_obj_set_align(ui_Panel_Oven, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel_Oven, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel_Oven, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Oven, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Oven, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Oven, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Oven, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Oven, 20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_Light

    ui_Image_Oven_Light = lv_img_create(ui_Panel_Oven);
    lv_img_set_src(ui_Image_Oven_Light, &ui_img_oven_light_png);

    lv_obj_set_width(ui_Image_Oven_Light, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Light, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Light, -16);
    lv_obj_set_y(ui_Image_Oven_Light, -1);

    lv_obj_set_align(ui_Image_Oven_Light, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Oven_Light, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Light, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Light, 0, 0);

    // ui_Image_Oven_Fan

    ui_Image_Oven_Fan = lv_img_create(ui_Panel_Oven);
    lv_img_set_src(ui_Image_Oven_Fan, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Oven_Fan, 120);
    lv_obj_set_height(ui_Image_Oven_Fan, 119);

    lv_obj_set_x(ui_Image_Oven_Fan, -217);
    lv_obj_set_y(ui_Image_Oven_Fan, 43);

    lv_obj_set_align(ui_Image_Oven_Fan, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_Fan, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Fan, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Fan, 0, 0);

    // ui_Image_Oven_Anim

    ui_Image_Oven_Anim = lv_img_create(ui_Panel_Oven);
    lv_img_set_src(ui_Image_Oven_Anim, &ui_img_place_holder_image_png);

    lv_obj_set_width(ui_Image_Oven_Anim, 704);
    lv_obj_set_height(ui_Image_Oven_Anim, 720);

    lv_obj_set_x(ui_Image_Oven_Anim, -16);
    lv_obj_set_y(ui_Image_Oven_Anim, -1);

    lv_obj_set_align(ui_Image_Oven_Anim, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Oven_Anim, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_Anim, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Anim, 0, 0);

    // ui_Group_Oven_Content1

    ui_Group_Oven_Content1 = lv_obj_create(ui_Panel_Oven);

    lv_obj_set_width(ui_Group_Oven_Content1, 538);
    lv_obj_set_height(ui_Group_Oven_Content1, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Content1, -44);
    lv_obj_set_y(ui_Group_Oven_Content1, 1);

    lv_obj_set_align(ui_Group_Oven_Content1, LV_ALIGN_TOP_RIGHT);

    lv_obj_clear_flag(ui_Group_Oven_Content1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Group_Oven_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Group_Oven_Content1, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Content1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Group_Oven_Content1, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Group_Oven_Content1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Group_Oven_Content1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Group_Oven_Content1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Group_Oven_Content1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Oven_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Oven_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Oven_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Oven_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Aircon_Line1

    ui_Aircon_Line1 = lv_obj_create(ui_Group_Oven_Content1);

    lv_obj_set_height(ui_Aircon_Line1, 20);
    lv_obj_set_width(ui_Aircon_Line1, lv_pct(104));

    lv_obj_set_x(ui_Aircon_Line1, -10);
    lv_obj_set_y(ui_Aircon_Line1, -17);

    lv_obj_clear_flag(ui_Aircon_Line1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Aircon_Line1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Aircon_Line1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Aircon_Line1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Temp_Time

    ui_Group_Oven_Temp_Time = lv_obj_create(ui_Group_Oven_Content1);

    lv_obj_set_height(ui_Group_Oven_Temp_Time, 218);
    lv_obj_set_width(ui_Group_Oven_Temp_Time, lv_pct(95));

    lv_obj_set_x(ui_Group_Oven_Temp_Time, 0);
    lv_obj_set_y(ui_Group_Oven_Temp_Time, 0);

    lv_obj_set_align(ui_Group_Oven_Temp_Time, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Oven_Temp_Time, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Temp_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Temp_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Oven_Temp_Time, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Oven_Temp_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Oven_Temp_Time, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Oven_Temp_Time, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Current_Temp

    ui_Group_Current_Temp = lv_obj_create(ui_Group_Oven_Temp_Time);

    lv_obj_set_height(ui_Group_Current_Temp, 157);
    lv_obj_set_width(ui_Group_Current_Temp, lv_pct(44));

    lv_obj_set_x(ui_Group_Current_Temp, 0);
    lv_obj_set_y(ui_Group_Current_Temp, 0);

    lv_obj_set_align(ui_Group_Current_Temp, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Group_Current_Temp, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Current_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Current_Temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Current_Temp, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Current_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Current_Temp, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Current_Temp, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Current_Temp

    ui_Label_Current_Temp = lv_label_create(ui_Group_Current_Temp);

    lv_obj_set_width(ui_Label_Current_Temp, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Current_Temp, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Current_Temp, 0);
    lv_obj_set_y(ui_Label_Current_Temp, 10);

    lv_obj_set_align(ui_Label_Current_Temp, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Current_Temp, "CURRENT TEMP.");

    lv_obj_set_style_text_color(ui_Label_Current_Temp, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Current_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Current_Temp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Current_Temp, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Oven_Number1

    ui_Label_Oven_Number1 = lv_label_create(ui_Group_Current_Temp);

    lv_obj_set_width(ui_Label_Oven_Number1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Oven_Number1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Oven_Number1, -73);
    lv_obj_set_y(ui_Label_Oven_Number1, 35);

    lv_obj_set_align(ui_Label_Oven_Number1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Oven_Number1, "178");

    lv_obj_set_style_text_color(ui_Label_Oven_Number1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Oven_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Oven_Number1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Oven_Number1, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Oven_Number2

    ui_Label_Oven_Number2 = lv_label_create(ui_Group_Current_Temp);

    lv_obj_set_width(ui_Label_Oven_Number2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Oven_Number2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Oven_Number2, -34);
    lv_obj_set_y(ui_Label_Oven_Number2, 56);

    lv_obj_set_align(ui_Label_Oven_Number2, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Oven_Number2, ".0");

    lv_obj_set_style_text_color(ui_Label_Oven_Number2, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Oven_Number2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Oven_Number2, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius5

    ui_Label_Celsius5 = lv_label_create(ui_Group_Current_Temp);

    lv_obj_set_width(ui_Label_Celsius5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius5, -31);
    lv_obj_set_y(ui_Label_Celsius5, -7);

    lv_obj_set_align(ui_Label_Celsius5, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Celsius5, "°C");

    lv_obj_set_style_text_color(ui_Label_Celsius5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius5, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Status

    ui_Group_Oven_Status = lv_obj_create(ui_Group_Oven_Temp_Time);

    lv_obj_set_width(ui_Group_Oven_Status, lv_pct(51));
    lv_obj_set_height(ui_Group_Oven_Status, lv_pct(35));

    lv_obj_set_x(ui_Group_Oven_Status, 0);
    lv_obj_set_y(ui_Group_Oven_Status, 15);

    lv_obj_set_align(ui_Group_Oven_Status, LV_ALIGN_TOP_RIGHT);

    lv_obj_clear_flag(ui_Group_Oven_Status, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Status, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Status, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Oven_Status, lv_color_hex(0x4A4C4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Oven_Status, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Oven_Status, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Oven_Status, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Status1

    ui_Label_Status1 = lv_label_create(ui_Group_Oven_Status);

    lv_obj_set_width(ui_Label_Status1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Status1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Status1, 0);
    lv_obj_set_y(ui_Label_Status1, 3);

    lv_obj_set_align(ui_Label_Status1, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Status1, "STATUS");

    lv_obj_set_style_text_color(ui_Label_Status1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Status1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Status1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Status1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Status_Text1

    ui_Label_Status_Text1 = lv_label_create(ui_Group_Oven_Status);

    lv_obj_set_width(ui_Label_Status_Text1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Status_Text1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Status_Text1, 0);
    lv_obj_set_y(ui_Label_Status_Text1, 30);

    lv_obj_set_align(ui_Label_Status_Text1, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Status_Text1, "Baking");

    lv_obj_set_style_text_color(ui_Label_Status_Text1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Status_Text1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Status_Text1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Status_Text1, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Time3

    ui_Group_Time3 = lv_obj_create(ui_Group_Oven_Temp_Time);

    lv_obj_set_width(ui_Group_Time3, lv_pct(49));
    lv_obj_set_height(ui_Group_Time3, lv_pct(50));

    lv_obj_set_x(ui_Group_Time3, -6);
    lv_obj_set_y(ui_Group_Time3, -18);

    lv_obj_set_align(ui_Group_Time3, LV_ALIGN_BOTTOM_RIGHT);

    lv_obj_clear_flag(ui_Group_Time3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Time3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Time3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Time_Left1

    ui_Label_Time_Left1 = lv_label_create(ui_Group_Time3);

    lv_obj_set_width(ui_Label_Time_Left1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Time_Left1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Time_Left1, 0);
    lv_obj_set_y(ui_Label_Time_Left1, -6);

    lv_obj_set_align(ui_Label_Time_Left1, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Time_Left1, "TIME\nLEFT");

    lv_obj_set_style_text_color(ui_Label_Time_Left1, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time_Left1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Time_Left1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time_Left1, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Time_Number1

    ui_Label_Time_Number1 = lv_label_create(ui_Group_Time3);

    lv_obj_set_width(ui_Label_Time_Number1, 121);
    lv_obj_set_height(ui_Label_Time_Number1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Time_Number1, 2);
    lv_obj_set_y(ui_Label_Time_Number1, -6);

    lv_obj_set_align(ui_Label_Time_Number1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Time_Number1, "00:18");

    lv_obj_set_style_text_color(ui_Label_Time_Number1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Time_Number1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time_Number1, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Bar_Time_Left1

    ui_Bar_Time_Left1 = lv_bar_create(ui_Group_Time3);
    lv_bar_set_range(ui_Bar_Time_Left1, 0, 100);
    lv_bar_set_value(ui_Bar_Time_Left1, 25, LV_ANIM_OFF);

    lv_obj_set_height(ui_Bar_Time_Left1, 10);
    lv_obj_set_width(ui_Bar_Time_Left1, lv_pct(100));

    lv_obj_set_x(ui_Bar_Time_Left1, 0);
    lv_obj_set_y(ui_Bar_Time_Left1, -12);

    lv_obj_set_align(ui_Bar_Time_Left1, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_style_radius(ui_Bar_Time_Left1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Bar_Time_Left1, lv_color_hex(0x4A4441), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar_Time_Left1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar_Time_Left1, lv_color_hex(0xFF9110), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar_Time_Left1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode1

    ui_Group_Oven_Mode1 = lv_obj_create(ui_Group_Oven_Content1);

    lv_obj_set_height(ui_Group_Oven_Mode1, 149);
    lv_obj_set_width(ui_Group_Oven_Mode1, lv_pct(94));

    lv_obj_set_x(ui_Group_Oven_Mode1, 0);
    lv_obj_set_y(ui_Group_Oven_Mode1, 220);

    lv_obj_set_align(ui_Group_Oven_Mode1, LV_ALIGN_TOP_MID);

    lv_obj_set_scrollbar_mode(ui_Group_Oven_Mode1, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Group_Oven_Mode1, lv_color_hex(0x4A484A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Group_Oven_Mode1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Group_Oven_Mode1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Group_Oven_Mode1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Oven_Mode1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Oven_Mode1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Oven_Mode1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Oven_Mode1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select

    ui_Group_Oven_Mode_Select = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_1

    ui_Image_Oven_1 = lv_img_create(ui_Group_Oven_Mode_Select);
    lv_img_set_src(ui_Image_Oven_1, &ui_img_icn_oven_fan_rear_png);

    lv_obj_set_width(ui_Image_Oven_1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_1, -75);
    lv_obj_set_y(ui_Image_Oven_1, 0);

    lv_obj_set_align(ui_Image_Oven_1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_1, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_1, 0, 0);

    // ui_Label_Mode4

    ui_Label_Mode4 = lv_label_create(ui_Group_Oven_Mode_Select);

    lv_obj_set_width(ui_Label_Mode4, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode4, 76);
    lv_obj_set_y(ui_Label_Mode4, 0);

    lv_obj_set_align(ui_Label_Mode4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode4, "Fan Forced\nRear Element");

    lv_obj_set_style_text_color(ui_Label_Mode4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode4, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select1

    ui_Group_Oven_Mode_Select1 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select1, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select1, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select1, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select1, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select1, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_2

    ui_Image_Oven_2 = lv_img_create(ui_Group_Oven_Mode_Select1);
    lv_img_set_src(ui_Image_Oven_2, &ui_img_icn_oven_upper_lower_png);

    lv_obj_set_width(ui_Image_Oven_2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_2, -75);
    lv_obj_set_y(ui_Image_Oven_2, 0);

    lv_obj_set_align(ui_Image_Oven_2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_2, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_2, 0, 0);

    // ui_Label_Mode5

    ui_Label_Mode5 = lv_label_create(ui_Group_Oven_Mode_Select1);

    lv_obj_set_width(ui_Label_Mode5, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode5, 76);
    lv_obj_set_y(ui_Label_Mode5, 0);

    lv_obj_set_align(ui_Label_Mode5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode5, "Upper & Lower\nElements\nConvection");

    lv_obj_set_style_text_color(ui_Label_Mode5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode5, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select2

    ui_Group_Oven_Mode_Select2 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select2, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select2, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select2, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select2, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_3

    ui_Image_Oven_3 = lv_img_create(ui_Group_Oven_Mode_Select2);
    lv_img_set_src(ui_Image_Oven_3, &ui_img_icn_oven_fan_upper_lower_png);

    lv_obj_set_width(ui_Image_Oven_3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_3, -75);
    lv_obj_set_y(ui_Image_Oven_3, 0);

    lv_obj_set_align(ui_Image_Oven_3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_3, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_3, 0, 0);

    // ui_Label_Mode6

    ui_Label_Mode6 = lv_label_create(ui_Group_Oven_Mode_Select2);

    lv_obj_set_width(ui_Label_Mode6, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode6, 76);
    lv_obj_set_y(ui_Label_Mode6, 0);

    lv_obj_set_align(ui_Label_Mode6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode6, "Fan Forced\nUpper & Lower\nConvection");

    lv_obj_set_style_text_color(ui_Label_Mode6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode6, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select3

    ui_Group_Oven_Mode_Select3 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select3, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select3, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select3, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select3, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select3, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_4

    ui_Image_Oven_4 = lv_img_create(ui_Group_Oven_Mode_Select3);
    lv_img_set_src(ui_Image_Oven_4, &ui_img_icn_oven_fan_lower_png);

    lv_obj_set_width(ui_Image_Oven_4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_4, -75);
    lv_obj_set_y(ui_Image_Oven_4, 0);

    lv_obj_set_align(ui_Image_Oven_4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_4, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_4, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_4, 0, 0);

    // ui_Label_Mode7

    ui_Label_Mode7 = lv_label_create(ui_Group_Oven_Mode_Select3);

    lv_obj_set_width(ui_Label_Mode7, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode7, 76);
    lv_obj_set_y(ui_Label_Mode7, 0);

    lv_obj_set_align(ui_Label_Mode7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode7, "Fan Forced\nLower Element\nConvection");

    lv_obj_set_style_text_color(ui_Label_Mode7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode7, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select4

    ui_Group_Oven_Mode_Select4 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select4, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select4, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select4, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select4, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select4, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_5

    ui_Image_Oven_5 = lv_img_create(ui_Group_Oven_Mode_Select4);
    lv_img_set_src(ui_Image_Oven_5, &ui_img_icn_oven_gril_png);

    lv_obj_set_width(ui_Image_Oven_5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_5, -75);
    lv_obj_set_y(ui_Image_Oven_5, 0);

    lv_obj_set_align(ui_Image_Oven_5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_5, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_5, 0, 0);

    // ui_Label_Mode8

    ui_Label_Mode8 = lv_label_create(ui_Group_Oven_Mode_Select4);

    lv_obj_set_width(ui_Label_Mode8, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode8, 76);
    lv_obj_set_y(ui_Label_Mode8, 0);

    lv_obj_set_align(ui_Label_Mode8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode8, "Grill");

    lv_obj_set_style_text_color(ui_Label_Mode8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode8, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select5

    ui_Group_Oven_Mode_Select5 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select5, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select5, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select5, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select5, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select5, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_6

    ui_Image_Oven_6 = lv_img_create(ui_Group_Oven_Mode_Select5);
    lv_img_set_src(ui_Image_Oven_6, &ui_img_icn_oven_fan_gril_png);

    lv_obj_set_width(ui_Image_Oven_6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_6, -75);
    lv_obj_set_y(ui_Image_Oven_6, 0);

    lv_obj_set_align(ui_Image_Oven_6, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_6, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_6, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_6, 0, 0);

    // ui_Label_Mode9

    ui_Label_Mode9 = lv_label_create(ui_Group_Oven_Mode_Select5);

    lv_obj_set_width(ui_Label_Mode9, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode9, 76);
    lv_obj_set_y(ui_Label_Mode9, 0);

    lv_obj_set_align(ui_Label_Mode9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode9, "Fan Forced\nGrill");

    lv_obj_set_style_text_color(ui_Label_Mode9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode9, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select6

    ui_Group_Oven_Mode_Select6 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select6, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select6, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select6, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select6, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select6, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_7

    ui_Image_Oven_7 = lv_img_create(ui_Group_Oven_Mode_Select6);
    lv_img_set_src(ui_Image_Oven_7, &ui_img_icn_oven_upper_png);

    lv_obj_set_width(ui_Image_Oven_7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_7, -75);
    lv_obj_set_y(ui_Image_Oven_7, 0);

    lv_obj_set_align(ui_Image_Oven_7, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_7, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_7, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_7, 0, 0);

    // ui_Label_Mode10

    ui_Label_Mode10 = lv_label_create(ui_Group_Oven_Mode_Select6);

    lv_obj_set_width(ui_Label_Mode10, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode10, 76);
    lv_obj_set_y(ui_Label_Mode10, 0);

    lv_obj_set_align(ui_Label_Mode10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode10, "Upper Outer\nElement");

    lv_obj_set_style_text_color(ui_Label_Mode10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode10, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select7

    ui_Group_Oven_Mode_Select7 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select7, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select7, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select7, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select7, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select7, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select7, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_8

    ui_Image_Oven_8 = lv_img_create(ui_Group_Oven_Mode_Select7);
    lv_img_set_src(ui_Image_Oven_8, &ui_img_icn_oven_lower_png);

    lv_obj_set_width(ui_Image_Oven_8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_8, -75);
    lv_obj_set_y(ui_Image_Oven_8, 0);

    lv_obj_set_align(ui_Image_Oven_8, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_8, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_8, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_8, 0, 0);

    // ui_Label_Mode11

    ui_Label_Mode11 = lv_label_create(ui_Group_Oven_Mode_Select7);

    lv_obj_set_width(ui_Label_Mode11, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode11, 76);
    lv_obj_set_y(ui_Label_Mode11, 0);

    lv_obj_set_align(ui_Label_Mode11, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode11, "Lower Element\nElement");

    lv_obj_set_style_text_color(ui_Label_Mode11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode11, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Oven_Mode_Select8

    ui_Group_Oven_Mode_Select8 = lv_obj_create(ui_Group_Oven_Mode1);

    lv_obj_set_height(ui_Group_Oven_Mode_Select8, 89);
    lv_obj_set_width(ui_Group_Oven_Mode_Select8, lv_pct(100));

    lv_obj_set_x(ui_Group_Oven_Mode_Select8, 0);
    lv_obj_set_y(ui_Group_Oven_Mode_Select8, 0);

    lv_obj_set_align(ui_Group_Oven_Mode_Select8, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Group_Oven_Mode_Select8, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Mode_Select8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Mode_Select8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_9

    ui_Image_Oven_9 = lv_img_create(ui_Group_Oven_Mode_Select8);
    lv_img_set_src(ui_Image_Oven_9, &ui_img_icn_oven_defrost_png);

    lv_obj_set_width(ui_Image_Oven_9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_9, -75);
    lv_obj_set_y(ui_Image_Oven_9, 0);

    lv_obj_set_align(ui_Image_Oven_9, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Oven_9, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Oven_9, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_9, 0, 0);

    // ui_Label_Mode12

    ui_Label_Mode12 = lv_label_create(ui_Group_Oven_Mode_Select8);

    lv_obj_set_width(ui_Label_Mode12, lv_pct(45));
    lv_obj_set_height(ui_Label_Mode12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode12, 76);
    lv_obj_set_y(ui_Label_Mode12, 0);

    lv_obj_set_align(ui_Label_Mode12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_Mode12, "Defrost");

    lv_obj_set_style_text_color(ui_Label_Mode12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode12, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mode3

    ui_Label_Mode3 = lv_label_create(ui_Group_Oven_Mode1);

    lv_obj_set_width(ui_Label_Mode3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mode3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mode3, 0);
    lv_obj_set_y(ui_Label_Mode3, 14);

    lv_obj_set_align(ui_Label_Mode3, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Mode3, "MODE");

    lv_obj_add_flag(ui_Label_Mode3, LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);

    lv_obj_set_style_text_color(ui_Label_Mode3, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mode3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Mode3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mode3, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Oven_Mode_Right

    ui_Image_Oven_Mode_Right = lv_img_create(ui_Group_Oven_Mode1);
    lv_img_set_src(ui_Image_Oven_Mode_Right, &ui_img_arrow_right_png);

    lv_obj_set_width(ui_Image_Oven_Mode_Right, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Mode_Right, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Mode_Right, 0);
    lv_obj_set_y(ui_Image_Oven_Mode_Right, 0);

    lv_obj_set_align(ui_Image_Oven_Mode_Right, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_Image_Oven_Mode_Right,
                    LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);
    lv_obj_clear_flag(ui_Image_Oven_Mode_Right, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Mode_Right, 0, 0);

    // ui_Image_Oven_Mode_Left

    ui_Image_Oven_Mode_Left = lv_img_create(ui_Group_Oven_Mode1);
    lv_img_set_src(ui_Image_Oven_Mode_Left, &ui_img_arrow_left_png);

    lv_obj_set_width(ui_Image_Oven_Mode_Left, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Oven_Mode_Left, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Oven_Mode_Left, 0);
    lv_obj_set_y(ui_Image_Oven_Mode_Left, 0);

    lv_obj_set_align(ui_Image_Oven_Mode_Left, LV_ALIGN_LEFT_MID);

    lv_obj_add_flag(ui_Image_Oven_Mode_Left,
                    LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_IGNORE_LAYOUT | LV_OBJ_FLAG_FLOATING);
    lv_obj_clear_flag(ui_Image_Oven_Mode_Left, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Oven_Mode_Left, 0, 0);

    // ui_Group_Oven_Settings

    ui_Group_Oven_Settings = lv_obj_create(ui_Group_Oven_Content1);

    lv_obj_set_height(ui_Group_Oven_Settings, 297);
    lv_obj_set_width(ui_Group_Oven_Settings, lv_pct(94));

    lv_obj_set_x(ui_Group_Oven_Settings, 0);
    lv_obj_set_y(ui_Group_Oven_Settings, 369);

    lv_obj_set_align(ui_Group_Oven_Settings, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_Group_Oven_Settings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Group_Oven_Settings, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Oven_Settings, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Target_Temp

    ui_Group_Target_Temp = lv_obj_create(ui_Group_Oven_Settings);

    lv_obj_set_width(ui_Group_Target_Temp, 235);
    lv_obj_set_height(ui_Group_Target_Temp, 240);

    lv_obj_set_x(ui_Group_Target_Temp, 0);
    lv_obj_set_y(ui_Group_Target_Temp, 0);

    lv_obj_set_align(ui_Group_Target_Temp, LV_ALIGN_LEFT_MID);

    lv_obj_set_scrollbar_mode(ui_Group_Target_Temp, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_bg_color(ui_Group_Target_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Target_Temp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Wheel_Bg

    ui_Image_Wheel_Bg = lv_img_create(ui_Group_Target_Temp);
    lv_img_set_src(ui_Image_Wheel_Bg, &ui_img_wheel_bg_png);

    lv_obj_set_width(ui_Image_Wheel_Bg, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Wheel_Bg, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Wheel_Bg, 20);
    lv_obj_set_y(ui_Image_Wheel_Bg, 0);

    lv_obj_set_align(ui_Image_Wheel_Bg, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Wheel_Bg, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image_Wheel_Bg, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Image_Wheel_Bg, 0, 0);

    // ui_Label_Target_Temp_Numer

    ui_Label_Target_Temp_Numer = lv_label_create(ui_Image_Wheel_Bg);

    lv_obj_set_width(ui_Label_Target_Temp_Numer, 101);
    lv_obj_set_height(ui_Label_Target_Temp_Numer, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Target_Temp_Numer, -29);
    lv_obj_set_y(ui_Label_Target_Temp_Numer, 5);

    lv_obj_set_align(ui_Label_Target_Temp_Numer, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Target_Temp_Numer, "170");

    lv_obj_set_style_text_color(ui_Label_Target_Temp_Numer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Target_Temp_Numer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Target_Temp_Numer, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Target_Temp_Numer, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Celsius6

    ui_Label_Celsius6 = lv_label_create(ui_Image_Wheel_Bg);

    lv_obj_set_width(ui_Label_Celsius6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Celsius6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Celsius6, -103);
    lv_obj_set_y(ui_Label_Celsius6, 12);

    lv_obj_set_align(ui_Label_Celsius6, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Celsius6, "°C");

    lv_obj_set_style_text_color(ui_Label_Celsius6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius6, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Target_Temp

    ui_Label_Target_Temp = lv_label_create(ui_Group_Target_Temp);

    lv_obj_set_width(ui_Label_Target_Temp, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Target_Temp, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Target_Temp, 0);
    lv_obj_set_y(ui_Label_Target_Temp, 0);

    lv_obj_set_align(ui_Label_Target_Temp, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label_Target_Temp, "TARGET\nTEMP.");

    lv_obj_set_style_text_color(ui_Label_Target_Temp, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Target_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Target_Temp, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Target_Temp, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Settings

    ui_Label_Settings = lv_label_create(ui_Group_Oven_Settings);

    lv_obj_set_width(ui_Label_Settings, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Settings, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Settings, 0);
    lv_obj_set_y(ui_Label_Settings, 14);

    lv_obj_set_align(ui_Label_Settings, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Settings, "SETTINGS");

    lv_obj_set_style_text_color(ui_Label_Settings, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Settings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Settings, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Settings, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Line6

    ui_Line6 = lv_obj_create(ui_Group_Oven_Settings);

    lv_obj_set_width(ui_Line6, 2);
    lv_obj_set_height(ui_Line6, 160);

    lv_obj_set_x(ui_Line6, 0);
    lv_obj_set_y(ui_Line6, 0);

    lv_obj_set_align(ui_Line6, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Line6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Line6, lv_color_hex(0x52555A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Line6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BTN_Oven

    ui_BTN_Oven = lv_btn_create(ui_Group_Oven_Settings);

    lv_obj_set_width(ui_BTN_Oven, 134);
    lv_obj_set_height(ui_BTN_Oven, 51);

    lv_obj_set_x(ui_BTN_Oven, 0);
    lv_obj_set_y(ui_BTN_Oven, -9);

    lv_obj_set_align(ui_BTN_Oven, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_BTN_Oven, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Oven, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_BTN_Oven, ui_event_BTN_Oven, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_BTN_Oven, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Oven, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_BTN_Oven, &ui_img_btn_oven_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_BTN_Oven, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_BTN_Oven, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_BTN_Oven, lv_color_hex(0x35C915), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_img_recolor_opa(ui_BTN_Oven, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    // ui_Label_Start

    ui_Label_Start = lv_label_create(ui_BTN_Oven);

    lv_obj_set_width(ui_Label_Start, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Start, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Start, 0);
    lv_obj_set_y(ui_Label_Start, 14);

    lv_obj_set_align(ui_Label_Start, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label_Start, "START");

    lv_obj_set_style_text_color(ui_Label_Start, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Start, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Start, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Start, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Group_Timer

    ui_Group_Timer = lv_obj_create(ui_Group_Oven_Settings);

    lv_obj_set_width(ui_Group_Timer, 235);
    lv_obj_set_height(ui_Group_Timer, 240);

    lv_obj_set_x(ui_Group_Timer, 0);
    lv_obj_set_y(ui_Group_Timer, 0);

    lv_obj_set_align(ui_Group_Timer, LV_ALIGN_RIGHT_MID);

    lv_obj_set_scrollbar_mode(ui_Group_Timer, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_bg_color(ui_Group_Timer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Timer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image_Wheel_Bg1

    ui_Image_Wheel_Bg1 = lv_img_create(ui_Group_Timer);
    lv_img_set_src(ui_Image_Wheel_Bg1, &ui_img_wheel_bg_2_png);

    lv_obj_set_width(ui_Image_Wheel_Bg1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image_Wheel_Bg1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image_Wheel_Bg1, -20);
    lv_obj_set_y(ui_Image_Wheel_Bg1, 0);

    lv_obj_set_align(ui_Image_Wheel_Bg1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image_Wheel_Bg1, LV_OBJ_FLAG_ADV_HITTEST);

    lv_img_set_pivot(ui_Image_Wheel_Bg1, 0, 0);

    lv_obj_set_scrollbar_mode(ui_Image_Wheel_Bg1, LV_SCROLLBAR_MODE_OFF);

    // ui_Label_Timer_Number

    ui_Label_Timer_Number = lv_label_create(ui_Image_Wheel_Bg1);

    lv_obj_set_width(ui_Label_Timer_Number, 102);
    lv_obj_set_height(ui_Label_Timer_Number, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Timer_Number, -33);
    lv_obj_set_y(ui_Label_Timer_Number, 6);

    lv_obj_set_align(ui_Label_Timer_Number, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Timer_Number, "15");

    lv_obj_set_style_text_color(ui_Label_Timer_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Timer_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Timer_Number, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Timer_Number, &ui_font_Small_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Mins

    ui_Label_Mins = lv_label_create(ui_Image_Wheel_Bg1);

    lv_obj_set_width(ui_Label_Mins, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Mins, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Mins, -29);
    lv_obj_set_y(ui_Label_Mins, 15);

    lv_obj_set_align(ui_Label_Mins, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Mins, "mins");

    lv_obj_set_style_text_color(ui_Label_Mins, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mins, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mins, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_Timer

    ui_Label_Timer = lv_label_create(ui_Group_Timer);

    lv_obj_set_width(ui_Label_Timer, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Timer, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Timer, 0);
    lv_obj_set_y(ui_Label_Timer, 0);

    lv_obj_set_align(ui_Label_Timer, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Timer, "SETUP\nTIMER");

    lv_obj_set_style_text_color(ui_Label_Timer, lv_color_hex(0xFF9110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Timer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Timer, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Timer, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BTN_Menu3

    ui_BTN_Menu3 = lv_img_create(ui_Panel_Oven);
    lv_img_set_src(ui_BTN_Menu3, &ui_img_icn_menu_png);

    lv_obj_set_width(ui_BTN_Menu3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BTN_Menu3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BTN_Menu3, 0);
    lv_obj_set_y(ui_BTN_Menu3, 0);

    lv_obj_set_align(ui_BTN_Menu3, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_BTN_Menu3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_BTN_Menu3, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_BTN_Menu3, 0, 0);

    // ui_BTN_Back3

    ui_BTN_Back3 = lv_btn_create(ui_Panel_Oven);

    lv_obj_set_width(ui_BTN_Back3, 155);
    lv_obj_set_height(ui_BTN_Back3, 65);

    lv_obj_set_x(ui_BTN_Back3, -50);
    lv_obj_set_y(ui_BTN_Back3, -3);

    lv_obj_add_flag(ui_BTN_Back3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_BTN_Back3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_BTN_Back3, 65, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Back3, lv_color_hex(0x181818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Back3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label_BACK3

    ui_Label_BACK3 = lv_label_create(ui_BTN_Back3);

    lv_obj_set_width(ui_Label_BACK3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_BACK3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_BACK3, 13);
    lv_obj_set_y(ui_Label_BACK3, 0);

    lv_obj_set_align(ui_Label_BACK3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label_BACK3, "BACK");

    lv_obj_set_style_text_color(ui_Label_BACK3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_BACK3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_BACK3, &ui_font_SemiBold, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Title_Bg3

    ui_Title_Bg3 = lv_img_create(ui_Panel_Oven);
    lv_img_set_src(ui_Title_Bg3, &ui_img_title_bg_png);

    lv_obj_set_width(ui_Title_Bg3, 799);
    lv_obj_set_height(ui_Title_Bg3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Title_Bg3, -148);
    lv_obj_set_y(ui_Title_Bg3, 34);

    lv_obj_set_align(ui_Title_Bg3, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_add_flag(ui_Title_Bg3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Title_Bg3, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Title_Bg3, 0, 0);

    // ui_Title_Bg4

    ui_Title_Bg4 = lv_img_create(ui_Title_Bg3);
    lv_img_set_src(ui_Title_Bg4, &ui_img_title_bg_png);

    lv_obj_set_width(ui_Title_Bg4, 799);
    lv_obj_set_height(ui_Title_Bg4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Title_Bg4, 4);
    lv_obj_set_y(ui_Title_Bg4, 1);

    lv_obj_set_align(ui_Title_Bg4, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_add_flag(ui_Title_Bg4, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Title_Bg4, LV_OBJ_FLAG_SCROLLABLE);

    lv_img_set_pivot(ui_Title_Bg4, 0, 0);

    // ui_Label_Oven_Title

    ui_Label_Oven_Title = lv_label_create(ui_Title_Bg3);

    lv_obj_set_width(ui_Label_Oven_Title, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label_Oven_Title, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label_Oven_Title, -76);
    lv_obj_set_y(ui_Label_Oven_Title, 2);

    lv_obj_set_align(ui_Label_Oven_Title, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label_Oven_Title, "Oven");

    lv_obj_set_style_text_color(ui_Label_Oven_Title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Oven_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Oven_Title, &ui_font_Light, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
	printf("ui_init: \n");
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_basic_init(dispp);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    ui_Aircon_screen_init();
    ui_Hood_screen_init();
    ui_Oven_screen_init();
    lv_disp_load_scr(ui_Home);
}

