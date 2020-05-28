#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ansi_split_bs_rshift( KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
                              KC_PGUP, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
                              KC_PGDN, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
							  KC_END,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, KC_UP,
							  MO(2),   KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT),

	[1] = LAYOUT_ansi_split_bs_rshift( KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
							  KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP, MAGIC_HOST_NKRO,  MAGIC_UNHOST_NKRO, MAGIC_TOGGLE_NKRO,
                              KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_TRNS, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS,
							  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [2] = LAYOUT_ansi_split_bs_rshift( KC_TRNS, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_TRNS, KC_TRNS,
                              KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_MNXT, KC_TRNS, KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
                              KC_MPRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC2, DM_RSTP, DM_PLY2, KC_TRNS, KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
