#include QMK_KEYBOARD_H

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base layer
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           XXXXXXX,                        XXXXXXX,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_V,           XXXXXXX,                        XXXXXXX,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,
    LT(4,KC_ESCAPE),KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           XXXXXXX,                        XXXXXXX,        KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,
    KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_D,           KC_B,                                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSFT,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_LALT,        KC_LGUI,                        XXXXXXX,                        XXXXXXX,                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       MO(3),
                                                                    KC_SPACE,       XXXXXXX,        KC_ESCAPE,                      XXXXXXX,        KC_BSPC,        LT(1,KC_ENTER)
  ),
  // Symbol layer
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          XXXXXXX,                        XXXXXXX,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,        XXXXXXX,        KC_LBRC,        KC_RBRC,        KC_EQL,         XXXXXXX,        KC_F12,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,        XXXXXXX,        KC_LPRN,        KC_RPRN,        XXXXXXX,        XXXXXXX,        _______,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                        XXXXXXX,        KC_LCBR,        KC_RCBR,        XXXXXXX,        XXXXXXX,        _______,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                        XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,
                                                                    _______,        _______,        _______,                        _______,        _______,        _______
  ),
  // Numpad layer
  [2] = LAYOUT_moonlander(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        _______,        KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                        _______,        _______,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     _______,
    _______,        _______,        _______,        _______,        _______,        _______,                                                        _______,        KC_1,           KC_2,           KC_3,           KC_KP_EQUAL,    _______,
    _______,        _______,        _______,        _______,        _______,                        _______,                        _______,                        KC_0,           KC_0,           KC_KP_DOT,      KC_KP_EQUAL,    TO(0),
                                                                    _______,        _______,        _______,                        _______,        KC_BSPC,        KC_ENTER
  ),
  // Media layer
  [3] = LAYOUT_moonlander(
    AU_TOGG,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        RESET,
    MU_TOGG,        XXXXXXX,        XXXXXXX,        KC_MS_UP,       XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        WEBUSB_PAIR,
    MU_NEXT,        XXXXXXX,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    XXXXXXX,        XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_MEDIA_PLAY_PAUSE,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                        XXXXXXX,        XXXXXXX,        KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,XXXXXXX,TO(5),
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                        XXXXXXX,                        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,TO(2),          XXXXXXX,
                                                                    KC_MS_BTN1,     KC_MS_BTN2,     XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  // Ctrl layer
  [4] = LAYOUT_moonlander(
    LCTL(KC_GRAVE), LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     _______,                        _______,        LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     LCTL(KC_MINUS),
    LCTL(KC_TAB),   LCTL(KC_Q),     LCTL(KC_W),     LCTL(KC_F),     LCTL(KC_P),     LCTL(KC_V),     _______,                        _______,        LCTL(KC_J),     LCTL(KC_L),     LCTL(KC_U),     LCTL(KC_Y),     LCTL(KC_SCLN),  LCTL(KC_BSLS),
    _______,        LCTL(KC_A),     LCTL(KC_R),     LCTL(KC_S),     LCTL(KC_T),     LCTL(KC_G),     _______,                        _______,        LCTL(KC_M),     LCTL(KC_N),     LCTL(KC_E),     LCTL(KC_I),     LCTL(KC_O),     LCTL(KC_QUOTE),
    LCTL(KC_LSFT),  LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_D),     LCTL(KC_B),                                                     LCTL(KC_K),     LCTL(KC_H),     LCTL(KC_COMMA), LCTL(KC_DOT),   LCTL(KC_SLASH), LCTL(KC_RSFT),
    _______,        XXXXXXX,        XXXXXXX,        LCTL(KC_LALT),  LCTL(KC_LGUI),                  _______,                        _______,                        LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), _______,
                                                                    LALT(LCTL(KC_LGUI)),_______,    _______,                        _______,        _______,        _______
  ),
  // Qwerty/gaming layer
  [5] = LAYOUT_moonlander(
    KC_ESC,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,    KC_NO,                       KC_NO,     KC_6,        KC_7,        KC_8,        KC_9,        KC_0,         KC_MINUS,
    KC_TAB,      KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,    KC_NO,                       KC_NO,     KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,         KC_BSLS,
    KC_LCTL,     KC_A,        KC_S,        KC_D,        KC_F,        KC_G,    KC_NO,                       KC_NO,     KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,      KC_QUOTE,
    KC_LSFT,     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,                                            KC_N,        KC_M,        KC_COMMA,    KC_DOT,      KC_SLASH,     KC_RSFT,
    _______,     _______,     _______,     KC_LALT,     KC_LGUI,              KC_NO,                       KC_NO,                  KC_LEFT,     KC_DOWN,     KC_UP,       KC_RIGHT,     TO(0),
                                                        _______,  _______,  _______,                       _______,   _______,     _______
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {152,187,143}, {152,187,143}, {85,203,158}, {85,203,158}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {0,0,128}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {152,187,143}, {152,187,143}, {0,0,128}, {0,0,0} },

    [1] = { {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {85,203,158}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {85,203,158}, {14,255,255}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {14,255,255}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {141,255,233}, {152,187,143}, {152,187,143}, {152,187,143}, {14,255,255}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,128}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {152,187,143}, {152,187,143}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {0,0,128}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {85,203,158}, {152,187,143}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0}, {0,0,0}, {0,0,0}, {152,187,143}, {152,187,143}, {152,187,143}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}
