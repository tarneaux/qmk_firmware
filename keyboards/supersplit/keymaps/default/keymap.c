#include QMK_KEYBOARD_H

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT,KC_TAB): case MT(MOD_LCTL, KC_BSPC): case LT(2,KC_ENT): return true;
        default: return false;
    }
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_6x4_9(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_F18, KC_Q, KC_W, KC_F, KC_P, KC_B,
                             KC_NO, KC_A, KC_R, KC_S, KC_T, KC_D,
                             KC_NO, KC_Z, KC_X, KC_C, KC_G, KC_V,
                                                                         KC_NO, KC_NO, KC_NO,
                             KC_LGUI, MT(MOD_LSFT,KC_TAB), LT(1,KC_SPC), KC_LALT, KC_NO, KC_NO,

                                                                                                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                                                                              KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_PSCR,
                                                                                                                              KC_H, KC_N, KC_E, KC_I, KC_O, KC_ENT,
                                                                                                                              KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                                                                                    KC_NO, KC_NO, KC_NO,
                                                                                                    KC_NO, KC_NO, KC_NO, KC_BSPC, MO(2), KC_LCTL),
	[1] = LAYOUT_split_6x4_9(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_ESC, KC_AT, KC_AMPR, KC_DLR, KC_PERC,
                             KC_TRNS, KC_HASH, KC_LPRN, KC_LCBR, KC_LBRC, KC_MINS,
                             KC_NO, KC_F17, KC_ASTR, KC_QUOT, KC_DQUO, KC_UNDS,
                                                                                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,



                                                                                                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                                                                              KC_CIRC, KC_EQL, KC_PLUS, KC_F13, KC_F14, KC_NO,
                                                                                                                              KC_BSLS, KC_RBRC, KC_RCBR, KC_RPRN, KC_PIPE, KC_TRNS,
                                                                                                                              KC_GRV, KC_TILD, KC_EXLM, KC_F15, KC_F16, KC_NO,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_6x4_9(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5,
                             KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, OSM(MOD_LALT),
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_MPLY, KC_NO,
                                                                                 KC_TRNS, KC_TRNS, KC_TRNS,
                                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                                                                                              KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
                                                                                                                              KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS,
                                                                                                                              KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_NO,
                                                                                                    TO(3), KC_TRNS, KC_TRNS,
                                                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // Gaming layer
    [3] = LAYOUT_split_6x4_9(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R,
                             KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F,
                             KC_NO, KC_LCTL, KC_Z, KC_X, KC_C, KC_V,
                                                                                 KC_NO, KC_NO, KC_NO,
                                                      KC_LCTL, KC_ENT, KC_SPC, TO(0), KC_NO, KC_NO,
                            // Empty left side
                                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




