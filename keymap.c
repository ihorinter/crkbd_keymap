//
// Keymap
//


// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H


// Include headers for the keymap
#include "dictionary.h"
#include "combos.c"
#include "macros.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    // Letters
    [_LTR] = LAYOUT_split_3x6_3(

           R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,  _CTL_A,  _SFT_S,  _OPT_D,  _CMD_F,    KC_G,                    KC_H,  _CMD_J,  _CMD_K,  _SFT_L, _CTL_SC,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                         TO(_S01),TO(_CTR),  KC_SPC,     KC_BSPC,TO(_NUM), TO(_S02)

    ),


    // Navigation
    [_NAV] = LAYOUT_split_3x6_3(

        ________,   TAB_L, M_WRD_L,   KC_UP, M_WRD_R,   TAB_R,                ________,________,________,________,________,________,
        ________,________, KC_LEFT, KC_DOWN, KC_RGHT,________,                ________, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL,________,
        ________, KC_HOME, M_LIN_L,________, M_LIN_R,  KC_END,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Special characters
    [_SPC] = LAYOUT_split_3x6_3(

         GACCENT,   TILDE,   VLINE,   DQUOT,  APOSTR,    NMBR,                   PRCNT,   COLON, SMCOLON,   HLINE,   MDASH,   NDASH,
           L_SQM,   L_CUR,   L_ANG,   L_SQR,   L_RND,   ATSGN,                   CARET,   R_RND,   R_SQR,   R_ANG,   R_CUR,   R_SQM,
           L_DQM,   MSIGN,    HRVN,  UNDRSC,     SOL,   AMPRD,                    DLLR,    RSOL,     BUL,    WBUL,    MDOT,   R_DQM,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Without mod-taps
    [_NMT] = LAYOUT_split_3x6_3(

           R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Numpad
    [_NUM] = LAYOUT_split_3x6_3(

        ________,________,________,________,________,________,                 KC_PPLS,    KC_7,    KC_8,    KC_9,   COMMA, KC_PAST,
        ________, KC_RCTL, KC_RSFT, KC_ROPT, KC_RCMD,________,                 KC_PMNS,    KC_0,    KC_1,    KC_2,    KC_3, KC_PSLS,
        ________,________,________,________,________,________,                ________,    KC_4,    KC_5,    KC_6,  PERIOD, KC_PEQL,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // macOS controls and apps
    [_CTR] = LAYOUT_split_3x6_3(

         KC_VOLU,  DSKTP1,  DSKTP2,  DSKTP3,  DSKTP4,  DSKTP5,                   SPTLT,   SPC_L,   MCTRL,   SPC_R,________, KC_BRIU,
         KC_VOLD,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                  SS_OPT, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
            REDO,    UNDO,     CUT,    COPY,   PASTE,  XPASTE,                     DND,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Service layer 1
    [_S01] = LAYOUT_split_3x6_3(

          LCKSCR,________,________,TO(_SPC),TO(_NAV),________,                ________,________,________,________,________, QK_BOOT,
        ________,________,________,________,________,________,                ________,________,________,________,________,________,
         KC_CAPS,________,________, LANG_UA, LANG_EN,________,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


};