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
#include "quantum.h"

// clang-format off
#define LAYOUT_ortho_4x10(                                  \
  k00, k01, k02, k03, k04,     k09, k08, k07, k06, k05, \
  k10, k11, k12, k13, k14,     k19, k18, k17, k16, k15, \
  k20, k21, k22, k23, k24,     k29, k28, k27, k26, k25, \
                 k33, k34,     k39, k38                 \
)                                                       \
{                                                       \
  {   k00,   k01,   k02,   k03,   k04, k09, k08, k07, k06, k05 },            \
  {   k10,   k11,   k12,   k13,   k14, k19, k18, k17, k16, k15 },            \
  {   k20,   k21,   k22,   k23,   k24, k29, k28, k27, k26, k25 },            \
  {   KC_NO,   KC_NO,   KC_NO,   k33,   k34, k39, k38, KC_NO, KC_NO, KC_NO },\
}
// clang-format on
