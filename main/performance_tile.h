#ifndef PERFORMANCE_TILE_H
#define PERFORMANCE_TILE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <malloc.h>
#include "lvgl/lvgl.h"
#include "assets/assets.h"


/*The interval between components and components*/
#define MTM_GAP             4

#define MODULE_WIDTH        (LV_HOR_RES - MTM_GAP * 3) / 2

#define MODULE_HEIGHT       (LV_VER_RES - MTM_GAP * 3) / 2


typedef struct _module_t
{
    lv_obj_t* module;
    lv_obj_t* icon;
    lv_obj_t* hardware_name;
    lv_obj_t* usage_label;    //A label that displays resource utilization
    lv_obj_t* usage_chart;    //A graph showing resource utilization
    lv_chart_series_t* usage_series;
}module_t;


void module_set_icon(module_t* module, const void* icon_src);
void module_set_usage_value(module_t* module, int32_t value);
void module_set_chart_line_color(module_t* module, lv_color_t color);

void performance_tile_init(lv_obj_t* tile);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PERFORMANCE_TILE_H*/
