#include "app_music.h"
#include "status_bar.h"

lv_obj_t* app_music(void)
{
    lv_obj_t* container = lv_obj_create(lv_scr_act());
    lv_obj_set_size(container, LV_PCT(100), LV_PCT(100));
    lv_obj_set_scrollbar_mode(container, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_all(container, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_top(container, 30, LV_PART_MAIN);
    lv_obj_set_style_pad_row(container, 0, LV_PART_MAIN);

    lv_obj_t* label = lv_label_create(container);
    lv_label_set_text(label, "雨一直下dddddddddddddddddddddddddddddddd");
    lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_style_text_font(label, &lv_font_oplusans_16, LV_PART_MAIN);
    lv_obj_set_width(label, LV_HOR_RES - 100);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, -20);
}
