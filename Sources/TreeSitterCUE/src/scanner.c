#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <stdint.h>
#include <wctype.h>

enum TokenType {
  MULTI_STR_CONTENT,
  MULTI_BYTES_CONTENT,
  RAW_STR_CONTENT,
  RAW_BYTES_CONTENT,
  MULTI_RAW_STR_CONTENT,
  MULTI_RAW_BYTES_CONTENT,
  RAW_STR_START,
  RAW_BYTES_START,
  MULTI_RAW_STR_START,
  MULTI_RAW_BYTES_START,
  RAW_END,
  RAW_INTERPOLATION_START,
  CLOSED_HASH,
  SPREAD_INT,
  MULTIPLIER,
  LINE_START,
  ERROR_SENTINEL,
};

// A raw string is delimited by one or more '#' characters, as in
// ##"a"#b"##. Its escapes and interpolations take the same number of '#',
// as in \##(x). Interpolations can contain further raw strings, so the
// scanner keeps a stack of the raw strings that are open.
typedef struct {
  uint8_t hashes;
  char quote;
  bool multiline;
} RawString;

#define MAX_DEPTH 255

typedef struct {
  RawString stack[MAX_DEPTH];
  unsigned depth;
} Scanner;

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// scan_multiline scans the content of a multiline string or bytes literal
// without '#' delimiters, stopping before an interpolation, an escaped
// newline, or the closing quotes.
static bool scan_multiline(TSLexer *lexer, int c) {
  bool has_content = false;
  if (c == '"') {
    lexer->result_symbol = MULTI_STR_CONTENT;
  } else if (c == '\'') {
    lexer->result_symbol = MULTI_BYTES_CONTENT;
  }

  while (true) {
    switch (lexer->lookahead) {
    case '\'':
    case '"':
      if (lexer->lookahead != c) {
        // The other quote character is content, as in '""' in a """ string.
        advance(lexer);
        has_content = true;
        break;
      }
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == c) {
        advance(lexer);
        if (lexer->lookahead == c) {
          return has_content;
        }
      }
      // Quotes that do not close the literal are content, as in \(a)"\(b).
      has_content = true;
      break;
    case '\\':
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '(' || lexer->lookahead == '\n' ||
          lexer->lookahead == '\r') {
        return has_content;
      }
      // FIXME: Accept anything after '\'
      advance(lexer);
      has_content = true;
      break;
    case '\0':
      if (lexer->eof(lexer)) {
        return false;
      }
      advance(lexer);
      has_content = true;
      break;
    default:
      advance(lexer);
      has_content = true;
      break;
    }
  }
}

// scan_hash_start scans a token starting with '#': the opening delimiter of
// a raw string, which is one or more '#' then a quote, or three quotes for a
// multiline literal; or a single '#' directly before '[' or '{', which opens
// a closed list or struct.
static bool scan_hash_start(Scanner *s, TSLexer *lexer,
                            const bool *valid_symbols) {
  unsigned hashes = 0;
  while (lexer->lookahead == '#') {
    advance(lexer);
    hashes++;
  }
  if (hashes == 1 && (lexer->lookahead == '[' || lexer->lookahead == '{') &&
      valid_symbols[CLOSED_HASH]) {
    lexer->mark_end(lexer);
    lexer->result_symbol = CLOSED_HASH;
    return true;
  }
  if (hashes > UINT8_MAX || s->depth == MAX_DEPTH) {
    return false;
  }
  char quote = (char)lexer->lookahead;
  if (quote != '"' && quote != '\'') {
    return false;
  }
  advance(lexer);
  lexer->mark_end(lexer);
  bool multiline = false;
  if (lexer->lookahead == quote) {
    advance(lexer);
    if (lexer->lookahead == quote) {
      advance(lexer);
      // A multiline literal starts with a newline after its three quotes;
      // otherwise, as in #"""#, the literal is one line holding a quote.
      if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        lexer->mark_end(lexer);
        multiline = true;
      }
    }
  }
  enum TokenType symbol =
      quote == '"' ? (multiline ? MULTI_RAW_STR_START : RAW_STR_START)
                   : (multiline ? MULTI_RAW_BYTES_START : RAW_BYTES_START);
  if (!valid_symbols[symbol]) {
    return false;
  }
  s->stack[s->depth++] = (RawString){
      .hashes = (uint8_t)hashes, .quote = quote, .multiline = multiline};
  lexer->result_symbol = symbol;
  return true;
}

