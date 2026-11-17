#define tree_sitter_nix_external_scanner_create mapped_tree_sitter_nix_external_scanner_create
#define tree_sitter_nix_external_scanner_deserialize mapped_tree_sitter_nix_external_scanner_deserialize
#define tree_sitter_nix_external_scanner_destroy mapped_tree_sitter_nix_external_scanner_destroy
#define tree_sitter_nix_external_scanner_scan mapped_tree_sitter_nix_external_scanner_scan
#define tree_sitter_nix_external_scanner_serialize mapped_tree_sitter_nix_external_scanner_serialize
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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 541
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 41

enum ts_symbol_identifiers {
  sym_keyword = 1,
  sym_identifier = 2,
  sym_integer_expression = 3,
  sym_float_expression = 4,
  sym__hpath_start = 5,
  sym_spath_expression = 6,
  sym_uri_expression = 7,
  anon_sym_COLON = 8,
  anon_sym_AT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_QMARK = 13,
  sym_ellipses = 14,
  anon_sym_assert = 15,
  anon_sym_SEMI = 16,
  anon_sym_with = 17,
  anon_sym_let = 18,
  anon_sym_in = 19,
  anon_sym_if = 20,
  anon_sym_then = 21,
  anon_sym_else = 22,
  anon_sym_BANG = 23,
  anon_sym_DASH = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_DASH_GT = 36,
  anon_sym_SLASH_SLASH = 37,
  anon_sym_PLUS_PLUS = 38,
  anon_sym_DOT = 39,
  anon_sym_or = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_rec = 43,
  anon_sym_DQUOTE = 44,
  anon_sym_DOLLAR = 45,
  sym_escape_sequence = 46,
  anon_sym_SQUOTE_SQUOTE = 47,
  sym__indented_escape_sequence = 48,
  anon_sym_EQ = 49,
  anon_sym_inherit = 50,
  anon_sym_DOLLAR_LBRACE = 51,
  anon_sym_DOLLAR_LBRACE2 = 52,
  anon_sym_LBRACK = 53,
  anon_sym_RBRACK = 54,
  sym_comment = 55,
  sym_string_fragment = 56,
  sym__indented_string_fragment = 57,
  sym__path_start = 58,
  sym_path_fragment = 59,
  sym_dollar_escape = 60,
  sym__indented_dollar_escape = 61,
  sym_source_code = 62,
  sym__expression = 63,
  sym_variable_expression = 64,
  sym_path_expression = 65,
  sym_hpath_expression = 66,
  sym__expr_function_expression = 67,
  sym_function_expression = 68,
  sym_formals = 69,
  sym_formal = 70,
  sym_assert_expression = 71,
  sym_with_expression = 72,
  sym_let_expression = 73,
  sym__expr_if = 74,
  sym_if_expression = 75,
  sym__expr_op = 76,
  sym_has_attr_expression = 77,
  sym_unary_expression = 78,
  sym_binary_expression = 79,
  sym__expr_apply_expression = 80,
  sym_apply_expression = 81,
  sym__expr_select_expression = 82,
  sym_select_expression = 83,
  sym__expr_simple = 84,
  sym_parenthesized_expression = 85,
  sym_attrset_expression = 86,
  sym_let_attrset_expression = 87,
  sym_rec_attrset_expression = 88,
  sym_string_expression = 89,
  sym_indented_string_expression = 90,
  sym_binding_set = 91,
  sym_binding = 92,
  sym_inherit = 93,
  sym_inherit_from = 94,
  sym_attrpath = 95,
  sym_inherited_attrs = 96,
  sym__immediate_interpolation = 97,
  sym_interpolation = 98,
  sym_list_expression = 99,
  aux_sym_path_expression_repeat1 = 100,
  aux_sym_formals_repeat1 = 101,
  aux_sym_string_expression_repeat1 = 102,
  aux_sym_indented_string_expression_repeat1 = 103,
  aux_sym_binding_set_repeat1 = 104,
  aux_sym_attrpath_repeat1 = 105,
  aux_sym_inherited_attrs_repeat1 = 106,
  aux_sym_list_expression_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym_identifier] = "identifier",
  [sym_integer_expression] = "integer_expression",
  [sym_float_expression] = "float_expression",
  [sym__hpath_start] = "path_fragment",
  [sym_spath_expression] = "spath_expression",
  [sym_uri_expression] = "uri_expression",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_QMARK] = "\?",
  [sym_ellipses] = "ellipses",
  [anon_sym_assert] = "assert",
  [anon_sym_SEMI] = ";",
  [anon_sym_with] = "with",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DOT] = ".",
  [anon_sym_or] = "or",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rec] = "rec",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [sym__indented_escape_sequence] = "escape_sequence",
  [anon_sym_EQ] = "=",
  [anon_sym_inherit] = "inherit",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LBRACE2] = "${",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_string_fragment] = "string_fragment",
  [sym__indented_string_fragment] = "string_fragment",
  [sym__path_start] = "path_fragment",
  [sym_path_fragment] = "path_fragment",
  [sym_dollar_escape] = "dollar_escape",
  [sym__indented_dollar_escape] = "dollar_escape",
  [sym_source_code] = "source_code",
  [sym__expression] = "_expression",
  [sym_variable_expression] = "variable_expression",
  [sym_path_expression] = "path_expression",
  [sym_hpath_expression] = "hpath_expression",
  [sym__expr_function_expression] = "_expr_function_expression",
  [sym_function_expression] = "function_expression",
  [sym_formals] = "formals",
  [sym_formal] = "formal",
  [sym_assert_expression] = "assert_expression",
  [sym_with_expression] = "with_expression",
  [sym_let_expression] = "let_expression",
  [sym__expr_if] = "_expr_if",
  [sym_if_expression] = "if_expression",
  [sym__expr_op] = "_expr_op",
  [sym_has_attr_expression] = "has_attr_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__expr_apply_expression] = "_expr_apply_expression",
  [sym_apply_expression] = "apply_expression",
  [sym__expr_select_expression] = "_expr_select_expression",
  [sym_select_expression] = "select_expression",
  [sym__expr_simple] = "_expr_simple",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_attrset_expression] = "attrset_expression",
  [sym_let_attrset_expression] = "let_attrset_expression",
  [sym_rec_attrset_expression] = "rec_attrset_expression",
  [sym_string_expression] = "string_expression",
  [sym_indented_string_expression] = "indented_string_expression",
  [sym_binding_set] = "binding_set",
  [sym_binding] = "binding",
  [sym_inherit] = "inherit",
  [sym_inherit_from] = "inherit_from",
  [sym_attrpath] = "attrpath",
  [sym_inherited_attrs] = "inherited_attrs",
  [sym__immediate_interpolation] = "interpolation",
  [sym_interpolation] = "interpolation",
  [sym_list_expression] = "list_expression",
  [aux_sym_path_expression_repeat1] = "path_expression_repeat1",
  [aux_sym_formals_repeat1] = "formals_repeat1",
  [aux_sym_string_expression_repeat1] = "string_expression_repeat1",
  [aux_sym_indented_string_expression_repeat1] = "indented_string_expression_repeat1",
  [aux_sym_binding_set_repeat1] = "binding_set_repeat1",
  [aux_sym_attrpath_repeat1] = "attrpath_repeat1",
  [aux_sym_inherited_attrs_repeat1] = "inherited_attrs_repeat1",
  [aux_sym_list_expression_repeat1] = "list_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym_identifier] = sym_identifier,
  [sym_integer_expression] = sym_integer_expression,
  [sym_float_expression] = sym_float_expression,
  [sym__hpath_start] = sym_path_fragment,
  [sym_spath_expression] = sym_spath_expression,
  [sym_uri_expression] = sym_uri_expression,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_ellipses] = sym_ellipses,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR] = sym_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [sym__indented_escape_sequence] = sym_escape_sequence,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE2] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_string_fragment] = sym_string_fragment,
  [sym__indented_string_fragment] = sym_string_fragment,
  [sym__path_start] = sym_path_fragment,
  [sym_path_fragment] = sym_path_fragment,
  [sym_dollar_escape] = sym_dollar_escape,
  [sym__indented_dollar_escape] = sym_dollar_escape,
  [sym_source_code] = sym_source_code,
  [sym__expression] = sym__expression,
  [sym_variable_expression] = sym_variable_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_hpath_expression] = sym_hpath_expression,
  [sym__expr_function_expression] = sym__expr_function_expression,
  [sym_function_expression] = sym_function_expression,
  [sym_formals] = sym_formals,
  [sym_formal] = sym_formal,
  [sym_assert_expression] = sym_assert_expression,
  [sym_with_expression] = sym_with_expression,
  [sym_let_expression] = sym_let_expression,
  [sym__expr_if] = sym__expr_if,
  [sym_if_expression] = sym_if_expression,
  [sym__expr_op] = sym__expr_op,
  [sym_has_attr_expression] = sym_has_attr_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__expr_apply_expression] = sym__expr_apply_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym__expr_select_expression] = sym__expr_select_expression,
  [sym_select_expression] = sym_select_expression,
  [sym__expr_simple] = sym__expr_simple,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_attrset_expression] = sym_attrset_expression,
  [sym_let_attrset_expression] = sym_let_attrset_expression,
  [sym_rec_attrset_expression] = sym_rec_attrset_expression,
  [sym_string_expression] = sym_string_expression,
  [sym_indented_string_expression] = sym_indented_string_expression,
  [sym_binding_set] = sym_binding_set,
  [sym_binding] = sym_binding,
  [sym_inherit] = sym_inherit,
  [sym_inherit_from] = sym_inherit_from,
  [sym_attrpath] = sym_attrpath,
  [sym_inherited_attrs] = sym_inherited_attrs,
  [sym__immediate_interpolation] = sym_interpolation,
  [sym_interpolation] = sym_interpolation,
  [sym_list_expression] = sym_list_expression,
  [aux_sym_path_expression_repeat1] = aux_sym_path_expression_repeat1,
  [aux_sym_formals_repeat1] = aux_sym_formals_repeat1,
  [aux_sym_string_expression_repeat1] = aux_sym_string_expression_repeat1,
  [aux_sym_indented_string_expression_repeat1] = aux_sym_indented_string_expression_repeat1,
  [aux_sym_binding_set_repeat1] = aux_sym_binding_set_repeat1,
  [aux_sym_attrpath_repeat1] = aux_sym_attrpath_repeat1,
  [aux_sym_inherited_attrs_repeat1] = aux_sym_inherited_attrs_repeat1,
  [aux_sym_list_expression_repeat1] = aux_sym_list_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_float_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__hpath_start] = {
    .visible = true,
    .named = true,
  },
  [sym_spath_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_uri_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__indented_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__indented_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__path_start] = {
    .visible = true,
    .named = true,
  },
  [sym_path_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_dollar_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__indented_dollar_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_source_code] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_variable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hpath_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_function_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_formals] = {
    .visible = true,
    .named = true,
  },
  [sym_formal] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_if] = {
    .visible = false,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_op] = {
    .visible = false,
    .named = true,
  },
  [sym_has_attr_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_apply_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_select_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_simple] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_attrset_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_attrset_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_rec_attrset_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_string_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_set] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit_from] = {
    .visible = true,
    .named = true,
  },
  [sym_attrpath] = {
    .visible = true,
    .named = true,
  },
  [sym_inherited_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_list_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_string_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attrpath_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inherited_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_attr = 3,
  field_attrpath = 4,
  field_attrs = 5,
  field_binding = 6,
  field_body = 7,
  field_condition = 8,
  field_consequence = 9,
  field_default = 10,
  field_element = 11,
  field_ellipses = 12,
  field_environment = 13,
  field_expression = 14,
  field_formal = 15,
  field_formals = 16,
  field_function = 17,
  field_left = 18,
  field_name = 19,
  field_operator = 20,
  field_right = 21,
  field_universal = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_attr] = "attr",
  [field_attrpath] = "attrpath",
  [field_attrs] = "attrs",
  [field_binding] = "binding",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_default] = "default",
  [field_element] = "element",
  [field_ellipses] = "ellipses",
  [field_environment] = "environment",
  [field_expression] = "expression",
  [field_formal] = "formal",
  [field_formals] = "formals",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_universal] = "universal",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 1},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 3},
  [22] = {.index = 30, .length = 3},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 1},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 2},
  [30] = {.index = 45, .length = 2},
  [31] = {.index = 47, .length = 2},
  [32] = {.index = 49, .length = 1},
  [33] = {.index = 50, .length = 3},
  [34] = {.index = 53, .length = 2},
  [35] = {.index = 55, .length = 2},
  [36] = {.index = 57, .length = 3},
  [37] = {.index = 60, .length = 3},
  [38] = {.index = 63, .length = 3},
  [39] = {.index = 66, .length = 3},
  [40] = {.index = 69, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_expression, 0},
  [2] =
    {field_expression, 0, .inherited = true},
  [3] =
    {field_attr, 0},
  [4] =
    {field_binding, 0},
  [5] =
    {field_binding, 0, .inherited = true},
  [6] =
    {field_argument, 1},
    {field_operator, 0},
  [8] =
    {field_element, 0},
  [9] =
    {field_argument, 1},
    {field_function, 0},
  [11] =
    {field_body, 2},
    {field_universal, 0},
  [13] =
    {field_attr, 0},
    {field_attr, 1, .inherited = true},
  [15] =
    {field_ellipses, 1},
  [16] =
    {field_attr, 0, .inherited = true},
  [17] =
    {field_formal, 1},
  [18] =
    {field_binding, 0, .inherited = true},
    {field_binding, 1, .inherited = true},
  [20] =
    {field_body, 2},
  [21] =
    {field_expression, 1},
  [22] =
    {field_element, 1, .inherited = true},
  [23] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [25] =
    {field_body, 2},
    {field_formals, 0},
  [27] =
    {field_attrpath, 2},
    {field_expression, 0},
    {field_operator, 1},
  [30] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [33] =
    {field_attrpath, 2},
    {field_expression, 0},
  [35] =
    {field_default, 2},
    {field_name, 0},
  [37] =
    {field_attr, 1},
  [38] =
    {field_attr, 0, .inherited = true},
    {field_attr, 1, .inherited = true},
  [40] =
    {field_attrs, 1},
  [41] =
    {field_formal, 1},
    {field_formal, 2, .inherited = true},
  [43] =
    {field_formal, 0, .inherited = true},
    {field_formal, 1, .inherited = true},
  [45] =
    {field_body, 3},
    {field_condition, 1},
  [47] =
    {field_body, 3},
    {field_environment, 1},
  [49] =
    {field_body, 3},
  [50] =
    {field_body, 4},
    {field_formals, 2},
    {field_universal, 0},
  [53] =
    {field_ellipses, 3},
    {field_formal, 1},
  [55] =
    {field_attrpath, 0},
    {field_expression, 2},
  [57] =
    {field_body, 4},
    {field_formals, 0},
    {field_universal, 2},
  [60] =
    {field_attrpath, 2},
    {field_default, 4},
    {field_expression, 0},
  [63] =
    {field_ellipses, 4},
    {field_formal, 1},
    {field_formal, 2, .inherited = true},
  [66] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
  [69] =
    {field_attrs, 4},
    {field_expression, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(158);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '>') ADVANCE(117);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(160);
      END_STATE();
    case 50:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 51:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 52:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 53:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 54:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_integer_expression);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer_expression);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer_expression);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_float_expression);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_float_expression);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__hpath_start);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_spath_expression);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_uri_expression);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__indented_escape_sequence);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51, .external_lex_state = 2},
  [2] = {.lex_state = 51, .external_lex_state = 2},
  [3] = {.lex_state = 51, .external_lex_state = 2},
  [4] = {.lex_state = 51, .external_lex_state = 2},
  [5] = {.lex_state = 51, .external_lex_state = 2},
  [6] = {.lex_state = 51, .external_lex_state = 2},
  [7] = {.lex_state = 51, .external_lex_state = 2},
  [8] = {.lex_state = 51, .external_lex_state = 2},
  [9] = {.lex_state = 51, .external_lex_state = 2},
  [10] = {.lex_state = 51, .external_lex_state = 2},
  [11] = {.lex_state = 51, .external_lex_state = 2},
  [12] = {.lex_state = 51, .external_lex_state = 2},
  [13] = {.lex_state = 51, .external_lex_state = 2},
  [14] = {.lex_state = 51, .external_lex_state = 2},
  [15] = {.lex_state = 51, .external_lex_state = 2},
  [16] = {.lex_state = 51, .external_lex_state = 2},
  [17] = {.lex_state = 51, .external_lex_state = 2},
  [18] = {.lex_state = 51, .external_lex_state = 2},
  [19] = {.lex_state = 51, .external_lex_state = 2},
  [20] = {.lex_state = 51, .external_lex_state = 2},
  [21] = {.lex_state = 51, .external_lex_state = 2},
  [22] = {.lex_state = 51, .external_lex_state = 2},
  [23] = {.lex_state = 51, .external_lex_state = 2},
  [24] = {.lex_state = 54, .external_lex_state = 2},
  [25] = {.lex_state = 51, .external_lex_state = 2},
  [26] = {.lex_state = 51, .external_lex_state = 2},
  [27] = {.lex_state = 51, .external_lex_state = 2},
  [28] = {.lex_state = 51, .external_lex_state = 2},
  [29] = {.lex_state = 51, .external_lex_state = 2},
  [30] = {.lex_state = 51, .external_lex_state = 2},
  [31] = {.lex_state = 51, .external_lex_state = 2},
  [32] = {.lex_state = 51, .external_lex_state = 2},
  [33] = {.lex_state = 51, .external_lex_state = 2},
  [34] = {.lex_state = 51, .external_lex_state = 2},
  [35] = {.lex_state = 51, .external_lex_state = 2},
  [36] = {.lex_state = 51, .external_lex_state = 2},
  [37] = {.lex_state = 51, .external_lex_state = 2},
  [38] = {.lex_state = 51, .external_lex_state = 2},
  [39] = {.lex_state = 51, .external_lex_state = 2},
  [40] = {.lex_state = 51, .external_lex_state = 2},
  [41] = {.lex_state = 51, .external_lex_state = 2},
  [42] = {.lex_state = 51, .external_lex_state = 2},
  [43] = {.lex_state = 51, .external_lex_state = 2},
  [44] = {.lex_state = 51, .external_lex_state = 2},
  [45] = {.lex_state = 51, .external_lex_state = 2},
  [46] = {.lex_state = 51, .external_lex_state = 2},
  [47] = {.lex_state = 51, .external_lex_state = 2},
  [48] = {.lex_state = 51, .external_lex_state = 2},
  [49] = {.lex_state = 51, .external_lex_state = 2},
  [50] = {.lex_state = 51, .external_lex_state = 2},
  [51] = {.lex_state = 51, .external_lex_state = 2},
  [52] = {.lex_state = 51, .external_lex_state = 2},
  [53] = {.lex_state = 51, .external_lex_state = 2},
  [54] = {.lex_state = 51, .external_lex_state = 2},
  [55] = {.lex_state = 51, .external_lex_state = 2},
  [56] = {.lex_state = 51, .external_lex_state = 2},
  [57] = {.lex_state = 51, .external_lex_state = 2},
  [58] = {.lex_state = 51, .external_lex_state = 2},
  [59] = {.lex_state = 51, .external_lex_state = 2},
  [60] = {.lex_state = 51, .external_lex_state = 2},
  [61] = {.lex_state = 51, .external_lex_state = 2},
  [62] = {.lex_state = 51, .external_lex_state = 2},
  [63] = {.lex_state = 51, .external_lex_state = 2},
  [64] = {.lex_state = 51, .external_lex_state = 2},
  [65] = {.lex_state = 51, .external_lex_state = 2},
  [66] = {.lex_state = 51, .external_lex_state = 2},
  [67] = {.lex_state = 51, .external_lex_state = 2},
  [68] = {.lex_state = 51, .external_lex_state = 2},
  [69] = {.lex_state = 51, .external_lex_state = 2},
  [70] = {.lex_state = 51, .external_lex_state = 2},
  [71] = {.lex_state = 51, .external_lex_state = 2},
  [72] = {.lex_state = 51, .external_lex_state = 2},
  [73] = {.lex_state = 51, .external_lex_state = 2},
  [74] = {.lex_state = 51, .external_lex_state = 2},
  [75] = {.lex_state = 51, .external_lex_state = 2},
  [76] = {.lex_state = 54, .external_lex_state = 2},
  [77] = {.lex_state = 54, .external_lex_state = 2},
  [78] = {.lex_state = 54, .external_lex_state = 2},
  [79] = {.lex_state = 54, .external_lex_state = 3},
  [80] = {.lex_state = 54, .external_lex_state = 3},
  [81] = {.lex_state = 54, .external_lex_state = 3},
  [82] = {.lex_state = 54, .external_lex_state = 3},
  [83] = {.lex_state = 54, .external_lex_state = 3},
  [84] = {.lex_state = 54, .external_lex_state = 3},
  [85] = {.lex_state = 53, .external_lex_state = 2},
  [86] = {.lex_state = 53, .external_lex_state = 2},
  [87] = {.lex_state = 54, .external_lex_state = 3},
  [88] = {.lex_state = 53, .external_lex_state = 2},
  [89] = {.lex_state = 54, .external_lex_state = 2},
  [90] = {.lex_state = 54, .external_lex_state = 2},
  [91] = {.lex_state = 53, .external_lex_state = 2},
  [92] = {.lex_state = 53, .external_lex_state = 2},
  [93] = {.lex_state = 53, .external_lex_state = 2},
  [94] = {.lex_state = 53, .external_lex_state = 2},
  [95] = {.lex_state = 54, .external_lex_state = 3},
  [96] = {.lex_state = 53, .external_lex_state = 2},
  [97] = {.lex_state = 54, .external_lex_state = 2},
  [98] = {.lex_state = 54, .external_lex_state = 3},
  [99] = {.lex_state = 54, .external_lex_state = 2},
  [100] = {.lex_state = 54, .external_lex_state = 2},
  [101] = {.lex_state = 54, .external_lex_state = 2},
  [102] = {.lex_state = 54, .external_lex_state = 2},
  [103] = {.lex_state = 54, .external_lex_state = 2},
  [104] = {.lex_state = 54, .external_lex_state = 2},
  [105] = {.lex_state = 54, .external_lex_state = 3},
  [106] = {.lex_state = 54, .external_lex_state = 2},
  [107] = {.lex_state = 54, .external_lex_state = 2},
  [108] = {.lex_state = 54, .external_lex_state = 2},
  [109] = {.lex_state = 54, .external_lex_state = 2},
  [110] = {.lex_state = 54, .external_lex_state = 3},
  [111] = {.lex_state = 54, .external_lex_state = 3},
  [112] = {.lex_state = 54, .external_lex_state = 3},
  [113] = {.lex_state = 54, .external_lex_state = 2},
  [114] = {.lex_state = 54, .external_lex_state = 3},
  [115] = {.lex_state = 54, .external_lex_state = 3},
  [116] = {.lex_state = 54, .external_lex_state = 2},
  [117] = {.lex_state = 54, .external_lex_state = 3},
  [118] = {.lex_state = 54, .external_lex_state = 2},
  [119] = {.lex_state = 54, .external_lex_state = 3},
  [120] = {.lex_state = 54, .external_lex_state = 3},
  [121] = {.lex_state = 54, .external_lex_state = 3},
  [122] = {.lex_state = 54, .external_lex_state = 3},
  [123] = {.lex_state = 54, .external_lex_state = 3},
  [124] = {.lex_state = 54, .external_lex_state = 3},
  [125] = {.lex_state = 54, .external_lex_state = 2},
  [126] = {.lex_state = 51, .external_lex_state = 2},
  [127] = {.lex_state = 54, .external_lex_state = 2},
  [128] = {.lex_state = 51, .external_lex_state = 2},
  [129] = {.lex_state = 51, .external_lex_state = 2},
  [130] = {.lex_state = 51, .external_lex_state = 2},
  [131] = {.lex_state = 51, .external_lex_state = 2},
  [132] = {.lex_state = 51, .external_lex_state = 2},
  [133] = {.lex_state = 51, .external_lex_state = 2},
  [134] = {.lex_state = 51, .external_lex_state = 2},
  [135] = {.lex_state = 51, .external_lex_state = 2},
  [136] = {.lex_state = 51, .external_lex_state = 2},
  [137] = {.lex_state = 51, .external_lex_state = 2},
  [138] = {.lex_state = 51, .external_lex_state = 2},
  [139] = {.lex_state = 51, .external_lex_state = 2},
  [140] = {.lex_state = 51, .external_lex_state = 2},
  [141] = {.lex_state = 51, .external_lex_state = 2},
  [142] = {.lex_state = 51, .external_lex_state = 2},
  [143] = {.lex_state = 51, .external_lex_state = 2},
  [144] = {.lex_state = 51, .external_lex_state = 2},
  [145] = {.lex_state = 51, .external_lex_state = 2},
  [146] = {.lex_state = 51, .external_lex_state = 2},
  [147] = {.lex_state = 51, .external_lex_state = 2},
  [148] = {.lex_state = 51, .external_lex_state = 2},
  [149] = {.lex_state = 51, .external_lex_state = 2},
  [150] = {.lex_state = 51, .external_lex_state = 2},
  [151] = {.lex_state = 51, .external_lex_state = 2},
  [152] = {.lex_state = 51, .external_lex_state = 2},
  [153] = {.lex_state = 51, .external_lex_state = 2},
  [154] = {.lex_state = 51, .external_lex_state = 2},
  [155] = {.lex_state = 51, .external_lex_state = 2},
  [156] = {.lex_state = 51, .external_lex_state = 2},
  [157] = {.lex_state = 51, .external_lex_state = 2},
  [158] = {.lex_state = 51, .external_lex_state = 2},
  [159] = {.lex_state = 51, .external_lex_state = 2},
  [160] = {.lex_state = 51, .external_lex_state = 2},
  [161] = {.lex_state = 51, .external_lex_state = 2},
  [162] = {.lex_state = 51, .external_lex_state = 2},
  [163] = {.lex_state = 51, .external_lex_state = 2},
  [164] = {.lex_state = 51, .external_lex_state = 2},
  [165] = {.lex_state = 51, .external_lex_state = 2},
  [166] = {.lex_state = 51, .external_lex_state = 2},
  [167] = {.lex_state = 51, .external_lex_state = 2},
  [168] = {.lex_state = 51, .external_lex_state = 2},
  [169] = {.lex_state = 51, .external_lex_state = 2},
  [170] = {.lex_state = 51, .external_lex_state = 2},
  [171] = {.lex_state = 54, .external_lex_state = 3},
  [172] = {.lex_state = 54, .external_lex_state = 2},
  [173] = {.lex_state = 54, .external_lex_state = 3},
  [174] = {.lex_state = 53, .external_lex_state = 2},
  [175] = {.lex_state = 53, .external_lex_state = 2},
  [176] = {.lex_state = 54, .external_lex_state = 3},
  [177] = {.lex_state = 54, .external_lex_state = 2},
  [178] = {.lex_state = 54, .external_lex_state = 2},
  [179] = {.lex_state = 53, .external_lex_state = 2},
  [180] = {.lex_state = 53, .external_lex_state = 2},
  [181] = {.lex_state = 53, .external_lex_state = 2},
  [182] = {.lex_state = 53, .external_lex_state = 2},
  [183] = {.lex_state = 54, .external_lex_state = 3},
  [184] = {.lex_state = 54, .external_lex_state = 2},
  [185] = {.lex_state = 54, .external_lex_state = 2},
  [186] = {.lex_state = 54, .external_lex_state = 2},
  [187] = {.lex_state = 54, .external_lex_state = 3},
  [188] = {.lex_state = 54, .external_lex_state = 2},
  [189] = {.lex_state = 53, .external_lex_state = 2},
  [190] = {.lex_state = 53, .external_lex_state = 2},
  [191] = {.lex_state = 54, .external_lex_state = 3},
  [192] = {.lex_state = 53, .external_lex_state = 2},
  [193] = {.lex_state = 53, .external_lex_state = 2},
  [194] = {.lex_state = 53, .external_lex_state = 2},
  [195] = {.lex_state = 53, .external_lex_state = 2},
  [196] = {.lex_state = 53, .external_lex_state = 2},
  [197] = {.lex_state = 53, .external_lex_state = 2},
  [198] = {.lex_state = 53, .external_lex_state = 2},
  [199] = {.lex_state = 53, .external_lex_state = 2},
  [200] = {.lex_state = 53, .external_lex_state = 2},
  [201] = {.lex_state = 53, .external_lex_state = 2},
  [202] = {.lex_state = 53, .external_lex_state = 2},
  [203] = {.lex_state = 53, .external_lex_state = 2},
  [204] = {.lex_state = 53, .external_lex_state = 2},
  [205] = {.lex_state = 54, .external_lex_state = 2},
  [206] = {.lex_state = 54, .external_lex_state = 2},
  [207] = {.lex_state = 54, .external_lex_state = 2},
  [208] = {.lex_state = 54, .external_lex_state = 2},
  [209] = {.lex_state = 54, .external_lex_state = 2},
  [210] = {.lex_state = 54, .external_lex_state = 2},
  [211] = {.lex_state = 54, .external_lex_state = 2},
  [212] = {.lex_state = 54, .external_lex_state = 2},
  [213] = {.lex_state = 54, .external_lex_state = 2},
  [214] = {.lex_state = 54, .external_lex_state = 2},
  [215] = {.lex_state = 54, .external_lex_state = 2},
  [216] = {.lex_state = 54, .external_lex_state = 2},
  [217] = {.lex_state = 54, .external_lex_state = 2},
  [218] = {.lex_state = 54, .external_lex_state = 2},
  [219] = {.lex_state = 54, .external_lex_state = 2},
  [220] = {.lex_state = 54, .external_lex_state = 2},
  [221] = {.lex_state = 54, .external_lex_state = 2},
  [222] = {.lex_state = 54, .external_lex_state = 2},
  [223] = {.lex_state = 53, .external_lex_state = 2},
  [224] = {.lex_state = 53, .external_lex_state = 2},
  [225] = {.lex_state = 54, .external_lex_state = 2},
  [226] = {.lex_state = 54, .external_lex_state = 2},
  [227] = {.lex_state = 54, .external_lex_state = 2},
  [228] = {.lex_state = 54, .external_lex_state = 2},
  [229] = {.lex_state = 54, .external_lex_state = 2},
  [230] = {.lex_state = 54, .external_lex_state = 2},
  [231] = {.lex_state = 54, .external_lex_state = 2},
  [232] = {.lex_state = 54, .external_lex_state = 2},
  [233] = {.lex_state = 54, .external_lex_state = 2},
  [234] = {.lex_state = 54, .external_lex_state = 2},
  [235] = {.lex_state = 54, .external_lex_state = 2},
  [236] = {.lex_state = 54, .external_lex_state = 2},
  [237] = {.lex_state = 54, .external_lex_state = 2},
  [238] = {.lex_state = 54, .external_lex_state = 2},
  [239] = {.lex_state = 54, .external_lex_state = 2},
  [240] = {.lex_state = 54, .external_lex_state = 2},
  [241] = {.lex_state = 54, .external_lex_state = 2},
  [242] = {.lex_state = 54, .external_lex_state = 2},
  [243] = {.lex_state = 54, .external_lex_state = 2},
  [244] = {.lex_state = 54, .external_lex_state = 2},
  [245] = {.lex_state = 54, .external_lex_state = 2},
  [246] = {.lex_state = 54, .external_lex_state = 2},
  [247] = {.lex_state = 53, .external_lex_state = 2},
  [248] = {.lex_state = 54, .external_lex_state = 2},
  [249] = {.lex_state = 54, .external_lex_state = 2},
  [250] = {.lex_state = 54, .external_lex_state = 2},
  [251] = {.lex_state = 54, .external_lex_state = 2},
  [252] = {.lex_state = 54, .external_lex_state = 2},
  [253] = {.lex_state = 54, .external_lex_state = 2},
  [254] = {.lex_state = 54, .external_lex_state = 2},
  [255] = {.lex_state = 54, .external_lex_state = 2},
  [256] = {.lex_state = 54, .external_lex_state = 2},
  [257] = {.lex_state = 54, .external_lex_state = 2},
  [258] = {.lex_state = 54, .external_lex_state = 2},
  [259] = {.lex_state = 51, .external_lex_state = 2},
  [260] = {.lex_state = 51, .external_lex_state = 2},
  [261] = {.lex_state = 51, .external_lex_state = 2},
  [262] = {.lex_state = 51, .external_lex_state = 2},
  [263] = {.lex_state = 51, .external_lex_state = 2},
  [264] = {.lex_state = 51, .external_lex_state = 2},
  [265] = {.lex_state = 51, .external_lex_state = 2},
  [266] = {.lex_state = 51, .external_lex_state = 2},
  [267] = {.lex_state = 51, .external_lex_state = 2},
  [268] = {.lex_state = 51, .external_lex_state = 2},
  [269] = {.lex_state = 51, .external_lex_state = 2},
  [270] = {.lex_state = 51, .external_lex_state = 2},
  [271] = {.lex_state = 51, .external_lex_state = 2},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 56},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 57},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 57},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 57},
  [283] = {.lex_state = 57},
  [284] = {.lex_state = 57},
  [285] = {.lex_state = 57},
  [286] = {.lex_state = 57},
  [287] = {.lex_state = 57},
  [288] = {.lex_state = 57},
  [289] = {.lex_state = 57},
  [290] = {.lex_state = 57},
  [291] = {.lex_state = 57},
  [292] = {.lex_state = 57},
  [293] = {.lex_state = 57},
  [294] = {.lex_state = 57},
  [295] = {.lex_state = 57},
  [296] = {.lex_state = 57},
  [297] = {.lex_state = 57},
  [298] = {.lex_state = 57},
  [299] = {.lex_state = 57},
  [300] = {.lex_state = 57},
  [301] = {.lex_state = 57},
  [302] = {.lex_state = 57},
  [303] = {.lex_state = 57},
  [304] = {.lex_state = 57},
  [305] = {.lex_state = 57},
  [306] = {.lex_state = 57},
  [307] = {.lex_state = 57},
  [308] = {.lex_state = 57},
  [309] = {.lex_state = 57},
  [310] = {.lex_state = 57},
  [311] = {.lex_state = 57},
  [312] = {.lex_state = 57},
  [313] = {.lex_state = 57},
  [314] = {.lex_state = 57},
  [315] = {.lex_state = 57},
  [316] = {.lex_state = 57},
  [317] = {.lex_state = 57},
  [318] = {.lex_state = 57},
  [319] = {.lex_state = 57},
  [320] = {.lex_state = 57},
  [321] = {.lex_state = 57},
  [322] = {.lex_state = 57},
  [323] = {.lex_state = 57},
  [324] = {.lex_state = 57},
  [325] = {.lex_state = 57},
  [326] = {.lex_state = 57},
  [327] = {.lex_state = 57},
  [328] = {.lex_state = 57},
  [329] = {.lex_state = 57},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 51, .external_lex_state = 2},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 3},
  [342] = {.lex_state = 3},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 3},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 3},
  [347] = {.lex_state = 3},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 51, .external_lex_state = 4},
  [360] = {.lex_state = 1, .external_lex_state = 5},
  [361] = {.lex_state = 1, .external_lex_state = 5},
  [362] = {.lex_state = 51, .external_lex_state = 4},
  [363] = {.lex_state = 51, .external_lex_state = 4},
  [364] = {.lex_state = 1, .external_lex_state = 5},
  [365] = {.lex_state = 51, .external_lex_state = 4},
  [366] = {.lex_state = 56},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 51, .external_lex_state = 4},
  [369] = {.lex_state = 1, .external_lex_state = 5},
  [370] = {.lex_state = 51, .external_lex_state = 4},
  [371] = {.lex_state = 56},
  [372] = {.lex_state = 51, .external_lex_state = 4},
  [373] = {.lex_state = 51, .external_lex_state = 4},
  [374] = {.lex_state = 56},
  [375] = {.lex_state = 51, .external_lex_state = 4},
  [376] = {.lex_state = 51, .external_lex_state = 4},
  [377] = {.lex_state = 51, .external_lex_state = 4},
  [378] = {.lex_state = 51, .external_lex_state = 4},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 1, .external_lex_state = 5},
  [381] = {.lex_state = 1, .external_lex_state = 5},
  [382] = {.lex_state = 56},
  [383] = {.lex_state = 51, .external_lex_state = 4},
  [384] = {.lex_state = 51, .external_lex_state = 4},
  [385] = {.lex_state = 51, .external_lex_state = 4},
  [386] = {.lex_state = 51, .external_lex_state = 4},
  [387] = {.lex_state = 1, .external_lex_state = 5},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 56},
  [390] = {.lex_state = 56},
  [391] = {.lex_state = 56},
  [392] = {.lex_state = 56},
  [393] = {.lex_state = 1, .external_lex_state = 5},
  [394] = {.lex_state = 56},
  [395] = {.lex_state = 56},
  [396] = {.lex_state = 51, .external_lex_state = 4},
  [397] = {.lex_state = 51, .external_lex_state = 4},
  [398] = {.lex_state = 1, .external_lex_state = 5},
  [399] = {.lex_state = 51, .external_lex_state = 4},
  [400] = {.lex_state = 51, .external_lex_state = 4},
  [401] = {.lex_state = 51, .external_lex_state = 4},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 51},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 3},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 3},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 1, .external_lex_state = 5},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 51, .external_lex_state = 4},
  [424] = {.lex_state = 3},
  [425] = {.lex_state = 51, .external_lex_state = 4},
  [426] = {.lex_state = 1, .external_lex_state = 5},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 4},
  [430] = {.lex_state = 4},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 51},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 51},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 56},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 56},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 56},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 56},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 56},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 56},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 56},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 53},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 51},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 53},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 51},
  [533] = {.lex_state = 56},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 56},
  [536] = {.lex_state = 56},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 56},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
};





