#define tree_sitter_scss_external_scanner_create mapped_tree_sitter_scss_external_scanner_create
#define tree_sitter_scss_external_scanner_deserialize mapped_tree_sitter_scss_external_scanner_deserialize
#define tree_sitter_scss_external_scanner_destroy mapped_tree_sitter_scss_external_scanner_destroy
#define tree_sitter_scss_external_scanner_reset mapped_tree_sitter_scss_external_scanner_reset
#define tree_sitter_scss_external_scanner_scan mapped_tree_sitter_scss_external_scanner_scan
#define tree_sitter_scss_external_scanner_serialize mapped_tree_sitter_scss_external_scanner_serialize
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 508
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 20
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_ATforward = 15,
  anon_sym_ATapply = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  anon_sym_ATmixin = 20,
  anon_sym_ATinclude = 21,
  anon_sym_LPAREN2 = 22,
  anon_sym_RPAREN2 = 23,
  anon_sym_PERCENT = 24,
  anon_sym_ATextend = 25,
  anon_sym_ATif = 26,
  anon_sym_ATelse = 27,
  anon_sym_if = 28,
  anon_sym_ATeach = 29,
  anon_sym_in = 30,
  anon_sym_ATfor = 31,
  anon_sym_through = 32,
  anon_sym_ATwhile = 33,
  anon_sym_ATfunction = 34,
  anon_sym_ATreturn = 35,
  anon_sym_ATat_DASHroot = 36,
  anon_sym_ATerror = 37,
  anon_sym_ATwarn = 38,
  anon_sym_ATdebug = 39,
  sym_nesting_selector = 40,
  anon_sym_STAR = 41,
  anon_sym_DOT = 42,
  anon_sym_COLON_COLON = 43,
  anon_sym_POUND = 44,
  anon_sym_LBRACK = 45,
  anon_sym_EQ = 46,
  anon_sym_TILDE_EQ = 47,
  anon_sym_CARET_EQ = 48,
  anon_sym_PIPE_EQ = 49,
  anon_sym_STAR_EQ = 50,
  anon_sym_DOLLAR_EQ = 51,
  anon_sym_RBRACK = 52,
  anon_sym_GT = 53,
  anon_sym_TILDE = 54,
  anon_sym_PLUS = 55,
  sym_important = 56,
  anon_sym_and = 57,
  anon_sym_or = 58,
  anon_sym_not = 59,
  anon_sym_only = 60,
  anon_sym_selector = 61,
  aux_sym_color_value_token1 = 62,
  sym_string_value = 63,
  aux_sym_integer_value_token1 = 64,
  aux_sym_float_value_token1 = 65,
  sym_unit = 66,
  anon_sym_DASH = 67,
  anon_sym_SLASH = 68,
  anon_sym_EQ_EQ = 69,
  anon_sym_LT = 70,
  anon_sym_BANG_EQ = 71,
  anon_sym_LT_EQ = 72,
  anon_sym_GT_EQ = 73,
  sym_identifier = 74,
  sym_variable_identifier = 75,
  sym_at_keyword = 76,
  sym_comment = 77,
  sym_single_line_comment = 78,
  sym_plain_value = 79,
  sym__descendant_operator = 80,
  sym_stylesheet = 81,
  sym_import_statement = 82,
  sym_media_statement = 83,
  sym_charset_statement = 84,
  sym_namespace_statement = 85,
  sym_keyframes_statement = 86,
  sym_keyframe_block_list = 87,
  sym_keyframe_block = 88,
  sym_from = 89,
  sym_supports_statement = 90,
  sym_at_rule = 91,
  sym_use_statement = 92,
  sym_forward_statement = 93,
  sym_apply_statement = 94,
  sym_parameters = 95,
  sym_parameter = 96,
  sym_mixin_statement = 97,
  sym_include_statement = 98,
  sym_include_arguments = 99,
  sym_include_argument = 100,
  sym_placeholder = 101,
  sym_extend_statement = 102,
  sym_if_statement = 103,
  sym_if_clause = 104,
  sym_else_if_clause = 105,
  sym_else_clause = 106,
  sym_each_statement = 107,
  sym_for_statement = 108,
  sym_while_statement = 109,
  sym_function_statement = 110,
  sym_return_statement = 111,
  sym_at_root_statement = 112,
  sym_error_statement = 113,
  sym_warn_statement = 114,
  sym_debug_statement = 115,
  sym_rule_set = 116,
  sym_selectors = 117,
  sym_block = 118,
  sym__selector = 119,
  sym_universal_selector = 120,
  sym_class_selector = 121,
  sym_pseudo_class_selector = 122,
  sym_pseudo_element_selector = 123,
  sym_id_selector = 124,
  sym_attribute_selector = 125,
  sym_child_selector = 126,
  sym_descendant_selector = 127,
  sym_sibling_selector = 128,
  sym_adjacent_sibling_selector = 129,
  sym_pseudo_class_arguments = 130,
  sym_declaration = 131,
  sym_last_declaration = 132,
  sym__query = 133,
  sym_feature_query = 134,
  sym_parenthesized_query = 135,
  sym_binary_query = 136,
  sym_unary_query = 137,
  sym_selector_query = 138,
  sym__value = 139,
  sym_parenthesized_value = 140,
  sym_color_value = 141,
  sym_integer_value = 142,
  sym_float_value = 143,
  sym_call_expression = 144,
  sym_binary_expression = 145,
  sym_arguments = 146,
  aux_sym_stylesheet_repeat1 = 147,
  aux_sym_import_statement_repeat1 = 148,
  aux_sym_keyframe_block_list_repeat1 = 149,
  aux_sym_apply_statement_repeat1 = 150,
  aux_sym_parameters_repeat1 = 151,
  aux_sym_include_arguments_repeat1 = 152,
  aux_sym_if_statement_repeat1 = 153,
  aux_sym_selectors_repeat1 = 154,
  aux_sym_block_repeat1 = 155,
  aux_sym_pseudo_class_arguments_repeat1 = 156,
  aux_sym_declaration_repeat1 = 157,
  aux_sym_arguments_repeat1 = 158,
  alias_sym_argument_name = 159,
  alias_sym_argument_value = 160,
  alias_sym_attribute_name = 161,
  alias_sym_class_name = 162,
  alias_sym_condition = 163,
  alias_sym_default_value = 164,
  alias_sym_feature_name = 165,
  alias_sym_function_name = 166,
  alias_sym_id_name = 167,
  alias_sym_key = 168,
  alias_sym_keyframes_name = 169,
  alias_sym_keyword_query = 170,
  alias_sym_name = 171,
  alias_sym_namespace_name = 172,
  alias_sym_property_name = 173,
  alias_sym_tag_name = 174,
  alias_sym_through = 175,
  alias_sym_value = 176,
  alias_sym_variable = 177,
  alias_sym_variable_value = 178,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_ATapply] = "@apply",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [sym_important] = "important",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_forward_statement] = "forward_statement",
  [sym_apply_statement] = "apply_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_mixin_statement] = "mixin_statement",
  [sym_include_statement] = "include_statement",
  [sym_include_arguments] = "arguments",
  [sym_include_argument] = "argument",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_apply_statement_repeat1] = "apply_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_name] = "name",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_value] = "variable_value",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_ATapply] = anon_sym_ATapply,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_important] = sym_important,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_forward_statement] = sym_forward_statement,
  [sym_apply_statement] = sym_apply_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_mixin_statement] = sym_mixin_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_include_arguments] = sym_arguments,
  [sym_include_argument] = sym_include_argument,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_apply_statement_repeat1] = aux_sym_apply_statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_value] = alias_sym_variable_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapply] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_variable_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_class_name,
  },
  [6] = {
    [1] = alias_sym_tag_name,
  },
  [7] = {
    [1] = alias_sym_id_name,
  },
  [8] = {
    [0] = alias_sym_function_name,
  },
  [9] = {
    [1] = alias_sym_keyframes_name,
  },
  [10] = {
    [1] = alias_sym_name,
  },
  [11] = {
    [1] = alias_sym_condition,
  },
  [12] = {
    [1] = alias_sym_attribute_name,
  },
  [13] = {
    [2] = alias_sym_class_name,
  },
  [14] = {
    [2] = alias_sym_tag_name,
  },
  [15] = {
    [2] = alias_sym_id_name,
  },
  [16] = {
    [1] = alias_sym_namespace_name,
  },
  [17] = {
    [0] = alias_sym_argument_value,
  },
  [18] = {
    [0] = alias_sym_property_name,
  },
  [19] = {
    [2] = alias_sym_attribute_name,
  },
  [20] = {
    [1] = alias_sym_value,
  },
  [21] = {
    [2] = alias_sym_condition,
  },
  [22] = {
    [1] = alias_sym_feature_name,
  },
  [23] = {
    [2] = alias_sym_default_value,
  },
  [24] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [25] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [26] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 6,
    sym__value,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_single_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_single_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(397);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(287);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(272);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 94:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 95:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(401);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    case 98:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(167);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 99:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '~') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATapply);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'w') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '%') ADVANCE(236);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '_') ADVANCE(275);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(397);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(393);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '_') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == 'k') ADVANCE(316);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(396);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '/') ADVANCE(95);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '{') ADVANCE(86);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(95);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(401);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 99},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 99},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 99},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 99},
  [51] = {.lex_state = 99},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 99},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 99},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 99},
  [60] = {.lex_state = 99},
  [61] = {.lex_state = 99},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 99},
  [64] = {.lex_state = 99},
  [65] = {.lex_state = 99},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 99},
  [68] = {.lex_state = 99},
  [69] = {.lex_state = 99},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 99},
  [75] = {.lex_state = 99},
  [76] = {.lex_state = 99},
  [77] = {.lex_state = 99},
  [78] = {.lex_state = 99},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 2, .external_lex_state = 1},
  [130] = {.lex_state = 3, .external_lex_state = 1},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 5, .external_lex_state = 1},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 5, .external_lex_state = 1},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 99, .external_lex_state = 1},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 99, .external_lex_state = 1},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 20, .external_lex_state = 1},
  [261] = {.lex_state = 99, .external_lex_state = 1},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 99, .external_lex_state = 1},
  [266] = {.lex_state = 99, .external_lex_state = 1},
  [267] = {.lex_state = 99, .external_lex_state = 1},
  [268] = {.lex_state = 99, .external_lex_state = 1},
  [269] = {.lex_state = 99, .external_lex_state = 1},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 99, .external_lex_state = 1},
  [272] = {.lex_state = 99, .external_lex_state = 1},
  [273] = {.lex_state = 99, .external_lex_state = 1},
  [274] = {.lex_state = 99, .external_lex_state = 1},
  [275] = {.lex_state = 99, .external_lex_state = 1},
  [276] = {.lex_state = 99, .external_lex_state = 1},
  [277] = {.lex_state = 99, .external_lex_state = 1},
  [278] = {.lex_state = 99, .external_lex_state = 1},
  [279] = {.lex_state = 99, .external_lex_state = 1},
  [280] = {.lex_state = 99, .external_lex_state = 1},
  [281] = {.lex_state = 99, .external_lex_state = 1},
  [282] = {.lex_state = 99, .external_lex_state = 1},
  [283] = {.lex_state = 99, .external_lex_state = 1},
  [284] = {.lex_state = 99, .external_lex_state = 1},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 99, .external_lex_state = 1},
  [287] = {.lex_state = 99, .external_lex_state = 1},
  [288] = {.lex_state = 99, .external_lex_state = 1},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 99, .external_lex_state = 1},
  [294] = {.lex_state = 99, .external_lex_state = 1},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 99, .external_lex_state = 1},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 99, .external_lex_state = 1},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 99, .external_lex_state = 1},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 99, .external_lex_state = 1},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 99, .external_lex_state = 1},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 99, .external_lex_state = 1},
  [355] = {.lex_state = 25},
  [356] = {.lex_state = 25},
  [357] = {.lex_state = 25},
  [358] = {.lex_state = 25},
  [359] = {.lex_state = 25},
  [360] = {.lex_state = 25},
  [361] = {.lex_state = 25},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 5},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 5},
  [370] = {.lex_state = 5},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 20},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 20},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 5},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 99},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 99},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 99},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 99},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 99},
  [393] = {.lex_state = 25},
  [394] = {.lex_state = 25},
  [395] = {.lex_state = 25},
  [396] = {.lex_state = 25},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 20},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 99},
  [406] = {.lex_state = 99},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 99},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 99},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 99},
  [416] = {.lex_state = 99},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 20},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 99},
  [423] = {.lex_state = 17},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 23},
  [432] = {.lex_state = 13},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 99},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 99},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 5},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 99},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 5},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 17},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 5},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 20},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 5},
  [489] = {.lex_state = 99},
  [490] = {.lex_state = 99},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 20},
  [503] = {.lex_state = 99},
  [504] = {.lex_state = 99},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 99},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};





#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss_from_file(const char *path) {
  static TSLanguage language = {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 46048) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 46048, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 64, 252, 7, 232, 237, 190, 69, 20, 92, 254, 150, 234, 71, 41, 51, 54, 130, 106, 163, 130, 103, 254, 177, 122, 211, 2, 18, 92, 78, 60, 67, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 46048);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 46048);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 4840);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 33016);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 34992);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
