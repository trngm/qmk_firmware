/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* External spi flash */
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN B14

/* SPI Config for LED Driver */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6

#define AW20216S_CS_PIN_1 A15
#define AW20216S_CS_PIN_2 B15
#define AW20216S_EN_PIN C13

#define TAPPING_TERM 175

#define AUTO_SHIFT_TIMEOUT 150
#define NO_AUTO_SHIFT_ALPHA

#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
// #define LED_NUM_LOCK_PIN
// #define LED_CAPS_LOCK_PIN
// #define LED_SCROLL_LOCK_PIN
// #define LED_COMPOSE_PIN
// #define LED_KANA_PIN
// #define LED_PIN_ON_STATE

#define MOUSEKEY_WHEEL_DELAY 10
#define MOUSEKEY_WHEEL_INTERVAL 80  
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40