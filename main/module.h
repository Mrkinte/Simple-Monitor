#ifndef MONITOR_MODULE_H
#define MONITOR_MODULE_H


#include <malloc.h>
#include "lvgl/lvgl.h"


/*组件与组件之间的间隔*/
#define MTM_GAP             6
/*组件宽度*/
#define MODULE_WIDTH        (LV_HOR_RES - MTM_GAP * 3) / 2
/*组件高度*/
#define MODULE_HEIGHT       (LV_VER_RES - MTM_GAP * 3) / 2


#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _module_t
    {
        lv_obj_t*           container;        //监视模块承载Icon等组件的容器
        lv_obj_t*           icon;             //资源监视模块的图标
        lv_obj_t*           temp_bar;         //显示温度的数值条
        lv_obj_t*           temp_label;       //显示温度的标签
        lv_obj_t*           utilize_label;    //显示资源利用率的标签
        lv_obj_t*           utilize_chart;    //显示资源利用率的图表
        lv_chart_series_t*  utilize_series;
    }module_t;


    module_t* module_create(lv_obj_t* parent, const void* icon_src);

    void module_set_icon(module_t* module, const void* icon_src);

    void module_set_temp_value(module_t* module, int32_t value);

    void module_set_utilize_value(module_t* module, int32_t value);

    void module_set_chart_line_color(module_t* module, lv_color_t color);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*MONITOR_MODULE_H*/
