/**
 * @file temp_display_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "temp_display_gen.h"
#include "kotlownia.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * temp_display_create(lv_obj_t * parent, const char * caption, int32_t value)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t display_base;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&display_base);
        lv_style_set_border_width(&display_base, 1);
        lv_style_set_outline_width(&display_base, 0);
        lv_style_set_width(&display_base, lv_pct(100));
        lv_style_set_height(&display_base, LV_SIZE_CONTENT);
        lv_style_set_pad_all(&display_base, 0);
        lv_style_set_margin_all(&display_base, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);

    lv_obj_remove_style_all(lv_obj_0);
    lv_obj_add_style(lv_obj_0, &display_base, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, caption);
    lv_obj_set_align(lv_label_0, LV_ALIGN_LEFT_MID);
    
    lv_obj_t * lv_spinbox_0 = lv_spinbox_create(lv_obj_0);
    lv_obj_set_width(lv_spinbox_0, 75);
    lv_spinbox_set_digit_count(lv_spinbox_0, 3);
    lv_spinbox_set_dec_point_pos(lv_spinbox_0, 2);
    lv_spinbox_set_value(lv_spinbox_0, value);
    lv_obj_set_align(lv_spinbox_0, LV_ALIGN_RIGHT_MID);
    lv_obj_t * lv_label_1 = lv_label_create(lv_spinbox_0);
    lv_label_set_text(lv_label_1, "*C");
    lv_obj_set_align(lv_label_1, LV_ALIGN_RIGHT_MID);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "temp_display_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

