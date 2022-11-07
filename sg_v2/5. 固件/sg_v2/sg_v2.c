#include "sg_v2.h"

#if RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
    // LED 索引的键矩阵
    // /*      00  01  02  03  04  05  06  07  08  09  10  11  12  13  14  */
    /* 0 */  { 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48,     47,  },
    /* 1 */  { 33,     34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,  },
    /* 2 */  { 32,     31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20,      },
    /* 3 */  {      4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14,     19,      },
    /* 4 */  {  3,  2,      1,          0,             15, 16,     17, 18  }
    },
    {

    // LED 到物理位置的索引 https://docs.qmk.fm/#/feature_led_matrix?id=common-configuration
    // The first part, // Key Matrix to LED Index, tells the system what key this LED represents by using the key’s electrical matrix row & col.
    // The second part, // LED Index to Physical Position represents the LED’s physical { x, y } position on the keyboard.
    // The default expected range of values for { x, y } is the inclusive range { 0..224, 0..64 }.
    // This default expected range is due to effects that calculate the center of the keyboard for their animations.
    // The easiest way to calculate these positions is imagine your keyboard is a grid,
    // and the top left of the keyboard represents { x, y } coordinate { 0, 0 } and the bottom right of your keyboard represents { 224, 64 }.
    // Using this as a basis, you can use the following formula to calculate the physical position:
    // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
    // y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
    // Where NUMBER_OF_COLS, NUMBER_OF_ROWS, COL_POSITION, & ROW_POSITION are all based on the physical layout of your keyboard, not the electrical layout.
    // As mentioned earlier, the center of the keyboard by default is expected to be { 112, 32 },
    // but this can be changed if you want to more accurately calculate the LED’s physical { x, y } positions.
    // Keyboard designers can implement #define LED_MATRIX_CENTER { 112, 32 } in their config.h file with the new center point of the keyboard,
    // or where they want it to be allowing more possibilities for the { x, y } values.
    // Do note that the maximum value for x or y is 255, and the recommended maximum is 224 as this gives animations runoff room before they reset.
    // LED Index to Flag is a bitmask, whether or not a certain LEDs is of a certain type. It is recommended that LEDs are set to only 1 type.

    // /*              00         01         02         03         04         05         06         07         08         09         10         11         12         13         14  */
    // /* 0 */  {  0,   0},{ 16,   0},{ 32,   0},{ 48,   0},{ 64,   0},{ 80,   0},{ 96,   0},{116,   0},{128,   0},{144,   0},{160,   0},{176,   0},{192,   0},{208,   0},{224,   0},
    // /* 1 */  {  0,  16},{ 16,  16},{ 32,  16},{ 48,  16},{ 64,  16},{ 80,  16},{ 96,  16},{116,  16},{128,  16},{144,  16},{160,  16},{176,  16},{192,  16},{208,  16},{224,  16},
    // /* 2 */  {  0,  32},{ 16,  32},{ 32,  32},{ 48,  32},{ 64,  32},{ 80,  32},{ 96,  32},{116,  32},{128,  32},{144,  32},{160,  32},{176,  32},{192,  32},{208,  32},{224,  32},
    // /* 3 */  {  0,  48},{ 16,  48},{ 32,  48},{ 48,  48},{ 64,  48},{ 80,  48},{ 96,  48},{116,  48},{128,  48},{144,  48},{160,  48},{176,  48},{192,  48},{208,  48},{224,  48},
    // /* 4 */  {  0,  64},{ 16,  64},{ 32,  64},{ 48,  64},{ 64,  64},{ 80,  64},{ 96,  64},{116,  64},{128,  64},{144,  64},{160,  64},{176,  64},{192,  64},{208,  64},{224,  64},

    // /*              00         01         02         03         04         05         06         07         08         09         10         11         12         13         14  */
    // /* 0 */  {  0,   0},{ 16,   0},{ 32,   0},{ 48,   0},{ 64,   0},{ 80,   0},{ 96,   0},{116,   0},{128,   0},{144,   0},{160,   0},{176,   0},{192,   0},           {224,   0},
    // /* 1 */  {  0,  16},           { 32,  16},{ 48,  16},{ 64,  16},{ 80,  16},{ 96,  16},{116,  16},{128,  16},{144,  16},{160,  16},{176,  16},{192,  16},{208,  16},{224,  16},
    // /* 2 */  {  0,  32},           { 32,  32},{ 48,  32},{ 64,  32},{ 80,  32},{ 96,  32},{116,  32},{128,  32},{144,  32},{160,  32},{176,  32},{192,  32},{208,  32},
    // /* 3 */             { 16,  48},{ 32,  48},{ 48,  48},{ 64,  48},{ 80,  48},{ 96,  48},{116,  48},{128,  48},{144,  48},{160,  48},{176,  48},           {208,  48},
    // /* 4 */  {  0,  64},{ 16,  64},           { 48,  64},                      { 96,  64},                                 {160,  64},{176,  64},           {208,  64},{224,  64},
                { 96,  64},{ 48,  64},{ 16,  64},{  0,  64},{ 16,  48},{ 32,  48},{ 48,  48},{ 64,  48},{ 80,  48},{ 96,  48},
                {116,  48},{128,  48},{144,  48},{160,  48},{176,  48},{160,  64},{176,  64},{208,  64},{224,  64},{208,  48},
                {208,  32},{192,  32},{176,  32},{160,  32},{144,  32},{128,  32},{116,  32},{ 96,  32},{ 80,  32},{ 64,  32},
                { 48,  32},{ 32,  32},{  0,  32},{  0,  16},{ 32,  16},{ 48,  16},{ 64,  16},{ 80,  16},{ 96,  16},{116,  16},
                {128,  16},{144,  16},{160,  16},{176,  16},{192,  16},{208,  16},{224,  16},{224,   0},{192,   0},{176,   0},
                {160,   0},{144,   0},{128,   0},{116,   0},{ 96,   0},{ 80,   0},{ 64,   0},{ 48,   0},{ 32,   0},{ 16,   0},
                {  0,   0}

    }, {

    // LED 索引 分组（全部设置为 LED_FLAG_KEYLIGHT）
    /*       00  01  02  03  04  05  06  07  08  09  10  11  12  13  14  */
    /* 00 */  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,
    /* 10 */  4,      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /* 20 */  4,      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /* 30 */      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,
    /* 40 */  4,  4,      4,          4,              4,  4,      4,  4

    }
};
#endif // RGB_MATRIX_ENABLE


