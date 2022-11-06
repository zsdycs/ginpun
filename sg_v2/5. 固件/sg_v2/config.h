#pragma once

#include "config_common.h"

/* USB 设备描述符参数 */
#define VENDOR_ID    0x3385
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
// 制造商
#define MANUFACTURER Lipk
// 产品名称
#define PRODUCT Lipk shiguang 61
// 描述
// #define DESCRIPTION Lipk_shiguang

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
// 32u4
#define MATRIX_ROW_PINS { \
                            D7, /* ROW0 */ \
                            B4, /* ROW1 */ \
                            B5, /* ROW2 */ \
                            B6, /* ROW3 */ \
                            B0 /* ROW4 */ \
                        }
#define MATRIX_COL_PINS { \
                            C6, /* COL0 */  \
                            F7, /* COL1 */  \
                            F6, /* COL2 */  \
                            F5, /* COL3 */  \
                            F4, /* COL4 */  \
                            F1, /* COL5 */  \
                            F0, /* COL6 */  \
                            B7, /* COL7 */  \
                            D0, /* COL8 */  \
                            D1, /* COL9 */  \
                            D2, /* COL10 */ \
                            D3, /* COL11 */ \
                            D5, /* COL12 */ \
                            D4, /* COL13 */ \
                            D6  /* COL14 */ \
                        }

/* COL2ROW 或 ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* 如果不需要去抖动，则设置为 0 */
#define DEBOUNCE 5

#if RGB_MATRIX_ENABLE
    #define RGB_DI_PIN E6
    #define DRIVER_LED_TOTAL 61
    #define RGB_MATRIX_KEYPRESSES // 对按键做出反应
    //#define RGB_MATRIX_KEYRELEASES // 对按键释放做出反应（而不是按键）
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_DISABLE_TIMEOUT 0 // 等待 RGB 自动关闭的毫秒数
    #define RGB_DISABLE_AFTER_TIMEOUT 0 // OBSOLETE：等待禁用效果的刻度数
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // 暂停时关闭效果
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180 // 将 LED 的最大亮度限制为 255 中的 200。如果未定义，最大亮度设置为 255
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT // 设置默认模式
    #define RGB_MATRIX_STARTUP_HUE 200 // 如果未设置任何色调值，则设置默认色调值
    #define RGB_MATRIX_STARTUP_SAT 255 // 如果未设置任何饱和值，则设置默认饱和值
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_SPD 127
    #define RGB_MATRIX_CENTER {119,  26} // RGB 矩阵中心，“Y” 键
    // 开启灯光效果 {
    // #define ENABLE_RGB_MATRIX_ALPHAS_MODS
    // #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    // #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    // #define ENABLE_RGB_MATRIX_BREATHING
    // #define ENABLE_RGB_MATRIX_BAND_SAT
    // #define ENABLE_RGB_MATRIX_BAND_VAL
    // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    // #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    // #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    // #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    // #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    // #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    // #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
    // #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    // #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    // #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    // #define ENABLE_RGB_MATRIX_DUAL_BEACON
    // #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    // #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    // #define ENABLE_RGB_MATRIX_RAINDROPS
    // #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    // #define ENABLE_RGB_MATRIX_HUE_BREATHING
    // #define ENABLE_RGB_MATRIX_HUE_PENDULUM
    // #define ENABLE_RGB_MATRIX_HUE_WAVE
    // #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
    // #define ENABLE_RGB_MATRIX_PIXEL_FLOW
    // #define ENABLE_RGB_MATRIX_PIXEL_RAIN
    // #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    // #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    // #define ENABLE_RGB_MATRIX_SPLASH
    // #define ENABLE_RGB_MATRIX_MULTISPLASH
    // #define ENABLE_RGB_MATRIX_SOLID_SPLASH
    // #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
    // 开启灯光效果 }
    // #define RGB_MATRIX_DISABLE_KEYCODES // 通过键码禁用对 rgb 矩阵的控制（必须使用代码功能来控制该功能）
#endif

// #define LOCKING_SUPPORT_ENABLE // 机械锁定支持。 在键盘映射中使用 KC_LCAP、KC_LNUM 或 KC_LSCR
