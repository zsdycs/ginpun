#pragma once

#include "config_common.h"

/* USB 设备描述符参数 */
#define VENDOR_ID       0x3384
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
// 制造商
#define MANUFACTURER    lipk.org
// 产品名称
#define PRODUCT         Lipk Keyboard 1.1 via_32a
// 描述
#define DESCRIPTION         Lipk Keyboard 1.1 via_32a

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
// 32a
#define MATRIX_ROW_PINS { A1, A2, A3, A4, A5, A6, }
#define MATRIX_COL_PINS { D0, C0, D1, D5, D6, D7, C1, C2, C3, C4, C5, C6, C7, }
#define UNUSED_PINS

/* COL2ROW 或 ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* 如果不需要去抖动，则设置为 0 */
#define DEBOUNCE 5

// 32A 不支持全键无冲
// #define FORCE_NKRO

#define RGB_MATRIX_CENTER { 89,  38 } // RGB 矩阵中心，“H” 键

#if RGBLIGHT_ENABLE
    #define RGB_DI_PIN A7
    #define RGBLED_NUM 84
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LIMIT_VAL 255
#endif

#if RGB_MATRIX_ENABLE
    #define RGB_DI_PIN A7
    #define DRIVER_LED_TOTAL 84
    #define RGB_MATRIX_KEYPRESSES // 对按键做出反应
    //#define RGB_MATRIX_KEYRELEASES // 对按键释放做出反应（而不是按键）
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_DISABLE_TIMEOUT 0 // 等待 RGB 自动关闭的毫秒数
    #define RGB_DISABLE_AFTER_TIMEOUT 0 // OBSOLETE：等待禁用效果的刻度数
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // 暂停时关闭效果
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255 // 将 LED 的最大亮度限制为 255 中的 255。如果未定义，最大亮度设置为 255
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON // 设置默认模式，如果没有设置
    #define RGB_MATRIX_STARTUP_HUE 142 // 200度
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_SPD 127
    // #define RGB_MATRIX_DISABLE_KEYCODES // 通过键码禁用对 rgb 矩阵的控制（必须使用代码功能来控制该功能）
#endif

// #define LOCKING_SUPPORT_ENABLE // 机械锁定支持。 在键盘映射中使用 KC_LCAP、KC_LNUM 或 KC_LSCR
