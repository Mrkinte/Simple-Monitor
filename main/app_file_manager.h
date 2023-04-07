#ifndef APP_FILE_MANAGER_H
#define APP_FILE_MANAGER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "assets/assets.h"
#include "status_bar.h"

typedef enum
{
    DIR = 0,
    UNKNOW,
    PNG,
    JPG,
    MP3,
    BIN,
}file_type_t;

lv_obj_t* app_file_manager(void* user_date);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*APP_FILE_MANAGER_H*/
