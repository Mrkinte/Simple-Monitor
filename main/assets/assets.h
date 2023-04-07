#ifndef ASSETS_H
#define ASSETS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

/*字体*/
LV_FONT_DECLARE(lv_font_jetbrainsmono_16);
LV_FONT_DECLARE(lv_font_jetbrainsmono_60);
LV_FONT_DECLARE(lv_font_oplusans_16);

/*图片*/
LV_IMG_DECLARE(lv_img_wifi);
LV_IMG_DECLARE(lv_img_pc);
LV_IMG_DECLARE(lv_img_bg);
LV_IMG_DECLARE(lv_img_sun);
LV_IMG_DECLARE(lv_img_about);
LV_IMG_DECLARE(lv_img_system);

//#define DARK_STYLE 1

#ifdef DARK_STYLE
#define GLOBALE_COLOR lv_color_white()
#else
#define GLOBALE_COLOR lv_color_black()
#endif

#define GLOBALE_FONT &lv_font_oplusans_16

void assets_init(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*ASSETS_H*/
