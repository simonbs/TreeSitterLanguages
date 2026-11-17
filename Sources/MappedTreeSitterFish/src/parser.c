#define tree_sitter_fish_external_scanner_create mapped_tree_sitter_fish_external_scanner_create
#define tree_sitter_fish_external_scanner_deserialize mapped_tree_sitter_fish_external_scanner_deserialize
#define tree_sitter_fish_external_scanner_destroy mapped_tree_sitter_fish_external_scanner_destroy
#define tree_sitter_fish_external_scanner_reset mapped_tree_sitter_fish_external_scanner_reset
#define tree_sitter_fish_external_scanner_scan mapped_tree_sitter_fish_external_scanner_scan
#define tree_sitter_fish_external_scanner_serialize mapped_tree_sitter_fish_external_scanner_serialize
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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 485
#define LARGE_STATE_COUNT 62
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 24

enum {
  sym_word = 1,
  anon_sym_and = 2,
  anon_sym_or = 3,
  anon_sym_PIPE_PIPE = 4,
  anon_sym_AMP_AMP = 5,
  anon_sym_AMP_PIPE = 6,
  anon_sym_2_GT_PIPE = 7,
  anon_sym_PIPE = 8,
  anon_sym_SEMI = 9,
  anon_sym_AMP = 10,
  anon_sym_LF = 11,
  anon_sym_CR = 12,
  anon_sym_CR_LF = 13,
  anon_sym_BANG = 14,
  anon_sym_not = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_function = 19,
  anon_sym_end = 20,
  sym_integer = 21,
  sym_float = 22,
  anon_sym_return = 23,
  anon_sym_switch = 24,
  anon_sym_case = 25,
  sym_break = 26,
  sym_continue = 27,
  anon_sym_for = 28,
  anon_sym_in = 29,
  anon_sym_while = 30,
  anon_sym_if = 31,
  anon_sym_else = 32,
  anon_sym_begin = 33,
  anon_sym_RBRACE = 34,
  sym_comment = 35,
  sym_variable_name = 36,
  anon_sym_EQ = 37,
  anon_sym_DOT_DOT = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_LBRACE = 41,
  anon_sym_COMMA = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_double_quote_string_token1 = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_single_quote_string_token1 = 46,
  sym_escape_sequence = 47,
  sym_stream_redirect = 48,
  sym_direction = 49,
  anon_sym_BANG_EQ = 50,
  anon_sym_POUND = 51,
  sym_home_dir_expansion = 52,
  sym_glob = 53,
  sym_brace_word = 54,
  sym__concat = 55,
  sym__brace_concat = 56,
  sym__concat_list = 57,
  sym__begin_brace = 58,
  sym__override_var_name = 59,
  sym__override_var_name_no_value = 60,
  sym_program = 61,
  sym_conditional_execution = 62,
  sym_pipe = 63,
  sym_redirect_statement = 64,
  sym__terminated_statement = 65,
  sym__terminated_opt_statement = 66,
  sym_negated_statement = 67,
  sym__command_substitution_dollar = 68,
  sym__command_substitution_inner = 69,
  sym_command_substitution = 70,
  sym_function_definition = 71,
  sym_return = 72,
  sym_switch_statement = 73,
  sym_case_clause = 74,
  sym_for_statement = 75,
  sym_while_statement = 76,
  sym_if_statement = 77,
  sym_else_if_clause = 78,
  sym_else_clause = 79,
  sym_begin_statement = 80,
  sym_override_variable = 81,
  sym_variable_expansion = 82,
  sym_index = 83,
  sym_range = 84,
  sym_list_element_access = 85,
  sym_brace_expansion = 86,
  sym_double_quote_string = 87,
  sym_single_quote_string = 88,
  sym_command = 89,
  sym_file_redirect = 90,
  sym__special_character = 91,
  sym_concatenation = 92,
  sym__expression = 93,
  sym_brace_concatenation = 94,
  sym__brace_expression = 95,
  sym__base_brace_expression = 96,
  aux_sym_program_repeat1 = 97,
  aux_sym_function_definition_repeat1 = 98,
  aux_sym_function_definition_repeat2 = 99,
  aux_sym_switch_statement_repeat1 = 100,
  aux_sym_case_clause_repeat1 = 101,
  aux_sym_for_statement_repeat1 = 102,
  aux_sym_while_statement_repeat1 = 103,
  aux_sym_if_statement_repeat1 = 104,
  aux_sym_variable_expansion_repeat1 = 105,
  aux_sym_list_element_access_repeat1 = 106,
  aux_sym_brace_expansion_repeat1 = 107,
  aux_sym_double_quote_string_repeat1 = 108,
  aux_sym_single_quote_string_repeat1 = 109,
  aux_sym_command_repeat1 = 110,
  aux_sym_command_repeat2 = 111,
  aux_sym_concatenation_repeat1 = 112,
  aux_sym_brace_concatenation_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_AMP_PIPE] = "&|",
  [anon_sym_2_GT_PIPE] = "2>|",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_AMP] = "&",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_return] = "return",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_begin] = "begin",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_variable_name] = "variable_name",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_stream_redirect] = "stream_redirect",
  [sym_direction] = "direction",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_POUND] = "#",
  [sym_home_dir_expansion] = "home_dir_expansion",
  [sym_glob] = "glob",
  [sym_brace_word] = "word",
  [sym__concat] = "_concat",
  [sym__brace_concat] = "_brace_concat",
  [sym__concat_list] = "_concat_list",
  [sym__begin_brace] = "{",
  [sym__override_var_name] = "variable_name",
  [sym__override_var_name_no_value] = "variable_name",
  [sym_program] = "program",
  [sym_conditional_execution] = "conditional_execution",
  [sym_pipe] = "pipe",
  [sym_redirect_statement] = "redirect_statement",
  [sym__terminated_statement] = "_terminated_statement",
  [sym__terminated_opt_statement] = "_terminated_opt_statement",
  [sym_negated_statement] = "negated_statement",
  [sym__command_substitution_dollar] = "_command_substitution_dollar",
  [sym__command_substitution_inner] = "_command_substitution_inner",
  [sym_command_substitution] = "command_substitution",
  [sym_function_definition] = "function_definition",
  [sym_return] = "return",
  [sym_switch_statement] = "switch_statement",
  [sym_case_clause] = "case_clause",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_begin_statement] = "begin_statement",
  [sym_override_variable] = "override_variable",
  [sym_variable_expansion] = "variable_expansion",
  [sym_index] = "index",
  [sym_range] = "range",
  [sym_list_element_access] = "list_element_access",
  [sym_brace_expansion] = "brace_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_file_redirect] = "file_redirect",
  [sym__special_character] = "_special_character",
  [sym_concatenation] = "concatenation",
  [sym__expression] = "_expression",
  [sym_brace_concatenation] = "concatenation",
  [sym__brace_expression] = "_brace_expression",
  [sym__base_brace_expression] = "_base_brace_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_case_clause_repeat1] = "case_clause_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_while_statement_repeat1] = "while_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_variable_expansion_repeat1] = "variable_expansion_repeat1",
  [aux_sym_list_element_access_repeat1] = "list_element_access_repeat1",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_brace_concatenation_repeat1] = "brace_concatenation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_AMP_PIPE] = anon_sym_AMP_PIPE,
  [anon_sym_2_GT_PIPE] = anon_sym_2_GT_PIPE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_end] = anon_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_stream_redirect] = sym_stream_redirect,
  [sym_direction] = sym_direction,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_home_dir_expansion] = sym_home_dir_expansion,
  [sym_glob] = sym_glob,
  [sym_brace_word] = sym_word,
  [sym__concat] = sym__concat,
  [sym__brace_concat] = sym__brace_concat,
  [sym__concat_list] = sym__concat_list,
  [sym__begin_brace] = anon_sym_LBRACE,
  [sym__override_var_name] = sym_variable_name,
  [sym__override_var_name_no_value] = sym_variable_name,
  [sym_program] = sym_program,
  [sym_conditional_execution] = sym_conditional_execution,
  [sym_pipe] = sym_pipe,
  [sym_redirect_statement] = sym_redirect_statement,
  [sym__terminated_statement] = sym__terminated_statement,
  [sym__terminated_opt_statement] = sym__terminated_opt_statement,
  [sym_negated_statement] = sym_negated_statement,
  [sym__command_substitution_dollar] = sym__command_substitution_dollar,
  [sym__command_substitution_inner] = sym__command_substitution_inner,
  [sym_command_substitution] = sym_command_substitution,
  [sym_function_definition] = sym_function_definition,
  [sym_return] = sym_return,
  [sym_switch_statement] = sym_switch_statement,
  [sym_case_clause] = sym_case_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_begin_statement] = sym_begin_statement,
  [sym_override_variable] = sym_override_variable,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_index] = sym_index,
  [sym_range] = sym_range,
  [sym_list_element_access] = sym_list_element_access,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_file_redirect] = sym_file_redirect,
  [sym__special_character] = sym__special_character,
  [sym_concatenation] = sym_concatenation,
  [sym__expression] = sym__expression,
  [sym_brace_concatenation] = sym_concatenation,
  [sym__brace_expression] = sym__brace_expression,
  [sym__base_brace_expression] = sym__base_brace_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_case_clause_repeat1] = aux_sym_case_clause_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_while_statement_repeat1] = aux_sym_while_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_variable_expansion_repeat1] = aux_sym_variable_expansion_repeat1,
  [aux_sym_list_element_access_repeat1] = aux_sym_list_element_access_repeat1,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_double_quote_string_repeat1] = aux_sym_double_quote_string_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
  [aux_sym_brace_concatenation_repeat1] = aux_sym_brace_concatenation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_GT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_stream_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_home_dir_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_word] = {
    .visible = true,
    .named = true,
  },
  [sym__concat] = {
    .visible = false,
    .named = true,
  },
  [sym__brace_concat] = {
    .visible = false,
    .named = true,
  },
  [sym__concat_list] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_brace] = {
    .visible = true,
    .named = false,
  },
  [sym__override_var_name] = {
    .visible = true,
    .named = true,
  },
  [sym__override_var_name_no_value] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_execution] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__terminated_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__terminated_opt_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_negated_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__command_substitution_dollar] = {
    .visible = false,
    .named = true,
  },
  [sym__command_substitution_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_command_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
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
  [sym_if_statement] = {
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
  [sym_begin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_override_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_list_element_access] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym__special_character] = {
    .visible = false,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_brace_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__base_brace_expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_element_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_condition = 2,
  field_destination = 3,
  field_name = 4,
  field_operator = 5,
  field_option = 6,
  field_override = 7,
  field_redirect = 8,
  field_value = 9,
  field_variable = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_destination] = "destination",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_option] = "option",
  [field_override] = "override",
  [field_redirect] = "redirect",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 3},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 4},
  [15] = {.index = 21, .length = 4},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 1},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 1},
  [23] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_override, 0},
  [2] =
    {field_redirect, 0},
  [3] =
    {field_argument, 0},
  [4] =
    {field_argument, 1, .inherited = true},
    {field_name, 0},
    {field_redirect, 1, .inherited = true},
  [7] =
    {field_name, 1},
    {field_override, 0, .inherited = true},
  [9] =
    {field_override, 0, .inherited = true},
    {field_override, 1, .inherited = true},
  [11] =
    {field_name, 0},
    {field_value, 2},
  [13] =
    {field_option, 0},
  [14] =
    {field_destination, 1},
    {field_operator, 0},
  [16] =
    {field_condition, 1},
  [17] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_redirect, 0, .inherited = true},
    {field_redirect, 1, .inherited = true},
  [21] =
    {field_argument, 2, .inherited = true},
    {field_name, 1},
    {field_override, 0, .inherited = true},
    {field_redirect, 2, .inherited = true},
  [25] =
    {field_name, 1},
  [26] =
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [28] =
    {field_value, 1},
  [29] =
    {field_value, 0},
  [30] =
    {field_name, 1},
    {field_option, 2, .inherited = true},
  [32] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_condition, 2},
  [35] =
    {field_value, 3, .inherited = true},
    {field_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_word,
  },
  [4] = {
    [0] = sym_command_substitution,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__command_substitution_dollar, 2,
    sym__command_substitution_dollar,
    sym_command_substitution,
  sym__special_character, 2,
    sym__special_character,
    sym_word,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 6,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 18,
  [22] = 17,
  [23] = 18,
  [24] = 17,
  [25] = 18,
  [26] = 17,
  [27] = 27,
  [28] = 17,
  [29] = 18,
  [30] = 18,
  [31] = 17,
  [32] = 19,
  [33] = 17,
  [34] = 18,
  [35] = 18,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
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
  [61] = 36,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 77,
  [80] = 76,
  [81] = 75,
  [82] = 75,
  [83] = 83,
  [84] = 83,
  [85] = 75,
  [86] = 86,
  [87] = 87,
  [88] = 86,
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
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 128,
  [131] = 128,
  [132] = 128,
  [133] = 133,
  [134] = 86,
  [135] = 83,
  [136] = 133,
  [137] = 133,
  [138] = 83,
  [139] = 133,
  [140] = 133,
  [141] = 87,
  [142] = 133,
  [143] = 86,
  [144] = 98,
  [145] = 102,
  [146] = 91,
  [147] = 101,
  [148] = 96,
  [149] = 99,
  [150] = 150,
  [151] = 100,
  [152] = 114,
  [153] = 106,
  [154] = 110,
  [155] = 111,
  [156] = 105,
  [157] = 113,
  [158] = 109,
  [159] = 108,
  [160] = 112,
  [161] = 115,
  [162] = 107,
  [163] = 103,
  [164] = 116,
  [165] = 104,
  [166] = 83,
  [167] = 83,
  [168] = 168,
  [169] = 169,
  [170] = 87,
  [171] = 86,
  [172] = 86,
  [173] = 91,
  [174] = 174,
  [175] = 101,
  [176] = 99,
  [177] = 98,
  [178] = 100,
  [179] = 96,
  [180] = 102,
  [181] = 103,
  [182] = 105,
  [183] = 111,
  [184] = 109,
  [185] = 104,
  [186] = 107,
  [187] = 116,
  [188] = 108,
  [189] = 189,
  [190] = 113,
  [191] = 110,
  [192] = 115,
  [193] = 114,
  [194] = 112,
  [195] = 106,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 83,
  [200] = 83,
  [201] = 86,
  [202] = 86,
  [203] = 87,
  [204] = 96,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 205,
  [209] = 206,
  [210] = 205,
  [211] = 206,
  [212] = 101,
  [213] = 98,
  [214] = 91,
  [215] = 102,
  [216] = 206,
  [217] = 205,
  [218] = 205,
  [219] = 206,
  [220] = 206,
  [221] = 205,
  [222] = 206,
  [223] = 205,
  [224] = 99,
  [225] = 100,
  [226] = 205,
  [227] = 206,
  [228] = 228,
  [229] = 104,
  [230] = 111,
  [231] = 116,
  [232] = 105,
  [233] = 233,
  [234] = 234,
  [235] = 113,
  [236] = 114,
  [237] = 237,
  [238] = 109,
  [239] = 115,
  [240] = 112,
  [241] = 107,
  [242] = 103,
  [243] = 110,
  [244] = 106,
  [245] = 108,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 255,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 255,
  [267] = 255,
  [268] = 255,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 264,
  [274] = 264,
  [275] = 275,
  [276] = 276,
  [277] = 255,
  [278] = 278,
  [279] = 255,
  [280] = 117,
  [281] = 264,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 264,
  [293] = 264,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 255,
  [298] = 264,
  [299] = 299,
  [300] = 264,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 302,
  [306] = 302,
  [307] = 304,
  [308] = 303,
  [309] = 302,
  [310] = 304,
  [311] = 87,
  [312] = 86,
  [313] = 83,
  [314] = 86,
  [315] = 83,
  [316] = 83,
  [317] = 83,
  [318] = 86,
  [319] = 87,
  [320] = 99,
  [321] = 100,
  [322] = 102,
  [323] = 86,
  [324] = 91,
  [325] = 325,
  [326] = 98,
  [327] = 101,
  [328] = 328,
  [329] = 329,
  [330] = 96,
  [331] = 325,
  [332] = 114,
  [333] = 328,
  [334] = 334,
  [335] = 328,
  [336] = 106,
  [337] = 108,
  [338] = 325,
  [339] = 103,
  [340] = 104,
  [341] = 325,
  [342] = 325,
  [343] = 102,
  [344] = 344,
  [345] = 328,
  [346] = 328,
  [347] = 115,
  [348] = 112,
  [349] = 99,
  [350] = 116,
  [351] = 325,
  [352] = 100,
  [353] = 109,
  [354] = 354,
  [355] = 355,
  [356] = 328,
  [357] = 328,
  [358] = 325,
  [359] = 83,
  [360] = 108,
  [361] = 361,
  [362] = 86,
  [363] = 83,
  [364] = 109,
  [365] = 87,
  [366] = 111,
  [367] = 104,
  [368] = 113,
  [369] = 103,
  [370] = 107,
  [371] = 114,
  [372] = 115,
  [373] = 112,
  [374] = 105,
  [375] = 116,
  [376] = 86,
  [377] = 110,
  [378] = 106,
  [379] = 86,
  [380] = 380,
  [381] = 381,
  [382] = 380,
  [383] = 99,
  [384] = 384,
  [385] = 380,
  [386] = 380,
  [387] = 100,
  [388] = 87,
  [389] = 380,
  [390] = 380,
  [391] = 380,
  [392] = 83,
  [393] = 380,
  [394] = 102,
  [395] = 83,
  [396] = 396,
  [397] = 86,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 399,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 399,
  [406] = 399,
  [407] = 407,
  [408] = 407,
  [409] = 102,
  [410] = 399,
  [411] = 399,
  [412] = 412,
  [413] = 407,
  [414] = 414,
  [415] = 407,
  [416] = 407,
  [417] = 100,
  [418] = 99,
  [419] = 407,
  [420] = 420,
  [421] = 115,
  [422] = 422,
  [423] = 399,
  [424] = 109,
  [425] = 116,
  [426] = 112,
  [427] = 407,
  [428] = 428,
  [429] = 428,
  [430] = 430,
  [431] = 430,
  [432] = 428,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 435,
  [437] = 114,
  [438] = 115,
  [439] = 430,
  [440] = 433,
  [441] = 112,
  [442] = 433,
  [443] = 428,
  [444] = 444,
  [445] = 430,
  [446] = 433,
  [447] = 430,
  [448] = 435,
  [449] = 435,
  [450] = 433,
  [451] = 435,
  [452] = 111,
  [453] = 435,
  [454] = 430,
  [455] = 433,
  [456] = 109,
  [457] = 110,
  [458] = 106,
  [459] = 435,
  [460] = 428,
  [461] = 104,
  [462] = 103,
  [463] = 107,
  [464] = 116,
  [465] = 108,
  [466] = 428,
  [467] = 435,
  [468] = 468,
  [469] = 468,
  [470] = 468,
  [471] = 471,
  [472] = 468,
  [473] = 468,
  [474] = 468,
  [475] = 468,
  [476] = 468,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
};

