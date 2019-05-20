#include QMK_KEYBOARD_H

enum layers {
  _DVORAK,
  _QWERTY,
  _LOW,
  _QLOW,
  _HIGH,
};

#define TAPPING_TOGGLE 2

#define KC__ KC_TRNS

#define KC__QWERTY DF(_QWERTY)
#define KC__DVORAK DF(_DVORAK)
#define KC__LOW TT(_LOW)
#define KC__HIGH TT(_HIGH)
#define KC__QLOW TT(_QLOW)

#define KC_BL_TOGG BL_TOGG
#define KC_BL_DEC BL_DEC
#define KC_BL_INC BL_INC
#define KC_BL_BRTG BL_BRTG

#define KC_ESCC LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     GRV,     1,       2,       3,       4,       5,                                  6,       7,       8,       9,       0,       BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TAB,     QUOT,    COMM,    DOT,     P,       Y,                                  F,       G,       C,       R,       L,       SLSH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     ESCC,    A,       O,       E,       U,       I,                                  D,       H,       T,       N,       S,       MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     LSFT,    SCLN,    Q,       J,       K,       X,       LGUI,             _HIGH,   B,       M,       W,       V,       Z,       RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    LALT,    SPC,     _LOW,                      ENT,     SPC,     RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QWERTY] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     GRV,     1,       2,       3,       4,       5,                                  6,       7,       8,       9,       0,       BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TAB,     Q,       W,       E,       R,       T,                                  Y,       U,       I,       O,       P,       LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     ESCC,    A,       S,       D,       F,       G,                                  H,       J,       K,       L,       SCLN,    QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     LSFT,    Z,       X,       C,       V,       B,       LGUI,             _HIGH,   N,       M,       COMM,    DOT,     SLSH,    RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    LALT,    SPC,     _QLOW,                     ENT,     SPC,     RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOW] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _,       F1,      F2,      F3,      F4,      F5,                                 _,       _,       _,       LBRC,    RBRC,    DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       F6,      F7,      F8,      F9,      F10,                                _,       PGUP,    UP,      PGDN,    _,       BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       F11,     F12,     _,       _,       _,                                  HOME,    LEFT,    DOWN,    RGHT,    END,     EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _,       _,       _,       _,       _,       _,       _,                _,       _,       _,       _,       _,       _,       _,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _,       _,       _,                         _,       _,       _
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QLOW] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _,       F1,      F2,      F3,      F4,      F5,                                 _,       _,       _,       MINS,    EQL,     DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       F6,      F7,      F8,      F9,      F10,                                _,       PGUP,    UP,      PGDN,    _,       BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       F11,     F12,     _,       _,       _,                                  HOME,    LEFT,    DOWN,    RGHT,    END,     RBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _,       _,       _,       _,       _,       _,       _,                _,       _,       _,       _,       _,       _,       _,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _,       _,       _,                         _,       _,       _
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_HIGH] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     BL_TOGG, BL_DEC,  BL_INC,  _,       _,       _,                                  _,       _,       _,       _,       _,       _,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       _QWERTY, _DVORAK, _,       _,       _,                                  _,       _,       _,       _,       _,       _,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _,       _,       _,       _,       _,       _,                                  _,       _,       _,       _,       _,       _,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _,       _,       _,       _,       _,       _,       _,                _,       _,       _,       _,       _,       _,       _,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _,       _,       _,                         _,       _,       _
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};
