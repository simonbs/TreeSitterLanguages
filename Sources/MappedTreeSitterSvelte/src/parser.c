#define tree_sitter_svelte_external_scanner_create mapped_tree_sitter_svelte_external_scanner_create
#define tree_sitter_svelte_external_scanner_deserialize mapped_tree_sitter_svelte_external_scanner_deserialize
#define tree_sitter_svelte_external_scanner_destroy mapped_tree_sitter_svelte_external_scanner_destroy
#define tree_sitter_svelte_external_scanner_scan mapped_tree_sitter_svelte_external_scanner_scan
#define tree_sitter_svelte_external_scanner_serialize mapped_tree_sitter_svelte_external_scanner_serialize
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
#define STATE_COUNT 345
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 16
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_DQUOTE = 13,
  sym_text = 14,
  aux_sym__single_quoted_attribute_value_token1 = 15,
  aux_sym__double_quoted_attribute_value_token1 = 16,
  anon_sym_POUND = 17,
  anon_sym_if = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  anon_sym_elseif = 22,
  anon_sym_else = 23,
  anon_sym_SLASH = 24,
  anon_sym_each = 25,
  anon_sym_as = 26,
  anon_sym_await = 27,
  anon_sym_then = 28,
  anon_sym_catch = 29,
  anon_sym_key = 30,
  anon_sym_snippet = 31,
  aux_sym_snippet_start_token1 = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  aux_sym__tag_value_token1 = 35,
  anon_sym_AT = 36,
  anon_sym_html = 37,
  anon_sym_const = 38,
  anon_sym_debug = 39,
  anon_sym_render = 40,
  sym__start_tag_name = 41,
  sym__script_start_tag_name = 42,
  sym__style_start_tag_name = 43,
  sym__end_tag_name = 44,
  sym_erroneous_end_tag_name = 45,
  sym__implicit_end_tag = 46,
  sym_raw_text = 47,
  sym_comment = 48,
  sym_svelte_raw_text = 49,
  sym_svelte_raw_text_each = 50,
  sym_svelte_raw_text_snippet_arguments = 51,
  sym_document = 52,
  sym_doctype = 53,
  sym__node = 54,
  sym_element = 55,
  sym_script_element = 56,
  sym_style_element = 57,
  sym_start_tag = 58,
  sym_script_start_tag = 59,
  sym_style_start_tag = 60,
  sym_self_closing_tag = 61,
  sym_end_tag = 62,
  sym_erroneous_end_tag = 63,
  sym_attribute = 64,
  sym_quoted_attribute_value = 65,
  aux_sym__single_quoted_attribute_value = 66,
  aux_sym__double_quoted_attribute_value = 67,
  sym_if_statement = 68,
  sym__if_start_tag = 69,
  sym_if_start = 70,
  sym__else_if_tag = 71,
  sym_else_if_start = 72,
  sym_else_if_block = 73,
  sym__else_tag = 74,
  sym_else_start = 75,
  sym_else_block = 76,
  sym__if_end_tag = 77,
  sym_if_end = 78,
  sym_each_statement = 79,
  sym__each_start_tag = 80,
  sym_each_start = 81,
  sym__each_end_tag = 82,
  sym_each_end = 83,
  sym_await_statement = 84,
  sym__await_start_tag = 85,
  sym_await_start = 86,
  sym__then_tag = 87,
  sym_then_start = 88,
  sym_then_block = 89,
  sym__catch_tag = 90,
  sym_catch_start = 91,
  sym_catch_block = 92,
  sym__await_end_tag = 93,
  sym_await_end = 94,
  sym_key_statement = 95,
  sym__key_start_tag = 96,
  sym_key_start = 97,
  sym__key_end_tag = 98,
  sym_key_end = 99,
  sym_snippet_statement = 100,
  sym__snippet_start_tag = 101,
  sym_snippet_start = 102,
  sym__snippet_end_tag = 103,
  sym_snippet_end = 104,
  sym_expression = 105,
  sym__tag_value = 106,
  sym__html_tag = 107,
  sym_html_tag = 108,
  sym__const_tag = 109,
  sym_const_tag = 110,
  sym__debug_tag = 111,
  sym_debug_tag = 112,
  sym__render_tag = 113,
  sym_render_tag = 114,
  aux_sym_document_repeat1 = 115,
  aux_sym_start_tag_repeat1 = 116,
  aux_sym_if_statement_repeat1 = 117,
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
  [anon_sym_DQUOTE] = "\"",
  [sym_text] = "text",
  [aux_sym__single_quoted_attribute_value_token1] = "_single_quoted_attribute_value_token1",
  [aux_sym__double_quoted_attribute_value_token1] = "_double_quoted_attribute_value_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_SLASH] = "/",
  [anon_sym_each] = "each",
  [anon_sym_as] = "as",
  [anon_sym_await] = "await",
  [anon_sym_then] = "then",
  [anon_sym_catch] = "catch",
  [anon_sym_key] = "key",
  [anon_sym_snippet] = "snippet",
  [aux_sym_snippet_start_token1] = "snippet_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__tag_value_token1] = "_tag_value_token1",
  [anon_sym_AT] = "@",
  [anon_sym_html] = "html",
  [anon_sym_const] = "const",
  [anon_sym_debug] = "debug",
  [anon_sym_render] = "render",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_svelte_raw_text] = "svelte_raw_text",
  [sym_svelte_raw_text_each] = "svelte_raw_text",
  [sym_svelte_raw_text_snippet_arguments] = "svelte_raw_text",
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
  [aux_sym__single_quoted_attribute_value] = "_single_quoted_attribute_value",
  [aux_sym__double_quoted_attribute_value] = "_double_quoted_attribute_value",
  [sym_if_statement] = "if_statement",
  [sym__if_start_tag] = "block_start_tag",
  [sym_if_start] = "if_start",
  [sym__else_if_tag] = "block_tag",
  [sym_else_if_start] = "else_if_start",
  [sym_else_if_block] = "else_if_block",
  [sym__else_tag] = "block_tag",
  [sym_else_start] = "else_start",
  [sym_else_block] = "else_block",
  [sym__if_end_tag] = "block_end_tag",
  [sym_if_end] = "if_end",
  [sym_each_statement] = "each_statement",
  [sym__each_start_tag] = "block_start_tag",
  [sym_each_start] = "each_start",
  [sym__each_end_tag] = "block_end_tag",
  [sym_each_end] = "each_end",
  [sym_await_statement] = "await_statement",
  [sym__await_start_tag] = "block_start_tag",
  [sym_await_start] = "await_start",
  [sym__then_tag] = "block_tag",
  [sym_then_start] = "then_start",
  [sym_then_block] = "then_block",
  [sym__catch_tag] = "block_tag",
  [sym_catch_start] = "catch_start",
  [sym_catch_block] = "catch_block",
  [sym__await_end_tag] = "block_end_tag",
  [sym_await_end] = "await_end",
  [sym_key_statement] = "key_statement",
  [sym__key_start_tag] = "block_start_tag",
  [sym_key_start] = "key_start",
  [sym__key_end_tag] = "block_end_tag",
  [sym_key_end] = "key_end",
  [sym_snippet_statement] = "snippet_statement",
  [sym__snippet_start_tag] = "block_start_tag",
  [sym_snippet_start] = "snippet_start",
  [sym__snippet_end_tag] = "block_end_tag",
  [sym_snippet_end] = "snippet_end",
  [sym_expression] = "expression",
  [sym__tag_value] = "_tag_value",
  [sym__html_tag] = "expression_tag",
  [sym_html_tag] = "html_tag",
  [sym__const_tag] = "expression_tag",
  [sym_const_tag] = "const_tag",
  [sym__debug_tag] = "expression_tag",
  [sym_debug_tag] = "debug_tag",
  [sym__render_tag] = "expression_tag",
  [sym_render_tag] = "render_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_text] = sym_text,
  [aux_sym__single_quoted_attribute_value_token1] = aux_sym__single_quoted_attribute_value_token1,
  [aux_sym__double_quoted_attribute_value_token1] = aux_sym__double_quoted_attribute_value_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_snippet] = anon_sym_snippet,
  [aux_sym_snippet_start_token1] = aux_sym_snippet_start_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__tag_value_token1] = aux_sym__tag_value_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_render] = anon_sym_render,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_svelte_raw_text] = sym_svelte_raw_text,
  [sym_svelte_raw_text_each] = sym_svelte_raw_text,
  [sym_svelte_raw_text_snippet_arguments] = sym_svelte_raw_text,
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
  [aux_sym__single_quoted_attribute_value] = aux_sym__single_quoted_attribute_value,
  [aux_sym__double_quoted_attribute_value] = aux_sym__double_quoted_attribute_value,
  [sym_if_statement] = sym_if_statement,
  [sym__if_start_tag] = sym__if_start_tag,
  [sym_if_start] = sym_if_start,
  [sym__else_if_tag] = sym__else_if_tag,
  [sym_else_if_start] = sym_else_if_start,
  [sym_else_if_block] = sym_else_if_block,
  [sym__else_tag] = sym__else_if_tag,
  [sym_else_start] = sym_else_start,
  [sym_else_block] = sym_else_block,
  [sym__if_end_tag] = sym__if_end_tag,
  [sym_if_end] = sym_if_end,
  [sym_each_statement] = sym_each_statement,
  [sym__each_start_tag] = sym__if_start_tag,
  [sym_each_start] = sym_each_start,
  [sym__each_end_tag] = sym__if_end_tag,
  [sym_each_end] = sym_each_end,
  [sym_await_statement] = sym_await_statement,
  [sym__await_start_tag] = sym__if_start_tag,
  [sym_await_start] = sym_await_start,
  [sym__then_tag] = sym__else_if_tag,
  [sym_then_start] = sym_then_start,
  [sym_then_block] = sym_then_block,
  [sym__catch_tag] = sym__else_if_tag,
  [sym_catch_start] = sym_catch_start,
  [sym_catch_block] = sym_catch_block,
  [sym__await_end_tag] = sym__if_end_tag,
  [sym_await_end] = sym_await_end,
  [sym_key_statement] = sym_key_statement,
  [sym__key_start_tag] = sym__if_start_tag,
  [sym_key_start] = sym_key_start,
  [sym__key_end_tag] = sym__if_end_tag,
  [sym_key_end] = sym_key_end,
  [sym_snippet_statement] = sym_snippet_statement,
  [sym__snippet_start_tag] = sym__if_start_tag,
  [sym_snippet_start] = sym_snippet_start,
  [sym__snippet_end_tag] = sym__if_end_tag,
  [sym_snippet_end] = sym_snippet_end,
  [sym_expression] = sym_expression,
  [sym__tag_value] = sym__tag_value,
  [sym__html_tag] = sym__html_tag,
  [sym_html_tag] = sym_html_tag,
  [sym__const_tag] = sym__html_tag,
  [sym_const_tag] = sym_const_tag,
  [sym__debug_tag] = sym__html_tag,
  [sym_debug_tag] = sym_debug_tag,
  [sym__render_tag] = sym__html_tag,
  [sym_render_tag] = sym_render_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__single_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snippet] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_snippet_start_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tag_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render] = {
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
  [sym_svelte_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_svelte_raw_text_each] = {
    .visible = true,
    .named = true,
  },
  [sym_svelte_raw_text_snippet_arguments] = {
    .visible = true,
    .named = true,
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
    .supertype = true,
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
  [aux_sym__single_quoted_attribute_value] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_attribute_value] = {
    .visible = false,
    .named = false,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__if_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym__else_if_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym__else_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_else_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym__if_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_if_end] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__each_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_each_start] = {
    .visible = true,
    .named = true,
  },
  [sym__each_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_each_end] = {
    .visible = true,
    .named = true,
  },
  [sym_await_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__await_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_await_start] = {
    .visible = true,
    .named = true,
  },
  [sym__then_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_then_start] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block] = {
    .visible = true,
    .named = true,
  },
  [sym__catch_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_start] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_block] = {
    .visible = true,
    .named = true,
  },
  [sym__await_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_await_end] = {
    .visible = true,
    .named = true,
  },
  [sym_key_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__key_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_key_start] = {
    .visible = true,
    .named = true,
  },
  [sym__key_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_key_end] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__snippet_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_start] = {
    .visible = true,
    .named = true,
  },
  [sym__snippet_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_value] = {
    .visible = false,
    .named = true,
  },
  [sym__html_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_html_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__const_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_const_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__debug_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__render_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_render_tag] = {
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
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_identifier = 2,
  field_parameter = 3,
  field_tag = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_identifier] = "identifier",
  [field_parameter] = "parameter",
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 1},
  [1] =
    {field_condition, 2},
    {field_tag, 1, .inherited = true},
  [3] =
    {field_identifier, 2},
    {field_tag, 1, .inherited = true},
  [5] =
    {field_tag, 1, .inherited = true},
  [6] =
    {field_identifier, 2},
    {field_parameter, 4},
    {field_tag, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_attribute_name,
  },
  [7] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__single_quoted_attribute_value, 2,
    aux_sym__single_quoted_attribute_value,
    sym_attribute_value,
  aux_sym__double_quoted_attribute_value, 2,
    aux_sym__double_quoted_attribute_value,
    sym_attribute_value,
  sym_expression, 2,
    sym_expression,
    sym_attribute_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 19,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 20,
  [31] = 31,
  [32] = 31,
  [33] = 29,
  [34] = 22,
  [35] = 24,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 55,
  [58] = 54,
  [59] = 59,
  [60] = 59,
  [61] = 61,
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
  [100] = 61,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 66,
  [107] = 62,
  [108] = 99,
  [109] = 105,
  [110] = 67,
  [111] = 68,
  [112] = 69,
  [113] = 70,
  [114] = 71,
  [115] = 72,
  [116] = 74,
  [117] = 75,
  [118] = 76,
  [119] = 77,
  [120] = 78,
  [121] = 80,
  [122] = 82,
  [123] = 83,
  [124] = 84,
  [125] = 85,
  [126] = 86,
  [127] = 87,
  [128] = 88,
  [129] = 89,
  [130] = 90,
  [131] = 91,
  [132] = 92,
  [133] = 93,
  [134] = 94,
  [135] = 95,
  [136] = 96,
  [137] = 97,
  [138] = 101,
  [139] = 102,
  [140] = 98,
  [141] = 141,
  [142] = 142,
  [143] = 103,
  [144] = 142,
  [145] = 65,
  [146] = 73,
  [147] = 104,
  [148] = 141,
  [149] = 64,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 81,
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 176,
  [179] = 179,
  [180] = 177,
  [181] = 179,
  [182] = 171,
  [183] = 172,
  [184] = 68,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 190,
  [193] = 189,
  [194] = 175,
  [195] = 185,
  [196] = 196,
  [197] = 197,
  [198] = 196,
  [199] = 188,
  [200] = 197,
  [201] = 186,
  [202] = 202,
  [203] = 68,
  [204] = 68,
  [205] = 68,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 206,
  [211] = 207,
  [212] = 209,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 216,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 219,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 225,
  [231] = 231,
  [232] = 218,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 223,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 231,
  [244] = 240,
  [245] = 245,
  [246] = 213,
  [247] = 215,
  [248] = 235,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 249,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 259,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 252,
  [292] = 270,
  [293] = 275,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 258,
  [308] = 268,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 299,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 249,
  [318] = 249,
  [319] = 249,
  [320] = 249,
  [321] = 321,
  [322] = 269,
  [323] = 289,
  [324] = 301,
  [325] = 315,
  [326] = 321,
  [327] = 327,
  [328] = 253,
  [329] = 329,
  [330] = 263,
  [331] = 331,
  [332] = 290,
  [333] = 303,
  [334] = 272,
  [335] = 327,
  [336] = 277,
  [337] = 277,
  [338] = 277,
  [339] = 274,
  [340] = 286,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
};

