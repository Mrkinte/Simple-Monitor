#include "status_bar.h"


/*Static Variable*/
static lv_obj_t* status_bar;
static lv_obj_t* app_name_label;
static lv_obj_t* wifi_status_img;
static lv_obj_t* pc_status_img;     //上位机连接状态图标

/*Static Function*/
static void status_bar_hidden_anim(void* var, int32_t value);

/**
 * @brief 
 * @param  
*/
void status_bar_init(void)
{
    if (lv_obj_is_valid(status_bar))
    {
        printf("Error,Status Bar Exised!");
        return;
    }

    status_bar = lv_obj_create(lv_disp_get_layer_top(lv_disp_get_default()));
    //lv_obj_set_style_bg_color(status_bar, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(status_bar, LV_OPA_0, LV_PART_MAIN);
    lv_obj_set_style_radius(status_bar, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(status_bar, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(status_bar, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_column(status_bar, 0, LV_PART_MAIN);
    lv_obj_clear_flag(status_bar, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_size(status_bar, LV_PCT(100), 28);

    app_name_label = lv_label_create(status_bar);
    lv_label_set_text(app_name_label, "Marjin");
    lv_obj_align(app_name_label, LV_ALIGN_LEFT_MID, 10, 0);


    lv_obj_t* right_container = lv_obj_create(status_bar);
    lv_obj_set_style_bg_opa(right_container, LV_OPA_0, LV_PART_MAIN);
    lv_obj_set_style_radius(right_container, 0, LV_PART_MAIN);
    lv_obj_set_style_border_width(right_container, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(right_container, 5, LV_PART_MAIN);
    lv_obj_set_style_pad_column(right_container, 5, LV_PART_MAIN);
    lv_obj_clear_flag(right_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_align(right_container, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_flex_flow(right_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(right_container, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER);

    wifi_status_img = lv_img_create(right_container);
    lv_img_set_src(wifi_status_img, &lv_img_wifi);
    lv_obj_set_style_img_recolor_opa(wifi_status_img, LV_OPA_COVER, LV_PART_MAIN);
    lv_obj_set_style_img_recolor(wifi_status_img, lv_palette_main(LV_PALETTE_RED), LV_PART_MAIN);

    pc_status_img = lv_img_create(right_container);
    lv_img_set_src(pc_status_img, &lv_img_pc);
    lv_obj_set_style_img_recolor_opa(pc_status_img, LV_OPA_COVER, LV_PART_MAIN);
    lv_obj_set_style_img_recolor(pc_status_img, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_img_recolor(pc_status_img, lv_palette_main(LV_PALETTE_RED), LV_PART_MAIN);
}

/**
 * @brief 
 * @param status_bar 
 * @param enable 
*/
void status_bar_hidden(bool enable)
{
    if (status_bar == NULL)
    {
        return;
    }
    lv_anim_t anim;
    lv_anim_init(&anim);
    lv_anim_set_var(&anim, status_bar);
    lv_anim_set_time(&anim, 500);
    lv_anim_set_exec_cb(&anim, status_bar_hidden_anim);
    lv_anim_set_path_cb(&anim, lv_anim_path_linear);

    if (enable)
    {
        lv_anim_set_values(&anim, 0, -lv_obj_get_height(status_bar));
    }
    else
    {
        lv_anim_set_values(&anim, -lv_obj_get_height(status_bar), 0);
    }
    lv_anim_start(&anim);
}

void status_bar_set_name(const char* app_name)
{
    lv_label_set_text(app_name_label, app_name);
}

void status_bar_set_opa(lv_opa_t value)
{
    lv_obj_set_style_bg_opa(status_bar, value, LV_PART_MAIN);
}

void status_bar_set_wifi_status(connect_status_t status)
{
    if (status == CONNECT)
    {
        lv_obj_clear_flag(wifi_status_img, LV_OBJ_FLAG_HIDDEN);
    }
    else
    {
        lv_obj_add_flag(wifi_status_img, LV_OBJ_FLAG_HIDDEN);
    }
}

void status_bar_set_pc_status(connect_status_t status)
{
    if (status == CONNECT)
    {
        lv_obj_clear_flag(pc_status_img, LV_OBJ_FLAG_HIDDEN);
    }
    else
    {
        lv_obj_add_flag(pc_status_img, LV_OBJ_FLAG_HIDDEN);
    }
}


/**
 * @brief 
 * @param var 
 * @param value 
*/
static void status_bar_hidden_anim(void* var, int32_t value)
{
    lv_obj_move_to(var, 0, value);
}
