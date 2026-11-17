#define tree_sitter_bicep_external_scanner_create mapped_tree_sitter_bicep_external_scanner_create
#define tree_sitter_bicep_external_scanner_deserialize mapped_tree_sitter_bicep_external_scanner_deserialize
#define tree_sitter_bicep_external_scanner_destroy mapped_tree_sitter_bicep_external_scanner_destroy
#define tree_sitter_bicep_external_scanner_scan mapped_tree_sitter_bicep_external_scanner_scan
#define tree_sitter_bicep_external_scanner_serialize mapped_tree_sitter_bicep_external_scanner_serialize
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 833
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 4
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_EQ = 3,
  anon_sym_import = 4,
  anon_sym_provider = 5,
  anon_sym_as = 6,
  anon_sym_with = 7,
  anon_sym_LBRACE = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACE = 10,
  anon_sym_STAR = 11,
  anon_sym_from = 12,
  anon_sym_using = 13,
  anon_sym_targetScope = 14,
  anon_sym_metadata = 15,
  anon_sym_output = 16,
  anon_sym_param = 17,
  anon_sym_resource = 18,
  anon_sym_existing = 19,
  anon_sym_type = 20,
  anon_sym_var = 21,
  anon_sym_BANG = 22,
  anon_sym_func = 23,
  anon_sym_EQ_GT = 24,
  anon_sym_test = 25,
  anon_sym_assert = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_AT = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_COLON = 32,
  anon_sym_if = 33,
  anon_sym_for = 34,
  anon_sym_in = 35,
  anon_sym_DOT = 36,
  anon_sym_DOT_QMARK = 37,
  anon_sym_QMARK = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_PLUS = 40,
  anon_sym_DASH = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_PIPE_PIPE = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_EQ_TILDE = 49,
  anon_sym_BANG_TILDE = 50,
  anon_sym_GT = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_LT = 54,
  anon_sym_QMARK_QMARK = 55,
  sym_number = 56,
  anon_sym_true = 57,
  anon_sym_false = 58,
  sym_null = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_DOLLAR = 61,
  anon_sym_POUND = 62,
  sym_string_content = 63,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 64,
  aux_sym__escape_sequence_token1 = 65,
  sym_escape_sequence = 66,
  anon_sym_DOLLAR_LBRACE = 67,
  anon_sym_array = 68,
  anon_sym_bool = 69,
  anon_sym_int = 70,
  anon_sym_object = 71,
  anon_sym_secureObject = 72,
  anon_sym_secureString = 73,
  anon_sym_string = 74,
  sym_comment = 75,
  sym_diagnostic_comment = 76,
  sym__external_asterisk = 77,
  sym__multiline_string_content = 78,
  sym_infrastructure = 79,
  sym_statement = 80,
  sym_declaration = 81,
  sym_module_declaration = 82,
  sym_import_statement = 83,
  sym_import_with_statement = 84,
  sym_import_functionality = 85,
  sym_using_statement = 86,
  sym_target_scope_assignment = 87,
  sym_metadata_declaration = 88,
  sym_output_declaration = 89,
  sym_parameter_declaration = 90,
  sym_resource_declaration = 91,
  sym_type_declaration = 92,
  sym_variable_declaration = 93,
  sym_user_defined_function = 94,
  sym_test_block = 95,
  sym_assert_statement = 96,
  sym_parameters = 97,
  sym_parameter = 98,
  sym_expression = 99,
  sym_primary_expression = 100,
  sym_call_expression = 101,
  sym_lambda_expression = 102,
  sym_arguments = 103,
  sym_parenthesized_expression = 104,
  sym_decorator = 105,
  sym_decorators = 106,
  sym_array = 107,
  sym_object = 108,
  sym_object_property = 109,
  sym_if_statement = 110,
  sym__lhs_expression = 111,
  sym_assignment_expression = 112,
  sym_for_statement = 113,
  sym_for_loop_parameters = 114,
  sym_member_expression = 115,
  sym_subscript_expression = 116,
  sym_resource_expression = 117,
  sym_ternary_expression = 118,
  sym_binary_expression = 119,
  sym_unary_expression = 120,
  sym__literal = 121,
  sym_boolean = 122,
  sym_string = 123,
  sym__string_literal = 124,
  sym__multiline_string_literal = 125,
  sym_multiline_string_content = 126,
  sym__escape_sequence = 127,
  sym_interpolation = 128,
  sym_compatible_identifier = 129,
  sym_type = 130,
  sym__type_not_union = 131,
  sym_primitive_type = 132,
  sym_array_type = 133,
  sym_nullable_type = 134,
  sym_negated_type = 135,
  sym_union_type = 136,
  sym_parenthesized_type = 137,
  sym_parameterized_type = 138,
  sym_type_arguments = 139,
  aux_sym_infrastructure_repeat1 = 140,
  aux_sym_import_functionality_repeat1 = 141,
  aux_sym_parameters_repeat1 = 142,
  aux_sym_arguments_repeat1 = 143,
  aux_sym_decorators_repeat1 = 144,
  aux_sym_array_repeat1 = 145,
  aux_sym_object_repeat1 = 146,
  aux_sym__string_literal_repeat1 = 147,
  aux_sym_multiline_string_content_repeat1 = 148,
  aux_sym_union_type_repeat1 = 149,
  aux_sym_type_arguments_repeat1 = 150,
  alias_sym_loop_enumerator = 151,
  alias_sym_loop_variable = 152,
  alias_sym_nullable_return_type = 153,
  alias_sym_property_identifier = 154,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_provider] = "provider",
  [anon_sym_as] = "as",
  [anon_sym_with] = "with",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_from] = "from",
  [anon_sym_using] = "using",
  [anon_sym_targetScope] = "targetScope",
  [anon_sym_metadata] = "metadata",
  [anon_sym_output] = "output",
  [anon_sym_param] = "param",
  [anon_sym_resource] = "resource",
  [anon_sym_existing] = "existing",
  [anon_sym_type] = "type",
  [anon_sym_var] = "var",
  [anon_sym_BANG] = "!",
  [anon_sym_func] = "func",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_test] = "test",
  [anon_sym_assert] = "assert",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_QMARK] = ".\?",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLAR] = "string_content",
  [anon_sym_POUND] = "string_content",
  [sym_string_content] = "string_content",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_array] = "array",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_object] = "object",
  [anon_sym_secureObject] = "secureObject",
  [anon_sym_secureString] = "secureString",
  [anon_sym_string] = "string",
  [sym_comment] = "comment",
  [sym_diagnostic_comment] = "diagnostic_comment",
  [sym__external_asterisk] = "*",
  [sym__multiline_string_content] = "_multiline_string_content",
  [sym_infrastructure] = "infrastructure",
  [sym_statement] = "statement",
  [sym_declaration] = "declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_import_statement] = "import_statement",
  [sym_import_with_statement] = "import_with_statement",
  [sym_import_functionality] = "import_functionality",
  [sym_using_statement] = "using_statement",
  [sym_target_scope_assignment] = "target_scope_assignment",
  [sym_metadata_declaration] = "metadata_declaration",
  [sym_output_declaration] = "output_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_resource_declaration] = "resource_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_user_defined_function] = "user_defined_function",
  [sym_test_block] = "test_block",
  [sym_assert_statement] = "assert_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_call_expression] = "call_expression",
  [sym_lambda_expression] = "lambda_expression",
  [sym_arguments] = "arguments",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_decorator] = "decorator",
  [sym_decorators] = "decorators",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_object_property] = "object_property",
  [sym_if_statement] = "if_statement",
  [sym__lhs_expression] = "_lhs_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_for_statement] = "for_statement",
  [sym_for_loop_parameters] = "for_loop_parameters",
  [sym_member_expression] = "member_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_resource_expression] = "resource_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__string_literal] = "_string_literal",
  [sym__multiline_string_literal] = "_multiline_string_literal",
  [sym_multiline_string_content] = "string_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_interpolation] = "interpolation",
  [sym_compatible_identifier] = "compatible_identifier",
  [sym_type] = "type",
  [sym__type_not_union] = "_type_not_union",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_nullable_type] = "nullable_type",
  [sym_negated_type] = "negated_type",
  [sym_union_type] = "union_type",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_parameterized_type] = "parameterized_type",
  [sym_type_arguments] = "type_arguments",
  [aux_sym_infrastructure_repeat1] = "infrastructure_repeat1",
  [aux_sym_import_functionality_repeat1] = "import_functionality_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_decorators_repeat1] = "decorators_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym_multiline_string_content_repeat1] = "multiline_string_content_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [alias_sym_loop_enumerator] = "loop_enumerator",
  [alias_sym_loop_variable] = "loop_variable",
  [alias_sym_nullable_return_type] = "nullable_return_type",
  [alias_sym_property_identifier] = "property_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_provider] = anon_sym_provider,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_targetScope] = anon_sym_targetScope,
  [anon_sym_metadata] = anon_sym_metadata,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_existing] = anon_sym_existing,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_QMARK] = anon_sym_DOT_QMARK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLAR] = sym_string_content,
  [anon_sym_POUND] = sym_string_content,
  [sym_string_content] = sym_string_content,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_secureObject] = anon_sym_secureObject,
  [anon_sym_secureString] = anon_sym_secureString,
  [anon_sym_string] = anon_sym_string,
  [sym_comment] = sym_comment,
  [sym_diagnostic_comment] = sym_diagnostic_comment,
  [sym__external_asterisk] = anon_sym_STAR,
  [sym__multiline_string_content] = sym__multiline_string_content,
  [sym_infrastructure] = sym_infrastructure,
  [sym_statement] = sym_statement,
  [sym_declaration] = sym_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_import_statement] = sym_import_statement,
  [sym_import_with_statement] = sym_import_with_statement,
  [sym_import_functionality] = sym_import_functionality,
  [sym_using_statement] = sym_using_statement,
  [sym_target_scope_assignment] = sym_target_scope_assignment,
  [sym_metadata_declaration] = sym_metadata_declaration,
  [sym_output_declaration] = sym_output_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_resource_declaration] = sym_resource_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_user_defined_function] = sym_user_defined_function,
  [sym_test_block] = sym_test_block,
  [sym_assert_statement] = sym_assert_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_lambda_expression] = sym_lambda_expression,
  [sym_arguments] = sym_arguments,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_decorator] = sym_decorator,
  [sym_decorators] = sym_decorators,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_object_property] = sym_object_property,
  [sym_if_statement] = sym_if_statement,
  [sym__lhs_expression] = sym__lhs_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_for_statement] = sym_for_statement,
  [sym_for_loop_parameters] = sym_for_loop_parameters,
  [sym_member_expression] = sym_member_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_resource_expression] = sym_resource_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__string_literal] = sym__string_literal,
  [sym__multiline_string_literal] = sym__multiline_string_literal,
  [sym_multiline_string_content] = sym_string_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_interpolation] = sym_interpolation,
  [sym_compatible_identifier] = sym_compatible_identifier,
  [sym_type] = sym_type,
  [sym__type_not_union] = sym__type_not_union,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_nullable_type] = sym_nullable_type,
  [sym_negated_type] = sym_negated_type,
  [sym_union_type] = sym_union_type,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym_parameterized_type] = sym_parameterized_type,
  [sym_type_arguments] = sym_type_arguments,
  [aux_sym_infrastructure_repeat1] = aux_sym_infrastructure_repeat1,
  [aux_sym_import_functionality_repeat1] = aux_sym_import_functionality_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_decorators_repeat1] = aux_sym_decorators_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym_multiline_string_content_repeat1] = aux_sym_multiline_string_content_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [alias_sym_loop_enumerator] = alias_sym_loop_enumerator,
  [alias_sym_loop_variable] = alias_sym_loop_variable,
  [alias_sym_nullable_return_type] = alias_sym_nullable_return_type,
  [alias_sym_property_identifier] = alias_sym_property_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provider] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_targetScope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_existing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
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
  [anon_sym_AT] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secureObject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secureString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagnostic_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__external_asterisk] = {
    .visible = true,
    .named = false,
  },
  [sym__multiline_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_infrastructure] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_functionality] = {
    .visible = true,
    .named = true,
  },
  [sym_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_target_scope_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_output_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_function] = {
    .visible = true,
    .named = true,
  },
  [sym_test_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_statement] = {
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
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_decorators] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__lhs_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_compatible_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_not_union] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_nullable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_infrastructure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_functionality_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decorators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_loop_enumerator] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_loop_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_nullable_return_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_function = 7,
  field_index = 8,
  field_initializer = 9,
  field_left = 10,
  field_name = 11,
  field_object = 12,
  field_operator = 13,
  field_property = 14,
  field_resource = 15,
  field_returns = 16,
  field_right = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_function] = "function",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_operator] = "operator",
  [field_property] = "property",
  [field_resource] = "resource",
  [field_returns] = "returns",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 2, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_arguments, 1},
    {field_function, 0},
  [4] =
    {field_name, 1},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_object, 0},
    {field_property, 2},
  [10] =
    {field_object, 0},
    {field_resource, 2},
  [12] =
    {field_left, 0},
    {field_right, 2},
  [14] =
    {field_object, 0},
    {field_property, 3},
  [16] =
    {field_index, 2},
    {field_object, 0},
  [18] =
    {field_name, 1},
    {field_returns, 3},
  [20] =
    {field_index, 3},
    {field_object, 0},
  [22] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [25] =
    {field_body, 5},
  [26] =
    {field_body, 6},
    {field_initializer, 2},
  [28] =
    {field_body, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [6] = {
    [2] = alias_sym_property_identifier,
  },
  [8] = {
    [2] = alias_sym_nullable_return_type,
  },
  [10] = {
    [3] = alias_sym_property_identifier,
  },
  [15] = {
    [1] = alias_sym_loop_variable,
    [3] = alias_sym_loop_enumerator,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 13,
  [22] = 13,
  [23] = 13,
  [24] = 13,
  [25] = 15,
  [26] = 15,
  [27] = 14,
  [28] = 13,
  [29] = 13,
  [30] = 30,
  [31] = 15,
  [32] = 32,
  [33] = 14,
  [34] = 34,
  [35] = 13,
  [36] = 36,
  [37] = 13,
  [38] = 15,
  [39] = 14,
  [40] = 15,
  [41] = 14,
  [42] = 15,
  [43] = 14,
  [44] = 15,
  [45] = 15,
  [46] = 15,
  [47] = 15,
  [48] = 14,
  [49] = 15,
  [50] = 13,
  [51] = 15,
  [52] = 15,
  [53] = 13,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 58,
  [62] = 57,
  [63] = 57,
  [64] = 64,
  [65] = 64,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
  [71] = 68,
  [72] = 54,
  [73] = 68,
  [74] = 54,
  [75] = 69,
  [76] = 67,
  [77] = 69,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 111,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 54,
  [138] = 111,
  [139] = 133,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 111,
  [144] = 133,
  [145] = 134,
  [146] = 146,
  [147] = 133,
  [148] = 134,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 154,
  [158] = 153,
  [159] = 156,
  [160] = 156,
  [161] = 154,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 163,
  [170] = 164,
  [171] = 166,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 172,
  [178] = 165,
  [179] = 173,
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 183,
  [184] = 184,
  [185] = 175,
  [186] = 186,
  [187] = 176,
  [188] = 163,
  [189] = 189,
  [190] = 190,
  [191] = 164,
  [192] = 166,
  [193] = 172,
  [194] = 173,
  [195] = 174,
  [196] = 175,
  [197] = 165,
  [198] = 176,
  [199] = 190,
  [200] = 183,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 184,
  [210] = 210,
  [211] = 211,
  [212] = 167,
  [213] = 165,
  [214] = 168,
  [215] = 215,
  [216] = 216,
  [217] = 184,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 184,
  [224] = 211,
  [225] = 225,
  [226] = 218,
  [227] = 162,
  [228] = 219,
  [229] = 167,
  [230] = 168,
  [231] = 163,
  [232] = 164,
  [233] = 211,
  [234] = 166,
  [235] = 218,
  [236] = 219,
  [237] = 172,
  [238] = 173,
  [239] = 174,
  [240] = 218,
  [241] = 175,
  [242] = 176,
  [243] = 167,
  [244] = 168,
  [245] = 208,
  [246] = 186,
  [247] = 208,
  [248] = 162,
  [249] = 186,
  [250] = 208,
  [251] = 162,
  [252] = 186,
  [253] = 183,
  [254] = 100,
  [255] = 255,
  [256] = 118,
  [257] = 257,
  [258] = 95,
  [259] = 96,
  [260] = 83,
  [261] = 255,
  [262] = 90,
  [263] = 255,
  [264] = 257,
  [265] = 91,
  [266] = 92,
  [267] = 81,
  [268] = 101,
  [269] = 126,
  [270] = 89,
  [271] = 104,
  [272] = 105,
  [273] = 106,
  [274] = 107,
  [275] = 136,
  [276] = 108,
  [277] = 98,
  [278] = 109,
  [279] = 99,
  [280] = 80,
  [281] = 82,
  [282] = 79,
  [283] = 102,
  [284] = 110,
  [285] = 89,
  [286] = 125,
  [287] = 103,
  [288] = 130,
  [289] = 98,
  [290] = 128,
  [291] = 99,
  [292] = 136,
  [293] = 141,
  [294] = 149,
  [295] = 113,
  [296] = 114,
  [297] = 116,
  [298] = 118,
  [299] = 299,
  [300] = 300,
  [301] = 121,
  [302] = 123,
  [303] = 124,
  [304] = 122,
  [305] = 126,
  [306] = 129,
  [307] = 131,
  [308] = 142,
  [309] = 150,
  [310] = 132,
  [311] = 151,
  [312] = 119,
  [313] = 135,
  [314] = 146,
  [315] = 112,
  [316] = 115,
  [317] = 117,
  [318] = 318,
  [319] = 110,
  [320] = 95,
  [321] = 96,
  [322] = 299,
  [323] = 300,
  [324] = 318,
  [325] = 89,
  [326] = 125,
  [327] = 115,
  [328] = 141,
  [329] = 103,
  [330] = 131,
  [331] = 129,
  [332] = 108,
  [333] = 109,
  [334] = 104,
  [335] = 142,
  [336] = 80,
  [337] = 150,
  [338] = 105,
  [339] = 121,
  [340] = 132,
  [341] = 100,
  [342] = 123,
  [343] = 106,
  [344] = 122,
  [345] = 81,
  [346] = 128,
  [347] = 101,
  [348] = 82,
  [349] = 151,
  [350] = 102,
  [351] = 119,
  [352] = 149,
  [353] = 90,
  [354] = 130,
  [355] = 83,
  [356] = 79,
  [357] = 135,
  [358] = 113,
  [359] = 146,
  [360] = 112,
  [361] = 117,
  [362] = 114,
  [363] = 91,
  [364] = 116,
  [365] = 92,
  [366] = 124,
  [367] = 107,
  [368] = 225,
  [369] = 190,
  [370] = 180,
  [371] = 190,
  [372] = 300,
  [373] = 257,
  [374] = 318,
  [375] = 255,
  [376] = 181,
  [377] = 180,
  [378] = 318,
  [379] = 300,
  [380] = 180,
  [381] = 299,
  [382] = 299,
  [383] = 255,
  [384] = 318,
  [385] = 257,
  [386] = 103,
  [387] = 105,
  [388] = 100,
  [389] = 104,
  [390] = 106,
  [391] = 107,
  [392] = 108,
  [393] = 109,
  [394] = 190,
  [395] = 80,
  [396] = 396,
  [397] = 79,
  [398] = 398,
  [399] = 181,
  [400] = 90,
  [401] = 257,
  [402] = 402,
  [403] = 91,
  [404] = 257,
  [405] = 255,
  [406] = 406,
  [407] = 92,
  [408] = 255,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 257,
  [413] = 413,
  [414] = 255,
  [415] = 225,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 418,
  [421] = 421,
  [422] = 419,
  [423] = 423,
  [424] = 418,
  [425] = 421,
  [426] = 419,
  [427] = 423,
  [428] = 421,
  [429] = 429,
  [430] = 418,
  [431] = 423,
  [432] = 421,
  [433] = 423,
  [434] = 419,
  [435] = 435,
  [436] = 436,
  [437] = 435,
  [438] = 438,
  [439] = 439,
  [440] = 438,
  [441] = 441,
  [442] = 435,
  [443] = 443,
  [444] = 438,
  [445] = 441,
  [446] = 443,
  [447] = 443,
  [448] = 441,
  [449] = 441,
  [450] = 435,
  [451] = 443,
  [452] = 438,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 454,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 459,
  [462] = 462,
  [463] = 463,
  [464] = 459,
  [465] = 465,
  [466] = 466,
  [467] = 190,
  [468] = 465,
  [469] = 181,
  [470] = 465,
  [471] = 471,
  [472] = 180,
  [473] = 473,
  [474] = 474,
  [475] = 190,
  [476] = 476,
  [477] = 257,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 255,
  [482] = 482,
  [483] = 255,
  [484] = 484,
  [485] = 190,
  [486] = 486,
  [487] = 257,
  [488] = 181,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 491,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 500,
  [506] = 491,
  [507] = 507,
  [508] = 497,
  [509] = 498,
  [510] = 497,
  [511] = 498,
  [512] = 501,
  [513] = 499,
  [514] = 502,
  [515] = 500,
  [516] = 501,
  [517] = 502,
  [518] = 491,
  [519] = 181,
  [520] = 498,
  [521] = 181,
  [522] = 500,
  [523] = 501,
  [524] = 502,
  [525] = 299,
  [526] = 300,
  [527] = 499,
  [528] = 507,
  [529] = 529,
  [530] = 318,
  [531] = 507,
  [532] = 532,
  [533] = 533,
  [534] = 507,
  [535] = 190,
  [536] = 503,
  [537] = 494,
  [538] = 495,
  [539] = 503,
  [540] = 494,
  [541] = 495,
  [542] = 503,
  [543] = 494,
  [544] = 495,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 257,
  [550] = 550,
  [551] = 551,
  [552] = 546,
  [553] = 553,
  [554] = 255,
  [555] = 546,
  [556] = 556,
  [557] = 299,
  [558] = 300,
  [559] = 474,
  [560] = 476,
  [561] = 561,
  [562] = 471,
  [563] = 473,
  [564] = 564,
  [565] = 318,
  [566] = 466,
  [567] = 479,
  [568] = 135,
  [569] = 480,
  [570] = 570,
  [571] = 150,
  [572] = 572,
  [573] = 436,
  [574] = 574,
  [575] = 112,
  [576] = 576,
  [577] = 115,
  [578] = 117,
  [579] = 579,
  [580] = 151,
  [581] = 482,
  [582] = 439,
  [583] = 486,
  [584] = 584,
  [585] = 121,
  [586] = 129,
  [587] = 532,
  [588] = 553,
  [589] = 550,
  [590] = 556,
  [591] = 551,
  [592] = 592,
  [593] = 504,
  [594] = 492,
  [595] = 533,
  [596] = 492,
  [597] = 545,
  [598] = 598,
  [599] = 533,
  [600] = 504,
  [601] = 545,
  [602] = 492,
  [603] = 603,
  [604] = 439,
  [605] = 605,
  [606] = 606,
  [607] = 436,
  [608] = 608,
  [609] = 609,
  [610] = 570,
  [611] = 611,
  [612] = 612,
  [613] = 576,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 584,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 626,
  [628] = 626,
  [629] = 629,
  [630] = 629,
  [631] = 629,
  [632] = 626,
  [633] = 629,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 638,
  [640] = 636,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 642,
  [649] = 649,
  [650] = 650,
  [651] = 533,
  [652] = 492,
  [653] = 653,
  [654] = 504,
  [655] = 545,
  [656] = 656,
  [657] = 474,
  [658] = 644,
  [659] = 492,
  [660] = 660,
  [661] = 661,
  [662] = 661,
  [663] = 492,
  [664] = 492,
  [665] = 533,
  [666] = 492,
  [667] = 533,
  [668] = 504,
  [669] = 545,
  [670] = 670,
  [671] = 492,
  [672] = 486,
  [673] = 533,
  [674] = 504,
  [675] = 504,
  [676] = 545,
  [677] = 492,
  [678] = 545,
  [679] = 492,
  [680] = 661,
  [681] = 661,
  [682] = 682,
  [683] = 683,
  [684] = 545,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 533,
  [690] = 685,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 686,
  [696] = 696,
  [697] = 492,
  [698] = 694,
  [699] = 492,
  [700] = 492,
  [701] = 701,
  [702] = 685,
  [703] = 691,
  [704] = 687,
  [705] = 686,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 685,
  [710] = 710,
  [711] = 711,
  [712] = 504,
  [713] = 696,
  [714] = 694,
  [715] = 715,
  [716] = 691,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 125,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 126,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 727,
  [738] = 736,
  [739] = 733,
  [740] = 733,
  [741] = 722,
  [742] = 136,
  [743] = 723,
  [744] = 744,
  [745] = 118,
  [746] = 731,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 754,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 751,
  [762] = 762,
  [763] = 763,
  [764] = 750,
  [765] = 765,
  [766] = 754,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 773,
  [782] = 782,
  [783] = 783,
  [784] = 772,
  [785] = 785,
  [786] = 786,
  [787] = 777,
  [788] = 788,
  [789] = 749,
  [790] = 777,
  [791] = 791,
  [792] = 749,
  [793] = 785,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 768,
  [802] = 802,
  [803] = 785,
  [804] = 804,
  [805] = 765,
  [806] = 768,
  [807] = 772,
  [808] = 772,
  [809] = 809,
  [810] = 776,
  [811] = 811,
  [812] = 812,
  [813] = 768,
  [814] = 750,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 776,
  [819] = 756,
  [820] = 820,
  [821] = 776,
  [822] = 785,
  [823] = 779,
  [824] = 783,
  [825] = 748,
  [826] = 777,
  [827] = 779,
  [828] = 783,
  [829] = 829,
  [830] = 779,
  [831] = 783,
  [832] = 832,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 130,
        '#', 173,
        '$', 172,
        '%', 154,
        '&', 8,
        '\'', 171,
        '(', 138,
        ')', 139,
        '*', 112,
        '+', 150,
        ',', 109,
        '-', 152,
        '.', 145,
        '/', 153,
        ':', 144,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        '\\', 76,
        ']', 142,
        'a', 232,
        'f', 246,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 190,
        'u', 233,
        'v', 191,
        '{', 108,
        '|', 158,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 130,
        '#', 258,
        '%', 154,
        '&', 8,
        '\'', 171,
        '(', 138,
        '*', 112,
        '+', 150,
        ',', 109,
        '-', 152,
        '.', 145,
        '/', 153,
        ':', 13,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        ']', 142,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 252,
        'v', 191,
        '{', 108,
        '|', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 130,
        '#', 258,
        '%', 154,
        '&', 8,
        '\'', 171,
        '(', 138,
        '*', 112,
        '+', 150,
        ',', 109,
        '-', 151,
        '.', 145,
        '/', 153,
        ':', 13,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 252,
        'v', 191,
        '|', 158,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 129,
        '#', 258,
        '\'', 171,
        '(', 138,
        ')', 139,
        ',', 109,
        '-', 152,
        '.', 145,
        '/', 10,
        '=', 100,
        '>', 163,
        '?', 147,
        '@', 140,
        '[', 141,
        ']', 142,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 252,
        'v', 191,
        '{', 108,
        '|', 157,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 258,
        '(', 138,
        ')', 139,
        '/', 10,
        ':', 143,
        '=', 98,
        '?', 147,
        '[', 141,
        '{', 108,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '}') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(156);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(179);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(181);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == '}') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 130,
        '#', 173,
        '$', 172,
        '%', 154,
        '&', 8,
        '\'', 171,
        '(', 138,
        ')', 139,
        '*', 112,
        '+', 150,
        ',', 109,
        '-', 152,
        '.', 145,
        '/', 153,
        ':', 144,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        ']', 142,
        'a', 232,
        'f', 246,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 190,
        'u', 233,
        'v', 191,
        '{', 108,
        '|', 158,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 90:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 130,
        '#', 258,
        '%', 154,
        '&', 8,
        '\'', 171,
        '(', 138,
        ')', 139,
        '*', 111,
        '+', 150,
        ',', 109,
        '-', 151,
        '.', 145,
        '/', 153,
        ':', 144,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        ']', 142,
        'a', 61,
        'f', 77,
        'i', 42,
        'm', 28,
        'o', 79,
        'p', 15,
        'r', 33,
        't', 19,
        'u', 62,
        'v', 20,
        '{', 108,
        '|', 158,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90);
      END_STATE();
    case 91:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 130,
        '#', 258,
        '%', 154,
        '&', 8,
        '(', 138,
        ')', 139,
        '*', 112,
        '+', 150,
        ',', 109,
        '-', 151,
        '.', 145,
        '/', 153,
        ':', 144,
        '<', 167,
        '=', 99,
        '>', 164,
        '?', 148,
        '@', 140,
        '[', 141,
        ']', 142,
        'a', 232,
        'f', 246,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 190,
        'u', 233,
        'v', 191,
        '|', 158,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 92:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 129,
        '#', 258,
        '\'', 171,
        '(', 138,
        '-', 152,
        '/', 10,
        '=', 98,
        '@', 140,
        '[', 141,
        'a', 237,
        'f', 246,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 190,
        'u', 233,
        'v', 191,
        '{', 108,
        '|', 157,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 129,
        '#', 258,
        ')', 139,
        ',', 109,
        '.', 145,
        '/', 10,
        '=', 100,
        '?', 147,
        '@', 140,
        '[', 141,
        'a', 67,
        'f', 77,
        'i', 42,
        'm', 28,
        'o', 79,
        'p', 15,
        'r', 33,
        't', 19,
        'u', 62,
        'v', 20,
        '|', 157,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '#', 258,
        '/', 10,
        '@', 140,
        'a', 232,
        'f', 246,
        'i', 213,
        'm', 199,
        'o', 248,
        'p', 186,
        'r', 204,
        't', 190,
        'u', 233,
        'v', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '~') ADVANCE(161);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_provider);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_provider);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_targetScope);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_targetScope);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_metadata);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_metadata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_resource);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '~') ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '?') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT_QMARK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?') ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(155);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == '/') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '$' ||
          lookahead == '\'') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_diagnostic_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'n', 6,
        'o', 7,
        's', 8,
        't', 9,
        'w', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'j') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_existing);
      END_STATE();
    case 63:
      if (lookahead == 'j') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_secureObject);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_secureString);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4, .external_lex_state = 2},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 3, .external_lex_state = 2},
  [181] = {.lex_state = 3, .external_lex_state = 2},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 3, .external_lex_state = 2},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 3, .external_lex_state = 2},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 3, .external_lex_state = 2},
  [222] = {.lex_state = 3, .external_lex_state = 2},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 3, .external_lex_state = 2},
  [255] = {.lex_state = 3, .external_lex_state = 2},
  [256] = {.lex_state = 91},
  [257] = {.lex_state = 3, .external_lex_state = 2},
  [258] = {.lex_state = 3, .external_lex_state = 2},
  [259] = {.lex_state = 3, .external_lex_state = 2},
  [260] = {.lex_state = 3, .external_lex_state = 2},
  [261] = {.lex_state = 3, .external_lex_state = 2},
  [262] = {.lex_state = 3, .external_lex_state = 2},
  [263] = {.lex_state = 3, .external_lex_state = 2},
  [264] = {.lex_state = 3, .external_lex_state = 2},
  [265] = {.lex_state = 3, .external_lex_state = 2},
  [266] = {.lex_state = 3, .external_lex_state = 2},
  [267] = {.lex_state = 3, .external_lex_state = 2},
  [268] = {.lex_state = 3, .external_lex_state = 2},
  [269] = {.lex_state = 91},
  [270] = {.lex_state = 3, .external_lex_state = 2},
  [271] = {.lex_state = 3, .external_lex_state = 2},
  [272] = {.lex_state = 3, .external_lex_state = 2},
  [273] = {.lex_state = 3, .external_lex_state = 2},
  [274] = {.lex_state = 3, .external_lex_state = 2},
  [275] = {.lex_state = 91},
  [276] = {.lex_state = 3, .external_lex_state = 2},
  [277] = {.lex_state = 3, .external_lex_state = 2},
  [278] = {.lex_state = 3, .external_lex_state = 2},
  [279] = {.lex_state = 3, .external_lex_state = 2},
  [280] = {.lex_state = 3, .external_lex_state = 2},
  [281] = {.lex_state = 3, .external_lex_state = 2},
  [282] = {.lex_state = 3, .external_lex_state = 2},
  [283] = {.lex_state = 3, .external_lex_state = 2},
  [284] = {.lex_state = 3, .external_lex_state = 2},
  [285] = {.lex_state = 3, .external_lex_state = 2},
  [286] = {.lex_state = 91},
  [287] = {.lex_state = 3, .external_lex_state = 2},
  [288] = {.lex_state = 3, .external_lex_state = 2},
  [289] = {.lex_state = 90},
  [290] = {.lex_state = 3, .external_lex_state = 2},
  [291] = {.lex_state = 90},
  [292] = {.lex_state = 3, .external_lex_state = 2},
  [293] = {.lex_state = 3, .external_lex_state = 2},
  [294] = {.lex_state = 3, .external_lex_state = 2},
  [295] = {.lex_state = 3, .external_lex_state = 2},
  [296] = {.lex_state = 3, .external_lex_state = 2},
  [297] = {.lex_state = 3, .external_lex_state = 2},
  [298] = {.lex_state = 3, .external_lex_state = 2},
  [299] = {.lex_state = 3, .external_lex_state = 2},
  [300] = {.lex_state = 3, .external_lex_state = 2},
  [301] = {.lex_state = 3, .external_lex_state = 2},
  [302] = {.lex_state = 3, .external_lex_state = 2},
  [303] = {.lex_state = 3, .external_lex_state = 2},
  [304] = {.lex_state = 3, .external_lex_state = 2},
  [305] = {.lex_state = 3, .external_lex_state = 2},
  [306] = {.lex_state = 3, .external_lex_state = 2},
  [307] = {.lex_state = 3, .external_lex_state = 2},
  [308] = {.lex_state = 3, .external_lex_state = 2},
  [309] = {.lex_state = 3, .external_lex_state = 2},
  [310] = {.lex_state = 3, .external_lex_state = 2},
  [311] = {.lex_state = 3, .external_lex_state = 2},
  [312] = {.lex_state = 3, .external_lex_state = 2},
  [313] = {.lex_state = 3, .external_lex_state = 2},
  [314] = {.lex_state = 3, .external_lex_state = 2},
  [315] = {.lex_state = 3, .external_lex_state = 2},
  [316] = {.lex_state = 3, .external_lex_state = 2},
  [317] = {.lex_state = 3, .external_lex_state = 2},
  [318] = {.lex_state = 3, .external_lex_state = 2},
  [319] = {.lex_state = 90},
  [320] = {.lex_state = 90},
  [321] = {.lex_state = 90},
  [322] = {.lex_state = 3, .external_lex_state = 2},
  [323] = {.lex_state = 3, .external_lex_state = 2},
  [324] = {.lex_state = 3, .external_lex_state = 2},
  [325] = {.lex_state = 90},
  [326] = {.lex_state = 3, .external_lex_state = 2},
  [327] = {.lex_state = 90},
  [328] = {.lex_state = 90},
  [329] = {.lex_state = 90},
  [330] = {.lex_state = 90},
  [331] = {.lex_state = 90},
  [332] = {.lex_state = 90},
  [333] = {.lex_state = 90},
  [334] = {.lex_state = 90},
  [335] = {.lex_state = 90},
  [336] = {.lex_state = 90},
  [337] = {.lex_state = 90},
  [338] = {.lex_state = 90},
  [339] = {.lex_state = 90},
  [340] = {.lex_state = 90},
  [341] = {.lex_state = 90},
  [342] = {.lex_state = 90},
  [343] = {.lex_state = 90},
  [344] = {.lex_state = 90},
  [345] = {.lex_state = 90},
  [346] = {.lex_state = 90},
  [347] = {.lex_state = 90},
  [348] = {.lex_state = 90},
  [349] = {.lex_state = 90},
  [350] = {.lex_state = 90},
  [351] = {.lex_state = 90},
  [352] = {.lex_state = 90},
  [353] = {.lex_state = 90},
  [354] = {.lex_state = 90},
  [355] = {.lex_state = 90},
  [356] = {.lex_state = 90},
  [357] = {.lex_state = 90},
  [358] = {.lex_state = 90},
  [359] = {.lex_state = 90},
  [360] = {.lex_state = 90},
  [361] = {.lex_state = 90},
  [362] = {.lex_state = 90},
  [363] = {.lex_state = 90},
  [364] = {.lex_state = 90},
  [365] = {.lex_state = 90},
  [366] = {.lex_state = 90},
  [367] = {.lex_state = 90},
  [368] = {.lex_state = 3, .external_lex_state = 2},
  [369] = {.lex_state = 90},
  [370] = {.lex_state = 90},
  [371] = {.lex_state = 90},
  [372] = {.lex_state = 90},
  [373] = {.lex_state = 90},
  [374] = {.lex_state = 90},
  [375] = {.lex_state = 90},
  [376] = {.lex_state = 90},
  [377] = {.lex_state = 90},
  [378] = {.lex_state = 90},
  [379] = {.lex_state = 90},
  [380] = {.lex_state = 90},
  [381] = {.lex_state = 90},
  [382] = {.lex_state = 90},
  [383] = {.lex_state = 90},
  [384] = {.lex_state = 90},
  [385] = {.lex_state = 90},
  [386] = {.lex_state = 90},
  [387] = {.lex_state = 90},
  [388] = {.lex_state = 90},
  [389] = {.lex_state = 90},
  [390] = {.lex_state = 90},
  [391] = {.lex_state = 90},
  [392] = {.lex_state = 90},
  [393] = {.lex_state = 90},
  [394] = {.lex_state = 90},
  [395] = {.lex_state = 90},
  [396] = {.lex_state = 90},
  [397] = {.lex_state = 90},
  [398] = {.lex_state = 90},
  [399] = {.lex_state = 90},
  [400] = {.lex_state = 90},
  [401] = {.lex_state = 90},
  [402] = {.lex_state = 90},
  [403] = {.lex_state = 90},
  [404] = {.lex_state = 90},
  [405] = {.lex_state = 90},
  [406] = {.lex_state = 90},
  [407] = {.lex_state = 90},
  [408] = {.lex_state = 90},
  [409] = {.lex_state = 90},
  [410] = {.lex_state = 90},
  [411] = {.lex_state = 90},
  [412] = {.lex_state = 90},
  [413] = {.lex_state = 90},
  [414] = {.lex_state = 90},
  [415] = {.lex_state = 90},
  [416] = {.lex_state = 90},
  [417] = {.lex_state = 90},
  [418] = {.lex_state = 4, .external_lex_state = 2},
  [419] = {.lex_state = 4, .external_lex_state = 2},
  [420] = {.lex_state = 4, .external_lex_state = 2},
  [421] = {.lex_state = 4, .external_lex_state = 2},
  [422] = {.lex_state = 4, .external_lex_state = 2},
  [423] = {.lex_state = 4, .external_lex_state = 2},
  [424] = {.lex_state = 4, .external_lex_state = 2},
  [425] = {.lex_state = 4, .external_lex_state = 2},
  [426] = {.lex_state = 4, .external_lex_state = 2},
  [427] = {.lex_state = 4, .external_lex_state = 2},
  [428] = {.lex_state = 4, .external_lex_state = 2},
  [429] = {.lex_state = 4, .external_lex_state = 2},
  [430] = {.lex_state = 4, .external_lex_state = 2},
  [431] = {.lex_state = 4, .external_lex_state = 2},
  [432] = {.lex_state = 4, .external_lex_state = 2},
  [433] = {.lex_state = 4, .external_lex_state = 2},
  [434] = {.lex_state = 4, .external_lex_state = 2},
  [435] = {.lex_state = 4, .external_lex_state = 2},
  [436] = {.lex_state = 4},
  [437] = {.lex_state = 4, .external_lex_state = 2},
  [438] = {.lex_state = 4, .external_lex_state = 2},
  [439] = {.lex_state = 4},
  [440] = {.lex_state = 4, .external_lex_state = 2},
  [441] = {.lex_state = 4, .external_lex_state = 2},
  [442] = {.lex_state = 4, .external_lex_state = 2},
  [443] = {.lex_state = 4, .external_lex_state = 2},
  [444] = {.lex_state = 4, .external_lex_state = 2},
  [445] = {.lex_state = 4, .external_lex_state = 2},
  [446] = {.lex_state = 4, .external_lex_state = 2},
  [447] = {.lex_state = 4, .external_lex_state = 2},
  [448] = {.lex_state = 4, .external_lex_state = 2},
  [449] = {.lex_state = 4, .external_lex_state = 2},
  [450] = {.lex_state = 4, .external_lex_state = 2},
  [451] = {.lex_state = 4, .external_lex_state = 2},
  [452] = {.lex_state = 4, .external_lex_state = 2},
  [453] = {.lex_state = 4, .external_lex_state = 2},
  [454] = {.lex_state = 90},
  [455] = {.lex_state = 4},
  [456] = {.lex_state = 4},
  [457] = {.lex_state = 90},
  [458] = {.lex_state = 4},
  [459] = {.lex_state = 90},
  [460] = {.lex_state = 90},
  [461] = {.lex_state = 90},
  [462] = {.lex_state = 4, .external_lex_state = 2},
  [463] = {.lex_state = 4, .external_lex_state = 2},
  [464] = {.lex_state = 90},
  [465] = {.lex_state = 90},
  [466] = {.lex_state = 4, .external_lex_state = 2},
  [467] = {.lex_state = 90},
  [468] = {.lex_state = 90},
  [469] = {.lex_state = 90},
  [470] = {.lex_state = 90},
  [471] = {.lex_state = 4, .external_lex_state = 2},
  [472] = {.lex_state = 90},
  [473] = {.lex_state = 4, .external_lex_state = 2},
  [474] = {.lex_state = 4, .external_lex_state = 2},
  [475] = {.lex_state = 90},
  [476] = {.lex_state = 4, .external_lex_state = 2},
  [477] = {.lex_state = 90},
  [478] = {.lex_state = 4, .external_lex_state = 2},
  [479] = {.lex_state = 4, .external_lex_state = 2},
  [480] = {.lex_state = 4, .external_lex_state = 2},
  [481] = {.lex_state = 90},
  [482] = {.lex_state = 4, .external_lex_state = 2},
  [483] = {.lex_state = 90},
  [484] = {.lex_state = 4, .external_lex_state = 2},
  [485] = {.lex_state = 90},
  [486] = {.lex_state = 4, .external_lex_state = 2},
  [487] = {.lex_state = 90},
  [488] = {.lex_state = 90},
  [489] = {.lex_state = 90},
  [490] = {.lex_state = 4, .external_lex_state = 2},
  [491] = {.lex_state = 90},
  [492] = {.lex_state = 4, .external_lex_state = 2},
  [493] = {.lex_state = 90},
  [494] = {.lex_state = 90},
  [495] = {.lex_state = 90},
  [496] = {.lex_state = 4, .external_lex_state = 2},
  [497] = {.lex_state = 90},
  [498] = {.lex_state = 90},
  [499] = {.lex_state = 90},
  [500] = {.lex_state = 90},
  [501] = {.lex_state = 90},
  [502] = {.lex_state = 90},
  [503] = {.lex_state = 90},
  [504] = {.lex_state = 4, .external_lex_state = 2},
  [505] = {.lex_state = 90},
  [506] = {.lex_state = 90},
  [507] = {.lex_state = 4, .external_lex_state = 2},
  [508] = {.lex_state = 90},
  [509] = {.lex_state = 90},
  [510] = {.lex_state = 90},
  [511] = {.lex_state = 90},
  [512] = {.lex_state = 90},
  [513] = {.lex_state = 90},
  [514] = {.lex_state = 90},
  [515] = {.lex_state = 90},
  [516] = {.lex_state = 90},
  [517] = {.lex_state = 90},
  [518] = {.lex_state = 90},
  [519] = {.lex_state = 90},
  [520] = {.lex_state = 90},
  [521] = {.lex_state = 90},
  [522] = {.lex_state = 90},
  [523] = {.lex_state = 90},
  [524] = {.lex_state = 90},
  [525] = {.lex_state = 90},
  [526] = {.lex_state = 90},
  [527] = {.lex_state = 90},
  [528] = {.lex_state = 4, .external_lex_state = 2},
  [529] = {.lex_state = 90},
  [530] = {.lex_state = 90},
  [531] = {.lex_state = 4, .external_lex_state = 2},
  [532] = {.lex_state = 4, .external_lex_state = 2},
  [533] = {.lex_state = 4, .external_lex_state = 2},
  [534] = {.lex_state = 4, .external_lex_state = 2},
  [535] = {.lex_state = 90},
  [536] = {.lex_state = 90},
  [537] = {.lex_state = 90},
  [538] = {.lex_state = 90},
  [539] = {.lex_state = 90},
  [540] = {.lex_state = 90},
  [541] = {.lex_state = 90},
  [542] = {.lex_state = 90},
  [543] = {.lex_state = 90},
  [544] = {.lex_state = 90},
  [545] = {.lex_state = 4, .external_lex_state = 2},
  [546] = {.lex_state = 90},
  [547] = {.lex_state = 4, .external_lex_state = 2},
  [548] = {.lex_state = 4, .external_lex_state = 2},
  [549] = {.lex_state = 90},
  [550] = {.lex_state = 4, .external_lex_state = 2},
  [551] = {.lex_state = 4, .external_lex_state = 2},
  [552] = {.lex_state = 90},
  [553] = {.lex_state = 4, .external_lex_state = 2},
  [554] = {.lex_state = 90},
  [555] = {.lex_state = 90},
  [556] = {.lex_state = 4, .external_lex_state = 2},
  [557] = {.lex_state = 90},
  [558] = {.lex_state = 90},
  [559] = {.lex_state = 93},
  [560] = {.lex_state = 93},
  [561] = {.lex_state = 4, .external_lex_state = 2},
  [562] = {.lex_state = 93},
  [563] = {.lex_state = 93},
  [564] = {.lex_state = 4, .external_lex_state = 2},
  [565] = {.lex_state = 90},
  [566] = {.lex_state = 93},
  [567] = {.lex_state = 93},
  [568] = {.lex_state = 4, .external_lex_state = 2},
  [569] = {.lex_state = 93},
  [570] = {.lex_state = 4, .external_lex_state = 2},
  [571] = {.lex_state = 4, .external_lex_state = 2},
  [572] = {.lex_state = 4, .external_lex_state = 2},
  [573] = {.lex_state = 4, .external_lex_state = 2},
  [574] = {.lex_state = 4, .external_lex_state = 2},
  [575] = {.lex_state = 4, .external_lex_state = 2},
  [576] = {.lex_state = 4, .external_lex_state = 2},
  [577] = {.lex_state = 4, .external_lex_state = 2},
  [578] = {.lex_state = 4, .external_lex_state = 2},
  [579] = {.lex_state = 4, .external_lex_state = 2},
  [580] = {.lex_state = 4, .external_lex_state = 2},
  [581] = {.lex_state = 93},
  [582] = {.lex_state = 4, .external_lex_state = 2},
  [583] = {.lex_state = 93},
  [584] = {.lex_state = 4, .external_lex_state = 2},
  [585] = {.lex_state = 4, .external_lex_state = 2},
  [586] = {.lex_state = 4, .external_lex_state = 2},
  [587] = {.lex_state = 93},
  [588] = {.lex_state = 93},
  [589] = {.lex_state = 93},
  [590] = {.lex_state = 93},
  [591] = {.lex_state = 93},
  [592] = {.lex_state = 93},
  [593] = {.lex_state = 93},
  [594] = {.lex_state = 93},
  [595] = {.lex_state = 93},
  [596] = {.lex_state = 93},
  [597] = {.lex_state = 93},
  [598] = {.lex_state = 93},
  [599] = {.lex_state = 93},
  [600] = {.lex_state = 93},
  [601] = {.lex_state = 93},
  [602] = {.lex_state = 93},
  [603] = {.lex_state = 93},
  [604] = {.lex_state = 90},
  [605] = {.lex_state = 90},
  [606] = {.lex_state = 90},
  [607] = {.lex_state = 90},
  [608] = {.lex_state = 94},
  [609] = {.lex_state = 90},
  [610] = {.lex_state = 90},
  [611] = {.lex_state = 90},
  [612] = {.lex_state = 90},
  [613] = {.lex_state = 90},
  [614] = {.lex_state = 90},
  [615] = {.lex_state = 90},
  [616] = {.lex_state = 90},
  [617] = {.lex_state = 90},
  [618] = {.lex_state = 90},
  [619] = {.lex_state = 90},
  [620] = {.lex_state = 90},
  [621] = {.lex_state = 90},
  [622] = {.lex_state = 90},
  [623] = {.lex_state = 90},
  [624] = {.lex_state = 90},
  [625] = {.lex_state = 5},
  [626] = {.lex_state = 5},
  [627] = {.lex_state = 5},
  [628] = {.lex_state = 5},
  [629] = {.lex_state = 5},
  [630] = {.lex_state = 5},
  [631] = {.lex_state = 5},
  [632] = {.lex_state = 5},
  [633] = {.lex_state = 5},
  [634] = {.lex_state = 90},
  [635] = {.lex_state = 5},
  [636] = {.lex_state = 6},
  [637] = {.lex_state = 6},
  [638] = {.lex_state = 6},
  [639] = {.lex_state = 6},
  [640] = {.lex_state = 6},
  [641] = {.lex_state = 90},
  [642] = {.lex_state = 90},
  [643] = {.lex_state = 90},
  [644] = {.lex_state = 90},
  [645] = {.lex_state = 90},
  [646] = {.lex_state = 90},
  [647] = {.lex_state = 90},
  [648] = {.lex_state = 90},
  [649] = {.lex_state = 90},
  [650] = {.lex_state = 90},
  [651] = {.lex_state = 4},
  [652] = {.lex_state = 4},
  [653] = {.lex_state = 90},
  [654] = {.lex_state = 4},
  [655] = {.lex_state = 4},
  [656] = {.lex_state = 90},
  [657] = {.lex_state = 4},
  [658] = {.lex_state = 90},
  [659] = {.lex_state = 4},
  [660] = {.lex_state = 90},
  [661] = {.lex_state = 6},
  [662] = {.lex_state = 6},
  [663] = {.lex_state = 4},
  [664] = {.lex_state = 4},
  [665] = {.lex_state = 4},
  [666] = {.lex_state = 4},
  [667] = {.lex_state = 4},
  [668] = {.lex_state = 4},
  [669] = {.lex_state = 4},
  [670] = {.lex_state = 7},
  [671] = {.lex_state = 4},
  [672] = {.lex_state = 4},
  [673] = {.lex_state = 4},
  [674] = {.lex_state = 4},
  [675] = {.lex_state = 4},
  [676] = {.lex_state = 4},
  [677] = {.lex_state = 4},
  [678] = {.lex_state = 4},
  [679] = {.lex_state = 4},
  [680] = {.lex_state = 6},
  [681] = {.lex_state = 6},
  [682] = {.lex_state = 4},
  [683] = {.lex_state = 90, .external_lex_state = 3},
  [684] = {.lex_state = 4},
  [685] = {.lex_state = 90, .external_lex_state = 3},
  [686] = {.lex_state = 90},
  [687] = {.lex_state = 4},
  [688] = {.lex_state = 90},
  [689] = {.lex_state = 4},
  [690] = {.lex_state = 90, .external_lex_state = 3},
  [691] = {.lex_state = 4},
  [692] = {.lex_state = 90},
  [693] = {.lex_state = 6},
  [694] = {.lex_state = 90},
  [695] = {.lex_state = 90},
  [696] = {.lex_state = 4},
  [697] = {.lex_state = 4},
  [698] = {.lex_state = 90},
  [699] = {.lex_state = 4},
  [700] = {.lex_state = 4},
  [701] = {.lex_state = 90},
  [702] = {.lex_state = 90, .external_lex_state = 3},
  [703] = {.lex_state = 4},
  [704] = {.lex_state = 4},
  [705] = {.lex_state = 90},
  [706] = {.lex_state = 90},
  [707] = {.lex_state = 90},
  [708] = {.lex_state = 7},
  [709] = {.lex_state = 90, .external_lex_state = 3},
  [710] = {.lex_state = 90},
  [711] = {.lex_state = 90, .external_lex_state = 3},
  [712] = {.lex_state = 4},
  [713] = {.lex_state = 4},
  [714] = {.lex_state = 90},
  [715] = {.lex_state = 90},
  [716] = {.lex_state = 4},
  [717] = {.lex_state = 90},
  [718] = {.lex_state = 90},
  [719] = {.lex_state = 6},
  [720] = {.lex_state = 90},
  [721] = {.lex_state = 90},
  [722] = {.lex_state = 90},
  [723] = {.lex_state = 90},
  [724] = {.lex_state = 90},
  [725] = {.lex_state = 4},
  [726] = {.lex_state = 90},
  [727] = {.lex_state = 90},
  [728] = {.lex_state = 90},
  [729] = {.lex_state = 4},
  [730] = {.lex_state = 90},
  [731] = {.lex_state = 6},
  [732] = {.lex_state = 90},
  [733] = {.lex_state = 90},
  [734] = {.lex_state = 90},
  [735] = {.lex_state = 4},
  [736] = {.lex_state = 90},
  [737] = {.lex_state = 90},
  [738] = {.lex_state = 90},
  [739] = {.lex_state = 90},
  [740] = {.lex_state = 90},
  [741] = {.lex_state = 90},
  [742] = {.lex_state = 4},
  [743] = {.lex_state = 90},
  [744] = {.lex_state = 90},
  [745] = {.lex_state = 4},
  [746] = {.lex_state = 6},
  [747] = {.lex_state = 6},
  [748] = {.lex_state = 6},
  [749] = {.lex_state = 6},
  [750] = {.lex_state = 6},
  [751] = {.lex_state = 90},
  [752] = {.lex_state = 90},
  [753] = {.lex_state = 90},
  [754] = {.lex_state = 6},
  [755] = {.lex_state = 6},
  [756] = {.lex_state = 90},
  [757] = {.lex_state = 6},
  [758] = {.lex_state = 6},
  [759] = {.lex_state = 6},
  [760] = {.lex_state = 6},
  [761] = {.lex_state = 90},
  [762] = {.lex_state = 6},
  [763] = {.lex_state = 6},
  [764] = {.lex_state = 6},
  [765] = {.lex_state = 90},
  [766] = {.lex_state = 6},
  [767] = {.lex_state = 6},
  [768] = {.lex_state = 90},
  [769] = {.lex_state = 90},
  [770] = {.lex_state = 6},
  [771] = {.lex_state = 7},
  [772] = {.lex_state = 90},
  [773] = {.lex_state = 90},
  [774] = {.lex_state = 90},
  [775] = {.lex_state = 90},
  [776] = {.lex_state = 90},
  [777] = {.lex_state = 90},
  [778] = {.lex_state = 6},
  [779] = {.lex_state = 6},
  [780] = {.lex_state = 6},
  [781] = {.lex_state = 90},
  [782] = {.lex_state = 90},
  [783] = {.lex_state = 6},
  [784] = {.lex_state = 90},
  [785] = {.lex_state = 90},
  [786] = {.lex_state = 90},
  [787] = {.lex_state = 90},
  [788] = {.lex_state = 90},
  [789] = {.lex_state = 6},
  [790] = {.lex_state = 90},
  [791] = {.lex_state = 90},
  [792] = {.lex_state = 6},
  [793] = {.lex_state = 90},
  [794] = {.lex_state = 6},
  [795] = {.lex_state = 6},
  [796] = {.lex_state = 90},
  [797] = {.lex_state = 6},
  [798] = {.lex_state = 6},
  [799] = {.lex_state = 6},
  [800] = {.lex_state = 6},
  [801] = {.lex_state = 90},
  [802] = {.lex_state = 6},
  [803] = {.lex_state = 90},
  [804] = {.lex_state = 6},
  [805] = {.lex_state = 90},
  [806] = {.lex_state = 90},
  [807] = {.lex_state = 90},
  [808] = {.lex_state = 90},
  [809] = {.lex_state = 90},
  [810] = {.lex_state = 90},
  [811] = {.lex_state = 6},
  [812] = {.lex_state = 6},
  [813] = {.lex_state = 90},
  [814] = {.lex_state = 6},
  [815] = {.lex_state = 6},
  [816] = {.lex_state = 6},
  [817] = {.lex_state = 90},
  [818] = {.lex_state = 90},
  [819] = {.lex_state = 90},
  [820] = {.lex_state = 6},
  [821] = {.lex_state = 90},
  [822] = {.lex_state = 90},
  [823] = {.lex_state = 6},
  [824] = {.lex_state = 6},
  [825] = {.lex_state = 6},
  [826] = {.lex_state = 90},
  [827] = {.lex_state = 6},
  [828] = {.lex_state = 6},
  [829] = {.lex_state = 90},
  [830] = {.lex_state = 6},
  [831] = {.lex_state = 6},
  [832] = {.lex_state = 6},
};





