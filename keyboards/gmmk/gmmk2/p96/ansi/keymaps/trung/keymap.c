#include QMK_KEYBOARD_H


 /* 
 * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
 * | ESC    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | PRTSC  |        | PRTSC | INS   | PG UP  | PG DN   |      
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+---------+-------+--------+-------|      
 * | DEL    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 10     | -      | =      | BKSPCE |        | NUM   | BKSPCE| BKSPCE | BKSPCE  |      
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+---------+-------+--------+-------|      
 * | TAB    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \      |        |   7   |   8   |   9    |         |      
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+------------------------+--------+    +    |      
 * | CAPS   | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |     ENTER       |        |   4   |   5   |   6    |         |      
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+------------------------+--------+---------|      
 * | SHIFT  | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | SHIFT  |        |  UP    |        |   1   |   2   |   3    |         |      
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------+-------+-------+--------+  ENTER  |      
 * | LCTRL  | LGUI   | LALT   |                   SPACE                             | RALT   | FN     | RCTRL  |  DOWN  | RIGHT  |  DOWN  |       |  0    |  DEL   |         |
 * |-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
  */


enum  {
    // Macros
    M_1 = SAFE_RANGE,
    M_2,

// Tap Dance declarations
    TD_DEL = 0,
    TD_Q,
    TD_W,
    TD_E,
	TD_CMD, //double quote, quote
    TD_2, //slash,backspace
    TD_3, //equal, underscore
    TD_4, //plus,minus
    TD_5, //
    TD_7,
    TD_8,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {  
	[0] = LAYOUT(   
        KC_ESC,                     KC_F1,                  KC_F2,              KC_F3,      KC_F4,          /**/ KC_F5,    KC_F6,     KC_F7,   KC_F8,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_PSCR,                /**/ KC_MPLY,    KC_MUTE,    KC_VOLD,    KC_VOLU, 
        TD(TD_DEL),                 KC_1,                   KC_2,               KC_3,       KC_4,           /**/ KC_5,     KC_6,      KC_7,    KC_8,     KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,                /**/ TD(TD_CMD), TD(TD_2),   KC_ASTR,    TD(TD_4), 
        KC_TAB,                     TD(TD_Q),               TD(TD_W),           TD(TD_E),   KC_R,           /**/ KC_T,     KC_Y,      KC_U,    KC_I,     KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,                /**/ KC_P7,      KC_P8,      KC_P9,      TD(TD_5), 
        KC_CAPS,                    KC_A,                   KC_S,               KC_D,       KC_F,           /**/ KC_G,     KC_H,      KC_J,    KC_K,     KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,                             /**/ KC_P4,      KC_P5,      KC_P6,      
        KC_LSFT,                    KC_Z,                   KC_X,               KC_C,       KC_V,           /**/ KC_B,     KC_N,      KC_M,    KC_COMM,  KC_DOT,     KC_SLSH,    KC_RSFT,                KC_UP,                  /**/ KC_P1,      KC_P2,      KC_P3,      KC_PENT,    
        KC_LCTL,                    LT(2,KC_LGUI),          KC_LALT,            LT(1,KC_SPC),               /**/                               KC_RALT,  MO(3),      KC_RCTL,                KC_LEFT,    KC_DOWN,  KC_RGHT,      /**/ KC_P0,                  TD(TD_7)
    ),              
                
	[1] = LAYOUT( //Spacebar                

        QK_BOOT,                    KC_F13,                 KC_F14,             KC_F15,     KC_F16,         /**/ KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,     KC_F22,     KC_F23,     KC_F24,     KC_PSCR,                /**/ KC_DEL,    KC_INS,    KC_PGUP,   KC_PGDN,
        KC_0,                       KC_1,                   KC_2,               KC_3,       KC_4,           /**/ KC_5,     KC_6,     KC_7,     KC_8,     KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,                /**/ KC_NUM,    KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_TAB,                     KC_4,                   KC_5,               KC_6,       KC_BSPC,        /**/ KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,                /**/ KC_P7,     KC_P8,     KC_P9,     KC_PPLS,
        KC_CAPS,                    KC_7,                   KC_8,               KC_9,       KC_SPC,         /**/ KC_G,     KC_H,     KC_J,     KC_K,     KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,                             /**/ KC_P4,     KC_P5,     KC_P6, 
        KC_LSFT,                    TD(TD_4),               TD(TD_2),           TD(TD_3),   KC_DOT,         /**/ KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,     KC_SLSH,    KC_RSFT,                KC_UP,                  /**/ KC_P1,     KC_P2,     KC_P3,     KC_PENT,
        KC_LCTL,                    KC_LGUI,                LT(0,KC_LALT),      KC_SPC,                     /**/                                         KC_RALT,    MO(3),      KC_RCTL,    KC_LEFT,    KC_DOWN,  KC_RGHT,      /**/ KC_P0,                KC_PDOT 
    ),                      
                    
    [2] = LAYOUT( //Win Key                                     
        QK_GESC,                    KC_F1,                  KC_F2,              KC_F3,      KC_F4,          /**/ KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,       KC_F10,    KC_F11,     KC_F12,     KC_PSCR,                /**/ KC_DEL,    KC_INS,   KC_PGUP,  KC_PGDN,
        KC_GRV,                     KC_1,                   KC_2,               KC_3,       KC_4,           /**/ KC_5,     KC_6,     KC_7,     KC_8,     KC_9,        KC_0,      KC_MINS,    KC_EQL,     KC_BSPC,                /**/ KC_NUM,    KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,                     KC_QUOT,                KC_UP,              KC_MINS,    KC_EQL,         /**/ KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,        KC_P,      KC_LBRC,    KC_RBRC,    KC_BSLS,                /**/ KC_P7,     KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,                    KC_LEFT,                KC_DOWN,            KC_RGHT,    KC_F,           /**/ KC_G,     KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,   KC_QUOT,    KC_ENT,                             /**/ KC_P4,     KC_P5,    KC_P6,
        KC_LSFT,                    KC_Z,                   KC_X,               KC_C,       KC_V,           /**/ KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,   KC_RSFT,                KC_UP,                  /**/ KC_P1,     KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,                    KC_LGUI,                KC_LALT,            KC_SPC,                     /**/                                         KC_RALT,     MO(3),     KC_RCTL,    KC_LEFT,    KC_DOWN,  KC_RGHT,      /**/ KC_P0,               KC_PDOT
    ),                                      
                        
    [3] = LAYOUT( //FN Key                                    
        DF(0),                      DF(1),                  DF(2),              DF(3),      DF(4),          /**/ KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,       KC_F10,    KC_F11,     KC_F12,     KC_PSCR,                /**/ KC_DEL,    DT_PRNT,   DT_UP,    DT_DOWN,
        KC_GRV,                     M_1,                    M_2,                KC_3,       KC_4,           /**/ KC_5,     KC_6,     KC_7,     KC_8,     KC_9,        KC_0,      RGB_VAD,    RGB_VAI,    KC_BSPC,                /**/ KC_HOME,   KC_PSLS,   KC_PAST,  KC_PMNS,
        KC_TAB,                     KC_Q,                   KC_W,               KC_E,       KC_R,           /**/ KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,        KC_P,      RGB_HUI,    RGB_HUD,    KC_BSLS,                /**/ KC_P7,     KC_P8,     KC_P9,    KC_PPLS,
        KC_CAPS,                    KC_A,                   KC_S,               KC_D,       KC_F,           /**/ KC_G,     KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,   RGB_SAI,    RGB_SAD,                            /**/ KC_P4,     KC_P5,     KC_P6,
        KC_LSFT,                    KC_Z,                   KC_X,               KC_C,       KC_V,           /**/ RGB_TOG,  KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,   KC_RSFT,                RGB_SPI,                /**/ RGB_M_P,   RGB_M_B,   RGB_M_R,  KC_PENT,
        KC_LCTL,                    KC_LGUI,                KC_LALT,            KC_SPC,                     /**/                                         KC_RALT,     MO(3),     KC_RCTL,    RGB_RMOD,   RGB_SPD,  RGB_MOD,      /**/ KC_P0,                KC_PDOT
    ),              
                
    [4] = LAYOUT(                           
        DF(0),                      DF(1),                  DF(2),              DF(3),      DF(4),          /**/ KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,       KC_F10,    KC_F11,     KC_F12,     KC_PSCR,                /**/ KC_DEL,    DT_PRNT,   DT_UP,    DT_DOWN,
        KC_GRV,                     KC_1,                   KC_2,               KC_3,       KC_4,           /**/ KC_5,     KC_6,     KC_7,     KC_8,     KC_9,        KC_0,      RGB_VAD,    RGB_VAI,    KC_BSPC,                /**/ KC_HOME,   KC_PSLS,   KC_PAST,  KC_PMNS,
        KC_TAB,                     KC_Q,                   KC_W,               KC_E,       KC_R,           /**/ KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,        KC_P ,     KC_LBRC,    KC_RBRC,    KC_BSLS,                /**/ KC_P7,     KC_P8,     KC_P9,    KC_PPLS,
        KC_CAPS,                    KC_A,                   KC_S,               KC_D,       KC_F,           /**/ KC_G,     KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,   KC_QUOT,    KC_ENT,                             /**/ KC_P4,     KC_P5,     KC_P6,
        KC_LSFT,                    KC_Z,                   KC_X,               KC_C,       KC_V,           /**/ KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,   KC_RSFT,                KC_UP,                  /**/ KC_P1,     KC_P2,     KC_P3,    KC_PENT,
        KC_LCTL,                    KC_LGUI,                KC_LALT,            KC_SPC,                     /**/                                         KC_RALT,     MO(3),     KC_RCTL,    KC_LEFT,    KC_DOWN,  KC_RGHT,      /**/ KC_P0,                KC_PDOT
    ) 




//    [5] = LAYOUT( DEFAULT TEMPLATE     
//    QK_GESC,    KC_F1,      KC_F2,      KC_F3,      KC_F4,            /**/ KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,       KC_F10,    KC_F11,     KC_F12,     KC_PSCR,                /**/ KC_DEL,    DT_PRNT,   DT_UP,    DT_DOWN,
//    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,             /**/ KC_5,     KC_6,     KC_7,     KC_8,     KC_9,        KC_0,      RGB_VAD,    RGB_VAI,    KC_BSPC,                /**/ KC_HOME,   KC_PSLS,   KC_PAST,  KC_PMNS,
//    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,             /**/ KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,        KC_P,      KC_LBRC,    KC_RBRC,    KC_BSLS,                /**/ KC_P7,     KC_P8,     KC_P9,    KC_PPLS,
//    KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,             /**/ KC_G,     KC_H,     KC_J,     KC_K,     KC_L,        KC_SCLN,   KC_QUOT,    KC_ENT,                             /**/ KC_P4,     KC_P5,     KC_P6,
//    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,             /**/ KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,      KC_SLSH,   KC_RSFT,                RGB_SPI,                /**/ KC_P1,     KC_P2,     KC_P3,    KC_PENT,
//    KC_LCTL,    KC_LGUI,    KC_LALT,                KC_SPC,           /**/                                         KC_RALT,     MO(1),     KC_RCTL,    RGB_RMOD,   RGB_SPD,  RGB_MOD,      /**/ KC_P0,                KC_PDOT
//    ) 
};



typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;


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


// Tap Dance Codes

