// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base layer
    [0] = LAYOUT_split_3x5_2(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        LT(2,KC_A),    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                LT(1,KC_ESC), LSHF_T(KC_BSPC),           RSFT_T(KC_SPC),  LT(1,KC_ENT)
    ),

    // nav and numeric
    [1] = LAYOUT_split_3x5_2(
        KC_NO,    KC_INS,    KC_UP,    KC_INS,    KC_PGUP,                      KC_AST,   KC_7,    KC_8,    KC_9,    KC_PPLS,
        KC_HOME,  KC_LEFT,   KC_DOWN,  KC_RIGHT,  KC_END,                       KC_SLSH,  KC_4,    KC_5,    KC_6,    KC_MINS,
        KC_NO,    KC_DEL,    KC_NO,    KC_DEL,    KC_PGDN,                      KC_NO,    KC_1,    KC_2,    KC_3,    KC_COLN,
                                                  KC_NO, KC_NO,           KC_0, KC_DOT 
    )

    // window management
    [2] = LAYOUT_split_3x5_2(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    DF(3),                      LGUI(KC_PGUP),   LGUI(KC_7),    LGUI(KC_8),    LGUI(KC_9),    LALT(KC_F4),
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    DF(4),                      LGUI(KC_LEFT),   LGUI(KC_4),    LGUI(KC_5),    LGUI(KC_6),    LGUI(KC_RIGHT),
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                      LGUI(KC_PGDN),   LGUI(KC_1),    LGUI(KC_2),    LGUI(KC_3),    KC_NO,
                                                  KC_NO, KC_NO,           KC_SPC, KC_NO 
    )

    // gaming left
    [3] = LAYOUT_split_3x5_2(
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,                      KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,                      KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,                      KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                             KC_LALT, KC_SPC,          KC_NO, KC_NO 
    )

    // gaming both
    [4] = LAYOUT_split_3x5_2(
        KC_ESC,    KC_Q,    KC_W,    KC_E,     KC_R,                    KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TAB,    KC_LEFT, KC_DOWN, KC_RIGHT, KC_F,                    KC_0,   KC_3,    KC_4,    KC_5,    KC_7,
        KC_LCTL,   KC_Z,    KC_X,    KC_C,     KC_V,                    KC_NO,  KC_1,    KC_2,    KC_6,    KC_8,
                                             KC_SPC, KC_UP,          KC_UP, KC_ENT 
    )
};