static TSCharacterRange sym_attribute_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '&'}, {'(', '.'}, {'0', ';'}, {'?', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 118,
        '#', 124,
        '&', 4,
        '\'', 117,
        '(', 142,
        ')', 143,
        '/', 133,
        ':', 128,
        '<', 71,
        '=', 74,
        '>', 69,
        '@', 145,
        'D', 56,
        'a', 43,
        'c', 9,
        'd', 15,
        'e', 8,
        'h', 47,
        'i', 24,
        'k', 16,
        'r', 21,
        's', 36,
        't', 29,
        '{', 126,
        '}', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '@') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 61:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 62:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(68);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_attribute_name);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 9, lookahead))) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_attribute_value);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 9, lookahead)) ||
          lookahead == '/') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__single_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__single_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__double_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__double_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_snippet);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_snippet_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__tag_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 64, .external_lex_state = 2},
  [2] = {.lex_state = 64, .external_lex_state = 2},
  [3] = {.lex_state = 64, .external_lex_state = 2},
  [4] = {.lex_state = 64, .external_lex_state = 2},
  [5] = {.lex_state = 64, .external_lex_state = 2},
  [6] = {.lex_state = 64, .external_lex_state = 2},
  [7] = {.lex_state = 64, .external_lex_state = 2},
  [8] = {.lex_state = 64, .external_lex_state = 2},
  [9] = {.lex_state = 64, .external_lex_state = 2},
  [10] = {.lex_state = 64, .external_lex_state = 2},
  [11] = {.lex_state = 64, .external_lex_state = 2},
  [12] = {.lex_state = 64, .external_lex_state = 2},
  [13] = {.lex_state = 64, .external_lex_state = 2},
  [14] = {.lex_state = 64, .external_lex_state = 3},
  [15] = {.lex_state = 64, .external_lex_state = 3},
  [16] = {.lex_state = 64, .external_lex_state = 3},
  [17] = {.lex_state = 64, .external_lex_state = 3},
  [18] = {.lex_state = 64, .external_lex_state = 2},
  [19] = {.lex_state = 64, .external_lex_state = 2},
  [20] = {.lex_state = 64, .external_lex_state = 2},
  [21] = {.lex_state = 64, .external_lex_state = 2},
  [22] = {.lex_state = 64, .external_lex_state = 2},
  [23] = {.lex_state = 64, .external_lex_state = 2},
  [24] = {.lex_state = 64, .external_lex_state = 2},
  [25] = {.lex_state = 64, .external_lex_state = 2},
  [26] = {.lex_state = 64, .external_lex_state = 2},
  [27] = {.lex_state = 64, .external_lex_state = 3},
  [28] = {.lex_state = 64, .external_lex_state = 2},
  [29] = {.lex_state = 64, .external_lex_state = 2},
  [30] = {.lex_state = 64, .external_lex_state = 2},
  [31] = {.lex_state = 64, .external_lex_state = 2},
  [32] = {.lex_state = 64, .external_lex_state = 2},
  [33] = {.lex_state = 64, .external_lex_state = 2},
  [34] = {.lex_state = 64, .external_lex_state = 2},
  [35] = {.lex_state = 64, .external_lex_state = 2},
  [36] = {.lex_state = 64, .external_lex_state = 2},
  [37] = {.lex_state = 64, .external_lex_state = 2},
  [38] = {.lex_state = 64, .external_lex_state = 2},
  [39] = {.lex_state = 64, .external_lex_state = 2},
  [40] = {.lex_state = 64, .external_lex_state = 2},
  [41] = {.lex_state = 64, .external_lex_state = 2},
  [42] = {.lex_state = 64, .external_lex_state = 2},
  [43] = {.lex_state = 64, .external_lex_state = 2},
  [44] = {.lex_state = 64, .external_lex_state = 2},
  [45] = {.lex_state = 64, .external_lex_state = 2},
  [46] = {.lex_state = 64, .external_lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 4},
  [48] = {.lex_state = 3, .external_lex_state = 4},
  [49] = {.lex_state = 3, .external_lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 4},
  [51] = {.lex_state = 3, .external_lex_state = 4},
  [52] = {.lex_state = 3, .external_lex_state = 4},
  [53] = {.lex_state = 3, .external_lex_state = 5},
  [54] = {.lex_state = 3, .external_lex_state = 5},
  [55] = {.lex_state = 3, .external_lex_state = 5},
  [56] = {.lex_state = 3, .external_lex_state = 5},
  [57] = {.lex_state = 3, .external_lex_state = 5},
  [58] = {.lex_state = 3, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 6},
  [60] = {.lex_state = 0, .external_lex_state = 6},
  [61] = {.lex_state = 64, .external_lex_state = 2},
  [62] = {.lex_state = 64, .external_lex_state = 2},
  [63] = {.lex_state = 64, .external_lex_state = 3},
  [64] = {.lex_state = 64, .external_lex_state = 2},
  [65] = {.lex_state = 6, .external_lex_state = 7},
  [66] = {.lex_state = 64, .external_lex_state = 2},
  [67] = {.lex_state = 64, .external_lex_state = 2},
  [68] = {.lex_state = 64, .external_lex_state = 2},
  [69] = {.lex_state = 64, .external_lex_state = 2},
  [70] = {.lex_state = 64, .external_lex_state = 2},
  [71] = {.lex_state = 64, .external_lex_state = 2},
  [72] = {.lex_state = 64, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 64, .external_lex_state = 2},
  [75] = {.lex_state = 64, .external_lex_state = 2},
  [76] = {.lex_state = 64, .external_lex_state = 2},
  [77] = {.lex_state = 64, .external_lex_state = 2},
  [78] = {.lex_state = 64, .external_lex_state = 2},
  [79] = {.lex_state = 64, .external_lex_state = 3},
  [80] = {.lex_state = 64, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 7},
  [82] = {.lex_state = 64, .external_lex_state = 2},
  [83] = {.lex_state = 64, .external_lex_state = 2},
  [84] = {.lex_state = 64, .external_lex_state = 2},
  [85] = {.lex_state = 64, .external_lex_state = 2},
  [86] = {.lex_state = 64, .external_lex_state = 2},
  [87] = {.lex_state = 64, .external_lex_state = 2},
  [88] = {.lex_state = 64, .external_lex_state = 2},
  [89] = {.lex_state = 64, .external_lex_state = 2},
  [90] = {.lex_state = 64, .external_lex_state = 2},
  [91] = {.lex_state = 64, .external_lex_state = 2},
  [92] = {.lex_state = 64, .external_lex_state = 2},
  [93] = {.lex_state = 64, .external_lex_state = 2},
  [94] = {.lex_state = 64, .external_lex_state = 2},
  [95] = {.lex_state = 64, .external_lex_state = 2},
  [96] = {.lex_state = 64, .external_lex_state = 2},
  [97] = {.lex_state = 64, .external_lex_state = 2},
  [98] = {.lex_state = 64, .external_lex_state = 3},
  [99] = {.lex_state = 64, .external_lex_state = 3},
  [100] = {.lex_state = 64, .external_lex_state = 3},
  [101] = {.lex_state = 64, .external_lex_state = 3},
  [102] = {.lex_state = 64, .external_lex_state = 3},
  [103] = {.lex_state = 64, .external_lex_state = 3},
  [104] = {.lex_state = 64, .external_lex_state = 3},
  [105] = {.lex_state = 64, .external_lex_state = 3},
  [106] = {.lex_state = 64, .external_lex_state = 3},
  [107] = {.lex_state = 64, .external_lex_state = 3},
  [108] = {.lex_state = 64, .external_lex_state = 2},
  [109] = {.lex_state = 64, .external_lex_state = 2},
  [110] = {.lex_state = 64, .external_lex_state = 3},
  [111] = {.lex_state = 64, .external_lex_state = 3},
  [112] = {.lex_state = 64, .external_lex_state = 3},
  [113] = {.lex_state = 64, .external_lex_state = 3},
  [114] = {.lex_state = 64, .external_lex_state = 3},
  [115] = {.lex_state = 64, .external_lex_state = 3},
  [116] = {.lex_state = 64, .external_lex_state = 3},
  [117] = {.lex_state = 64, .external_lex_state = 3},
  [118] = {.lex_state = 64, .external_lex_state = 3},
  [119] = {.lex_state = 64, .external_lex_state = 3},
  [120] = {.lex_state = 64, .external_lex_state = 3},
  [121] = {.lex_state = 64, .external_lex_state = 3},
  [122] = {.lex_state = 64, .external_lex_state = 3},
  [123] = {.lex_state = 64, .external_lex_state = 3},
  [124] = {.lex_state = 64, .external_lex_state = 3},
  [125] = {.lex_state = 64, .external_lex_state = 3},
  [126] = {.lex_state = 64, .external_lex_state = 3},
  [127] = {.lex_state = 64, .external_lex_state = 3},
  [128] = {.lex_state = 64, .external_lex_state = 3},
  [129] = {.lex_state = 64, .external_lex_state = 3},
  [130] = {.lex_state = 64, .external_lex_state = 3},
  [131] = {.lex_state = 64, .external_lex_state = 3},
  [132] = {.lex_state = 64, .external_lex_state = 3},
  [133] = {.lex_state = 64, .external_lex_state = 3},
  [134] = {.lex_state = 64, .external_lex_state = 3},
  [135] = {.lex_state = 64, .external_lex_state = 3},
  [136] = {.lex_state = 64, .external_lex_state = 3},
  [137] = {.lex_state = 64, .external_lex_state = 3},
  [138] = {.lex_state = 64, .external_lex_state = 2},
  [139] = {.lex_state = 64, .external_lex_state = 2},
  [140] = {.lex_state = 64, .external_lex_state = 2},
  [141] = {.lex_state = 6, .external_lex_state = 7},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 64, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 6, .external_lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 64, .external_lex_state = 2},
  [148] = {.lex_state = 6, .external_lex_state = 7},
  [149] = {.lex_state = 64, .external_lex_state = 3},
  [150] = {.lex_state = 6, .external_lex_state = 2},
  [151] = {.lex_state = 64, .external_lex_state = 2},
  [152] = {.lex_state = 64, .external_lex_state = 2},
  [153] = {.lex_state = 64, .external_lex_state = 2},
  [154] = {.lex_state = 64, .external_lex_state = 2},
  [155] = {.lex_state = 64, .external_lex_state = 2},
  [156] = {.lex_state = 64, .external_lex_state = 2},
  [157] = {.lex_state = 64, .external_lex_state = 2},
  [158] = {.lex_state = 64, .external_lex_state = 2},
  [159] = {.lex_state = 64, .external_lex_state = 2},
  [160] = {.lex_state = 64, .external_lex_state = 2},
  [161] = {.lex_state = 64, .external_lex_state = 2},
  [162] = {.lex_state = 6, .external_lex_state = 2},
  [163] = {.lex_state = 6, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 64, .external_lex_state = 2},
  [166] = {.lex_state = 1, .external_lex_state = 2},
  [167] = {.lex_state = 6, .external_lex_state = 2},
  [168] = {.lex_state = 6, .external_lex_state = 2},
  [169] = {.lex_state = 64, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 5, .external_lex_state = 2},
  [172] = {.lex_state = 2, .external_lex_state = 2},
  [173] = {.lex_state = 5, .external_lex_state = 2},
  [174] = {.lex_state = 2, .external_lex_state = 2},
  [175] = {.lex_state = 6, .external_lex_state = 7},
  [176] = {.lex_state = 3, .external_lex_state = 8},
  [177] = {.lex_state = 5, .external_lex_state = 2},
  [178] = {.lex_state = 3, .external_lex_state = 8},
  [179] = {.lex_state = 2, .external_lex_state = 2},
  [180] = {.lex_state = 5, .external_lex_state = 2},
  [181] = {.lex_state = 2, .external_lex_state = 2},
  [182] = {.lex_state = 5, .external_lex_state = 2},
  [183] = {.lex_state = 2, .external_lex_state = 2},
  [184] = {.lex_state = 6, .external_lex_state = 7},
  [185] = {.lex_state = 3, .external_lex_state = 8},
  [186] = {.lex_state = 6, .external_lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 6, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 6, .external_lex_state = 2},
  [195] = {.lex_state = 3, .external_lex_state = 8},
  [196] = {.lex_state = 6, .external_lex_state = 7},
  [197] = {.lex_state = 6, .external_lex_state = 7},
  [198] = {.lex_state = 6, .external_lex_state = 2},
  [199] = {.lex_state = 6, .external_lex_state = 2},
  [200] = {.lex_state = 6, .external_lex_state = 2},
  [201] = {.lex_state = 6, .external_lex_state = 2},
  [202] = {.lex_state = 5, .external_lex_state = 2},
  [203] = {.lex_state = 6, .external_lex_state = 2},
  [204] = {.lex_state = 5, .external_lex_state = 2},
  [205] = {.lex_state = 2, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 9},
  [207] = {.lex_state = 0, .external_lex_state = 10},
  [208] = {.lex_state = 2, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 9},
  [210] = {.lex_state = 0, .external_lex_state = 9},
  [211] = {.lex_state = 0, .external_lex_state = 10},
  [212] = {.lex_state = 0, .external_lex_state = 9},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 3, .external_lex_state = 11},
  [219] = {.lex_state = 3, .external_lex_state = 11},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 12},
  [222] = {.lex_state = 0, .external_lex_state = 12},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 3, .external_lex_state = 11},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 9},
  [227] = {.lex_state = 0, .external_lex_state = 13},
  [228] = {.lex_state = 0, .external_lex_state = 9},
  [229] = {.lex_state = 0, .external_lex_state = 9},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 3, .external_lex_state = 11},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 14},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 13},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 15},
  [239] = {.lex_state = 0, .external_lex_state = 13},
  [240] = {.lex_state = 0, .external_lex_state = 16},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 16},
  [245] = {.lex_state = 0, .external_lex_state = 13},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 13},
  [251] = {.lex_state = 3, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 17},
  [264] = {.lex_state = 0, .external_lex_state = 13},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 18},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 13},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 13},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 13},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 13},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 13},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 13},
  [295] = {.lex_state = 0, .external_lex_state = 13},
  [296] = {.lex_state = 0, .external_lex_state = 13},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 62, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 13},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 20, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 3, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 18},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 62, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 17},
  [331] = {.lex_state = 0, .external_lex_state = 2},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 13},
  [337] = {.lex_state = 0, .external_lex_state = 13},
  [338] = {.lex_state = 0, .external_lex_state = 13},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 2},
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
  ts_external_token_svelte_raw_text = 9,
  ts_external_token_svelte_raw_text_each = 10,
  ts_external_token_svelte_raw_text_snippet_arguments = 11,
  ts_external_token_AT = 12,
  ts_external_token_POUND = 13,
  ts_external_token_SLASH = 14,
  ts_external_token_COLON = 15,
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
  [ts_external_token_svelte_raw_text] = sym_svelte_raw_text,
  [ts_external_token_svelte_raw_text_each] = sym_svelte_raw_text_each,
  [ts_external_token_svelte_raw_text_snippet_arguments] = sym_svelte_raw_text_snippet_arguments,
  [ts_external_token_AT] = anon_sym_AT,
  [ts_external_token_POUND] = anon_sym_POUND,
  [ts_external_token_SLASH] = anon_sym_SLASH,
  [ts_external_token_COLON] = anon_sym_COLON,
};

