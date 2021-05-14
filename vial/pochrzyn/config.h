/*
Copyright 2021 Maksymilian Rojek

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
#define VENDOR_ID       0x1209
#define PRODUCT_ID      0x2328
#define DEVICE_VER      0x0205
#define MANUFACTURER    maksrojek
#define PRODUCT         Pochrzyn
#define DESCRIPTION     6-key macropad with encoder

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* key matrix pins */
#define DIRECT_PINS { \
    { D4, C6, D7 }, \
    { E6, B4, B5 }, \
}
#define UNUSED_PINS

#define RGB_DI_PIN F6
#define RGBLED_NUM 5 // Number of LEDs

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 100 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
//#define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
//#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_TWINKLE

//#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 1
//#define RGBLIGHT_EFFECT_KNIGHT_LED_NUM 5
//#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

/* rotary encoders */
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 2

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define USB_POLLING_INTERVAL_MS 1

#define VIAL_KEYBOARD_UID {0xBE, 0xFC, 0x8E, 0x91, 0xBF, 0xCE, 0xBB, 0x17}

/* top-left and bottom-right keys */
#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
