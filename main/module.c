#include "module.h"

/**
 * @brief Chart drawing event
 * @param event 
*/
static void chart_draw_event_cb(lv_event_t* event)
{
    lv_obj_t* obj = lv_event_get_target(event);

    /*在线条绘制之前添加褪色的区域*/
    lv_obj_draw_part_dsc_t* dsc = lv_event_get_draw_part_dsc(event);
    if (dsc->part == LV_PART_ITEMS)
    {
        if (!dsc->p1 || !dsc->p2)
        {
            return;
        }

        /*添加一个线条蒙版，保持线条下方的区域*/
        lv_draw_mask_line_param_t line_mask_param;
        lv_draw_mask_line_points_init(&line_mask_param, dsc->p1->x, dsc->p1->y, dsc->p2->x, dsc->p2->y, LV_DRAW_MASK_LINE_SIDE_BOTTOM);
        int16_t line_mask_id = lv_draw_mask_add(&line_mask_param, NULL);

        /*添加淡出效果:透明的底部覆盖顶部*/
        lv_coord_t h = lv_obj_get_height(obj);
        lv_draw_mask_fade_param_t fade_mask_param;
        lv_draw_mask_fade_init(&fade_mask_param, &obj->coords, LV_OPA_COVER, obj->coords.y1 + h / 8, LV_OPA_TRANSP, obj->coords.y2);
        int16_t fade_mask_id = lv_draw_mask_add(&fade_mask_param, NULL);

        /*绘制一个受蒙版影响的矩形*/
        lv_draw_rect_dsc_t draw_rect_dsc;
        lv_draw_rect_dsc_init(&draw_rect_dsc);
        draw_rect_dsc.bg_opa = LV_OPA_20;
        draw_rect_dsc.bg_color = dsc->line_dsc->color;

        lv_area_t area;
        area.x1 = dsc->p1->x;
        area.x2 = dsc->p2->x - 1;
        area.y1 = LV_MIN(dsc->p1->y, dsc->p2->y);
        area.y2 = obj->coords.y2;
        //lv_draw_rect(, dsc->rect_dsc, &area);

        /*删除蒙版*/
        lv_draw_mask_free_param(&line_mask_param);
        lv_draw_mask_free_param(&fade_mask_param);
        lv_draw_mask_remove_id(line_mask_id);
        lv_draw_mask_remove_id(fade_mask_id);
    }
}


