#include "home_tile.h"

lv_obj_t* time_label;

lv_obj_t* date_label;

lv_obj_t* sunset_sunrise_arc;

lv_obj_t* sunset_time_label;

lv_obj_t* sunrise_time_label;

lv_obj_t* weather_label;

char* wday[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };

time_t timep;
struct tm* p;


static void update_time(lv_timer_t timer);

/**
 * @brief 桌面主页时钟初始化
 * @param tile 需要初始化的Tile
*/
void home_tile_init(lv_obj_t* tile)
{
    lv_obj_clear_flag(tile, LV_OBJ_FLAG_SCROLLABLE);

    /*Time Label*/
    time_label = lv_label_create(tile);
    lv_label_set_text(time_label, "00:00:00");
    lv_obj_set_style_text_font(time_label, &lv_font_jetbrainsmono_60, LV_PART_MAIN);
    lv_obj_set_style_text_color(time_label, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_align(time_label, LV_ALIGN_CENTER, 0, -10);

    /*Date Label*/
    date_label = lv_label_create(tile);
    lv_label_set_text(date_label, "1900年03月01日 星期一");
    lv_obj_set_style_text_color(date_label, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_text_font(date_label, GLOBALE_FONT, LV_PART_MAIN);
    lv_obj_align_to(date_label, time_label, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);

    sunset_sunrise_arc = lv_arc_create(tile);
    lv_obj_remove_style_all(sunset_sunrise_arc);
    lv_arc_set_bg_angles(sunset_sunrise_arc, 220, 320);
    lv_obj_set_style_arc_width(sunset_sunrise_arc, 1, LV_PART_MAIN);
    lv_obj_set_style_arc_color(sunset_sunrise_arc, lv_color_hex(0xFFEB3B), LV_PART_MAIN);
    lv_obj_set_style_pad_all(sunset_sunrise_arc, 16, LV_PART_KNOB);
    lv_obj_set_style_bg_img_src(sunset_sunrise_arc, &lv_img_sun, LV_PART_KNOB);
    lv_obj_set_style_bg_img_recolor_opa(sunset_sunrise_arc, LV_OPA_COVER, LV_PART_KNOB);
    lv_obj_set_style_bg_img_recolor(sunset_sunrise_arc, lv_palette_main(LV_PALETTE_RED), LV_PART_KNOB);
    lv_obj_set_size(sunset_sunrise_arc, 320, 320);
    lv_obj_set_y(sunset_sunrise_arc, 190);
    lv_obj_set_style_radius(sunset_sunrise_arc, 180, LV_PART_MAIN);
    lv_obj_set_style_shadow_color(sunset_sunrise_arc, lv_color_hex(0xFFEB3B), LV_PART_MAIN);
    lv_obj_set_style_shadow_width(sunset_sunrise_arc, 60, LV_PART_MAIN);
    lv_obj_set_style_shadow_opa(sunset_sunrise_arc, LV_OPA_COVER, LV_PART_MAIN);

    /*Sunset Time Label*/
    sunset_time_label = lv_label_create(sunset_sunrise_arc);
    lv_label_set_text(sunset_time_label, "07:00");
    lv_obj_set_style_text_font(sunset_time_label, &lv_font_jetbrainsmono_16, LV_PART_MAIN);
    lv_obj_set_style_text_color(sunset_time_label, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_align(sunset_time_label, LV_ALIGN_TOP_MID, -60, 30);

    /*Sunrise Time Label*/
    sunrise_time_label = lv_label_create(sunset_sunrise_arc);
    lv_label_set_text(sunrise_time_label, "18:50");
    lv_obj_set_style_text_font(sunrise_time_label, &lv_font_jetbrainsmono_16, LV_PART_MAIN);
    lv_obj_set_style_text_color(sunrise_time_label, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_align(sunrise_time_label, LV_ALIGN_TOP_MID, 60, 30);

    /*Weather Label*/
    weather_label = lv_label_create(tile);
    lv_label_set_text(weather_label, "北京 多云转晴 23℃");
    lv_obj_set_style_text_color(weather_label, GLOBALE_COLOR, LV_PART_MAIN);
    lv_obj_set_style_text_font(weather_label, GLOBALE_FONT, LV_PART_MAIN);
    lv_obj_align_to(weather_label, time_label, LV_ALIGN_OUT_TOP_MID, 0, -10);
    
    lv_timer_create(update_time, 1000, NULL);
}

static void update_time(lv_timer_t timer)
{
    time(&timep);
    p = localtime(&timep);

    lv_label_set_text_fmt(time_label, "%02d:%02d:%02d", p->tm_hour, p->tm_min, p->tm_sec);
    lv_label_set_text_fmt(date_label, "%04d年%02d月%02d日 %s", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, wday[p->tm_wday]);
}