// scan_spread_int scans a decimal integer that "..." directly follows, as in
// the spread 1..., stopping before the ellipsis.
static bool scan_spread_int(TSLexer *lexer) {
  if (!iswdigit(lexer->lookahead)) {
    return false;
  }
  while (iswdigit(lexer->lookahead) || lexer->lookahead == '_') {
    advance(lexer);
  }
  lexer->mark_end(lexer);
  for (int i = 0; i < 3; i++) {
    if (lexer->lookahead != '.') {
      return false;
    }
    advance(lexer);
  }
  lexer->result_symbol = SPREAD_INT;
  return true;
}

// scan_multiplier scans the multiplier that directly follows a number, as in
// 1Ki and 1.5G.
static bool scan_multiplier(TSLexer *lexer) {
  switch (lexer->lookahead) {
  case 'K':
  case 'M':
  case 'G':
  case 'T':
  case 'P':
    break;
  default:
    return false;
  }
  advance(lexer);
  if (lexer->lookahead == 'i') {
    advance(lexer);
  }
  lexer->result_symbol = MULTIPLIER;
  return true;
}

// is_operator_start reports whether c can start an operator that is unary at
// the start of a line.
static bool is_operator_start(int32_t c) {
  switch (c) {
  case '-':
  case '+':
  case '!':
  case '*':
  case '<':
  case '>':
  case '=':
    return true;
  default:
    return false;
  }
}

// starts_unary_operator reports whether the lookahead starts a unary operator:
// -, +, !, *, or one of the relational operators <, <=, >, >=, ==, !=, =~ and
// !~. It may advance past the operator's first character.
static bool starts_unary_operator(TSLexer *lexer) {
  switch (lexer->lookahead) {
  case '-':
    advance(lexer);
    return lexer->lookahead != '>';
  case '+':
  case '!':
  case '*':
  case '<':
  case '>':
    return true;
  case '=':
    advance(lexer);
    return lexer->lookahead == '=' || lexer->lookahead == '~';
  default:
    return false;
  }
}

// scan_hashes advances over up to n '#' characters and reports whether there
// were n of them.
static bool scan_hashes(TSLexer *lexer, unsigned n) {
  for (unsigned i = 0; i < n; i++) {
    if (lexer->lookahead != '#') {
      return false;
    }
    advance(lexer);
  }
  return true;
}

// scan_raw_body scans inside the innermost open raw string: its content, its
// closing delimiter, or the start of an interpolation. It stops before an
// escape, which the grammar scans.
static bool scan_raw_body(Scanner *s, TSLexer *lexer,
                          const bool *valid_symbols) {
  RawString *top = &s->stack[s->depth - 1];
  enum TokenType content =
      top->quote == '"'
          ? (top->multiline ? MULTI_RAW_STR_CONTENT : RAW_STR_CONTENT)
          : (top->multiline ? MULTI_RAW_BYTES_CONTENT : RAW_BYTES_CONTENT);
  unsigned quotes = top->multiline ? 3 : 1;
  bool has_content = false;

  while (true) {
    if (lexer->lookahead == top->quote) {
      lexer->mark_end(lexer);
      unsigned n = 0;
      while (n < quotes && lexer->lookahead == top->quote) {
        advance(lexer);
        n++;
      }
      if (n == quotes && scan_hashes(lexer, top->hashes)) {
        if (has_content) {
          lexer->result_symbol = content;
          return valid_symbols[content];
        }
        if (!valid_symbols[RAW_END]) {
          return false;
        }
        lexer->mark_end(lexer);
        s->depth--;
        lexer->result_symbol = RAW_END;
        return true;
      }
      has_content = true;
      continue;
    }
    if (lexer->lookahead == '\\') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (scan_hashes(lexer, top->hashes)) {
        if (has_content) {
          lexer->result_symbol = content;
          return valid_symbols[content];
        }
        if (lexer->lookahead == '(' &&
            valid_symbols[RAW_INTERPOLATION_START]) {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = RAW_INTERPOLATION_START;
          return true;
        }
        // An escape: the grammar scans it.
        return false;
      }
      has_content = true;
      continue;
    }
    if (lexer->eof(lexer)) {
      return false;
    }
    advance(lexer);
    has_content = true;
  }
}

