// Copyright 2022 Sias Mey (@Sias Mey)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//
#define DEBOUNCE 3

#define USB_POLLING_INTERVAL_MS 1

#define TAPPING_TERM 150
//#define PERMISSIVE_HOLD // I dont use shift as mod tap, no permissive hold
#define IGNORE_MOD_TAP_INTERRUPT
#define COMBO_TERM 20
#define COMBO_STRICT_TIMER
#define COMBO_ONLY_FROM_LAYER 0

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 3000

#define MK_COMBINED
#define MOUSEKEY_DELAY 6
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_WHEEL_DELAY 10
#define MOUSEKEY_WHEEL_INTERVAL 80
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
