#include "performance_tile.h"

module_t* cpu_module;
module_t* mem_module;
module_t* gpu_module;

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
        lv_draw_rect(dsc->draw_ctx, dsc->rect_dsc, &area);

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
    lv_obj_remove_style_all(module->module);
    lv_obj_set_style_radius(module->module, 6, LV_PART_MAIN);
    lv_obj_set_style_bg_opa(module->module, LV_OPA_50, LV_PART_MAIN);
    lv_obj_set_style_bg_color(module->module, lv_color_hex(0x151515), LV_PART_MAIN);
    lv_obj_set_size(module->module, MODULE_WIDTH, MODULE_HEIGHT);
    lv_obj_clear_flag(module->module, LV_OBJ_FLAG_SCROLLABLE);

    /*Icon*/
    lv_obj_set_size(module->icon, 28, 28);
    lv_obj_align(module->icon, LV_ALIGN_TOP_LEFT, 4, 4);
    lv_obj_update_layout(module->icon);
    if (icon_src != NULL)
    {
        lv_img_set_src(module->icon, icon_src);
    }

    /*Hardware Name*/
    lv_obj_align_to(module->hardware_name, module->icon, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
    lv_obj_set_style_text_color(module->hardware_name, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_text_font(module->hardware_name, &lv_font_jetbrainsmono_16, LV_PART_MAIN);
    lv_obj_set_width(module->hardware_name, MODULE_WIDTH - 28);
    lv_label_set_long_mode(module->hardware_name, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(module->hardware_name, "NVIDA RTX 3080Ti");

    /*Utilize Label*/
    lv_obj_remove_style_all(module->usage_label);
    lv_obj_set_style_text_color(module->usage_label, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_text_font(module->usage_label, &lv_font_jetbrainsmono_60, LV_PART_MAIN);
    lv_label_set_text(module->usage_label, "40%");
    lv_obj_align(module->usage_label, LV_ALIGN_CENTER, 0, 8);

    /*Utilize Chart*/
    lv_obj_move_background(module->usage_chart);
    lv_obj_set_style_bg_opa(module->usage_chart, LV_OPA_0, LV_PART_MAIN);
    lv_obj_set_style_line_width(module->usage_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(module->usage_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(module->usage_chart, 0, LV_PART_MAIN);
    lv_obj_set_style_size(module->usage_chart, 0, LV_PART_INDICATOR);     //在折线上不显示点
    lv_obj_set_style_opa(module->usage_chart, LV_OPA_80, LV_PART_ITEMS);
    lv_obj_set_size(module->usage_chart, MODULE_WIDTH, LV_PCT(40));
    lv_obj_align(module->usage_chart, LV_ALIGN_BOTTOM_LEFT, 0, -5);
    lv_chart_set_type(module->usage_chart, LV_CHART_TYPE_LINE);
    lv_chart_set_range(module->usage_chart, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_point_count(module->usage_chart, 30);
    lv_chart_set_update_mode(module->usage_chart, LV_CHART_UPDATE_MODE_SHIFT);
    lv_chart_set_div_line_count(module->usage_chart, 10, 10);
    lv_obj_add_event_cb(module->usage_chart, chart_draw_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL);
}


/**
 * @brief
 * @param parent
 * @param icon_src
 * @return
*/
static module_t* module_create(lv_obj_t* parent, const void* icon_src)
{
    module_t* _module = (module_t*)malloc(sizeof(module_t));

    if (_module != NULL)
    {
        _module->module = lv_obj_create(parent);
        _module->icon = lv_img_create(_module->module);
        _module->hardware_name = lv_label_create(_module->module);
        _module->usage_label = lv_label_create(_module->module);
        _module->usage_chart = lv_chart_create(_module->module);
        _module->usage_series = lv_chart_add_series(_module->usage_chart, lv_palette_main(LV_PALETTE_RED)/*线条颜色*/, LV_CHART_AXIS_PRIMARY_Y);
        module_style_init(_module, icon_src);
    }

    return _module;
}


void module_set_icon(module_t* module, const void* icon_src)
{
    if (module != NULL)
    {
        lv_img_set_src(module->icon, icon_src);
    }
}


void module_set_usage_value(module_t* module, int value)
{
    lv_label_set_text_fmt(module->usage_label, "%02d%%", value);
}


void module_set_chart_line_color(module_t* module, lv_color_t color)
{
    lv_chart_set_series_color(module->usage_chart, module->usage_series, color);
}

static chart_add_value(lv_timer_t* timer)
{
    uint32_t cpu_usage = lv_rand(1, 50);
    uint32_t mem_usage = lv_rand(1, 50);
    uint32_t gpu_usage = lv_rand(1, 50);

    module_set_usage_value(cpu_module, cpu_usage);
    lv_chart_set_next_value(cpu_module->usage_chart, cpu_module->usage_series, cpu_usage);
    module_set_usage_value(mem_module, mem_usage);
    lv_chart_set_next_value(mem_module->usage_chart, mem_module->usage_series, mem_usage);
    module_set_usage_value(gpu_module, gpu_usage);
    lv_chart_set_next_value(gpu_module->usage_chart, gpu_module->usage_series, gpu_usage);
}

void performance_tile_init(lv_obj_t* tile)
{
    lv_obj_set_flex_flow(tile, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_style_pad_all(tile, MTM_GAP, LV_PART_MAIN);
    lv_obj_set_style_pad_row(tile, MTM_GAP, LV_PART_MAIN);
    lv_obj_set_style_pad_column(tile, MTM_GAP, LV_PART_MAIN);

    cpu_module = module_create(tile, NULL);
    mem_module = module_create(tile, NULL);
    gpu_module = module_create(tile, NULL);
    //module_create(tile, NULL);

    lv_timer_create(chart_add_value, 1000, NULL);
}
