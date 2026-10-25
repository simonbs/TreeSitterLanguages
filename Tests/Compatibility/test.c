#include <tree_sitter/api.h>
#include "../../Sources/TreeSitterLanguagesCommon/include/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern const TSLanguage *TEST_LANGUAGE(void);

static char *read_file(const char *path, uint32_t *length) {
  FILE *file = fopen(path, "rb");
  if (!file) { perror(path); exit(1); }
  fseek(file, 0, SEEK_END);
  *length = (uint32_t)ftell(file);
  rewind(file);
  char *text = malloc(*length + 1);
  if (fread(text, 1, *length, file) != *length) { exit(1); }
  text[*length] = '\0';
  fclose(file);
  return text;
}

int main(int argc, char **argv) {
  const TSLanguage *language = TEST_LANGUAGE();
  TSParser *parser = ts_parser_new();
  if (!ts_parser_set_language(parser, language)) {
    fprintf(stderr, "Unsupported language ABI: %u\n", ts_language_abi_version(language));
    return 1;
  }
  TSTree *tree = ts_parser_parse_string(parser, NULL, argv[1], (uint32_t)strlen(argv[1]));
  if (!tree || ts_node_has_error(ts_tree_root_node(tree))) {
    fprintf(stderr, "Failed to parse sample: %s\n", argv[1]);
    if (tree) {
      char *description = ts_node_string(ts_tree_root_node(tree));
      fprintf(stderr, "%s\n", description);
      free(description);
    }
    return 1;
  }
  int failures = 0;
  for (int i = 2; i < argc; i++) {
    uint32_t length, error_offset;
    TSQueryError error_type;
    char *source = read_file(argv[i], &length);
    TSQuery *query = ts_query_new(language, source, length, &error_offset, &error_type);
    if (!query) {
      fprintf(stderr, "%s: query error %u at byte %u\n", argv[i], error_type, error_offset);
      failures++;
    } else {
      TSQueryCursor *cursor = ts_query_cursor_new();
      ts_query_cursor_exec(cursor, query, ts_tree_root_node(tree));
      TSQueryMatch match;
      uint32_t capture_index;
      while (ts_query_cursor_next_capture(cursor, &match, &capture_index)) {}
      ts_query_cursor_delete(cursor);
      ts_query_delete(query);
    }
    free(source);
  }
  ts_tree_delete(tree);
  ts_parser_delete(parser);
  return failures != 0;
}
