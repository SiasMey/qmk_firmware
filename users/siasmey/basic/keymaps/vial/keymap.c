/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                 KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,   LGUI_T(KC_S),LALT_T(KC_D),LSFT_T(KC_F),LCTL_T(KC_G),              RCTL_T(KC_H),RSFT_T(KC_J),RALT_T(KC_K),RGUI_T(KC_L), KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                       KC_ESC, KC_BSPC, LT(1, KC_TAB),  LT(2, KC_BSLS), KC_SPC , KC_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x5_3( // Numeric
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,                               KC_PAST, KC_7,    KC_8,    KC_9,    KC_KP_MINUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F5, LGUI_T(KC_F6),LALT_T(KC_F7),LSFT_T(KC_F8),LCTL_T(XXXXXXX),         RCTL_T(KC_PSLS),RSFT_T(KC_4),RALT_T(KC_5),RGUI_T(KC_6), KC_KP_PLUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F1,  KC_F2,   KC_F3,   KC_F4,    XXXXXXX,                               XXXXXXX, KC_1,    KC_2,    KC_3,    KC_KP_DOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC, KC_BSPC, XXXXXXX,     KC_BSLS, KC_0, KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5_3( // Symbols
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TILD, KC_LPRN, KC_RPRN, KC_PERC, KC_ASTR,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_EXLM,LGUI_T(KC_LCBR),LALT_T(KC_RCBR),LSFT_T(KC_DQUO),LCTL_T(KC_CIRC),  RCTL_T(KC_DLR),RSFT_T(KC_QUOT),RALT_T(KC_EQL),RGUI_T(KC_AMPR), KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_AT,   KC_LBRC, KC_RBRC, KC_UNDS, KC_MINS,                              KC_PLUS,  KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC, KC_BSPC, KC_TAB,     XXXXXXX, KC_SPC, KC_ENT
                                      //`--------------------------'  `--------------------------'
  )
};
