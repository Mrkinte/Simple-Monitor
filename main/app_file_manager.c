#include "app_file_manager.h"

static lv_obj_t* file_list;

static char current_path[LV_FS_MAX_PATH_LENGTH] = { 0 };

static void app_manager_update_file_list(char* path);
static void btn_event_cb(lv_event_t* event);

lv_obj_t* app_file_manager(void* user_date)
{
    file_list = lv_list_create(lv_scr_act());
    lv_obj_set_scroll_dir(file_list, LV_DIR_VER);
    lv_obj_set_size(file_list, LV_PCT(100), LV_PCT(100));
    lv_obj_set_scrollbar_mode(file_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_all(file_list, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_top(file_list, 30, LV_PART_MAIN);
    lv_obj_set_style_pad_row(file_list, 0, LV_PART_MAIN);
    lv_obj_set_style_text_font(file_list, &lv_font_montserrat_16, LV_PART_MAIN);

    lv_fs_get_letters(current_path);
    app_manager_update_file_list(current_path);

    return file_list;
}

static void app_manager_update_file_list(char* path)
{
    lv_fs_dir_t rddir_p;
    if (lv_fs_dir_open(&rddir_p, path) == LV_FS_RES_OK)
    {
        char fn[256];
        memset(fn, 0, 256);
        lv_obj_clean(file_list);

        if (strcmp(path, "//") != 0)
        {
            lv_obj_t* back_btn = lv_list_add_btn(file_list, NULL, /*"../上一级"*/"../Last");
            lv_obj_set_size(back_btn, LV_HOR_RES, 40);
            lv_obj_add_event_cb(back_btn, btn_event_cb, LV_EVENT_CLICKED, NULL);
        }

        while (lv_fs_dir_read(&rddir_p, fn) == LV_FS_RES_OK && strlen(fn) != 0)
        {
            file_type_t* file_type = (file_type_t*)lv_mem_alloc(sizeof(file_type_t));
            lv_obj_t* btn;

            if (fn[0] == '/')
            {
                *file_type = DIR;
                btn = lv_list_add_btn(file_list, LV_SYMBOL_DIRECTORY, fn + 1);
            }
            else if (strcmp(lv_fs_get_ext(fn), "png") == 0)
            {
                *file_type = PNG;
                btn = lv_list_add_btn(file_list, LV_SYMBOL_IMAGE, fn);
            }
            else
            {
                *file_type = UNKNOW;
                btn = lv_list_add_btn(file_list, LV_SYMBOL_FILE, fn);
            }

            lv_obj_set_user_data(btn, file_type);
            //lv_obj_set_style_border_side(btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN);
            //lv_obj_set_style_border_width(btn, 1, LV_PART_MAIN);
            //lv_obj_set_style_bg_color(btn, lv_color_black(), LV_PART_MAIN | LV_STATE_FOCUSED);
            //lv_obj_set_style_bg_opa(btn, LV_OPA_20, LV_PART_MAIN | LV_STATE_FOCUSED);
            //lv_obj_set_style_bg_opa(btn, LV_OPA_50, LV_PART_MAIN | LV_STATE_PRESSED);
            //lv_obj_set_style_pad_left(btn, 10, LV_PART_MAIN);
            //lv_obj_set_style_pad_right(btn, 10, LV_PART_MAIN);
            lv_obj_set_size(btn, LV_HOR_RES, 40);
            lv_obj_add_event_cb(btn, btn_event_cb, LV_EVENT_CLICKED, NULL);
            lv_obj_add_event_cb(btn, btn_event_cb, LV_EVENT_DELETE, NULL);
        }
        lv_fs_dir_close(&rddir_p);
    }
}

static void btn_event_cb(lv_event_t* event)
{
    file_type_t* file_type;

    switch (event->code)
    {
    case LV_EVENT_CLICKED:
        file_type = (file_type_t*)lv_obj_get_user_data(event->current_target);

        if (file_type == NULL)
        {
            if (lv_obj_get_index(lv_event_get_current_target(event)) == 0)
            {
                lv_fs_up(current_path);
                strcat(current_path, "/");
                app_manager_update_file_list(current_path);
            }
            return;
        }

        if (*file_type == DIR)
        {
            char* dir_name = lv_list_get_btn_text(file_list, lv_event_get_current_target(event));

            strcat(current_path, dir_name);
            strcat(current_path, "/");

            app_manager_update_file_list(current_path);
        }
        else
        {
            
        }
        break;
    case LV_EVENT_DELETE:
        file_type = (file_type_t *)lv_obj_get_user_data(event->current_target);
        if (file_type != NULL)
        {
            lv_mem_free(file_type);
        }
        LV_LOG_WARN("DEL");
        break;
    default:
        break;
    }
}
