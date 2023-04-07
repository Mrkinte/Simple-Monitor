#include "main_screen.h"
#include "app_about.h"

static lv_obj_t* tileview;

static void tileview_load_tile_event_cb(lv_event_t* event);

void main_screen_init(void)
{
    assets_init();

    lv_disp_t* display = lv_disp_get_default();

    //lv_theme_t* th = lv_theme_default_init
    //(
    //    display,
    //    lv_color_hex(0xFFFFFF),
    //    lv_color_hex(0x000000),
    //    false,
    //    &lv_font_montserrat_16
    //);

    //lv_disp_set_theme(display, th);

    status_bar_init();


    /*桌面TileView创建，实现Android桌面左右滑动的效果*/
    tileview = lv_tileview_create(lv_scr_act());
    lv_obj_add_event_cb(tileview, tileview_load_tile_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_set_scrollbar_mode(tileview, LV_SCROLLBAR_MODE_OFF);
    //lv_obj_set_style_bg_img_src(tileview, &lv_img_bg, LV_PART_MAIN);

    lv_obj_t* performance_tile = lv_tileview_add_tile(tileview, 0, 0, LV_DIR_RIGHT);
    performance_tile_init(performance_tile);

    lv_obj_t* home_tile = lv_tileview_add_tile(tileview, 1, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
    home_tile_init(home_tile);

    lv_obj_t* application_tile = lv_tileview_add_tile(tileview, 2, 0, LV_DIR_LEFT);
    application_tile_init(application_tile);

    /*设置主页面为时间所在页*/
    lv_obj_set_tile(tileview, home_tile, LV_ANIM_OFF);
}


static void tileview_load_tile_event_cb(lv_event_t* event)
{
    static bool first_trigger = false;
    if (lv_obj_get_index(lv_tileview_get_tile_act(tileview)) == 0 && first_trigger == false)
    {
        LV_LOG_ERROR("Hello,Performance");
        status_bar_hidden(true);
        first_trigger = true;
    }
    else if (lv_obj_get_index(lv_tileview_get_tile_act(tileview)) == 1)
    {
        LV_LOG_ERROR("Hello,Home");
        status_bar_set_name("Marjin");
        if (first_trigger == true)
        {
            status_bar_hidden(false);
        }
        first_trigger = false;
    }
    else if (lv_obj_get_index(lv_tileview_get_tile_act(tileview)) == 2 && first_trigger == false)
    {
        LV_LOG_ERROR("Hello,Application");
        //first_trigger = true;
    }
}

