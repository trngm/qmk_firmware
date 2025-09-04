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

// QMK compile -km trung


#include QMK_KEYBOARD_H
#include "encoder.c"
#include "trngm.h"

#define FN_LT1 LT(1,KC_SPC)
#define FN_LT2 LT(2,KC_TAB)
#define Qte KC_DQT
#define caps KC_CAPS

// LAYERS
enum custom_user_layers {
    _BASE,
    _SPACE,
    _TAB,
    _FN,
    _DEFAULT
};


enum custom_keycodes {
    M_1 = SAFE_RANGE,
    M_2,
    M_3,
    M_4,
};

// Tap Dance declarations
enum {
    lay1,
    lay2,
    lay3,
    wqte,
    qqte,
    lead,
    esc
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


    [_BASE] = LAYOUT(
        TD(esc),  KC_F1,    KC_F2,    KC_F3,  KC_F4,   DM_PLY1, DM_PLY2, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_DEL,   KC_1,     KC_2,     KC_3,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PGUP,
        FN_LT2,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGDN,
        caps,     KC_A,     KC_S,     KC_D,   KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,   KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL,  KC_LGUI,  LALT_T(KC_ENT),                            FN_LT1,                      QK_LEAD, MO(3),     KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_SPACE] = LAYOUT(
        QK_GESC, KC_F11, KC_F12,   KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19, KC_F20, KC_F21, KC_F22, KC_F23,               _______,
        KC_0,    KC_1,    KC_2,    KC_3,    _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,          KC_PGUP,
        KC_TAB,  KC_4,    KC_5,    KC_6,    KC_BSPC, KC_DQT,  M_4, MS_UP, _______, _______, _______, _______, _______, QK_BOOT,              KC_PGDN,
        _______, KC_7,    KC_8,    KC_9,    KC_SPC,  KC_QUOT, MS_LEFT, MS_DOWN, MS_RGHT,    _______, _______, _______,          _______,          _______,
        _______, KC_MINS, KC_SLSH, KC_EQL,  KC_DOT,  _______, _______, _______, _______,    _______, _______,          _______, RM_NEXT, _______,
        CTL_T(KC_ENT), _______, KC_LALT,                            _______,                         _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),

