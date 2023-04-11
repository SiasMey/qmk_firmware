/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or
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


  // colemak dh
  [0] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                  KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                  KC_M,    KC_N,    KC_E,    KC_I,   KC_O,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                  KC_K,    KC_H,    KC_COMM, KC_DOT, KC_SLSH, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                     LT(4, KC_ESC), LCTL_T(KC_BSPC), LT(2, KC_MINS),   KC_UNDS, RALT_T(KC_SPC), KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x5_3( // Numeric
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                 KC_PAST, KC_7,    KC_8,    KC_9,    KC_KP_MINUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_NO,                                 KC_PSLS, KC_4,    KC_5,    KC_6,    KC_KP_PLUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                 KC_PERC, KC_1,    KC_2,    KC_3,    KC_KP_DOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, KC_NO, KC_NO,          KC_HASH, KC_0, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5_3( // Function
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,                                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,                                 KC_NO, KC_RSFT, KC_RALT, KC_RGUI, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,                                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x5_3( // Nav
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      RESET,   KC_NO,   KC_ASON, KC_ASUP, KC_NO,                                   KC_PGUP, KC_HOME, KC_END,  LCTL(KC_6),   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_ASRP,                                 KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      DF(0),   KC_NO,   KC_ASOFF,KC_ASDN, DF(1),                                   KC_PGDOWN,KC_INS, KC_DEL,  KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, LSFT(KC_ENT)
                                      //`--------------------------'  `--------------------------'
  )
};

enum combos {
  QW_CMB,
  AS_CMB,
  ZX_CMB,

  WE_CMB,
  SD_CMB,
  XC_CMB,

  ER_CMB,
  DF_CMB,
  CV_CMB,

  WR_CMB,
  SF_CMB,
  XV_CMB,

  OP_CMB,
  LSCOL_CMB,
  DOTSLS_CMB,

  IO_CMB,
  KL_CMB,
  CMDT_CMB,

  UI_CMB,
  JK_CMB,
  MCM_CMB,

  UO_CMB,
  JL_CMB,
  MDOT_CMB,

  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A,KC_S, COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S,KC_D, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};

const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D,KC_F, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM sf_combo[] = {KC_S,KC_F, COMBO_END};
const uint16_t PROGMEM xv_combo[] = {KC_X, KC_V, COMBO_END};

const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM lscol_combo[] = {KC_L,KC_SCLN, COMBO_END};
const uint16_t PROGMEM dotsls_combo[] = {KC_DOT, KC_SLSH, COMBO_END};

const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K,KC_L, COMBO_END};
const uint16_t PROGMEM cmdt_combo[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J,KC_K, COMBO_END};
const uint16_t PROGMEM mcm_combo[] = {KC_M, KC_COMM, COMBO_END};

const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_J,KC_L, COMBO_END};
const uint16_t PROGMEM mdot_combo[] = {KC_M, KC_DOT, COMBO_END};

combo_t key_combos[] = {
  // Braces - middle
  [WE_CMB] = COMBO(we_combo, KC_LCBR),
  [SD_CMB] = COMBO(sd_combo, KC_LPRN),
  [XC_CMB] = COMBO(xc_combo, KC_LBRC),
  [IO_CMB] = COMBO(io_combo, KC_RCBR),
  [KL_CMB] = COMBO(kl_combo, KC_RPRN),
  [CMDT_CMB] = COMBO(cmdt_combo, KC_RBRC),

  // symbols - inside
  [ER_CMB] = COMBO(er_combo, KC_AT),
  [DF_CMB] = COMBO(df_combo, KC_EXLM),
  [CV_CMB] = COMBO(cv_combo, KC_CIRC),

  [UI_CMB] = COMBO(ui_combo, KC_ASTR),
  [JK_CMB] = COMBO(jk_combo, KC_EQL),
  [MCM_CMB] = COMBO(mcm_combo, KC_DLR),

  // symbols - outside
  [QW_CMB] = COMBO(qw_combo, KC_TILD),
  [AS_CMB] = COMBO(as_combo, KC_TAB),
  [ZX_CMB] = COMBO(zx_combo, KC_GRV),

  [OP_CMB] = COMBO(op_combo, KC_BSLS),
  [LSCOL_CMB] = COMBO(lscol_combo, KC_DQUO),
  [DOTSLS_CMB] = COMBO(dotsls_combo, KC_QUOT),

  // mixed - split
  [WR_CMB] = COMBO(wr_combo, KC_AMPR),
  [SF_CMB] = COMBO(sf_combo, KC_LT),
  [XV_CMB] = COMBO(xv_combo, KC_HASH),
  
  [UO_CMB] = COMBO(uo_combo, KC_PIPE),
  [JL_CMB] = COMBO(jl_combo, KC_GT),
  [MDOT_CMB] = COMBO(mdot_combo, KC_PERC),
};
