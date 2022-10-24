#include QMK_KEYBOARD_H

// enum kb_layers {
//   _QWERTY
// };

// #define QWERTY DF(_QWERTY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0, default layer
 * ---------------------------------------------------------------------------------------------------------------------------------
 * | ESC   |   F1  |   F2  |   F3  |   F4  |   F5  |   F6  |   F7  |   F8  |   F9  |   F10 |  F11  |  F12  |  DEL  |       | HOME  |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|       |-------|
 * |   ~`  |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |   -   |   =   |  BACK |       | PGUP  |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |  TAB  |       |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |   [   |   ]   |   \   | PGDN  |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       | CAPS  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |   '   | ENTER |       |  END  |
 * |       |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       | SHIFT |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   <   |   >   |   ?   |       | SHIFT |  UP   |       |
 * |       |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       | CTRL  |  LALT | LGUI  | CTRL  | SPACE |       | SPACE |       | RCTRL | RALT  |  FN   |       |  LEFT | DOWN  | RIGHT |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 */

[0] = LAYOUT(
     KC_ESC,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,          KC_HOME,
     KC_GRV,    KC_1,     KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,          KC_PGUP,
     KC_TAB,              KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
             KC_CAPS,     KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,           KC_END,
             KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,          KC_RSFT,   KC_UP,
             KC_LCTL,  KC_LALT, KC_LGUI, KC_LCTL,  KC_SPC,          KC_SPC,          KC_RALT,   MO(1), KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
),

/* Layer 0, default layer
 * ---------------------------------------------------------------------------------------------------------------------------------
 * | RESET |       |       |       |       |       |       |       |       |       |       |       |       |       |       | MPLY  |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|       |-------|
 * | PowD  |       |       |       |       |       |       |       |       |       |RGB TOG|RGB VAD|RGB VAI|RGB MOD|       | MUTE  |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       |       |       |       |       |       |       |       |       |       |       |       |       |       |       | Ins   |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       |       |       |       |       |       |       |       |       |       |       | BRIU  | VOLU  |       |       | PrtSc |
 * |       |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       |       |       |       |       |       |       |       |       |       | BRID  | VOLD  |       |       |       |       |
 * |       |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 * |       |       |       |       |       |       |       |       |  WAKE |       | SLEP  |  FN   |       |       |       |       |
 * |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
 */
[1] = LAYOUT(
      RESET, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_MPLY,
     KC_PWR, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_VAD, RGB_VAI, RGB_MOD,          KC_MUTE,
    KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_INS,
             KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIU, KC_VOLU, KC_TRNS, KC_TRNS,          KC_PSCR,
             KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID, KC_VOLD, KC_TRNS,          KC_TRNS, KC_TRNS,
             KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_WAKE,          KC_SLEP, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
),

};
