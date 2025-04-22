/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

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

#include QMK_KEYBOARD_H

#define FN_LT1 LT(1,KC_SPC)
#define FN_LT2 LT(2,KC_TAB)
#define Qte KC_DQT


//      enum macros {
//          // Macros
//          M_1 = SAFE_RANGE,
//          M_2,
//          M_3,
//          M_4,
//      };


enum custom_keycodes {
    M_1 = SAFE_RANGE,
    M_2,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
    }
    return true;
};


// Tap Dance declarations
enum {
    lay1,
    lay2,
    lay3,
    wqte,
    qqte,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the QK_BOOT key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.


    [0] = LAYOUT(
        QK_GESC,        KC_F1,      KC_F2,      KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_DEL,         KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PGUP,
        FN_LT2,         TD(qqte),   TD(wqte),   KC_E,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGDN,
        KC_CAPS,        KC_A,       KC_S,       KC_D,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_HOME,
        KC_LSFT,                    KC_Z,       KC_X,       KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        CTL_T(KC_ENT),  KC_LGUI,    KC_LALT,                            FN_LT1,                                   KC_RALT, MO(3),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        KC_0,    KC_1,    KC_2,    KC_3,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        KC_ENT,  KC_4,    KC_5,    KC_6,    KC_BSPC, KC_DQT,  _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, KC_7,    KC_8,    KC_9,    KC_SPC,  _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______, KC_MINS, KC_SLSH, KC_EQL,  KC_DOT,  _______, _______, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),

    [2] = LAYOUT(
        TG(0),   TG(1),   TG(2),   TG(3),   TG(4),  KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU,  _______, _______,          _______,
        _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, KC_HOME, KC_UP,   KC_END,  _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),

    [3] = LAYOUT(
        TG(0),   TG(1),   TG(2),   TG(3),   TG(4),   TG(5), _______, _______, _______, _______, _______, _______, _______, _______,            QK_RBT,
        _______, M_1,     M_2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, AS_ON,   AS_OFF,  _______, _______, _______, _______, _______, _______, _______, _______, _______,          QK_BOOT,          _______,
        _______,          _______, _______, _______, RM_TOGG, _______, _______, QK_MAKE, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),


    [4] = LAYOUT(
        _______, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,          _______,
        _______, RM_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, RM_VALU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, RM_VALD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          QK_BOOT,          _______,
        _______,          _______, RM_HUEU, _______, RM_ON,   _______, NK_TOGG, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),

    [5] = LAYOUT(
        KC_ESC,         KC_F1,      KC_F2,      KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_DEL,         KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          TD(lay1),
        FN_LT2,         KC_Q,       KC_W,       KC_E,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          TD(lay2),
        KC_CAPS,        KC_A,       KC_S,       KC_D,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           TD(lay3),
        KC_LSFT,                    KC_Z,       KC_X,       KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        CTL_T(KC_ENT),  KC_LGUI,    KC_LALT,                            FN_LT1,                                   KC_RALT, TO(0),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(MS_WHLL, MS_WHLR) },
    [3] = { ENCODER_CCW_CW(UG_HUEU, UG_NEXT) },
    [4] = { ENCODER_CCW_CW(RM_VALD, RM_VALU) },
    [5] = { ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
};
#endif



//      bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//          if (record->event.pressed) {
//              switch(keycode) {
//                  case M_1:
//                      SEND_STRING("Archi13180\n");
//                      return false;
//                   case M_2:
//                      SEND_STRING("trung@architecttura.com");
//                      return false;
//                   case M_3:
//                      SEND_STRING("Unusualjade453");
//                      return false;
//                  case M_4:
//                      SEND_STRING("trung_mai@outlook.com");
//                      return false;
//              }
//          }
//      };


// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [lay1] = ACTION_TAP_DANCE_DOUBLE(KC_PGUP, TG(1)),
    [lay2] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, TG(2)),
    [lay3] = ACTION_TAP_DANCE_DOUBLE(KC_HOME, TG(3)),
    [wqte] = ACTION_TAP_DANCE_DOUBLE(KC_W, Qte),
    [qqte] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_QUOT),
};
