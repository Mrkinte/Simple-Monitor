#include "app_about.h"

static const char* MCU_Model = "ESP32-S3";

/*硬件信息*/
static lv_obj_t* cpu_model_label;
static lv_obj_t* cpu_temperature_label;
static lv_obj_t* internal_heap_usage_label;
static lv_obj_t* external_heap_usage_label;
static lv_obj_t* sdcard_cap_label;
/*网络信息*/
static lv_obj_t* ipv4_addr_label;
static lv_obj_t* ipv4_mask_label;
static lv_obj_t* ipv6_addr_label;
static lv_obj_t* mac_address_label;
/*关于作者*/
static lv_obj_t* github_label;
static lv_obj_t* bilibili_label;
/*软件信息*/
static lv_obj_t* espidf_version_label;
static lv_obj_t* startup_time_label;

static void app_about_update_data(lv_timer_t timer);
static lv_timer_t* app_about_update_data_timer;

static lv_obj_t* about_list_add_item(lv_obj_t* parent, const char* name, const char* value);

lv_obj_t* app_about(void* user_date)
{
    lv_obj_t* app_about_obj = lv_obj_create(lv_scr_act());
    lv_obj_set_scroll_dir(app_about_obj, LV_DIR_VER);
    lv_obj_set_flex_flow(app_about_obj, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_size(app_about_obj, LV_PCT(100), LV_PCT(100));
    lv_obj_set_scrollbar_mode(app_about_obj, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_all(app_about_obj, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_top(app_about_obj, 30, LV_PART_MAIN);
    lv_obj_set_style_pad_row(app_about_obj, 0, LV_PART_MAIN);

    cpu_model_label = about_list_add_item(app_about_obj, "CPU型号", MCU_Model);
    cpu_temperature_label = about_list_add_item(app_about_obj, "CPU温度", "");
    internal_heap_usage_label = about_list_add_item(app_about_obj, "SRAM剩余", "");
    external_heap_usage_label = about_list_add_item(app_about_obj, "PSRAM剩余", "");
    sdcard_cap_label = about_list_add_item(app_about_obj, "SD卡剩余", "");
    ipv4_addr_label = about_list_add_item(app_about_obj, "IPv4地址", "");

    mac_address_label = about_list_add_item(app_about_obj, "MAC地址", "");
    startup_time_label = about_list_add_item(app_about_obj, "系统已运行时间", "");

    app_about_update_data_timer = lv_timer_create(app_about_update_data, 1000, NULL);
}


static lv_obj_t* about_list_add_item(lv_obj_t* parent, const char* name, const char* value)
{
    lv_obj_t* about_item = lv_btn_create(parent);
    lv_obj_remove_style_all(about_item);
    lv_obj_set_style_border_side(about_item, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN);
    lv_obj_set_style_border_width(about_item, 1, LV_PART_MAIN);
    //lv_obj_set_style_bg_color(about_item, lv_color_black(), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(about_item, LV_OPA_20, LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(about_item, LV_OPA_50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_pad_left(about_item, 10, LV_PART_MAIN);
    lv_obj_set_style_pad_right(about_item, 10, LV_PART_MAIN);
    lv_obj_set_size(about_item, LV_HOR_RES, 40);

    lv_obj_t* item_name = lv_label_create(about_item);
    lv_label_set_text(item_name, name);
    lv_obj_set_style_text_font(item_name, GLOBALE_FONT, LV_PART_MAIN);
    lv_obj_set_align(item_name, LV_ALIGN_LEFT_MID);

    lv_obj_t* item_value = lv_label_create(about_item);
    lv_label_set_text(item_value, value);
    lv_label_set_long_mode(item_value, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_style_text_font(item_value, GLOBALE_FONT, LV_PART_MAIN);
    lv_obj_set_style_text_align(item_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN);
    lv_obj_set_align(item_value, LV_ALIGN_RIGHT_MID);

    return about_item;
}


static void app_about_update_data(lv_timer_t timer)
{
    lv_label_set_text_fmt(lv_obj_get_child(cpu_temperature_label, 1), "%d℃", (int)lv_rand(0, 100));
    lv_label_set_text_fmt(lv_obj_get_child(internal_heap_usage_label, 1), "25%%\n2.1MB/8MB");
    lv_label_set_text_fmt(lv_obj_get_child(external_heap_usage_label, 1), "25%%\n2.1MB/8MB");
    lv_label_set_text_fmt(lv_obj_get_child(sdcard_cap_label, 1), "%.1f/%.1f", 3.1, 59.2);
    lv_label_set_text_fmt(lv_obj_get_child(ipv4_addr_label, 1), "%d:%d:%d:%d", 192, 168, 6, 110);

    if (lv_obj_is_valid(ipv6_addr_label))
    {
        lv_label_set_text_fmt(lv_obj_get_child(ipv6_addr_label, 1), "2048:1234:1234:1234:1234:1234:af0e:000d");
    }

    lv_label_set_text_fmt(lv_obj_get_child(mac_address_label, 1), "%s", "Not Know");
}

void app_about_release_resource_cb(lv_event_t* event)
{
    LV_LOG_WARN("ABOUT释放资源");
    lv_timer_del(app_about_update_data_timer);
}

