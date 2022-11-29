/*
Copyright 2022 Lyso1

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x7856
#define PRODUCT_ID   0x6177
#define DEVICE_VER   0x0001
#define MANUFACTURER Lyso1
#define PRODUCT      TAKO-XT

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 20

#define MATRIX_ROW_PINS {GP2,GP3,GP6,GP17,GP9,GP12}
#define MATRIX_COL_PINS {GP10,GP11,GP18,GP27,GP28,GP29,GP26,GP25,GP24,GP23,GP22,GP21,GP20,GP19,GP15,GP13,GP8,GP0,GP1,GP7}

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

#define LED_CAPS_LOCK_PIN GP5

#define LED_SCROLL_LOCK_PIN GP4

#define LED_PIN_ON_STATE 1


