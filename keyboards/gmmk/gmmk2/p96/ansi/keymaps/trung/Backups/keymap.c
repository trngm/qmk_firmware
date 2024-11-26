#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
// layers:



 /* COLEMAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 10     | -      | =      | BKSPCE | `      |      |      |      |      |      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|      |  7   |  8   |  9   |     |
 * | TAB    | Q      | W      | F      | P      | G      | P7     | P8     | P9     | J      | L      | U      | Y      | ;      | '      |      |  4   |  5   |  6   |     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|      |  1   |  2   |  3   |     |
 * | FN     | A      | R      | S      | T      | D      | P4     | P5     | P6     | H      | N      | E      | I      | O      | ENTER  |      |      |      |      |      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|      |      |      |      |      |
 * | SHIFT  | Z      | X      | C      | V      | B      | P1     | P2     | P3     | K      | M      | ,      | .      |  /     | SFL    |      |      |      |      |      |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|      |      |      |      |      |
 * | LCTRL  | LGUI   | LALT   | CTRL+S | [      | SPACE  | BKSP   | P0     | ENTER  | SPACE  | ]      |  LEFT  |  UP    |  DOWN  | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

enum  {
    // Macros
    M_1 = SAFE_RANGE,
    M_2,

// Tap Dance declarations
	TD_ESC_CAPS = 0, 
    TD_DEL,
    TD_1f,
};

typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(   
        KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,     KC_F7,        KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_PSCR,    KC_MPLY,            KC_MUTE,    KC_VOLD,    KC_VOLU, 
        TD(TD_DEL), KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,      KC_7,         KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    TD(TD_ESC_CAPS),    KC_PSLS,    KC_QUOT,    KC_PMNS, 
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,      KC_U,         KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_P7,              KC_P8,      KC_P9,      KC_PPLS, 
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,      KC_J,         KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,     KC_P4,      KC_P5,              KC_P6,      KC_LSFT, 
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,      KC_COMM,      KC_DOT,     KC_SLSH,    KC_RSFT,    KC_UP,      KC_P1,      KC_P2,      KC_P3,              KC_PENT,    
        KC_LCTL,    KC_LGUI,    LT(2,KC_LALT),          LT(1,KC_SPC),                                    KC_RALT,    MO(3),      KC_RCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_P0,              KC_PDOT
    ),

	[1] = LAYOUT(

        QK_BOOT,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
        KC_GRV,   KC_0,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_UP,    KC_ENT,   KC_DOT,   KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LGUI,  LT(0,KC_LALT),                KC_SPC,                                 KC_RALT,  MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT
    ),
	
    
    [2] = LAYOUT(
        QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_QUOT,  KC_DQUO,  KC_MINS,  KC_EQL,   KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,  KC_LPRN,  KC_SLSH,  KC_RPRN,  KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LGUI,  LT(0,KC_LALT),                KC_SPC,                                 KC_RALT,  MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT
    ),



    [3] = LAYOUT(
        KC_NO, M_1, M_2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, RGB_M_G, RGB_M_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_M_SW, RGB_M_SN, RGB_M_X, KC_NO, RGB_SPD, RGB_SPI, RGB_RMOD, RGB_MOD, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, RGB_M_P, RGB_M_B, RGB_M_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, RGB_VAD, KC_NO, KC_NO, KC_NO
        ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case M_1:
                SEND_STRING("Archi13180\n");
                return false;
             case M_2:
                SEND_STRING("trung@architecttura.com");
                return false;          
/*
            case 1:
                SEND_STRING("14");
                return false;
            case 2:
                SEND_STRING("13");
                return false;
            case 3:
                SEND_STRING("12");
                return false;
                */
        }
    }

    tap_dance_action_t *action;

    switch (keycode) {
        case TD(TD_1f):  // list all tap dance keycodes with tap-hold configurations
            action = &tap_dance_actions[QK_TAP_DANCE_GET_INDEX(keycode)];
            if (!record->event.pressed && action->state.count && !action->state.finished) {
                tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
                tap_code16(tap_hold->tap);
            }
    }
    return true;
};

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }


tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_DQUO,KC_QUOT),
  [TD_DEL] = ACTION_TAP_DANCE_TAP_HOLD(KC_DEL,KC_BSPC),
  [TD_1f] = ACTION_TAP_DANCE_TAP_HOLD(KC_1,M_2),  
};