/**
 * @brief Initializing a module
 * @param module The module to be initialized
 * @param icon_src Icon of the module
*/
static void module_style_init(module_t* module, const void* icon_src)
{
    lv_obj_remove_style_all(module->container);
    lv_obj_set_style_radius(module->container, 6, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(module->container, LV_OPA_50, LV_PART_MAIN);
    lv_obj_set_style_bg_color(module->container, lv_color_hex(0x151515), LV_PART_MAIN);
    lv_obj_set_size(module->container, MODULE_WIDTH, MODULE_HEIGHT);

    /*Icon*/
    lv_obj_set_size(module->icon, 28, 28);
    lv_obj_align(module->icon, LV_ALIGN_TOP_LEFT, 4, 4);
    lv_obj_update_layout(module->icon);
    if (icon_src != NULL)
    {
        lv_img_set_src(module->icon, icon_src);
    }

    /*Temperature Bar*/
    lv_obj_remove_style_all(module->temp_bar);
    lv_obj_set_style_radius(module->temp_bar, 4, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(module->temp_bar, LV_OPA_20, LV_PART_MAIN);
    lv_obj_set_style_bg_color(module->temp_bar, lv_color_black(), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(module->temp_bar, LV_OPA_COVER, LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(module->temp_bar, lv_color_hex(0xFF6B6B), LV_PART_INDICATOR);
    lv_obj_set_size(module->temp_bar, MODULE_WIDTH - (lv_obj_get_width(module->icon) + 14), 18);
    lv_obj_align_to(module->temp_bar, module->icon, LV_ALIGN_OUT_RIGHT_MID, 4, 0);
    lv_bar_set_range(module->temp_bar, 0, 100);
    lv_bar_set_value(module->temp_bar, 50, LV_ANIM_ON);

    /*Temperature Label*/
    lv_obj_remove_style_all(module->temp_label);
    lv_obj_set_style_text_color(module->temp_label, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_text_font(module->temp_label, &lv_font_montserrat_18, LV_PART_MAIN);
    lv_obj_center(module->temp_label);
    lv_label_set_text(module->temp_label, "00");

    /*Utilize Label*/
    lv_obj_remove_style_all(module->utilize_label);
    lv_obj_set_style_text_color(module->utilize_label, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_text_font(module->utilize_label, &lv_font_montserrat_48, LV_PART_MAIN);
    lv_obj_align(module->utilize_label, LV_ALIGN_CENTER, 0, 8);

    /*Utilize Chart*/
    lv_obj_move_background(module->utilize_chart);
    lv_obj_set_style_bg_opa(module->utilize_chart, LV_OPA_0, LV_PART_MAIN);
    lv_obj_set_style_line_width(module->utilize_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(module->utilize_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(module->utilize_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_size(module->utilize_chart, 0, LV_PART_INDICATOR); //在数据上不显示点
    lv_obj_set_style_opa(module->utilize_chart, LV_OPA_80, LV_PART_ITEMS);
    lv_obj_set_size(module->utilize_chart, MODULE_WIDTH, LV_PCT(40));
    lv_obj_set_align(module->utilize_chart, LV_ALIGN_BOTTOM_LEFT);
    lv_chart_set_type(module->utilize_chart, LV_CHART_TYPE_LINE);
    lv_chart_set_range(module->utilize_chart, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_point_count(module->utilize_chart, 60);
    lv_chart_set_update_mode(module->utilize_chart, LV_CHART_UPDATE_MODE_SHIFT);
    lv_chart_set_div_line_count(module->utilize_chart, 10, 10);
    lv_obj_add_event_cb(module->utilize_chart, chart_draw_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL);
}


/**
 * @brief 
 * @param parent 
 * @param icon_src 
 * @return 
*/
module_t* module_create(lv_obj_t* parent, const void* icon_src)
{
    module_t* _module = (module_t*)malloc(sizeof(module_t));

    if (_module != NULL)
    {
        _module->container = lv_obj_create(parent);

        _module->icon = lv_img_create(_module->container);

        _module->temp_bar = lv_bar_create(_module->container);

        _module->temp_label = lv_label_create(_module->temp_bar);

        _module->utilize_label = lv_label_create(_module->container);

        _module->utilize_chart = lv_chart_create(_module->container);

        _module->utilize_series = lv_chart_add_series(_module->utilize_chart, lv_palette_main(LV_PALETTE_RED)/*线条颜色*/, LV_CHART_AXIS_PRIMARY_Y);

        module_style_init(_module, icon_src);
    }

    return _module;
}


/**
 * @brief 设置模块的图标
 * @param module 需要设置的模块
 * @param icon_src 图标的路径
*/
void module_set_icon(module_t* module, const void* icon_src)
{
    if (module != NULL)
    {
        lv_img_set_src(module->icon, icon_src);
    }
}


/**
 * @brief 设置模块中温度的值
 * @param module 需要设置的模块
 * @param value 温度
*/
void module_set_temp_value(module_t* module, int32_t value)
{
    lv_bar_set_value(module->temp_bar, value, LV_ANIM_ON);
    lv_label_set_text_fmt(module->temp_label, "%02d", value);
}


/**
 * @brief 设置模块中资源利用率的值
 * @param module 需要设置的模块
 * @param value 利用率
*/
void module_set_utilize_value(module_t* module, int32_t value)
{
    lv_label_set_text_fmt(module->temp_label, "%02d", value);
}


/**
 * @brief 设置模块中图表折线的颜色
 * @param module 需要设置的模块
 * @param color 颜色
*/
void module_set_chart_line_color(module_t* module, lv_color_t color)
{
    lv_chart_set_series_color(module->utilize_chart, module->utilize_series, color);
}
