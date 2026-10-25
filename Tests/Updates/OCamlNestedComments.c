#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <tree_sitter/api.h>

extern const TSLanguage *tree_sitter_ocaml(void);

static void *parse_nested_comments(void *unused) {
  (void)unused;
  const uint32_t depth = 20000;
  const char *suffix = "\nlet answer = 42\n";
  const size_t length = depth * 4 + strlen(suffix);
  char *source = malloc(length + 1);
  assert(source);
  for (uint32_t i = 0; i < depth; i++) memcpy(source + i * 2, "(*", 2);
  for (uint32_t i = 0; i < depth; i++) memcpy(source + depth * 2 + i * 2, "*)", 2);
  memcpy(source + depth * 4, suffix, strlen(suffix) + 1);

  TSParser *parser = ts_parser_new();
  assert(ts_parser_set_language(parser, tree_sitter_ocaml()));
  TSTree *tree = ts_parser_parse_string(parser, NULL, source, (uint32_t)length);
  assert(tree);
  TSNode root = ts_tree_root_node(tree);
  assert(!ts_node_has_error(root));
  TSNode comment = ts_node_named_child(root, 0);
  assert(strcmp(ts_node_type(comment), "comment") == 0);
  assert(ts_node_start_byte(comment) == 0);
  assert(ts_node_end_byte(comment) == depth * 4);
  assert(ts_node_named_child_count(root) >= 2);
  ts_tree_delete(tree);
  ts_parser_delete(parser);
  free(source);
  puts("OCaml: 20,000 nested comments parse with a 512 KiB stack; following declaration preserved");
  return NULL;
}

int main(void) {
  // A dedicated stack makes the bound effective on both macOS and Linux.
  pthread_attr_t attributes;
  assert(pthread_attr_init(&attributes) == 0);
  assert(pthread_attr_setstacksize(&attributes, 512 * 1024) == 0);
  pthread_t worker;
  assert(pthread_create(&worker, &attributes, parse_nested_comments, NULL) == 0);
  assert(pthread_join(worker, NULL) == 0);
  assert(pthread_attr_destroy(&attributes) == 0);
  return 0;
}