enum ts_external_scanner_symbol_identifiers {
  ts_external_token__external_asterisk = 0,
  ts_external_token__multiline_string_content = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__external_asterisk] = sym__external_asterisk,
  [ts_external_token__multiline_string_content] = sym__multiline_string_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__external_asterisk] = true,
    [ts_external_token__multiline_string_content] = true,
  },
  [2] = {
    [ts_external_token__external_asterisk] = true,
  },
  [3] = {
    [ts_external_token__multiline_string_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bicep_external_scanner_create(void);
void tree_sitter_bicep_external_scanner_destroy(void *);
bool tree_sitter_bicep_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bicep_external_scanner_serialize(void *, char *);
void tree_sitter_bicep_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bicep_from_file(const char *path) {
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
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bicep_external_scanner_create,
      tree_sitter_bicep_external_scanner_destroy,
      tree_sitter_bicep_external_scanner_scan,
      tree_sitter_bicep_external_scanner_serialize,
      tree_sitter_bicep_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 114648) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 114648, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 88, 177, 98, 163, 101, 236, 127, 68, 115, 219, 60, 132, 55, 49, 23, 187, 38, 135, 231, 176, 33, 163, 33, 218, 110, 253, 70, 41, 159, 65, 205, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 114648);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 114648);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 2784);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 98712);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 102008);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
