#pragma once

#include <esp_log.h>

#define log_v(format, ...) ESP_LOGV("astubs", format, ##__VA_ARGS__);
#define log_d(format, ...) ESP_LOGD("astubs", format, ##__VA_ARGS__);
#define log_i(format, ...) ESP_LOGI("astubs", format, ##__VA_ARGS__);
#define log_w(format, ...) ESP_LOGW("astubs", format, ##__VA_ARGS__);
#define log_e(format, ...) ESP_LOGE("astubs", format, ##__VA_ARGS__);