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

#pragma once
#include "config_common.h"
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER Sias Keyboards
#define PRODUCT Sias Skeletyn

#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define RGBLIGHT_LIMIT_VAL 180
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F7, B1, B3, B2, B6}

#define DIODE_DIRECTION COL2ROW

/* #define RGB_DI_PIN D2 */
/* #define RGBLED_NUM 36 */
/* #define RGBLED_SPLIT { 18, 18 } */
/* #define RGBLIGHT_ANIMATIONS */

#define DEBOUNCE 5

#define USB_POLLING_INTERVAL_MS 1
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define COMBO_TERM 20
#define COMBO_STRICT_TIMER
#define COMBO_ONLY_FROM_LAYER 0

#define AUTO_SHIFT_MODIFIERS
