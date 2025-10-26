/**
 * @file test_grid_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "test_grid_gen.h"
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

lv_obj_t * test_grid_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_style_layout(lv_obj_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * temp_display_0 = temp_display_create(lv_obj_0, "Solar Panel", 232);
    
    lv_obj_t * temp_display_1 = temp_display_create(lv_obj_0, "Tank Top", 232);
    
    lv_obj_t * temp_display_2 = temp_display_create(lv_obj_0, "Tank Middle", 232);
    
    lv_obj_t * temp_display_3 = temp_display_create(lv_obj_0, "Tank Bottom", 232);
    
    lv_obj_t * temp_display_4 = temp_display_create(lv_obj_0, "Heating Return", 232);
    
    lv_obj_t * temp_display_5 = temp_display_create(lv_obj_0, "External", 232);
    
    lv_obj_t * temp_display_6 = temp_display_create(lv_obj_0, "Livingroom", 232);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "test_grid");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

