#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
    CONCAT,
    BRACKET_CONCAT,
    CONCAT_LIST,
    BEGIN_BRACE,
    OVERRIDE_VAR_NAME,           // NAME when followed by =value (value present)
    OVERRIDE_VAR_NAME_NO_VALUE   // NAME= when followed by whitespace (no value)
};

// Check if character is valid for start of variable name in override context
static bool is_override_var_start(int32_t c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ||  c == '_';
}

// Check if character is valid for continuation of variable name
static bool is_override_var_continue(int32_t c) {
    return is_override_var_start(c) || (c == '-'); ;
}

void *tree_sitter_fish_external_scanner_create() { return NULL; }
void tree_sitter_fish_external_scanner_destroy(void *p) {}
void tree_sitter_fish_external_scanner_reset(void *p) {}
unsigned tree_sitter_fish_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_fish_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_fish_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols
) {
    // BEGIN_BRACE: { followed by whitespace or ; (for begin_statement)
    // Must take priority over internal '{' token used by brace_expansion
    if (valid_symbols[BEGIN_BRACE]) {
        // Skip leading whitespace (since whitespace is in extras)
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);  // skip=true for whitespace
        }

        if (lexer->lookahead == '{') {
            lexer->advance(lexer, false);  // consume '{'
            if (lexer->lookahead == ';' || iswspace(lexer->lookahead)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = BEGIN_BRACE;
                return true;
            }
        }
        // Not matched - return false to let internal lexer try
        // (returning false resets lexer state)
    }

    if (valid_symbols[CONCAT_LIST]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead != '['
        )) {
            lexer->result_symbol = CONCAT_LIST;
            return true;
        }
    }

    if (valid_symbols[CONCAT]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead == '>' ||
            lexer->lookahead == '<' ||
            lexer->lookahead == ')' ||
            lexer->lookahead == ';' ||
            lexer->lookahead == '&' ||
            lexer->lookahead == '|' ||
            iswspace(lexer->lookahead)
        )) {
            lexer->result_symbol = CONCAT;
            return true;
        }
    }

    if (valid_symbols[BRACKET_CONCAT]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead == ')' ||
            lexer->lookahead == '(' ||
            lexer->lookahead == '}' ||
            lexer->lookahead == ',' ||
            iswspace(lexer->lookahead)
        )) {
            lexer->result_symbol = BRACKET_CONCAT;
            return true;
        }
    }

    // Match variable name for override when followed by '='
    if (valid_symbols[OVERRIDE_VAR_NAME] || valid_symbols[OVERRIDE_VAR_NAME_NO_VALUE]) {
        // Skip any leading whitespace (marked as skipped so tree-sitter can roll back if needed)
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);  // true = mark as skipped/whitespace
        }

        if (is_override_var_start(lexer->lookahead)) {
            // Consume variable name
            lexer->advance(lexer, false);
            while (is_override_var_continue(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }

            // Must be followed by '='
            if (lexer->lookahead == '=') {
                lexer->mark_end(lexer);  // Mark end BEFORE the '='

                // Peek at what follows the '='
                lexer->advance(lexer, false);  // consume '='

                if (iswspace(lexer->lookahead) || lexer->lookahead == 0) {
                    // NAME= followed by whitespace - no value
                    if (valid_symbols[OVERRIDE_VAR_NAME_NO_VALUE]) {
                        lexer->mark_end(lexer);  // Include '=' in token
                        lexer->result_symbol = OVERRIDE_VAR_NAME_NO_VALUE;
                        return true;
                    }
                } else {
                    // NAME= followed by value
                    if (valid_symbols[OVERRIDE_VAR_NAME]) {
                        // mark_end was set before '=' - token is just NAME
                        lexer->result_symbol = OVERRIDE_VAR_NAME;
                        return true;
                    }
                }
            }
        }
    }

    return false;
}
