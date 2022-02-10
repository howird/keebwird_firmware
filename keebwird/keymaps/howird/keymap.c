#include QMK_KEYBOARD_H

enum layers
{
	_QWERTY,
	_LOWER,
	_RAISE,
	_ADJUST,
  _FN
};

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [_QWERTY] = LAYOUT( /* QWERTY */
//           KC_Q,    KC_W, KC_E, KC_R,    KC_T,         KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,
//           KC_CTLA, KC_S, KC_D, KC_F,    KC_G,         KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, 
//           KC_LSHZ, KC_X, KC_C, KC_V,    KC_B,         KC_N,    KC_M,   KC_COMM, KC_DOT, KC_RLSH,
//                                KC_CLGV, KC_BSM1,      KC_SPM2, KC_GUTA
//   ),

//   [_LOWER] = LAYOUT( /* [> LOWER <] */
//                    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,
//     KC_1, KC_GESC, KC_HOME, KC_PGDN, KC_PGUP, KC_END,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT, KC_0,
//           KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ENT,
//                                      KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS  
//   ),

//   [_RAISE] = LAYOUT( /* [> RAISE <] */
//                     KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,
//     KC_F1, KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_PIPE, KC_F10,
//            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_UNDS, KC_PLUS, KC_TRNS, KC_TRNS, RESET,
//                                       KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS
//   )
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
              KC_Q,        KC_W,           KC_E,         KC_R,         KC_T, KC_Y, KC_U,         KC_I,         KC_O,         KC_P,         
              LT(2,KC_A),  LGUI_T(KC_S),   LALT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), LT(2,KC_SCLN),
              LT(3,KC_Z),  LT(4,KC_X),     KC_C,         KC_V,         KC_B, KC_N, KC_M,         KC_COMM,      LT(4,KC_DOT), LT(3,KC_SLSH),
              LSFT_T(KC_TAB), KC_BSPC, KC_SPC, LT(1,KC_ENT)
            ),
        
        [1] = LAYOUT(
              KC_ASTR, KC_7,         KC_8,         KC_9,         KC_PLUS,  RCTL(KC_PLUS), KC_NO,     KC_UP,    KC_NO,    KC_PIPE,
              KC_SLSH, LGUI_T(KC_4), LALT_T(KC_5), LCTL_T(KC_6), KC_MINS,  KC_ESC,        KC_LEFT,   KC_DOWN,  KC_RGHT,  KC_BSLS,
              KC_0,    KC_1,         KC_2,         KC_3,         KC_EQL,   RCTL(KC_MINS), KC_NO,     KC_NO,    KC_NO,    KC_NO,
              KC_LSFT, KC_DEL, KC_UNDS, MO(1)
            ),
        
        [2] = LAYOUT(
            KC_ESC,  KC_TILD,  KC_AT,   KC_DLR,    KC_GRV,   KC_NO,    KC_ASTR,  KC_CIRC,  KC_NO,    KC_PIPE,
            MO(2),   KC_EXLM,  KC_LCBR, KC_RCBR,   KC_QUOT,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_AMPR,  KC_BSLS,
            KC_NO,   KC_NO,    KC_LBRC, KC_RBRC,   KC_HASH,  KC_PERC,  KC_LT,    KC_GT,    KC_NO,    KC_NO,
            KC_TRNS, KC_TRNS, KC_UNDS, KC_TRNS
          ),
        
        [3] = LAYOUT(
            KC_NO, KC_NO,    KC_WH_U, KC_NO,   KC_NO, KC_WH_U, KC_NO,    KC_MS_U,  KC_NO,    KC_NO, 
            KC_NO, KC_BTN2,  KC_BTN3, KC_BTN1, KC_NO, KC_WH_D, KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO, 
            MO(3), KC_NO,    KC_WH_D, KC_NO,   KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_NO,    MO(3), 
            KC_ACL1, KC_ACL2, KC_BTN1, KC_BTN2
          ),
        
        [4] = LAYOUT(
            KC_HOME, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO,    KC_VOLU, KC_NO,   KC_PGUP, 
            KC_END,  KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_MPRV,  KC_VOLD, KC_MNXT, KC_PGDN, 
            KC_INS,  KC_F1, KC_F2, KC_F3, KC_F12, KC_NO, KC_NO,    KC_MUTE, MO(4),   KC_NO,
            KC_NO, KC_NO, KC_MPLY, KC_NO
            )
};
