// Regression: scanners belonging to different documents must not share string
// delimiters, and restoring an empty state must discard an unfinished string.
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/api.h>
#include "tree_sitter/parser.h"

extern const TSLanguage *tree_sitter_jsonnet(void);
extern void *tree_sitter_jsonnet_external_scanner_create(void);
extern void tree_sitter_jsonnet_external_scanner_destroy(void *);
extern bool tree_sitter_jsonnet_external_scanner_scan(void *, TSLexer *, const bool *);
extern unsigned tree_sitter_jsonnet_external_scanner_serialize(void *, char *);
extern void tree_sitter_jsonnet_external_scanner_deserialize(void *, const char *, unsigned);

enum { STRING_START, STRING_CONTENT, STRING_END };
typedef struct { TSLexer lexer; const char *position; } Input;

static void advance(TSLexer *lexer, bool skip) {
  (void)skip;
  Input *input = (Input *)lexer;
  if (*input->position) input->position++;
  lexer->lookahead = (unsigned char)*input->position;
}

static void mark_end(TSLexer *lexer) { (void)lexer; }

static Input input(const char *text) {
  Input result = {0};
  result.position = text;
  result.lexer.lookahead = (unsigned char)*text;
  result.lexer.advance = advance;
  result.lexer.mark_end = mark_end;
  return result;
}

static void expect_token(void *scanner, Input *input, unsigned token) {
  bool valid[3] = {false, false, false};
  valid[token] = true;
  assert(tree_sitter_jsonnet_external_scanner_scan(scanner, &input->lexer, valid));
  assert(input->lexer.result_symbol == token);
}

static void expect_document(TSParser *parser, const char *source) {
  TSTree *tree = ts_parser_parse_string(parser, NULL, source, (uint32_t)strlen(source));
  assert(tree);
  assert(!ts_node_has_error(ts_tree_root_node(tree)));
  ts_tree_delete(tree);
}

int main(void) {
  void *first = tree_sitter_jsonnet_external_scanner_create();
  void *second = tree_sitter_jsonnet_external_scanner_create();
  Input double_quoted = input("\"first\"");
  Input single_quoted = input("'second'");
  expect_token(first, &double_quoted, STRING_START);
  char saved[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
  assert(tree_sitter_jsonnet_external_scanner_serialize(first, saved) == 3);
  // This layout is persisted by Tree-sitter; retain compatibility with upstream.
  assert(saved[0] == 1 && saved[1] == '"' && saved[2] == 0);
  expect_token(second, &single_quoted, STRING_START);
  expect_token(first, &double_quoted, STRING_CONTENT);
  expect_token(first, &double_quoted, STRING_END);
  expect_token(second, &single_quoted, STRING_CONTENT);
  expect_token(second, &single_quoted, STRING_END);

  // Restoring a saved state works independently of the other document.
  tree_sitter_jsonnet_external_scanner_deserialize(first, saved, 3);
  Input restored = input("restored\"");
  expect_token(first, &restored, STRING_CONTENT);
  expect_token(first, &restored, STRING_END);

  Input unfinished = input("\"unfinished");
  expect_token(first, &unfinished, STRING_START);
  tree_sitter_jsonnet_external_scanner_deserialize(first, NULL, 0);
  Input fresh = input("'fresh'");
  expect_token(first, &fresh, STRING_START);
  expect_token(first, &fresh, STRING_CONTENT);
  expect_token(first, &fresh, STRING_END);
  tree_sitter_jsonnet_external_scanner_destroy(first);
  tree_sitter_jsonnet_external_scanner_destroy(second);

  TSParser *left = ts_parser_new(), *right = ts_parser_new();
  assert(ts_parser_set_language(left, tree_sitter_jsonnet()));
  assert(ts_parser_set_language(right, tree_sitter_jsonnet()));
  TSTree *incomplete = ts_parser_parse_string(left, NULL, "{value: \"unfinished", 19);
  assert(incomplete && ts_node_has_error(ts_tree_root_node(incomplete)));
  ts_tree_delete(incomplete);
  expect_document(right, "{value: 'independent'}");
  ts_parser_reset(left);
  expect_document(left, "{value: |||\n  block\n|||}");
  expect_document(right, "{value: \"still independent\"}");
  ts_parser_delete(left);
  ts_parser_delete(right);
  puts("Jsonnet scanner: PASS (independent documents, serialized restore, empty reset, parser reuse)");
  return 0;
}