    [_TAB] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,              DT_PRNT,
        _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              DT_UP,
        _______, KC_HOME, KC_UP,   KC_END,  KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,              DT_DOWN,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,              _______,
        _______,          KC_VOLD, KC_VOLU,  M_2,    M_3, _______, _______, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),


    [_FN] = LAYOUT(
        TG(0),   TG(1),   TG(2),   TG(3),   TG(4),   TG(5), _______, _______, _______, _______, _______, _______, _______, _______,            QK_RBT,
        _______, M_1,     M_4,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          DM_PLY1,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          DM_PLY2,
        _______, AS_ON,   AS_OFF,  _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          DM_REC1,
        _______,          _______, _______, RM_ON, RM_TOGG, _______, _______, QK_MAKE, _______, _______, _______,          _______, RM_VALD, DM_REC2,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SATD, RM_PREV, RM_SPDU
    ),


    [4] = LAYOUT(
        _______, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,          _______,
        _______, RM_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, RM_VALU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, RM_VALD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          QK_BOOT,          _______,
        _______,          _______, RM_HUEU, _______, RM_ON,   _______, NK_TOGG, _______, _______, _______, _______,          _______, RM_NEXT, _______,
        _______, _______, _______,                            _______,                            _______, TO(0), _______, RM_SPDD, RM_PREV, RM_SPDU
    ),

        [_DEFAULT] = LAYOUT(
        KC_ESC,         KC_F1,      KC_F2,      KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_DEL,         KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          TD(lay1),
        KC_TAB,         KC_U,       KC_I,       KC_O,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          TD(lay2),
        KC_CAPS,        KC_J,       KC_K,       KC_L,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           TD(lay3),
        KC_LSFT,                    KC_Z,       KC_X,       KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        CTL_T(KC_ENT),  KC_LGUI,    KC_LALT,                            KC_SPC,                                   KC_RALT, TO(0),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_DEFAULT] = LAYOUT(
        KC_ESC,         KC_F1,      KC_F2,      KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_DEL,         KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          TD(lay1),
        KC_TAB,         KC_Q,       KC_W,       KC_E,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          TD(lay2),
        KC_CAPS,        KC_A,       KC_S,       KC_D,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           TD(lay3),
        KC_LSFT,                    KC_Z,       KC_X,       KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        CTL_T(KC_ENT),  KC_LGUI,    KC_LALT,                            KC_SPC,                                   KC_RALT, TO(0),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(224, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(86, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(82, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(72, 255, 255, 255);

    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(3, 0, 0, 0);
    }
    return false;
}


// clang-format on

//      #if defined(ENCODER_MAP_ENABLE)
//      const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
//          [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//          [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//          [2] = { ENCODER_CCW_CW(MS_WHLL, MS_WHLR) },
//          [3] = { ENCODER_CCW_CW(UG_HUEU, UG_NEXT) },
//          [4] = { ENCODER_CCW_CW(RM_VALD, RM_VALU) },
//          [5] = { ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
//      };
//      #endif

// START ROTARY KNOB
// ripped from: https://github.com/ForsakenRei/qmk-gmmk-pro/blob/main/gmmk/pro/rev1/ansi/keymaps/shigure/keymap.c
    //  #ifdef ENCODER_ENABLE // Encoder Functionality
    //  bool encoder_update_user(uint8_t index, bool clockwise)
    //  {
    //    if (clockwise)
    //    {
    //      if (keyboard_report->mods & MOD_BIT(KC_LCTL))
    //      { // if holding Left Ctrl, scroll up and down
    //        unregister_mods(MOD_BIT(KC_LCTL));
    //        tap_code(KC_PGDN);
    //        register_mods(MOD_BIT(KC_LCTL));
    //      }
    //      else if (keyboard_report->mods & MOD_BIT(KC_LSFT))
    //      { // if you are holding L shift, scroll left and right
    //        tap_code16(KC_WH_R);
    //      }
    //      else if (keyboard_report->mods & MOD_BIT(KC_LALT))
    //      { // if holding Left Alt, change media next track
    //        tap_code(KC_MEDIA_NEXT_TRACK);
    //      }
    //      else
    //      {
    //        tap_code(KC_VOLU); // Otherwise it just changes volume
    //      }
    //    }
    //    else
    //    {
    //      if (keyboard_report->mods & MOD_BIT(KC_LCTL))
    //      {
    //        unregister_mods(MOD_BIT(KC_LCTL));
    //        tap_code(KC_PGUP);
    //        register_mods(MOD_BIT(KC_LCTL));
    //      }
    //      else if (keyboard_report->mods & MOD_BIT(KC_LSFT))
    //      {
    //        tap_code16(KC_WH_L);
    //      }
    //      else if (keyboard_report->mods & MOD_BIT(KC_LALT))
    //      {
    //        tap_code(KC_MEDIA_PREV_TRACK);
    //      }
    //      else
    //      {
    //        tap_code(KC_VOLD);
    //      }
    //    }
    //    return false;
    //  }
    //  #endif
    //  // END ROTARY KNOB

    #if defined(ENCODER_ENABLE) && !defined(ENCODER_DEFAULTACTIONS_ENABLE) // Encoder Functionality when not using userspace defaults
    void encoder_action_rgbhue(bool clockwise) {
        if (clockwise)
            rgblight_increase_hue_noeeprom();
        else
            rgblight_decrease_hue_noeeprom();
    }

    bool encoder_update_user(uint8_t index, bool clockwise) {
        uint8_t mods_state = get_mods();
        if (mods_state & MOD_BIT(KC_LSFT)) { // If you are holding L shift, encoder changes layers
            encoder_action_horizontalscroll(clockwise);
        } else if (mods_state & MOD_BIT(KC_RSFT)) { // If you are holding R shift, Page up/dn
            unregister_mods(MOD_BIT(KC_RSFT));
            encoder_action_navpage(clockwise);
            register_mods(MOD_BIT(KC_RSFT));
        } else if (mods_state & MOD_BIT(KC_LCTL)) { // if holding Left Ctrl, navigate next/prev word
            encoder_action_navword(clockwise);
        } else if (mods_state & MOD_BIT(KC_RCTL)) { // if holding Right Ctrl, change rgb hue/colour
            encoder_action_rgbhue(clockwise);
        } else if (mods_state & MOD_BIT(KC_LALT)) { // if holding Left Alt, change media next/prev track
            encoder_action_mediatrack(clockwise);
        } else {
 //           switch (get_highest_layer(layer_state)) {
 //               #ifdef IDLE_TIMEOUT_ENABLE
 //               timeout_update_threshold(clockwise);
 //               #endif
 //               break;
 //           default:
                encoder_action_volume(clockwise); // Otherwise it just changes volume
 //              break;
 //          }
        }
        //return true; //set to return false to counteract enabled encoder in pro.c
        return false;
    }
    #endif // ENCODER_ENABLE && !ENCODER_DEFAULTACTIONS_ENABLE



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
    // Tap once for Escape, twice for Caps Lock
    [lay1] = ACTION_TAP_DANCE_DOUBLE(KC_PGUP, TG(1)),
    [lay2] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, TG(2)),
    [lay3] = ACTION_TAP_DANCE_DOUBLE(KC_HOME, TG(3)),
    [wqte] = ACTION_TAP_DANCE_DOUBLE(KC_W, Qte),
    [qqte] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_QUOT),
    [lead] = ACTION_TAP_DANCE_DOUBLE(QK_LEAD,caps),
    [esc] = ACTION_TAP_DANCE_DOUBLE(KC_ESC,KC_ENT),
};



void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_1)) {
        SEND_STRING("1/8\"");
    } else if (leader_sequence_one_key(KC_2)) {
        SEND_STRING("1/2\"");
    } else if (leader_sequence_one_key(KC_3)) {
        SEND_STRING("3/8\"");
    } else if (leader_sequence_one_key(KC_4)) {
        SEND_STRING("3/4\"");
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

