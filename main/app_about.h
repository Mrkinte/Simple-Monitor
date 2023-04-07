#ifndef APP_ABOUT_H
#define APP_ABOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "assets/assets.h"
#include "status_bar.h"

lv_obj_t* app_about(void* user_date);
void app_about_release_resource_cb(lv_event_t* event);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*APP_ABOUT_H*/
