/* Copyright 2021 @ Keychron (https://www.keychron.com)
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



/*
     qmk compile -kb keychron/v5/ansi_encoder -km trung
*/

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
    WIN_1,
    WIN_2,
    WIN_3,
    WIN_4
};

enum custom_keycodes {
    M_1 = SAFE_RANGE,
    M_2,
    M_3,
    M_4,
};

// Tap Dance declarations
enum {
    lead,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

#define SPACE LT(WIN_2,KC_SPC)
#define CTRL (CTL_T(KC_ENT))
#define ALT (LALT_T(KC_ENT))

#define caps KC_CAPS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [WIN_1] = LAYOUT(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_DEL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        QK_LEAD,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,  KC_PENT,
        CTRL,     KC_LWIN,  ALT,                                    SPACE,                                  KC_RALT,  MO(WIN_4), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT  ),

    [WIN_2] = LAYOUT(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_0,     KC_1,     KC_2,     KC_3,     _______,  KC_5,     _______,  KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_4,     KC_5,     KC_6,     KC_BSPC,  KC_T,     _______,  KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        QK_LEAD,  KC_7,     KC_8,     KC_9,     KC_SPC,   KC_G,     _______,  KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_MINS,  KC_SLSH,  KC_EQL,   KC_DOT,             _______,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,  KC_PENT,
        CTRL,     KC_LWIN,  ALT,                                    SPACE,                                  KC_RALT,  MO(WIN_4), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT  ),

    [WIN_3] = LAYOUT(
        KC_ESC,             TG(1),    TG(2),    TG(3),    TG(4),    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        QK_LEAD,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_MINS,  KC_SLSH,  KC_EQL,   KC_DOT,   KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,  KC_PENT,
        CTRL,     KC_LWIN,  ALT,                                    SPACE,                                  KC_RALT,  MO(WIN_4), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT  ),


    [WIN_4] = LAYOUT(
        KC_ESC,             TG(1),    TG(2),    TG(3),    TG(4),    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_GRV,   M_1,     M_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,
        QK_LEAD,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_MINS,  KC_SLSH,  KC_EQL,   KC_DOT,   KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,  KC_PENT,
        CTRL,     KC_LWIN,  ALT,                                    SPACE,                                  KC_RALT,  MO(WIN_4), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

    };


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [WIN_1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_2]   = { ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [WIN_3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif // ENCODER_MAP_ENABLE


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

//  Macros
    switch (keycode) {
    case M_1:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("Archi13180\n");
        } else {
            // when keycode QMKBEST is released
        }
        break;

        case M_2:
        if (record->event.pressed) {
           SEND_STRING(SS_LCTL("ac")); // selects all and copies
        }
        break;
        case M_3:
        if (record->event.pressed) {
           SEND_STRING(SS_LCTL("av")); // selects all and paste
        }
        break;
        case M_4:
        if (record->event.pressed) {
           SEND_STRING("mm"); // selects all and copies
        }
        break;

/*        case M_4:
        if (record->event.pressed) {
           SEND_STRING("gmmk\pro\rev2\ansi\keymaps\trung"); // selects all and copies
        }
        break;
        */
    }
    return true;

    switch (keycode) {
        case LT(2,KC_NO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_C)); // Intercept tap function to send Ctrl-C
            } else if (record->event.pressed) {
                tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
            }
            return false;
    }
    return true;

}



// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [lead] = ACTION_TAP_DANCE_DOUBLE(QK_LEAD,caps),
};



void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_1)) {
        SEND_STRING("1/4\"");
    } else if (leader_sequence_one_key(KC_2)) {
        SEND_STRING("1/2\"");
    } else if (leader_sequence_one_key(KC_3)) {
        SEND_STRING("3/4\"");
    } else if (leader_sequence_one_key(KC_4)) {
        SEND_STRING("1/8\"");
    } else if (leader_sequence_one_key(KC_5)) {
        SEND_STRING("5/8\"");
    } else if (leader_sequence_one_key(KC_6)) {
        SEND_STRING("3/8\"");
    } else if (leader_sequence_one_key(KC_7)) {
        SEND_STRING("7/8\"");
    } else if (leader_sequence_one_key(QK_LEAD)) {
        tap_code16(caps);
    } else if (leader_sequence_one_key(KC_Q)) {
        SEND_STRING("1/16\"");
    } else if (leader_sequence_one_key(KC_W)) {
        SEND_STRING("3/32\"");
    } else if (leader_sequence_one_key(KC_A)) {
        SEND_STRING("\"");
    } else if (leader_sequence_one_key(KC_S)) {
        SEND_STRING("\'");
    } else if (leader_sequence_one_key(KC_D)) {
        SEND_STRING("mm");
    } else if (leader_sequence_one_key(KC_8)) {
        SEND_STRING("\"");
    } else if (leader_sequence_one_key(KC_9)) {
        SEND_STRING("mm");
    } else if (leader_sequence_one_key(KC_M)) {
        tap_code16(KC_APP);
//    } else if (leader_sequence_three_keys(KC_D, KC_D, KC_S)) {
//        // Leader, d, d, s => Types the below string
//        SEND_STRING("https://start.duckduckgo.com\n");
//    } else if (leader_sequence_two_keys(KC_A, KC_S)) {
//        // Leader, a, s => GUI+S
//        tap_code16(LGUI(KC_S));
    }
}
