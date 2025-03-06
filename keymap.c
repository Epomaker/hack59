/* Copyright 2023 Yiancar-Designs
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        QK_GESC, KC_1,    KC_2,    KC_3,      KC_4,      KC_5,     KC_6,     KC_7,    KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,      KC_R,      KC_T,     KC_Y,     KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        CAP_CTRL,KC_A,    KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,      KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            MO(2),
        KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                                KC_RALT,  KC_RGUI,  KC_APP
    ),
    [1] = LAYOUT_tkl_ansi(
        QK_GESC, KC_1,    KC_2,    KC_3,      KC_4,      KC_5,     KC_6,     KC_7,    KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,      KC_R,      KC_T,     KC_Y,     KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        CAP_CTRL,KC_A,    KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,      KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            MO(3),
        KC_LCTL, KC_LALT, KC_LGUI,                       KC_SPC,                                KC_RGUI,  KC_RALT,  KC_APP
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,     KC_F4,     KC_F5,    KC_F6,    KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RGB_RTOG,
        LOGO_MOD,MD_BLE1, MD_BLE2, MD_BLE3,   MD_24G,    KC_PSCR,  KC_SCRL,  KC_PAUS, TO(0),    TO(1),    KC_P,     RGB_SPD,  RGB_SPI,  RGB_MOD,
        CAP_CTRL,KC_A,    KC_UP,   KC_D,      KC_F,      KC_INS,   KC_HOME,  KC_PGUP, RGB_SAD,  RGB_SAI,  RGB_HUD,  RGB_HUI,            KC_ENT,
        LOGO_HUI,KC_LEFT, KC_DOWN, KC_RGHT,   KC_V,      KC_DEL,   KC_END,   KC_PGDN, RGB_VAD,  RGB_VAI,  KC_SLSH,  QK_BAT,             KC_NO,
        KC_LCTL, QK_WLO,  KC_LALT,                       U_EE_CLR,                              FN_ALT,   KC_RGUI,  KC_APP
    ),
    [3] = LAYOUT_tkl_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,     KC_F4,     KC_F5,    KC_F6,    KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RGB_RTOG,
        LOGO_MOD,MD_BLE1, MD_BLE2, MD_BLE3,   MD_24G,    KC_F15,   KC_F14,   KC_F13,  TO(0),    TO(1),    KC_P,     RGB_SPD,  RGB_SPI,  RGB_MOD,
        CAP_CTRL,KC_A,    KC_UP,   KC_D,      KC_F,      KC_INS,   KC_HOME,  KC_PGUP, RGB_SAD,  RGB_SAI,  RGB_HUD,  RGB_HUI,            KC_ENT,
        LOGO_HUI,KC_LEFT, KC_DOWN, KC_RGHT,   KC_V,      KC_DEL,   KC_END,   KC_PGDN, RGB_VAD,  RGB_VAI,  KC_SLSH,  QK_BAT,             KC_NO,
        KC_LCTL, KC_LALT, KC_LGUI,                       U_EE_CLR,                              FN_ALT,   KC_RALT,  KC_APP
    )
};



