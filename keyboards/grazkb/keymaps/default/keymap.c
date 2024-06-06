// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define HYPER LALT(LCTL(KC_LGUI))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐                    ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │                    │ 7 │ 7 │ 8 │ 9 │ 0 │ - │
     * ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┤
     * │ > │ q │ w │ e │ r │ t │                    │ y │ u │ i │ o │ p │ * │
     * ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┤
     * │ ^ │ a │ s │ d │ f │ g │                    │ h │ j │ k │ l │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┤
     * │ s │ z │ x │ c │ v │ h │                    │ n │ m │ , │ . │ / │ s │
     * └───┴───┼───┼───┼───┼───┼───┬───┐    ┌───┬───┼───┼───┼───┼───┼───┴───┘
     *         │ x │ x │ x │   │ x │ x │    │ x │ x │   │ x │ x │ x │
     *         └───┴───┴───┘   └───┴───┘    └───┴───┘   └───┴───┴───┘
     */
    // Base layer
    [0] = LAYOUT_grazkb(
        KC_GRAVE,  KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                                        KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINUS,
        KC_TAB,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_V,                                        KC_J,      KC_L,      KC_U,      KC_Y,      KC_SCLN,   KC_BSLS,
        LT(3,KC_ESC),KC_A,    KC_R,      KC_S,      KC_T,      KC_G,                                        KC_M,      KC_N,      KC_E,      KC_I,      KC_O,      KC_QUOTE,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_D,      KC_B,                                        KC_K,      KC_H,      KC_COMMA,  KC_DOT,    KC_SLASH,  KC_RSFT,
                              XXXXXXX,   KC_LALT,   KC_LGUI,            KC_SPC,  KC_ESC,  KC_BSPC, LT(1,KC_ENT),       XXXXXXX,   XXXXXXX,   MO(2)
    ),
    // Symbol layer
    [1] = LAYOUT_grazkb(
        KC_ESC,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,                                       KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,
        _______,   XXXXXXX,   XXXXXXX,   KC_UP,     XXXXXXX,   XXXXXXX,                                     XXXXXXX,   KC_LBRC,   KC_RBRC,   KC_EQL,    XXXXXXX,   KC_F12,
        _______,   XXXXXXX,   KC_LEFT,   KC_DOWN,   KC_RIGHT,  XXXXXXX,                                     XXXXXXX,   KC_LPRN,   KC_RPRN,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                                        XXXXXXX,   KC_LCBR,   KC_RCBR,   XXXXXXX,   XXXXXXX,   _______,
                              _______,   _______,   _______,            _______, _______, _______, _______,            _______,   _______,   _______
    ),
    // Layer layer?
    [2] = LAYOUT_grazkb(
        XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                                     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                                     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                                     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                                     XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
                              _______,   _______,   _______,            _______, _______, _______, TO(4),              KC_VOLD,   KC_VOLU,   _______
    ),
    // Ctrl layer
    [3] = LAYOUT_grazkb(
        C(KC_GRV), C(KC_1),   C(KC_2),   C(KC_3),   C(KC_4),   C(KC_5),                                     C(KC_6),   C(KC_7),   C(KC_8),   C(KC_9),   C(KC_0),   C(KC_MINUS),
        C(KC_TAB), C(KC_Q),   C(KC_W),   C(KC_F),   C(KC_P),   C(KC_V),                                     C(KC_J),   C(KC_L),   C(KC_U),   C(KC_Y),   C(KC_SCLN),C(KC_BSLS),
        _______,   C(KC_A),   C(KC_R),   C(KC_S),   C(KC_T),   C(KC_G),                                     C(KC_M),   C(KC_N),   C(KC_E),   C(KC_I),   C(KC_O),   C(KC_QUOTE),
        C(KC_LSFT),C(KC_Z),   C(KC_X),   C(KC_C),   C(KC_D),   C(KC_B),                                     C(KC_K),   C(KC_H),   C(KC_COMM),C(KC_DOT),C(KC_SLASH),C(KC_RSFT),
                              _______,   C(KC_LALT),C(KC_LGUI),         HYPER,   _______, _______, _______,            _______,   _______,   _______
    ),
    // Qwerty/gaming layer
    [4] = LAYOUT_grazkb(
        KC_GRAVE,  KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                                        KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINUS,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                                        KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSLS,
        KC_LCTL,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,                                        KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOTE,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                        KC_N,      KC_M,      KC_COMMA,  KC_DOT,    KC_SLASH,  KC_RSFT,
                              _______,   KC_LALT,   KC_LGUI,            _______, _______, _______, _______,            _______,   _______,   TO(0)
    ),
};

// Setup the RGB to reflect the current layer

// -- These are the same as the colors from color.h with their values halved
#define HSV_DIM_RED 0, 255, 128
#define HSV_DIM_GREEN 85, 255, 128
#define HSV_DIM_BLUE 170, 255, 128
#define HSV_DIM_YELLOW 43, 255, 128

const rgblight_segment_t PROGMEM rgb_layer0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM rgb_layer1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_DIM_RED}
);
const rgblight_segment_t PROGMEM rgb_layer2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_DIM_GREEN}
);
const rgblight_segment_t PROGMEM rgb_layer3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_DIM_BLUE}
);
const rgblight_segment_t PROGMEM rgb_layer4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_DIM_YELLOW}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer0,
    rgb_layer1,
    rgb_layer2,
    rgb_layer3,
    rgb_layer4
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

// This is called on each state transition.
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    return state;
}
