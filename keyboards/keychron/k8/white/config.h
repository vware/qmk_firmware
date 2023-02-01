/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Harrison Chan (Xelus)
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

// Save some RAM
#define LAYER_STATE_8BIT

// Connects each switch in the dip switch to the GPIO pin of the MCU
#define DIP_SWITCH_PINS { D5, D6 }

// LED Config
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 1
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS { C0, C1, C2, D4, C9, C10 }

#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS

/* LED matrix Hackeroo for RAM. Uncomment to enable PWM Channel ROWS */
#define ACTIVATE_PWM_CHAN_0 //A0
#define ACTIVATE_PWM_CHAN_1 //A1
#define ACTIVATE_PWM_CHAN_2 //A2
#define ACTIVATE_PWM_CHAN_3 //A3
#define ACTIVATE_PWM_CHAN_4 //A4
#define ACTIVATE_PWM_CHAN_5 //A5
#define ACTIVATE_PWM_CHAN_6 //A6
#define ACTIVATE_PWM_CHAN_7 //A7
#define ACTIVATE_PWM_CHAN_8 //A8
#define ACTIVATE_PWM_CHAN_9 //A9
#define ACTIVATE_PWM_CHAN_10 //A10
#define ACTIVATE_PWM_CHAN_11 //A11
#define ACTIVATE_PWM_CHAN_12 //A12
#define ACTIVATE_PWM_CHAN_13 //A13
#define ACTIVATE_PWM_CHAN_14 //A14
//#define ACTIVATE_PWM_CHAN_15 //A15
//#define ACTIVATE_PWM_CHAN_16 //D0
//#define ACTIVATE_PWM_CHAN_17 //D1
//#define ACTIVATE_PWM_CHAN_18 //D2
//#define ACTIVATE_PWM_CHAN_19 //D3
//#define ACTIVATE_PWM_CHAN_21 //D5
//#define ACTIVATE_PWM_CHAN_22 //D8

// LED Matrix Effects

