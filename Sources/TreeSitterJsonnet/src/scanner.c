// https://github.com/Azganoth/tree-sitter-lua/blob/master/src/scanner.cc
// https://github.com/MunifTanjim/tree-sitter-lua/
// and now here

#include <wctype.h>
#include <stdlib.h>
#include "tree_sitter/parser.h"

enum TokenType {
  STRING_START,
  STRING_CONTENT,
  STRING_END,
};

static inline void consume(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline bool consume_char(char c, TSLexer *lexer) {
  if (lexer->lookahead != c) {
    return false;
  }

  consume(lexer);
  return true;
}

static inline uint8_t consume_and_count_char(char c, TSLexer *lexer) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    ++count;
    consume(lexer);
  }
  return count;
}

static inline void skip_whitespaces(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }
}

enum InsideNode { INSIDE_NONE, INSIDE_STRING };

typedef struct {
  uint8_t inside_node;
  char ending_char;
  uint8_t level_count;
} Scanner;

void *tree_sitter_jsonnet_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_jsonnet_external_scanner_destroy(void *payload) {
  free(payload);
}

static inline void reset_state(Scanner *scanner) {
  scanner->inside_node = INSIDE_NONE;
  scanner->ending_char = 0;
  scanner->level_count = 0;
}

unsigned tree_sitter_jsonnet_external_scanner_serialize(void *payload, char *buffer) {
  const Scanner *scanner = payload;
  buffer[0] = scanner->inside_node;
  buffer[1] = scanner->ending_char;
  buffer[2] = scanner->level_count;
  return 3;
}

void tree_sitter_jsonnet_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = payload;
  // An empty serialized state starts a fresh parse; do not retain a prior string delimiter.
  reset_state(scanner);
  if (length > 0) scanner->inside_node = buffer[0];
  if (length > 1) scanner->ending_char = buffer[1];
  if (length > 2) scanner->level_count = buffer[2];
}

static bool scan_block_start(TSLexer *lexer) {
  if (consume_char('|', lexer) && consume_char('|', lexer) && consume_char('|', lexer)) {
    return true;
  }

  return false;
}

static bool scan_block_end(TSLexer *lexer) {
  if (consume_char('|', lexer) && consume_char('|', lexer) && consume_char('|', lexer)) {
    return true;
  }

  return false;
}

static bool scan_block_content(TSLexer *lexer) {
  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '|') {
      lexer->mark_end(lexer);

      if (scan_block_end(lexer)) {
        return true;
      }
    } else {
      consume(lexer);
    }
  }

  return false;
}

static bool scan_string_start(Scanner *scanner, TSLexer *lexer) {
  if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
    scanner->inside_node = INSIDE_STRING;
    scanner->ending_char = lexer->lookahead;
    consume(lexer);
    return true;
  }

  if (scan_block_start(lexer)) {
    scanner->inside_node = INSIDE_STRING;
    return true;
  }

  return false;
}

static bool scan_string_end(Scanner *scanner, TSLexer *lexer) {
  if (scanner->ending_char == 0) { // block string
    return scan_block_end(lexer);
  }

  if (consume_char(scanner->ending_char, lexer)) {
    return true;
  }

  return false;
}

static bool scan_string_content(Scanner *scanner, TSLexer *lexer) {
  if (scanner->ending_char == 0) { // block string
    return scan_block_content(lexer);
  }

  while (lexer->lookahead != '\n' && lexer->lookahead != 0 && lexer->lookahead != scanner->ending_char) {
    while (consume_char('\\', lexer) && consume_char('z', lexer)) continue;

    if (lexer->lookahead == 0) {
      return true;
    }

    consume(lexer);
  }

  return true;
}

bool tree_sitter_jsonnet_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = payload;
  if (scanner->inside_node == INSIDE_STRING) {
    if (valid_symbols[STRING_END] && scan_string_end(scanner, lexer)) {
      reset_state(scanner);
      lexer->result_symbol = STRING_END;
      return true;
    }

    if (valid_symbols[STRING_CONTENT] && scan_string_content(scanner, lexer)) {
      lexer->result_symbol = STRING_CONTENT;
      return true;
    }

    return false;
  }

  skip_whitespaces(lexer);

  if (valid_symbols[STRING_START] && scan_string_start(scanner, lexer)) {
    lexer->result_symbol = STRING_START;
    return true;
  }


  return false;
}
