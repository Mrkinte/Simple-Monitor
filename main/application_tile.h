#ifndef APPLICATION_TILE_H
#define APPLICATION_TILE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "assets/assets.h"
#include "status_bar.h"

#include "app_about.h"
#include "app_music.h"
#include "app_file_manager.h"

typedef struct _application_info_t
{
    char* name;

    char* img_src;

    lv_obj_t* (*entry_point)(void* user_date);

    void (*release_resource_cb)(lv_event_t* event);

}application_info_t;

void application_tile_init(lv_obj_t* tile);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*APPLICATION_TILE_H*/
