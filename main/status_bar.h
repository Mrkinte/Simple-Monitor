#ifndef STATUS_BAR_H
#define STATUS_BAR_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "assets/assets.h"

typedef enum
{
    DISCONNECT = 0,
    CONNECT,
}connect_status_t;

void status_bar_init(void);
void status_bar_hidden(bool enable);
void status_bar_set_name(const char* app_name);
void status_bar_set_opa(lv_opa_t value);
void status_bar_set_wifi_status(connect_status_t status);
void status_bar_set_pc_status(connect_status_t status);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*STATUS_BAR_H*/