void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        // CAPS LOCK
        RGB_MATRIX_INDICATOR_SET_COLOR(32, 66, 66, 66);
    }
    if (get_highest_layer(layer_state) == 1) {
        // KC_GRV
        RGB_MATRIX_INDICATOR_SET_COLOR(60, 66, 66, 66);
        // KC_F1
        RGB_MATRIX_INDICATOR_SET_COLOR(59, 66, 66, 66);
        // KC_F2
        RGB_MATRIX_INDICATOR_SET_COLOR(58, 66, 66, 66);
        // KC_F3
        RGB_MATRIX_INDICATOR_SET_COLOR(57, 66, 66, 66);
        // KC_F4
        RGB_MATRIX_INDICATOR_SET_COLOR(56, 66, 66, 66);
        // KC_F5
        RGB_MATRIX_INDICATOR_SET_COLOR(55, 66, 66, 66);
        // KC_F6
        RGB_MATRIX_INDICATOR_SET_COLOR(54, 66, 66, 66);
        // KC_F7
        RGB_MATRIX_INDICATOR_SET_COLOR(53, 66, 66, 66);
        // KC_F8
        RGB_MATRIX_INDICATOR_SET_COLOR(52, 66, 66, 66);
        // KC_F9
        RGB_MATRIX_INDICATOR_SET_COLOR(51, 66, 66, 66);
        // KC_F10
        RGB_MATRIX_INDICATOR_SET_COLOR(50, 66, 66, 66);
        // KC_F11
        RGB_MATRIX_INDICATOR_SET_COLOR(49, 66, 66, 66);
        // KC_F12
        RGB_MATRIX_INDICATOR_SET_COLOR(48, 66, 66, 66);
        // KC_DEL
        RGB_MATRIX_INDICATOR_SET_COLOR(47, 66, 66, 66);

        // EE_CLR
        RGB_MATRIX_INDICATOR_SET_COLOR(34, 66, 66, 66);
        // EE_CLR
        RGB_MATRIX_INDICATOR_SET_COLOR(34, 66, 66, 66);
        // UP
        RGB_MATRIX_INDICATOR_SET_COLOR(35, 66, 66, 66);
        // HOME
        RGB_MATRIX_INDICATOR_SET_COLOR(42, 66, 66, 66);
        // END
        RGB_MATRIX_INDICATOR_SET_COLOR(43, 66, 66, 66);
        // PGUP
        RGB_MATRIX_INDICATOR_SET_COLOR(44, 66, 66, 66);
        // PGDN
        RGB_MATRIX_INDICATOR_SET_COLOR(45, 66, 66, 66);

        // PowD
        RGB_MATRIX_INDICATOR_SET_COLOR(32, 66, 66, 66);
        // LEFT
        RGB_MATRIX_INDICATOR_SET_COLOR(31, 66, 66, 66);
        // DOWN
        RGB_MATRIX_INDICATOR_SET_COLOR(30, 66, 66, 66);
        // RIGHT
        RGB_MATRIX_INDICATOR_SET_COLOR(29, 66, 66, 66);
        // RGB TOG
        RGB_MATRIX_INDICATOR_SET_COLOR(24, 66, 66, 66);
        // RGB VAD
        RGB_MATRIX_INDICATOR_SET_COLOR(23, 66, 66, 66);
        // RGB VAI
        RGB_MATRIX_INDICATOR_SET_COLOR(22, 66, 66, 66);
        // RGB MOD
        RGB_MATRIX_INDICATOR_SET_COLOR(21, 66, 66, 66);
        // MPLY
        RGB_MATRIX_INDICATOR_SET_COLOR(20, 66, 66, 66);
        
        // SLEP
        RGB_MATRIX_INDICATOR_SET_COLOR(4, 66, 66, 66);
        // BRIU
        RGB_MATRIX_INDICATOR_SET_COLOR(11, 66, 66, 66);
        // BRID
        RGB_MATRIX_INDICATOR_SET_COLOR(12, 66, 66, 66);
        // VOLU
        RGB_MATRIX_INDICATOR_SET_COLOR(13, 66, 66, 66);
        // VOLD
        RGB_MATRIX_INDICATOR_SET_COLOR(14, 66, 66, 66);
        // PrtSc
        RGB_MATRIX_INDICATOR_SET_COLOR(19, 66, 66, 66);

        // WAKE
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 66, 66, 66);

    }
}
// cd d://Code/qmk_firmware
// qmk compile -kb lipk/sg_61 -km default