static bool scan(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[ERROR_SENTINEL]) {
    return false;
  }
  if (valid_symbols[MULTI_STR_CONTENT]) {
    return scan_multiline(lexer, '"');
  }
  if (valid_symbols[MULTI_BYTES_CONTENT]) {
    return scan_multiline(lexer, '\'');
  }
  if (valid_symbols[RAW_END] && s->depth > 0) {
    return scan_raw_body(s, lexer, valid_symbols);
  }
  if (valid_symbols[MULTIPLIER] && scan_multiplier(lexer)) {
    return true;
  }
  // The tokens below can follow whitespace.
  bool hash_start = valid_symbols[RAW_STR_START] ||
                    valid_symbols[RAW_BYTES_START] ||
                    valid_symbols[MULTI_RAW_STR_START] ||
                    valid_symbols[MULTI_RAW_BYTES_START] ||
                    valid_symbols[CLOSED_HASH];
  if (!hash_start && !valid_symbols[SPREAD_INT] &&
      !valid_symbols[LINE_START]) {
    return false;
  }
  bool newline = false;
  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      newline = true;
    }
    skip(lexer);
  }
  // An operator at the start of a line is unary: CUE ends the line before it
  // with a comma unless the line ends with an operator, so it never reads such
  // an operator as binary. The token is empty and precedes the operator.
  if (newline && valid_symbols[LINE_START] &&
      is_operator_start(lexer->lookahead)) {
    lexer->mark_end(lexer);
    if (starts_unary_operator(lexer)) {
      lexer->result_symbol = LINE_START;
      return true;
    }
    return false;
  }
  if (lexer->lookahead == '#') {
    return hash_start && scan_hash_start(s, lexer, valid_symbols);
  }
  return valid_symbols[SPREAD_INT] && scan_spread_int(lexer);
}

void *tree_sitter_cue_external_scanner_create() {
  return ts_calloc(1, sizeof(Scanner));
}

bool tree_sitter_cue_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  return scan((Scanner *)payload, lexer, valid_symbols);
}

unsigned tree_sitter_cue_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  buffer[size++] = (char)s->depth;
  for (unsigned i = 0; i < s->depth; i++) {
    buffer[size++] = (char)s->stack[i].hashes;
    buffer[size++] = s->stack[i].quote;
    buffer[size++] = (char)s->stack[i].multiline;
  }
  return size;
}

void tree_sitter_cue_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {
  Scanner *s = (Scanner *)payload;
  s->depth = 0;
  if (length == 0) {
    return;
  }
  unsigned depth = (uint8_t)buffer[0];
  if (length < 1 + 3 * depth) {
    return;
  }
  for (unsigned i = 0; i < depth; i++) {
    s->stack[i].hashes = (uint8_t)buffer[1 + 3 * i];
    s->stack[i].quote = buffer[2 + 3 * i];
    s->stack[i].multiline = buffer[3 + 3 * i] != 0;
  }
  s->depth = depth;
}

void tree_sitter_cue_external_scanner_destroy(void *payload) {
  ts_free(payload);
}
