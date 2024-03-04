// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base layer
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | `/~  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   V  |                    |   J  |   L  |   U  |   Y  |   ;  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   B  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |Escape| /Space  /       \BackSP\  |Enter |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[0] = LAYOUT(
  KC_GRAVE,       KC_1,         KC_2,          KC_3,          KC_4,          KC_5,                                     KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          KC_MINUS,
  KC_TAB,         KC_Q,         KC_W,          KC_F,          KC_P,          KC_V,                                     KC_J,          KC_L,          KC_U,          KC_Y,          KC_SCLN,       KC_BSLS,
  LT(4,KC_ESCAPE),KC_A,         KC_R,          KC_S,          KC_T,          KC_G,                                     KC_M,          KC_N,          KC_E,          KC_I,          KC_O,          KC_QUOTE,
  KC_LSFT,        KC_Z,         KC_X,          KC_C,          KC_D,          KC_B,         KC_NO,        KC_NO,        KC_K,          KC_H,          KC_COMMA,      KC_DOT,        KC_SLASH,      KC_RSFT,
                                               KC_ESC,        KC_LALT,       KC_LGUI,      KC_SPC,       KC_BSPC,      LT(1,KC_ENTER),KC_NO,         MO(3)
),
/* Symbol layer
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[1] = LAYOUT(
  KC_ESC,         KC_F1,        KC_F2,         KC_F3,         KC_F4,         KC_F5,                                    KC_F6,         KC_F7,         KC_F8,         KC_F9,         KC_F10,        KC_F11,
  _______,        KC_NO,        KC_NO,         KC_UP,         KC_NO,         KC_NO,                                    KC_NO,         KC_LBRC,       KC_RBRC,       KC_EQL,        KC_NO,         KC_F12,
  _______,        KC_NO,        KC_LEFT,       KC_DOWN,       KC_RIGHT,      KC_NO,                                    KC_NO,         KC_LPRN,       KC_RPRN,       KC_NO,         KC_NO,         KC_NO,
  _______,        KC_NO,        KC_NO,         KC_NO,         KC_NO,         KC_NO,        _______,      _______,      KC_NO,         KC_LCBR,       KC_RCBR,       KC_NO,         KC_NO,         KC_NO,
                                               _______,       _______,       _______,      _______,      _______,      _______,       _______,       _______
),
/* Numpad layer
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |MOD   | MODR |  S+  |  S-  |  B+  |  B-  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|RGB_TOG|    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[2] = LAYOUT(
  RGB_MOD,        RGB_RMOD,     RGB_SAI,       RGB_SAD,       RGB_VAI,       RGB_VAD,                                  _______,       _______,       _______,       _______,       _______,       _______,
  KC_GRV,         KC_1,         KC_2,          KC_3,          KC_4,          KC_5,                                     KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          _______,
  KC_F1,          KC_F2,        KC_F3,         KC_F4,         KC_F5,         KC_F6,                                    XXXXXXX,       KC_LEFT,       KC_DOWN,       KC_UP,         KC_RGHT,       XXXXXXX,
  KC_F7,          KC_F8,        KC_F9,         KC_F10,        KC_F11,        KC_F12,       RGB_TOG,      _______,      KC_PLUS,       KC_MINS,       KC_EQL,        KC_LBRC,       KC_RBRC,       KC_BSLS,
                                               _______,       _______,       _______,      _______,      _______,      _______,       _______,       _______
),
/* Media layer
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[3] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  ),
/* Ctrl layer
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[4] = LAYOUT(
  LCTL(KC_GRAVE), LCTL(KC_1),   LCTL(KC_2),    LCTL(KC_3),    LCTL(KC_4),    LCTL(KC_5),                             LCTL(KC_6),    LCTL(KC_7),    LCTL(KC_8),    LCTL(KC_9),    LCTL(KC_0),    LCTL(KC_MINUS),
  LCTL(KC_TAB),   LCTL(KC_Q),   LCTL(KC_W),    LCTL(KC_F),    LCTL(KC_P),    LCTL(KC_V),                             LCTL(KC_J),    LCTL(KC_L),    LCTL(KC_U),    LCTL(KC_Y),    LCTL(KC_SCLN),    LCTL(KC_BSLS),
  KC_NO,          LCTL(KC_A),   LCTL(KC_R),    LCTL(KC_S),    LCTL(KC_T),    LCTL(KC_G),                             LCTL(KC_M),    LCTL(KC_N),    LCTL(KC_E),    LCTL(KC_I),    LCTL(KC_O), LCTL(KC_QUOTE),
  LCTL(KC_LSFT),  LCTL(KC_Z),   LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_D),    LCTL(KC_B), LCTL(KC_NO),  LCTL(KC_NO),  LCTL(KC_K),    LCTL(KC_H),    LCTL(KC_COMMA), LCTL(KC_DOT),  LCTL(KC_SLASH),  LCTL(KC_RSFT),
                                               _______,       LCTL(KC_LALT), LCTL(KC_LGUI), LALT(LCTL(KC_LGUI)),_______,_______,    KC_NO,         KC_NO
  ),
/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | `/~  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |Escape| /Space  /       \BackSP\  |Enter |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [5] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                          KC_NO, KC_LALT,    KC_LGUI, KC_SPC,  KC_ENT,   _______,   _______, _______
 ),
};
//
// layer_state_t layer_state_set_user(layer_state_t state) {
//    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }
