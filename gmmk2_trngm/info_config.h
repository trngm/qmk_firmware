// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef WEAR_LEVELING_BACKING_SIZE
#    define WEAR_LEVELING_BACKING_SIZE 2048
#endif // WEAR_LEVELING_BACKING_SIZE

#ifndef LOCKING_SUPPORT_ENABLE
#    define LOCKING_SUPPORT_ENABLE
#endif // LOCKING_SUPPORT_ENABLE

#ifndef LOCKING_RESYNC_ENABLE
#    define LOCKING_RESYNC_ENABLE
#endif // LOCKING_RESYNC_ENABLE

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGB_MATRIX_SLEEP
#    define RGB_MATRIX_SLEEP
#endif // RGB_MATRIX_SLEEP

#ifndef RGB_MATRIX_LED_COUNT
#    define RGB_MATRIX_LED_COUNT 119
#endif // RGB_MATRIX_LED_COUNT

#ifndef TAP_CODE_DELAY
#    define TAP_CODE_DELAY 10
#endif // TAP_CODE_DELAY

#ifndef TAPPING_TERM
#    define TAPPING_TERM 175
#endif // TAPPING_TERM

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "Glorious"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "GMMK V2 96 ANSI"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x504B
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x320F
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 8
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 14
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A8, A9, A10 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, B13 }
#endif // MATRIX_ROW_PINS

#ifndef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#endif // ENABLE_RGB_MATRIX_ALPHAS_MODS

#ifndef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#endif // ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN

#ifndef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#endif // ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT

#ifndef ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BREATHING
#endif // ENABLE_RGB_MATRIX_BREATHING

#ifndef ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_SAT
#endif // ENABLE_RGB_MATRIX_BAND_SAT

#ifndef ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_VAL
#endif // ENABLE_RGB_MATRIX_BAND_VAL

#ifndef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#endif // ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT

#ifndef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#endif // ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL

#ifndef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#endif // ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT

#ifndef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#endif // ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL

#ifndef ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#endif // ENABLE_RGB_MATRIX_CYCLE_ALL

#ifndef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#endif // ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT

#ifndef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#endif // ENABLE_RGB_MATRIX_CYCLE_UP_DOWN

#ifndef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#endif // ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON

#ifndef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#endif // ENABLE_RGB_MATRIX_CYCLE_OUT_IN

#ifndef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#endif // ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL

#ifndef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#endif // ENABLE_RGB_MATRIX_CYCLE_PINWHEEL

#ifndef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#endif // ENABLE_RGB_MATRIX_CYCLE_SPIRAL

#ifndef ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#endif // ENABLE_RGB_MATRIX_DUAL_BEACON

#ifndef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#endif // ENABLE_RGB_MATRIX_RAINBOW_BEACON

#ifndef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#endif // ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS

#ifndef ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#endif // ENABLE_RGB_MATRIX_RAINDROPS

#ifndef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#endif // ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS

#ifndef ENABLE_RGB_MATRIX_HUE_BREATHING
#    define ENABLE_RGB_MATRIX_HUE_BREATHING
#endif // ENABLE_RGB_MATRIX_HUE_BREATHING

#ifndef ENABLE_RGB_MATRIX_HUE_PENDULUM
#    define ENABLE_RGB_MATRIX_HUE_PENDULUM
#endif // ENABLE_RGB_MATRIX_HUE_PENDULUM

#ifndef ENABLE_RGB_MATRIX_HUE_WAVE
#    define ENABLE_RGB_MATRIX_HUE_WAVE
#endif // ENABLE_RGB_MATRIX_HUE_WAVE

#ifndef ENABLE_RGB_MATRIX_PIXEL_RAIN
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
#endif // ENABLE_RGB_MATRIX_PIXEL_RAIN

#ifndef ENABLE_RGB_MATRIX_PIXEL_FLOW
#    define ENABLE_RGB_MATRIX_PIXEL_FLOW
#endif // ENABLE_RGB_MATRIX_PIXEL_FLOW

#ifndef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#endif // ENABLE_RGB_MATRIX_PIXEL_FRACTAL

#ifndef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#endif // ENABLE_RGB_MATRIX_TYPING_HEATMAP

#ifndef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#endif // ENABLE_RGB_MATRIX_DIGITAL_RAIN

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS

#ifndef ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_SPLASH
#endif // ENABLE_RGB_MATRIX_SPLASH

#ifndef ENABLE_RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#endif // ENABLE_RGB_MATRIX_MULTISPLASH

#ifndef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#endif // ENABLE_RGB_MATRIX_SOLID_SPLASH

#ifndef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif // ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
