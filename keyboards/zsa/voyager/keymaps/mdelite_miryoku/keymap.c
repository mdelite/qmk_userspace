// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  //debug_mouse=true;
}

#if defined (MIRYOKU_MAPPING_SHIFTED_ROWS)
#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
LAYOUT_voyager( \
KC_LALT, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, KC_RALT, \
KC_LSFT, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, KC_RSFT, \
KC_LCTL, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, KC_RCTL, \
XXX, XXX, XXX, XXX, K32, XXX,      XXX, K37, XXX, XXX, XXX, XXX, \
                    K33, K34,      K35, K36 \
)
#else
#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
LAYOUT_voyager( \
XXX, XXX, XXX, XXX, XXX, XXX,      XXX, XXX, XXX, XXX, XXX, XXX, \
KC_LALT, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, KC_RALT, \
KC_LSFT, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, KC_RSFT, \
KC_LCTL, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, KC_RCTL, \
                    K33, K34,      K35, K36 \
)
#endif