static const bool ts_external_scanner_states[19][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_svelte_raw_text] = true,
    [ts_external_token_svelte_raw_text_each] = true,
    [ts_external_token_svelte_raw_text_snippet_arguments] = true,
    [ts_external_token_AT] = true,
    [ts_external_token_POUND] = true,
    [ts_external_token_SLASH] = true,
    [ts_external_token_COLON] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text] = true,
    [ts_external_token_AT] = true,
    [ts_external_token_POUND] = true,
    [ts_external_token_SLASH] = true,
    [ts_external_token_COLON] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text] = true,
    [ts_external_token_AT] = true,
    [ts_external_token_POUND] = true,
    [ts_external_token_SLASH] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text] = true,
    [ts_external_token_AT] = true,
    [ts_external_token_POUND] = true,
  },
  [7] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_SLASH] = true,
    [ts_external_token_COLON] = true,
  },
  [9] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token_comment] = true,
    [ts_external_token_SLASH] = true,
  },
  [12] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text] = true,
    [ts_external_token_svelte_raw_text_each] = true,
  },
  [13] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text] = true,
  },
  [14] = {
    [ts_external_token_comment] = true,
    [ts_external_token_COLON] = true,
  },
  [15] = {
    [ts_external_token_comment] = true,
    [ts_external_token_svelte_raw_text_snippet_arguments] = true,
  },
  [16] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [17] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [18] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_svelte_external_scanner_create(void);
