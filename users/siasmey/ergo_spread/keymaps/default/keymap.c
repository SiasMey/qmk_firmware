#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // colemak dh
  [0] = LAYOUT_ortho_4x10(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                  KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
      LT(5, KC_A),    LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), KC_G,                   KC_M,    RCTL_T(KC_N),  RALT_T(KC_E), RGUI_T(KC_I),    KC_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, 
      KC_NO,   KC_NO,   KC_NO,   LT(1,KC_ESC),  LSFT_T(KC_BSPC),                 RSFT_T(KC_SPC), LT(1,KC_ENT), KC_NO, KC_NO, KC_NO
  ),

  // Numeric
  [1] = LAYOUT_ortho_4x10(
     KC_NO,   KC_INS,   KC_UP,   KC_INS,   KC_PGUP,                              KC_NO , KC_7,    KC_8,    KC_9,    LSFT(KC_SCLN),
     KC_HOME, LGUI_T(KC_LEFT), LALT_T(KC_DOWN), LCTL_T(KC_RIGHT), KC_END,        KC_NO,  RCTL_T(KC_4), RALT_T(KC_5), RGUI_T(KC_6), KC_DOT,
     KC_NO,   KC_DEL,   KC_NO,   KC_DEL,   KC_PGDN,                            KC_0,    KC_1,    KC_2,    KC_3,    KC_SLSH,
     KC_NO,KC_NO,KC_NO,                  DF(3),  LSFT_T(KC_BSPC), RSFT_T(KC_SPC), OSL(2),           KC_NO, KC_NO, KC_NO
  ),

  // Function
  [2] = LAYOUT_ortho_4x10(
     QK_BOOT,   KC_NO,   KC_UP,   KC_NO,   KC_NO,                                  KC_F12 , KC_F7,    KC_F8,    KC_F9,    DF(4),
     QK_MAKE,   KC_LGUI, KC_LALT, KC_LCTL, KC_NO,                                  KC_F11,  KC_F4,    KC_F5,    KC_F6,    KC_NO,
     QK_REBOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_F10,  KC_F1,    KC_F2,    KC_F3,    KC_NO,
     KC_NO,     KC_NO,   KC_NO,   DF(0),   KC_LSFT,                                KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO
  ),

  // Mouse
  [3] = LAYOUT_ortho_4x10(
     KC_NO,   KC_WH_L,  KC_MS_U,  KC_WH_R,   KC_NO,                                  KC_NO , KC_WH_U,  KC_NO,    KC_NO,    KC_NO,
     KC_ACL1, KC_MS_L,  KC_MS_D,  KC_MS_R,   KC_NO,                                  KC_NO,  KC_BTN1,  KC_BTN2,  KC_BTN3,  KC_RCTL,
     KC_NO,   KC_NO,    KC_NO,    KC_WH_D,   KC_NO,                                  KC_NO,  KC_WH_D,  KC_NO,    KC_NO,    KC_NO,
     KC_NO,   KC_NO,    KC_NO,    KC_ACL2,   KC_ACL0,                                KC_RSFT,  DF(0),   KC_NO,    KC_NO,   KC_NO
  ),

  // Gaming - RTS
  [4] = LAYOUT_ortho_4x10(
     KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,                                    KC_NO , KC_NO,  CM_ON,    KC_NO,   DF(0),
     KC_LCTL,  KC_A,    KC_S,    KC_D,   KC_F,                                    KC_NO,  KC_P,   CM_TOGG,  KC_NO,   KC_NO,
     KC_1,     KC_2,    KC_3,    KC_4,   KC_5,                                    KC_NO,  KC_NO,  CM_OFF,   KC_NO,   KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_LSFT, KC_SPC,                                  KC_ESC, KC_NO,  KC_NO,    KC_NO,   KC_NO
  ),

  // Window Management
  [5] = LAYOUT_ortho_4x10(
     KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,                                 LGUI(KC_PGUP),  LGUI(KC_7),  LGUI(KC_8),    LGUI(KC_9),   LALT(KC_F4),
     KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,                                 LGUI(KC_LEFT),  LGUI(KC_4),  LGUI(KC_5),    LGUI(KC_6),   RGUI(KC_RIGHT),
     KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,                                 LGUI(KC_PGDN),  LGUI(KC_1),  LGUI(KC_2),    LGUI(KC_3),   KC_NO,
     KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,                                 LALT(KC_SPC),   KC_NO,  KC_NO,    KC_NO,   KC_NO
  )
};
