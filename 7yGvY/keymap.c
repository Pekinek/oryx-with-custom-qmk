#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       MO(1),                                          MO(2),          KC_LEFT_SHIFT
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_ESCAPE,      KC_TAB,         KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_AUDIO_VOL_UP,                                RGB_MODE_FORWARD,KC_BSPC,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          
    KC_NO,          OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  KC_AUDIO_VOL_DOWN,                                RGB_SLD,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    KC_NO,          KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_NO,          KC_MAC_PASTE,                                   RGB_TOG,        KC_DELETE,      KC_PGDN,        KC_PAGE_UP,     KC_HOME,        KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MO(3),          KC_ENTER
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TILD,        KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_CIRC,                                        KC_DLR,         KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_GRAVE,       KC_NO,          
    KC_NO,          KC_MINUS,       KC_ASTR,        KC_EQUAL,       KC_UNDS,        KC_COLN,                                        KC_HASH,        OSM(MOD_RSFT),  OSM(MOD_RCTL),  OSM(MOD_RALT),  OSM(MOD_RGUI),  KC_NO,          
    KC_NO,          KC_PLUS,        KC_EXLM,        KC_AT,          KC_PERC,        KC_SCLN,                                        KC_TRANSPARENT, KC_PIPE,        KC_AMPR,        KC_TRANSPARENT, KC_SLASH,       KC_NO,          
                                                    KC_TRANSPARENT, MO(3),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           KC_1,           KC_9,                                           KC_8,           KC_0,           KC_2,           KC_4,           KC_6,           KC_TRANSPARENT, 
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  KC_F11,                                         KC_F12,         OSM(MOD_RSFT),  OSM(MOD_RCTL),  OSM(MOD_RALT),  OSM(MOD_RGUI),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F7,          KC_F5,          KC_F3,          KC_F1,          KC_F9,                                          KC_F8,          KC_F10,         KC_F2,          KC_F4,          KC_F6,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


