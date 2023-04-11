/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // colemak dh
  [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                  KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,    LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), KC_G,                   KC_M,    RCTL_T(KC_N),  RALT_T(KC_E), RGUI_T(KC_I),    KC_O,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                   LT(1,KC_ESC),  LSFT_T(KC_BSPC), LT(1, KC_ESC),    LT(1, KC_ENT), RSFT_T(KC_SPC), LT(1,KC_ENT)
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x5_3( // Numeric
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_NO,   KC_INS,   KC_UP,   KC_INS,   KC_PGUP,                               KC_NO , KC_7,    KC_8,    KC_9,    LSFT(KC_SCLN),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_HOME, LGUI_T(KC_LEFT), LALT_T(KC_DOWN), LCTL_T(KC_RIGHT), KC_END,       KC_NO,  RCTL_T(KC_4),RALT_T(KC_5),RGUI_T(KC_6),KC_DOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_NO,   KC_DEL,   KC_NO,   KC_DEL,   KC_PGDOWN,                             KC_0,    KC_1,    KC_2,    KC_3,    KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS
                                      //`--------------------------'  `--------------------------'
  )
};
