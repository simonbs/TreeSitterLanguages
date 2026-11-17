#define tree_sitter_astro_external_scanner_create mapped_tree_sitter_astro_external_scanner_create
#define tree_sitter_astro_external_scanner_deserialize mapped_tree_sitter_astro_external_scanner_deserialize
#define tree_sitter_astro_external_scanner_destroy mapped_tree_sitter_astro_external_scanner_destroy
#define tree_sitter_astro_external_scanner_scan mapped_tree_sitter_astro_external_scanner_scan
#define tree_sitter_astro_external_scanner_serialize mapped_tree_sitter_astro_external_scanner_serialize
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 16
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_text = 16,
  anon_sym_DASH_DASH_DASH = 17,
  anon_sym_DASH_DASH_DASH2 = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  sym__start_tag_name = 21,
  sym__script_start_tag_name = 22,
  sym__style_start_tag_name = 23,
  sym__end_tag_name = 24,
  sym_erroneous_end_tag_name = 25,
  sym__implicit_end_tag = 26,
  sym_raw_text = 27,
  sym_comment = 28,
  sym__html_interpolation_start = 29,
  sym__html_interpolation_end = 30,
  sym_frontmatter_js_block = 31,
  sym_attribute_js_expr = 32,
  sym_attribute_backtick_string = 33,
  sym_permissible_text = 34,
  sym__fragment_tag_delim = 35,
  sym_document = 36,
  sym_doctype = 37,
  sym__node = 38,
  sym_element = 39,
  sym_script_element = 40,
  sym_style_element = 41,
  sym_start_tag = 42,
  sym_script_start_tag = 43,
  sym_style_start_tag = 44,
  sym_self_closing_tag = 45,
  sym_end_tag = 46,
  sym_erroneous_end_tag = 47,
  sym_attribute = 48,
  sym_quoted_attribute_value = 49,
  sym__node_with_permissible_text = 50,
  sym_frontmatter = 51,
  sym_attribute_interpolation = 52,
  sym_html_interpolation = 53,
  sym_self_closing_script_tag = 54,
  sym_self_closing_style_tag = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_html_interpolation_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_DASH_DASH_DASH2] = "---",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym__html_interpolation_start] = "{",
  [sym__html_interpolation_end] = "}",
  [sym_frontmatter_js_block] = "frontmatter_js_block",
  [sym_attribute_js_expr] = "attribute_js_expr",
  [sym_attribute_backtick_string] = "attribute_backtick_string",
  [sym_permissible_text] = "permissible_text",
  [sym__fragment_tag_delim] = ">",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__node_with_permissible_text] = "_node_with_permissible_text",
  [sym_frontmatter] = "frontmatter",
  [sym_attribute_interpolation] = "attribute_interpolation",
  [sym_html_interpolation] = "html_interpolation",
  [sym_self_closing_script_tag] = "self_closing_tag",
  [sym_self_closing_style_tag] = "self_closing_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_html_interpolation_repeat1] = "html_interpolation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_DASH_DASH_DASH2] = anon_sym_DASH_DASH_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym__html_interpolation_start] = anon_sym_LBRACE,
  [sym__html_interpolation_end] = anon_sym_RBRACE,
  [sym_frontmatter_js_block] = sym_frontmatter_js_block,
  [sym_attribute_js_expr] = sym_attribute_js_expr,
  [sym_attribute_backtick_string] = sym_attribute_backtick_string,
  [sym_permissible_text] = sym_permissible_text,
  [sym__fragment_tag_delim] = anon_sym_GT,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__node_with_permissible_text] = sym__node_with_permissible_text,
  [sym_frontmatter] = sym_frontmatter,
  [sym_attribute_interpolation] = sym_attribute_interpolation,
  [sym_html_interpolation] = sym_html_interpolation,
  [sym_self_closing_script_tag] = sym_self_closing_tag,
  [sym_self_closing_style_tag] = sym_self_closing_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_html_interpolation_repeat1] = aux_sym_html_interpolation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__html_interpolation_start] = {
    .visible = true,
    .named = false,
  },
  [sym__html_interpolation_end] = {
    .visible = true,
    .named = false,
  },
  [sym_frontmatter_js_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_js_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_backtick_string] = {
    .visible = true,
    .named = true,
  },
  [sym_permissible_text] = {
    .visible = true,
    .named = true,
  },
  [sym__fragment_tag_delim] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__node_with_permissible_text] = {
    .visible = false,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_html_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_script_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_style_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 13,
  [18] = 16,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 23,
  [26] = 20,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 27,
  [31] = 23,
  [32] = 27,
  [33] = 29,
  [34] = 21,
  [35] = 22,
  [36] = 36,
  [37] = 29,
  [38] = 22,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 55,
  [64] = 64,
  [65] = 51,
  [66] = 66,
  [67] = 49,
  [68] = 48,
  [69] = 59,
  [70] = 58,
  [71] = 57,
  [72] = 56,
  [73] = 52,
  [74] = 74,
  [75] = 75,
  [76] = 50,
  [77] = 40,
  [78] = 43,
  [79] = 42,
  [80] = 46,
  [81] = 75,
  [82] = 74,
  [83] = 66,
  [84] = 84,
  [85] = 64,
  [86] = 53,
  [87] = 74,
  [88] = 66,
  [89] = 40,
  [90] = 56,
  [91] = 57,
  [92] = 58,
  [93] = 59,
  [94] = 60,
  [95] = 55,
  [96] = 64,
  [97] = 49,
  [98] = 48,
  [99] = 43,
  [100] = 42,
  [101] = 41,
  [102] = 46,
  [103] = 75,
  [104] = 104,
  [105] = 52,
  [106] = 50,
  [107] = 51,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 112,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 116,
  [120] = 120,
  [121] = 116,
  [122] = 117,
  [123] = 120,
  [124] = 120,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 131,
  [136] = 131,
  [137] = 128,
  [138] = 138,
  [139] = 139,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 141,
  [152] = 142,
  [153] = 153,
  [154] = 141,
  [155] = 146,
  [156] = 156,
  [157] = 153,
  [158] = 150,
  [159] = 159,
  [160] = 150,
  [161] = 148,
  [162] = 148,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '{') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '{') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '<') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '<') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 23, .external_lex_state = 3},
  [3] = {.lex_state = 23, .external_lex_state = 3},
  [4] = {.lex_state = 23, .external_lex_state = 3},
  [5] = {.lex_state = 23, .external_lex_state = 3},
  [6] = {.lex_state = 23, .external_lex_state = 3},
  [7] = {.lex_state = 23, .external_lex_state = 3},
  [8] = {.lex_state = 23, .external_lex_state = 2},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 3},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 23, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 4},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 4},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 10, .external_lex_state = 5},
  [21] = {.lex_state = 10, .external_lex_state = 5},
  [22] = {.lex_state = 10, .external_lex_state = 5},
  [23] = {.lex_state = 10, .external_lex_state = 5},
  [24] = {.lex_state = 10, .external_lex_state = 5},
  [25] = {.lex_state = 10, .external_lex_state = 5},
  [26] = {.lex_state = 10, .external_lex_state = 5},
  [27] = {.lex_state = 10, .external_lex_state = 5},
  [28] = {.lex_state = 10, .external_lex_state = 5},
  [29] = {.lex_state = 10, .external_lex_state = 5},
  [30] = {.lex_state = 10, .external_lex_state = 5},
  [31] = {.lex_state = 10, .external_lex_state = 5},
  [32] = {.lex_state = 10, .external_lex_state = 5},
  [33] = {.lex_state = 10, .external_lex_state = 5},
  [34] = {.lex_state = 10, .external_lex_state = 5},
  [35] = {.lex_state = 10, .external_lex_state = 5},
  [36] = {.lex_state = 1, .external_lex_state = 6},
  [37] = {.lex_state = 10, .external_lex_state = 5},
  [38] = {.lex_state = 10, .external_lex_state = 5},
  [39] = {.lex_state = 10, .external_lex_state = 5},
  [40] = {.lex_state = 23, .external_lex_state = 2},
  [41] = {.lex_state = 23, .external_lex_state = 3},
  [42] = {.lex_state = 23, .external_lex_state = 2},
  [43] = {.lex_state = 23, .external_lex_state = 2},
  [44] = {.lex_state = 23, .external_lex_state = 2},
  [45] = {.lex_state = 23, .external_lex_state = 3},
  [46] = {.lex_state = 23, .external_lex_state = 2},
  [47] = {.lex_state = 23, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 3},
  [49] = {.lex_state = 23, .external_lex_state = 3},
  [50] = {.lex_state = 23, .external_lex_state = 2},
  [51] = {.lex_state = 23, .external_lex_state = 3},
  [52] = {.lex_state = 23, .external_lex_state = 2},
  [53] = {.lex_state = 23, .external_lex_state = 2},
  [54] = {.lex_state = 23, .external_lex_state = 2},
  [55] = {.lex_state = 23, .external_lex_state = 3},
  [56] = {.lex_state = 23, .external_lex_state = 2},
  [57] = {.lex_state = 23, .external_lex_state = 2},
  [58] = {.lex_state = 23, .external_lex_state = 2},
  [59] = {.lex_state = 23, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 23, .external_lex_state = 3},
  [62] = {.lex_state = 23, .external_lex_state = 3},
  [63] = {.lex_state = 23, .external_lex_state = 2},
  [64] = {.lex_state = 23, .external_lex_state = 2},
  [65] = {.lex_state = 23, .external_lex_state = 2},
  [66] = {.lex_state = 23, .external_lex_state = 2},
  [67] = {.lex_state = 23, .external_lex_state = 2},
  [68] = {.lex_state = 23, .external_lex_state = 2},
  [69] = {.lex_state = 23, .external_lex_state = 3},
  [70] = {.lex_state = 23, .external_lex_state = 3},
  [71] = {.lex_state = 23, .external_lex_state = 3},
  [72] = {.lex_state = 23, .external_lex_state = 3},
  [73] = {.lex_state = 23, .external_lex_state = 3},
  [74] = {.lex_state = 23, .external_lex_state = 2},
  [75] = {.lex_state = 23, .external_lex_state = 2},
  [76] = {.lex_state = 23, .external_lex_state = 3},
  [77] = {.lex_state = 23, .external_lex_state = 3},
  [78] = {.lex_state = 23, .external_lex_state = 3},
  [79] = {.lex_state = 23, .external_lex_state = 3},
  [80] = {.lex_state = 23, .external_lex_state = 3},
  [81] = {.lex_state = 23, .external_lex_state = 3},
  [82] = {.lex_state = 23, .external_lex_state = 3},
  [83] = {.lex_state = 23, .external_lex_state = 3},
  [84] = {.lex_state = 23, .external_lex_state = 3},
  [85] = {.lex_state = 23, .external_lex_state = 3},
  [86] = {.lex_state = 23, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 10, .external_lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 10, .external_lex_state = 5},
  [109] = {.lex_state = 10, .external_lex_state = 5},
  [110] = {.lex_state = 10, .external_lex_state = 5},
  [111] = {.lex_state = 10, .external_lex_state = 5},
  [112] = {.lex_state = 0, .external_lex_state = 7},
  [113] = {.lex_state = 10, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 8},
  [117] = {.lex_state = 0, .external_lex_state = 8},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0, .external_lex_state = 9},
  [124] = {.lex_state = 0, .external_lex_state = 9},
  [125] = {.lex_state = 4, .external_lex_state = 10},
  [126] = {.lex_state = 2, .external_lex_state = 10},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 10},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 10},
  [131] = {.lex_state = 0, .external_lex_state = 11},
  [132] = {.lex_state = 0, .external_lex_state = 10},
  [133] = {.lex_state = 9, .external_lex_state = 12},
  [134] = {.lex_state = 0, .external_lex_state = 10},
  [135] = {.lex_state = 0, .external_lex_state = 11},
  [136] = {.lex_state = 0, .external_lex_state = 11},
  [137] = {.lex_state = 0, .external_lex_state = 10},
  [138] = {.lex_state = 0, .external_lex_state = 8},
  [139] = {.lex_state = 0, .external_lex_state = 8},
  [140] = {.lex_state = 0, .external_lex_state = 10},
  [141] = {.lex_state = 0, .external_lex_state = 10},
  [142] = {.lex_state = 0, .external_lex_state = 10},
  [143] = {.lex_state = 0, .external_lex_state = 10},
  [144] = {.lex_state = 0, .external_lex_state = 10},
  [145] = {.lex_state = 0, .external_lex_state = 10},
  [146] = {.lex_state = 0, .external_lex_state = 10},
  [147] = {.lex_state = 0, .external_lex_state = 10},
  [148] = {.lex_state = 0, .external_lex_state = 10},
  [149] = {.lex_state = 0, .external_lex_state = 10},
  [150] = {.lex_state = 20, .external_lex_state = 10},
  [151] = {.lex_state = 0, .external_lex_state = 10},
  [152] = {.lex_state = 0, .external_lex_state = 10},
  [153] = {.lex_state = 0, .external_lex_state = 13},
  [154] = {.lex_state = 0, .external_lex_state = 10},
  [155] = {.lex_state = 0, .external_lex_state = 10},
  [156] = {.lex_state = 9, .external_lex_state = 10},
  [157] = {.lex_state = 0, .external_lex_state = 13},
  [158] = {.lex_state = 20, .external_lex_state = 10},
  [159] = {.lex_state = 0, .external_lex_state = 14},
  [160] = {.lex_state = 20, .external_lex_state = 10},
  [161] = {.lex_state = 0, .external_lex_state = 10},
  [162] = {.lex_state = 0, .external_lex_state = 10},
};





enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
  ts_external_token__html_interpolation_start = 9,
  ts_external_token__html_interpolation_end = 10,
  ts_external_token_frontmatter_js_block = 11,
  ts_external_token_attribute_js_expr = 12,
  ts_external_token_attribute_backtick_string = 13,
  ts_external_token_permissible_text = 14,
  ts_external_token__fragment_tag_delim = 15,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__html_interpolation_start] = sym__html_interpolation_start,
  [ts_external_token__html_interpolation_end] = sym__html_interpolation_end,
  [ts_external_token_frontmatter_js_block] = sym_frontmatter_js_block,
  [ts_external_token_attribute_js_expr] = sym_attribute_js_expr,
  [ts_external_token_attribute_backtick_string] = sym_attribute_backtick_string,
  [ts_external_token_permissible_text] = sym_permissible_text,
  [ts_external_token__fragment_tag_delim] = sym__fragment_tag_delim,
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__html_interpolation_start] = true,
    [ts_external_token__html_interpolation_end] = true,
    [ts_external_token_frontmatter_js_block] = true,
    [ts_external_token_attribute_js_expr] = true,
    [ts_external_token_attribute_backtick_string] = true,
    [ts_external_token_permissible_text] = true,
    [ts_external_token__fragment_tag_delim] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token__html_interpolation_start] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__html_interpolation_start] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token__html_interpolation_start] = true,
    [ts_external_token__html_interpolation_end] = true,
    [ts_external_token_permissible_text] = true,
  },
  [5] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_attribute_backtick_string] = true,
  },
  [7] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__fragment_tag_delim] = true,
  },
  [8] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__fragment_tag_delim] = true,
  },
  [10] = {
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__fragment_tag_delim] = true,
  },
  [12] = {
    [ts_external_token_comment] = true,
    [ts_external_token_frontmatter_js_block] = true,
  },
  [13] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [14] = {
    [ts_external_token_comment] = true,
    [ts_external_token_attribute_js_expr] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_astro_external_scanner_create(void);
void tree_sitter_astro_external_scanner_destroy(void *);
bool tree_sitter_astro_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_astro_external_scanner_serialize(void *, char *);
void tree_sitter_astro_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_astro_from_file(const char *path) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,

    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_astro_external_scanner_create,
      tree_sitter_astro_external_scanner_destroy,
      tree_sitter_astro_external_scanner_scan,
      tree_sitter_astro_external_scanner_serialize,
      tree_sitter_astro_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 10056) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 10056, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 100, 187, 166, 59, 211, 241, 1, 0, 124, 228, 223, 250, 233, 76, 227, 227, 139, 39, 147, 244, 13, 223, 57, 219, 16, 27, 126, 205, 94, 97, 44, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 10056);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 10056);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 304);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 5928);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 6576);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