void tree_sitter_svelte_external_scanner_destroy(void *);
bool tree_sitter_svelte_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_svelte_external_scanner_serialize(void *, char *);
void tree_sitter_svelte_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_svelte_from_file(const char *path) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_svelte_external_scanner_create,
      tree_sitter_svelte_external_scanner_destroy,
      tree_sitter_svelte_external_scanner_scan,
      tree_sitter_svelte_external_scanner_serialize,
      tree_sitter_svelte_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  _Static_assert(sizeof(TSParseActionEntry) == 8, "Grammar table ABI changed");
  if (!path) return NULL;
  int fd = open(path, O_RDONLY | O_CLOEXEC | O_NONBLOCK);
  if (fd < 0) return NULL;
  struct stat status;
  if (fstat(fd, &status) != 0 || !S_ISREG(status.st_mode) || status.st_size != 23448) {
    close(fd);
    return NULL;
  }
  const uint8_t *tables = mmap(NULL, 23448, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);
  if (tables == MAP_FAILED) return NULL;
  static const uint8_t expected_header[] = { 84, 83, 77, 65, 80, 48, 48, 49, 118, 119, 140, 164, 212, 37, 88, 44, 173, 37, 247, 37, 198, 219, 234, 107, 135, 193, 113, 10, 143, 64, 137, 194, 78, 173, 251, 213, 22, 210, 239, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (memcmp(tables, expected_header, sizeof(expected_header)) != 0) {
    munmap((void *)tables, 23448);
    return NULL;
  }
  TSLanguage *language_copy = malloc(sizeof(*language_copy));
  if (!language_copy) {
    munmap((void *)tables, 23448);
    return NULL;
  }
  *language_copy = language;
  language_copy->parse_table = (const uint16_t *)(tables + 64);
  language_copy->small_parse_table = (const uint16_t *)(tables + 536);
  language_copy->small_parse_table_map = (const uint32_t *)(tables + 15976);
  language_copy->parse_actions = (const TSParseActionEntry *)(tables + 17352);
  return language_copy;
}
#ifdef __cplusplus
}
#endif
