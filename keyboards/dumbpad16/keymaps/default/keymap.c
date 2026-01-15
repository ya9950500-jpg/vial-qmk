#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x4(
    KC_1, KC_2, KC_3, KC_4,
    KC_5, KC_6, KC_7, KC_8,
    KC_9, KC_0, KC_MINS, KC_EQL,
    KC_ESC, KC_TAB, KC_SPC, MO(_FN)
),

[_FN] = LAYOUT_ortho_4x4(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI,
    RGB_VAI, RGB_HUD, RGB_SAD, RGB_VAD,
    KC_F1, KC_F2, KC_F3, KC_F4,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_WH_D); // Scroll Down
    } else {
        tap_code(KC_WH_U); // Scroll Up
    }
    return true;
}