static inline bool anon_sym_LF_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < 133
        ? (c >= 11 && c <= '\f')
        : c <= 133)
      : (c <= 160 || c == 5760))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '$' || (c < '['
      ? (c < ';'
        ? (c >= '&' && c <= '*')
        : c <= '>')
      : (c <= ']' || (c >= '{' && c <= '~')))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '$' || (c < '['
      ? (c < ';'
        ? (c >= '&' && c <= '*')
        : c <= '=')
      : (c <= ']' || (c >= '{' && c <= '~')))));
}

static inline bool sym_brace_word_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '2') ADVANCE(61);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_word_character_set_1(lookahead)) ADVANCE(127);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(24);
      if (anon_sym_LF_character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '2') ADVANCE(61);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_word_character_set_1(lookahead)) ADVANCE(122);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '(') ADVANCE(56);
      if (sym_brace_word_character_set_1(lookahead)) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(104);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '2')) ADVANCE(106);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (sym_brace_word_character_set_1(lookahead)) SKIP(32)
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMP_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_2_GT_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '|') ADVANCE(36);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(48);
      if (sym_word_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(50);
      if (sym_word_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(51);
      if (sym_word_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(52);
      if (sym_word_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(53);
      if (sym_word_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(48);
      if (sym_word_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(50);
      if (sym_word_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(51);
      if (sym_word_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(52);
      if (sym_word_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(53);
      if (sym_word_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(114);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_end);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(144);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(144);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_case);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_in);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(87);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '#') ADVANCE(91);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_stream_redirect);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_direction);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(29);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '?') ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '?') ADVANCE(107);
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '?') ADVANCE(107);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(107);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '?') ADVANCE(107);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_home_dir_expansion);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '*') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == '2') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_word_character_set_1(lookahead)) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '2') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (sym_word_character_set_1(lookahead)) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_word_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '&' || '*' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(80);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(114);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(140);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(59);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(68);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(74);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(70);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(72);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(133);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(133);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(134);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(135);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_brace_word_character_set_1(lookahead)) ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ',' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_brace_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_brace_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
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
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 4, .external_lex_state = 2},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 4, .external_lex_state = 2},
  [11] = {.lex_state = 31, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 31, .external_lex_state = 2},
  [16] = {.lex_state = 31, .external_lex_state = 2},
  [17] = {.lex_state = 31, .external_lex_state = 2},
  [18] = {.lex_state = 31, .external_lex_state = 2},
  [19] = {.lex_state = 31, .external_lex_state = 2},
  [20] = {.lex_state = 31, .external_lex_state = 2},
  [21] = {.lex_state = 31, .external_lex_state = 2},
  [22] = {.lex_state = 31, .external_lex_state = 2},
  [23] = {.lex_state = 31, .external_lex_state = 2},
  [24] = {.lex_state = 31, .external_lex_state = 2},
  [25] = {.lex_state = 31, .external_lex_state = 2},
  [26] = {.lex_state = 31, .external_lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 2},
  [28] = {.lex_state = 31, .external_lex_state = 2},
  [29] = {.lex_state = 31, .external_lex_state = 2},
  [30] = {.lex_state = 31, .external_lex_state = 2},
  [31] = {.lex_state = 31, .external_lex_state = 2},
  [32] = {.lex_state = 31, .external_lex_state = 2},
  [33] = {.lex_state = 31, .external_lex_state = 2},
  [34] = {.lex_state = 31, .external_lex_state = 2},
  [35] = {.lex_state = 31, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 7, .external_lex_state = 2},
  [38] = {.lex_state = 7, .external_lex_state = 2},
  [39] = {.lex_state = 8, .external_lex_state = 2},
  [40] = {.lex_state = 8, .external_lex_state = 2},
  [41] = {.lex_state = 8, .external_lex_state = 2},
  [42] = {.lex_state = 8, .external_lex_state = 2},
  [43] = {.lex_state = 8, .external_lex_state = 2},
  [44] = {.lex_state = 8, .external_lex_state = 2},
  [45] = {.lex_state = 8, .external_lex_state = 2},
  [46] = {.lex_state = 8, .external_lex_state = 2},
  [47] = {.lex_state = 8, .external_lex_state = 2},
  [48] = {.lex_state = 8, .external_lex_state = 2},
  [49] = {.lex_state = 8, .external_lex_state = 2},
  [50] = {.lex_state = 8, .external_lex_state = 2},
  [51] = {.lex_state = 8, .external_lex_state = 2},
  [52] = {.lex_state = 8, .external_lex_state = 2},
  [53] = {.lex_state = 8, .external_lex_state = 2},
  [54] = {.lex_state = 8, .external_lex_state = 2},
  [55] = {.lex_state = 8, .external_lex_state = 2},
  [56] = {.lex_state = 8, .external_lex_state = 2},
  [57] = {.lex_state = 8, .external_lex_state = 2},
  [58] = {.lex_state = 8, .external_lex_state = 2},
  [59] = {.lex_state = 8, .external_lex_state = 2},
  [60] = {.lex_state = 8, .external_lex_state = 2},
  [61] = {.lex_state = 8, .external_lex_state = 2},
  [62] = {.lex_state = 9, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 9, .external_lex_state = 2},
  [65] = {.lex_state = 9, .external_lex_state = 2},
  [66] = {.lex_state = 9, .external_lex_state = 2},
  [67] = {.lex_state = 9, .external_lex_state = 2},
  [68] = {.lex_state = 9, .external_lex_state = 2},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 31, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 31, .external_lex_state = 2},
  [80] = {.lex_state = 31, .external_lex_state = 2},
  [81] = {.lex_state = 4, .external_lex_state = 2},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 5, .external_lex_state = 3},
  [84] = {.lex_state = 5, .external_lex_state = 3},
  [85] = {.lex_state = 8, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 3},
  [87] = {.lex_state = 5, .external_lex_state = 3},
  [88] = {.lex_state = 5, .external_lex_state = 3},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 5, .external_lex_state = 4},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 5, .external_lex_state = 4},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 5, .external_lex_state = 4},
  [99] = {.lex_state = 5, .external_lex_state = 3},
  [100] = {.lex_state = 5, .external_lex_state = 3},
  [101] = {.lex_state = 5, .external_lex_state = 4},
  [102] = {.lex_state = 5, .external_lex_state = 3},
  [103] = {.lex_state = 5, .external_lex_state = 4},
  [104] = {.lex_state = 5, .external_lex_state = 4},
  [105] = {.lex_state = 5, .external_lex_state = 4},
  [106] = {.lex_state = 5, .external_lex_state = 4},
  [107] = {.lex_state = 5, .external_lex_state = 4},
  [108] = {.lex_state = 5, .external_lex_state = 4},
  [109] = {.lex_state = 5, .external_lex_state = 4},
  [110] = {.lex_state = 5, .external_lex_state = 4},
  [111] = {.lex_state = 5, .external_lex_state = 4},
  [112] = {.lex_state = 5, .external_lex_state = 4},
  [113] = {.lex_state = 5, .external_lex_state = 4},
  [114] = {.lex_state = 5, .external_lex_state = 4},
  [115] = {.lex_state = 5, .external_lex_state = 4},
  [116] = {.lex_state = 5, .external_lex_state = 4},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 11, .external_lex_state = 5},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 6, .external_lex_state = 3},
  [135] = {.lex_state = 6, .external_lex_state = 3},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 6, .external_lex_state = 3},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 6, .external_lex_state = 3},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 6, .external_lex_state = 3},
  [144] = {.lex_state = 6, .external_lex_state = 4},
  [145] = {.lex_state = 6, .external_lex_state = 3},
  [146] = {.lex_state = 6, .external_lex_state = 4},
  [147] = {.lex_state = 6, .external_lex_state = 4},
  [148] = {.lex_state = 6, .external_lex_state = 4},
  [149] = {.lex_state = 6, .external_lex_state = 3},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 6, .external_lex_state = 3},
  [152] = {.lex_state = 6, .external_lex_state = 4},
  [153] = {.lex_state = 6, .external_lex_state = 4},
  [154] = {.lex_state = 6, .external_lex_state = 4},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 6, .external_lex_state = 4},
  [159] = {.lex_state = 6, .external_lex_state = 4},
  [160] = {.lex_state = 6, .external_lex_state = 4},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 6, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 11, .external_lex_state = 6},
  [167] = {.lex_state = 11, .external_lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 11, .external_lex_state = 6},
  [171] = {.lex_state = 11, .external_lex_state = 6},
  [172] = {.lex_state = 11, .external_lex_state = 6},
  [173] = {.lex_state = 11, .external_lex_state = 7},
  [174] = {.lex_state = 11, .external_lex_state = 5},
  [175] = {.lex_state = 11, .external_lex_state = 7},
  [176] = {.lex_state = 11, .external_lex_state = 6},
  [177] = {.lex_state = 11, .external_lex_state = 7},
  [178] = {.lex_state = 11, .external_lex_state = 6},
  [179] = {.lex_state = 11, .external_lex_state = 7},
  [180] = {.lex_state = 11, .external_lex_state = 6},
  [181] = {.lex_state = 11, .external_lex_state = 7},
  [182] = {.lex_state = 11, .external_lex_state = 7},
  [183] = {.lex_state = 11, .external_lex_state = 7},
  [184] = {.lex_state = 11, .external_lex_state = 7},
  [185] = {.lex_state = 11, .external_lex_state = 7},
  [186] = {.lex_state = 11, .external_lex_state = 7},
  [187] = {.lex_state = 11, .external_lex_state = 7},
  [188] = {.lex_state = 11, .external_lex_state = 7},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 11, .external_lex_state = 7},
  [191] = {.lex_state = 11, .external_lex_state = 7},
  [192] = {.lex_state = 11, .external_lex_state = 7},
  [193] = {.lex_state = 11, .external_lex_state = 7},
  [194] = {.lex_state = 11, .external_lex_state = 7},
  [195] = {.lex_state = 11, .external_lex_state = 7},
  [196] = {.lex_state = 11, .external_lex_state = 5},
  [197] = {.lex_state = 11, .external_lex_state = 5},
  [198] = {.lex_state = 11, .external_lex_state = 5},
  [199] = {.lex_state = 1, .external_lex_state = 3},
  [200] = {.lex_state = 1, .external_lex_state = 3},
  [201] = {.lex_state = 1, .external_lex_state = 3},
  [202] = {.lex_state = 1, .external_lex_state = 3},
  [203] = {.lex_state = 1, .external_lex_state = 3},
  [204] = {.lex_state = 1, .external_lex_state = 4},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 32},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 32},
  [209] = {.lex_state = 32},
  [210] = {.lex_state = 32},
  [211] = {.lex_state = 32},
  [212] = {.lex_state = 1, .external_lex_state = 4},
  [213] = {.lex_state = 1, .external_lex_state = 4},
  [214] = {.lex_state = 1, .external_lex_state = 4},
  [215] = {.lex_state = 1, .external_lex_state = 3},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 32},
  [218] = {.lex_state = 32},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 32},
  [222] = {.lex_state = 32},
  [223] = {.lex_state = 32},
  [224] = {.lex_state = 1, .external_lex_state = 3},
  [225] = {.lex_state = 1, .external_lex_state = 3},
  [226] = {.lex_state = 32},
  [227] = {.lex_state = 32},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1, .external_lex_state = 4},
  [230] = {.lex_state = 1, .external_lex_state = 4},
  [231] = {.lex_state = 1, .external_lex_state = 4},
  [232] = {.lex_state = 1, .external_lex_state = 4},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1, .external_lex_state = 4},
  [236] = {.lex_state = 1, .external_lex_state = 4},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1, .external_lex_state = 4},
  [239] = {.lex_state = 1, .external_lex_state = 4},
  [240] = {.lex_state = 1, .external_lex_state = 4},
  [241] = {.lex_state = 1, .external_lex_state = 4},
  [242] = {.lex_state = 1, .external_lex_state = 4},
  [243] = {.lex_state = 1, .external_lex_state = 4},
  [244] = {.lex_state = 1, .external_lex_state = 4},
  [245] = {.lex_state = 1, .external_lex_state = 4},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 32},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 32},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 32, .external_lex_state = 8},
  [312] = {.lex_state = 32, .external_lex_state = 8},
  [313] = {.lex_state = 32, .external_lex_state = 8},
  [314] = {.lex_state = 32, .external_lex_state = 8},
  [315] = {.lex_state = 32, .external_lex_state = 8},
  [316] = {.lex_state = 2, .external_lex_state = 3},
  [317] = {.lex_state = 2, .external_lex_state = 3},
  [318] = {.lex_state = 2, .external_lex_state = 3},
  [319] = {.lex_state = 2, .external_lex_state = 3},
  [320] = {.lex_state = 32, .external_lex_state = 8},
  [321] = {.lex_state = 32, .external_lex_state = 8},
  [322] = {.lex_state = 32, .external_lex_state = 8},
  [323] = {.lex_state = 2, .external_lex_state = 3},
  [324] = {.lex_state = 2, .external_lex_state = 4},
  [325] = {.lex_state = 13},
  [326] = {.lex_state = 2, .external_lex_state = 4},
  [327] = {.lex_state = 2, .external_lex_state = 4},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 2, .external_lex_state = 4},
  [331] = {.lex_state = 13},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 13},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 32},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 13},
  [342] = {.lex_state = 13},
  [343] = {.lex_state = 2, .external_lex_state = 3},
  [344] = {.lex_state = 32},
  [345] = {.lex_state = 13},
  [346] = {.lex_state = 13},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 2, .external_lex_state = 3},
  [350] = {.lex_state = 32},
  [351] = {.lex_state = 13},
  [352] = {.lex_state = 2, .external_lex_state = 3},
  [353] = {.lex_state = 32},
  [354] = {.lex_state = 32},
  [355] = {.lex_state = 32},
  [356] = {.lex_state = 13},
  [357] = {.lex_state = 13},
  [358] = {.lex_state = 13},
  [359] = {.lex_state = 13, .external_lex_state = 8},
  [360] = {.lex_state = 2, .external_lex_state = 4},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 13, .external_lex_state = 8},
  [363] = {.lex_state = 13, .external_lex_state = 8},
  [364] = {.lex_state = 2, .external_lex_state = 4},
  [365] = {.lex_state = 13, .external_lex_state = 8},
  [366] = {.lex_state = 2, .external_lex_state = 4},
  [367] = {.lex_state = 2, .external_lex_state = 4},
  [368] = {.lex_state = 2, .external_lex_state = 4},
  [369] = {.lex_state = 2, .external_lex_state = 4},
  [370] = {.lex_state = 2, .external_lex_state = 4},
  [371] = {.lex_state = 2, .external_lex_state = 4},
  [372] = {.lex_state = 2, .external_lex_state = 4},
  [373] = {.lex_state = 2, .external_lex_state = 4},
  [374] = {.lex_state = 2, .external_lex_state = 4},
  [375] = {.lex_state = 2, .external_lex_state = 4},
  [376] = {.lex_state = 13, .external_lex_state = 8},
  [377] = {.lex_state = 2, .external_lex_state = 4},
  [378] = {.lex_state = 2, .external_lex_state = 4},
  [379] = {.lex_state = 32, .external_lex_state = 9},
  [380] = {.lex_state = 14},
  [381] = {.lex_state = 32},
  [382] = {.lex_state = 14},
  [383] = {.lex_state = 13, .external_lex_state = 8},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 14},
  [386] = {.lex_state = 14},
  [387] = {.lex_state = 13, .external_lex_state = 8},
  [388] = {.lex_state = 32, .external_lex_state = 9},
  [389] = {.lex_state = 14},
  [390] = {.lex_state = 14},
  [391] = {.lex_state = 14},
  [392] = {.lex_state = 32, .external_lex_state = 9},
  [393] = {.lex_state = 14},
  [394] = {.lex_state = 13, .external_lex_state = 8},
  [395] = {.lex_state = 32, .external_lex_state = 9},
  [396] = {.lex_state = 32},
  [397] = {.lex_state = 32, .external_lex_state = 9},
  [398] = {.lex_state = 32},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 32},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 32, .external_lex_state = 10},
  [403] = {.lex_state = 32},
  [404] = {.lex_state = 32},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 32, .external_lex_state = 9},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 32, .external_lex_state = 10},
  [413] = {.lex_state = 15},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 15},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 32, .external_lex_state = 9},
  [418] = {.lex_state = 32, .external_lex_state = 9},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 13},
  [422] = {.lex_state = 32, .external_lex_state = 10},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 13},
  [425] = {.lex_state = 13},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 32},
  [429] = {.lex_state = 32},
  [430] = {.lex_state = 32},
  [431] = {.lex_state = 32},
  [432] = {.lex_state = 32},
  [433] = {.lex_state = 32},
  [434] = {.lex_state = 32, .external_lex_state = 10},
  [435] = {.lex_state = 14},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 32, .external_lex_state = 10},
  [438] = {.lex_state = 32, .external_lex_state = 10},
  [439] = {.lex_state = 32},
  [440] = {.lex_state = 32},
  [441] = {.lex_state = 32, .external_lex_state = 10},
  [442] = {.lex_state = 32},
  [443] = {.lex_state = 32},
  [444] = {.lex_state = 32},
  [445] = {.lex_state = 32},
  [446] = {.lex_state = 32},
  [447] = {.lex_state = 32},
  [448] = {.lex_state = 14},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 32},
  [451] = {.lex_state = 14},
  [452] = {.lex_state = 32, .external_lex_state = 10},
  [453] = {.lex_state = 14},
  [454] = {.lex_state = 32},
  [455] = {.lex_state = 32},
  [456] = {.lex_state = 32, .external_lex_state = 10},
  [457] = {.lex_state = 32, .external_lex_state = 10},
  [458] = {.lex_state = 32, .external_lex_state = 10},
  [459] = {.lex_state = 14},
  [460] = {.lex_state = 32},
  [461] = {.lex_state = 32, .external_lex_state = 10},
  [462] = {.lex_state = 32, .external_lex_state = 10},
  [463] = {.lex_state = 32, .external_lex_state = 10},
  [464] = {.lex_state = 32, .external_lex_state = 10},
  [465] = {.lex_state = 32, .external_lex_state = 10},
  [466] = {.lex_state = 32},
  [467] = {.lex_state = 14},
  [468] = {.lex_state = 32},
  [469] = {.lex_state = 32},
  [470] = {.lex_state = 32},
  [471] = {.lex_state = 32},
  [472] = {.lex_state = 32},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 32},
  [475] = {.lex_state = 32},
  [476] = {.lex_state = 32},
  [477] = {.lex_state = 14},
  [478] = {.lex_state = 32},
  [479] = {.lex_state = 32},
  [480] = {.lex_state = 32},
  [481] = {.lex_state = 32},
  [482] = {.lex_state = 32},
  [483] = {.lex_state = 32},
  [484] = {.lex_state = 32},
};

