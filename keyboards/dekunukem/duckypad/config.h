#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0B91
#define DEVICE_VER      0x0001
#define MANUFACTURER dekuNukem
#define PRODUCT duckyPad
#define DESCRIPTION Open Source Keypad

#define MATRIX_ROWS 1
#define MATRIX_COLS 17

#define DIRECT_PINS {{ B13, B14, B15, A8, A15, B3, B4, B5, B6, B7, C13, C14, C15, F0, F1, A1, A2 }}

#define RGB_DI_PIN A10
#define RGBLED_NUM 15
#define DRIVER_LED_TOTAL 15

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_SIMPLE