enum ts_external_scanner_symbol_identifiers {
  ts_external_token_string_fragment = 0,
  ts_external_token__indented_string_fragment = 1,
  ts_external_token__path_start = 2,
  ts_external_token_path_fragment = 3,
  ts_external_token_dollar_escape = 4,
  ts_external_token__indented_dollar_escape = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string_fragment] = sym_string_fragment,
  [ts_external_token__indented_string_fragment] = sym__indented_string_fragment,
  [ts_external_token__path_start] = sym__path_start,
  [ts_external_token_path_fragment] = sym_path_fragment,
  [ts_external_token_dollar_escape] = sym_dollar_escape,
  [ts_external_token__indented_dollar_escape] = sym__indented_dollar_escape,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string_fragment] = true,
    [ts_external_token__indented_string_fragment] = true,
    [ts_external_token__path_start] = true,
    [ts_external_token_path_fragment] = true,
    [ts_external_token_dollar_escape] = true,
    [ts_external_token__indented_dollar_escape] = true,
  },
  [2] = {
    [ts_external_token__path_start] = true,
  },
  [3] = {
    [ts_external_token__path_start] = true,
    [ts_external_token_path_fragment] = true,
  },
  [4] = {
    [ts_external_token_string_fragment] = true,
    [ts_external_token_dollar_escape] = true,
  },
  [5] = {
    [ts_external_token__indented_string_fragment] = true,
    [ts_external_token__indented_dollar_escape] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nix_external_scanner_create(void);
void tree_sitter_nix_external_scanner_destroy(void *);
bool tree_sitter_nix_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nix_external_scanner_serialize(void *, char *);
void tree_sitter_nix_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nix_from_file(const char *path) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_keyword,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nix_external_scanner_create,
      tree_sitter_nix_external_scanner_destroy,
      tree_sitter_nix_external_scanner_scan,
      tree_sitter_nix_external_scanner_serialize,
      tree_sitter_nix_external_scanner_deserialize,
    },
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 56744) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 56744, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 43, 29, 121, 69, 68, 27, 131, 227, 36, 205, 34, 86, 99, 72, 29, 53, 229, 28, 217, 174, 132, 24, 156, 199, 230, 159, 88, 161, 30, 203, 133, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 56744);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 56744);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 496);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 45736);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 47896);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