enum {
  ts_external_token__concat = 0,
  ts_external_token__brace_concat = 1,
  ts_external_token__concat_list = 2,
  ts_external_token__begin_brace = 3,
  ts_external_token__override_var_name = 4,
  ts_external_token__override_var_name_no_value = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__concat] = sym__concat,
  [ts_external_token__brace_concat] = sym__brace_concat,
  [ts_external_token__concat_list] = sym__concat_list,
  [ts_external_token__begin_brace] = sym__begin_brace,
  [ts_external_token__override_var_name] = sym__override_var_name,
  [ts_external_token__override_var_name_no_value] = sym__override_var_name_no_value,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__concat] = true,
    [ts_external_token__brace_concat] = true,
    [ts_external_token__concat_list] = true,
    [ts_external_token__begin_brace] = true,
    [ts_external_token__override_var_name] = true,
    [ts_external_token__override_var_name_no_value] = true,
  },
  [2] = {
    [ts_external_token__begin_brace] = true,
    [ts_external_token__override_var_name] = true,
    [ts_external_token__override_var_name_no_value] = true,
  },
  [3] = {
    [ts_external_token__concat] = true,
    [ts_external_token__concat_list] = true,
  },
  [4] = {
    [ts_external_token__concat] = true,
  },
  [5] = {
    [ts_external_token__override_var_name] = true,
    [ts_external_token__override_var_name_no_value] = true,
  },
  [6] = {
    [ts_external_token__concat] = true,
    [ts_external_token__concat_list] = true,
    [ts_external_token__override_var_name] = true,
    [ts_external_token__override_var_name_no_value] = true,
  },
  [7] = {
    [ts_external_token__concat] = true,
    [ts_external_token__override_var_name] = true,
    [ts_external_token__override_var_name_no_value] = true,
  },
  [8] = {
    [ts_external_token__concat_list] = true,
  },
  [9] = {
    [ts_external_token__brace_concat] = true,
    [ts_external_token__concat_list] = true,
  },
  [10] = {
    [ts_external_token__brace_concat] = true,
  },
};





#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fish_external_scanner_create(void);
void tree_sitter_fish_external_scanner_destroy(void *);
bool tree_sitter_fish_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fish_external_scanner_serialize(void *, char *);
void tree_sitter_fish_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fish_from_file(const char *path) {
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
    .keyword_capture_token = sym_word,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fish_external_scanner_create,
      tree_sitter_fish_external_scanner_destroy,
      tree_sitter_fish_external_scanner_scan,
      tree_sitter_fish_external_scanner_serialize,
      tree_sitter_fish_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 49848) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 49848, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 192, 142, 53, 65, 84, 231, 121, 67, 38, 76, 195, 8, 7, 27, 27, 0, 87, 91, 35, 233, 193, 164, 96, 162, 48, 32, 215, 36, 254, 200, 148, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 49848);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 49848);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 14200);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 37288);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 38984);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
