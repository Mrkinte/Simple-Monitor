#ifndef APPLICATION_TILE_H
#define APPLICATION_TILE_H


#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct _application_info_t
    {
        char name[32];

        void (*application_entry_point)();

    }application_info_t;

    char running_application_name[32];

    lv_obj_t* running_application;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*APPLICATION_TILE_H*/
