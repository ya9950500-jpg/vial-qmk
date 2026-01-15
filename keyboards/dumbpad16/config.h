#pragma once
#include "config_common.h"

#define VENDOR_ID  0xFEED
#define PRODUCT_ID 0x1616
#define DEVICE_VER 0x0001
#define MANUFACTURER Custom
#define PRODUCT DumbPad16

#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { B4, B5, B6, B2 }
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN F4
#define RGBLED_NUM 16
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_SLEEP
#define RGBLIGHT_ANIMATIONS

#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F6 }
#define ENCODER_RESOLUTION 4

#define VIAL_KEYBOARD_UID {0xA1,0xB2,0xC3,0xD4,0xE5,0xF6,0x11,0x22}
#define VIAL_UNLOCK_COMBO_ROWS {0,3}
#define VIAL_UNLOCK_COMBO_COLS {0,3}
