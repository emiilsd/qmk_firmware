#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
    ISO HHKB layout:
        * 2u Backspace
        * ISO Enter
        * split left Shift
        * split right Shift
        * Caps as Control
        * 1u/1.5u/7u/1.5u//1u bottom row
  */

  /* 0: qwerty */
  LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_NO,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
    KC_LSFT, KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, F(0),    KC_RSFT,
    KC_NO,   KC_LALT, KC_LGUI,                   KC_SPC,                             KC_NO,   KC_NO,   KC_RALT, KC_CAPSLOCK, KC_NO
  ),

  /* 1: fn */
  LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END,  KC_UP,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, KC_LEFT, KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_DOWN, _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______, _______, _______
  ),

};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