    tap_dance_action_t *action;

    switch (keycode) {  // list all tap dance keycodes with tap-hold configurations
        case TD(TD_DEL):
        case TD(TD_Q):
        case TD(TD_W):  
        case TD(TD_E):  
        case TD(TD_CMD):
        case TD(TD_2):  
        case TD(TD_3):  
        case TD(TD_4):  
        case TD(TD_5):  
        case TD(TD_7):  
        case TD(TD_8):  
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
  [TD_DEL] = ACTION_TAP_DANCE_TAP_HOLD(KC_DEL, KC_BSPC),
  [TD_Q] = ACTION_TAP_DANCE_TAP_HOLD(KC_Q, KC_QUOT), 
  [TD_W] = ACTION_TAP_DANCE_TAP_HOLD(KC_W, KC_DQT), 
  [TD_E] = ACTION_TAP_DANCE_TAP_HOLD(KC_E, KC_ENT), 
  [TD_CMD] = ACTION_TAP_DANCE_TAP_HOLD(KC_DQT, KC_QUOT),
  [TD_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_SLSH, KC_ASTR), // slash,space 
  [TD_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_EQL, KC_UNDS), // astrarisk, underscore
  [TD_4] = ACTION_TAP_DANCE_TAP_HOLD(KC_MINS, KC_PLUS), // plus,minus
  [TD_5] = ACTION_TAP_DANCE_TAP_HOLD(KC_SPC, KC_PLUS), // space,
  [TD_7] = ACTION_TAP_DANCE_TAP_HOLD(KC_DOT, KC_COMM), 
  [TD_8] = ACTION_TAP_DANCE_TAP_HOLD(KC_PMNS, KC_UNDS), // dash,underscore
  /*[TD_#] = ACTION_TAP_DANCE_DOUBLE(KC_DQT,KC_QUOT),*/

};


// Combo Codes
const uint16_t PROGMEM combo1[] = {KC_CAPS, KC_1, COMBO_END};

enum combo_events {
  CMBE1,
  CMBE2,
};

const uint16_t PROGMEM CMB1[] = {KC_CAPS, KC_1, COMBO_END};
const uint16_t PROGMEM CMB2[] = {KC_CAPS, KC_2, COMBO_END};

combo_t key_combos[] = {
  [CMBE1] = COMBO_ACTION(CMB1),
  [CMBE2] = COMBO_ACTION(CMB2),
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CMBE1:
      if (pressed) {
        SEND_STRING("1/4");
      }
      break;
    case CMBE2:
      if (pressed) {
        SEND_STRING("½");
      }
      break;
  }
}
