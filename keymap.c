#include QMK_KEYBOARD_H
#include layout.json

#define ______ KC_TRNS

#define _QWERTY 0      // QWERTY layer
#define _QW _QWERTY

#define _FUNCTION 1    // Function layer
#define _FN _FUNCTION

#define MO_FN MO(1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 

  [_QWERTY] = LAYOUT_60_aron(
      KC_GESC, KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_GRV,  KC_SLSH, KC_EQL, KC_BSPC, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, \
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT, \
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_MINS, KC_RSFT, KC_UP, KC_PSCR, \
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, MO(_FN), KC_LEFT, KC_DOWN, KC_RIGHT \
      ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
   * |        |RBB T|RGB M| Hue+| Hue-| Sat+| Sat-| Val+| Val-|     |     |      |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |         | BL T| BL M| BL+ | BL- |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |RESET|     |     |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

   [_FUNCTION] = LAYOUT_60_aron(
      KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL, \
      ______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ______, ______, ______, ______, ______, \
      ______, BL_TOGG, BL_STEP, BL_INC, BL_DEC, ______, ______, ______, ______, ______, ______, ______, \
      RESET, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______ \
      ),
};
