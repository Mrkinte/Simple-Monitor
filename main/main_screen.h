#ifndef MAIN_SCREEN_H
#define MAIN_SCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <malloc.h>
#include "lvgl/lvgl.h"
#include "assets/assets.h"
#include "performance_tile.h"
#include "home_tile.h"
#include "application_tile.h"
#include "status_bar.h"

void main_screen_init(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*MAIN_SCREEN_H*/
