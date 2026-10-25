// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See the LICENSE file in the project root for full license information.

#include "tree_sitter/parser.h"
#include <stdint.h>

enum TOKEN_TYPE {
    STATEMENT_BOUNDARY,
    ATTRIBUTE_STATEMENT_BOUNDARY,
    FOR_CLAUSE_BREAK,
    EXPANDABLE_STRING_IMMCONTENT,
};

enum UnicodeCodePoint {
    UNICODE_NO_BREAK_SPACE = 0x00A0,
    UNICODE_OGHAM_SPACE_MARK = 0x1680,
    UNICODE_EN_QUAD = 0x2000,
    UNICODE_ZERO_WIDTH_SPACE = 0x200B,
    UNICODE_NARROW_NO_BREAK_SPACE = 0x202F,
    UNICODE_MEDIUM_MATHEMATICAL_SPACE = 0x205F,
    UNICODE_WORD_JOINER = 0x2060,
    UNICODE_IDEOGRAPHIC_SPACE = 0x3000,
    UNICODE_BYTE_ORDER_MARK = 0xFEFF,
};

enum BlockCommentScanResult {
    BLOCK_COMMENT_NOT_STARTED,
    BLOCK_COMMENT_TERMINATED,
    BLOCK_COMMENT_UNTERMINATED,
};

/* --- API --- */

void *tree_sitter_powershell_external_scanner_create(void);

void tree_sitter_powershell_external_scanner_destroy(void *payload);

// NOLINTNEXTLINE(readability-non-const-parameter): Tree-sitter external scanner ABI requires char *.
unsigned tree_sitter_powershell_external_scanner_serialize(void *payload, char *buffer);

void tree_sitter_powershell_external_scanner_deserialize(void *payload, const char *buffer, unsigned length);

bool tree_sitter_powershell_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols);

/* --- Internal Functions --- */

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool is_newline(int32_t lookahead)
{
    if (lookahead == '\n') {
        return true;
    }
    return lookahead == '\r';
}

static bool is_statement_boundary_lookahead(int32_t lookahead)
{
    switch (lookahead) {
        case 0:
        case '}':
        case ')':
        case ';':
            return true;
        default:
            return false;
    }
}

static bool is_inline_trivia(int32_t lookahead)
{
    if (lookahead >= UNICODE_EN_QUAD && lookahead <= UNICODE_ZERO_WIDTH_SPACE) {
        return true;
    }

    switch (lookahead) {
        case ' ':
        case '\t':
        case '\f':
        case '\v':
        case UNICODE_OGHAM_SPACE_MARK:
        case UNICODE_NO_BREAK_SPACE:
        case UNICODE_NARROW_NO_BREAK_SPACE:
        case UNICODE_MEDIUM_MATHEMATICAL_SPACE:
        case UNICODE_WORD_JOINER:
        case UNICODE_IDEOGRAPHIC_SPACE:
        case UNICODE_BYTE_ORDER_MARK:
            return true;
        default:
            return false;
    }
}

static bool skip_line_continuation(TSLexer *lexer)
{
    if (lexer->lookahead != '`') {
        return false;
    }

    skip(lexer);
    if (lexer->lookahead == '\r') {
        skip(lexer);
        if (lexer->lookahead == '\n') {
            skip(lexer);
        }
        return true;
    }
    if (lexer->lookahead == '\n') {
        skip(lexer);
        return true;
    }

    return false;
}

static void skip_line_comment(TSLexer *lexer)
{
    skip(lexer);
    while (lexer->lookahead != 0 && !is_newline(lexer->lookahead)) {
        skip(lexer);
    }
}

static enum BlockCommentScanResult scan_block_comment(TSLexer *lexer)
{
    skip(lexer);
    if (lexer->lookahead != '#') {
        return BLOCK_COMMENT_NOT_STARTED;
    }

    skip(lexer);
    for (;;) {
        if (lexer->lookahead == 0) {
            return BLOCK_COMMENT_UNTERMINATED;
        }
        if (lexer->lookahead == '#') {
            skip(lexer);
            if (lexer->lookahead == '>') {
                skip(lexer);
                return BLOCK_COMMENT_TERMINATED;
            }
            continue;
        }
        skip(lexer);
    }
}

static bool has_line_initial_pipeline_continuation(TSLexer *lexer)
{
    if (lexer->lookahead == '|') {
        return true;
    }
    if (lexer->lookahead != '&') {
        return false;
    }

    skip(lexer);
    return lexer->lookahead == '&';
}

static bool has_param_block_lookahead(TSLexer *lexer)
{
    const char *keyword = "param";
    for (unsigned i = 0; keyword[i] != '\0'; i++) {
        int32_t lookahead = lexer->lookahead;
        if (lookahead >= 'A' && lookahead <= 'Z') {
            lookahead = lookahead - 'A' + 'a';
        }
        if (lookahead != keyword[i]) {
            return false;
        }
        skip(lexer);
    }

    while (is_inline_trivia(lexer->lookahead)) {
        skip(lexer);
    }

    return lexer->lookahead == '(';
}

static void skip_quoted_string(TSLexer *lexer, int32_t quote)
{
    skip(lexer);
    while (lexer->lookahead != 0) {
        if (lexer->lookahead == '`') {
            skip(lexer);
            if (lexer->lookahead != 0) {
                skip(lexer);
            }
            continue;
        }
        if (lexer->lookahead == quote) {
            skip(lexer);
            if (quote == '\'' && lexer->lookahead == '\'') {
                skip(lexer);
                continue;
            }
            if (quote == '"' && lexer->lookahead == '"') {
                skip(lexer);
                continue;
            }
            return;
        }
        skip(lexer);
    }
}

static bool skip_attribute_form(TSLexer *lexer)
{
    if (lexer->lookahead != '[') {
        return false;
    }

    unsigned depth = 0;
    do {
        if (lexer->lookahead == 0) {
            return false;
        }
        if (lexer->lookahead == '\'' || lexer->lookahead == '"') {
            skip_quoted_string(lexer, lexer->lookahead);
            continue;
        }
        if (lexer->lookahead == '[') {
            depth++;
        } else if (lexer->lookahead == ']') {
            depth--;
        } else if (lexer->lookahead == '`') {
            skip(lexer);
            if (lexer->lookahead == 0) {
                return false;
            }
        }
        skip(lexer);
    } while (depth > 0);

    return true;
}

static bool has_attribute_list_param_block_lookahead(TSLexer *lexer)
{
    while (skip_attribute_form(lexer)) {
        bool saw_newline = false;
        for (;;) {
            if (is_newline(lexer->lookahead)) {
                saw_newline = true;
                skip(lexer);
                continue;
            }
            if (is_inline_trivia(lexer->lookahead)) {
                skip(lexer);
                continue;
            }
            if (lexer->lookahead == '#') {
                skip_line_comment(lexer);
                continue;
            }
            if (lexer->lookahead == '<') {
                enum BlockCommentScanResult block_comment = scan_block_comment(lexer);
                if (block_comment == BLOCK_COMMENT_TERMINATED) {
                    continue;
                }
                break;
            }
            break;
        }
        if (!saw_newline) {
            break;
        }
    }

    return has_param_block_lookahead(lexer);
}

static bool scan_statement_boundary(TSLexer *lexer, const bool *valid_symbols)
{
    if (!valid_symbols[STATEMENT_BOUNDARY]) {
        return false;
    }

    lexer->result_symbol = STATEMENT_BOUNDARY;
    // This token has no characters -- everything is lookahead to determine its existence.
    lexer->mark_end(lexer);

    bool saw_newline = false;
    for (;;) {
        if (is_statement_boundary_lookahead(lexer->lookahead)) {
            return true;
        }
        if (is_newline(lexer->lookahead)) {
            saw_newline = true;
            skip(lexer);
            continue;
        }
        if (is_inline_trivia(lexer->lookahead)) {
            skip(lexer);
            continue;
        }
        if (skip_line_continuation(lexer)) {
            continue;
        }
        // Comments (line `#...` and block `<# ... #>`) are extras to PowerShell
        // and must not terminate a pipeline that continues on a subsequent line
        // with a leading `|`, `||`, or `&&`.
        if (lexer->lookahead == '#') {
            skip_line_comment(lexer);
            continue;
        }
        if (lexer->lookahead == '<') {
            // Only `<#` starts a block comment; a bare `<` isn't our concern
            // and the main lexer will handle it (though it's not grammatical
            // at statement boundaries today).
            enum BlockCommentScanResult block_comment = scan_block_comment(lexer);
            if (block_comment == BLOCK_COMMENT_TERMINATED) {
                continue;
            }
            if (block_comment == BLOCK_COMMENT_UNTERMINATED) {
                return true;
            }
            return saw_newline;
        }
        if (saw_newline) {
            // PowerShell 7 pipeline continuation: a line-initial `|`, `||`, or `&&`
            // continues the current pipeline, so suppress the boundary.
            if (has_line_initial_pipeline_continuation(lexer)) {
                return false;
            }
            return true;
        }
        return false;
    }
}

static bool scan_attribute_statement_boundary(TSLexer *lexer)
{
    lexer->result_symbol = ATTRIBUTE_STATEMENT_BOUNDARY;
    lexer->mark_end(lexer);

    bool saw_newline = false;
    for (;;) {
        if (is_statement_boundary_lookahead(lexer->lookahead)) {
            return true;
        }
        if (is_newline(lexer->lookahead)) {
            saw_newline = true;
            skip(lexer);
            continue;
        }
        if (is_inline_trivia(lexer->lookahead)) {
            skip(lexer);
            continue;
        }
        if (skip_line_continuation(lexer)) {
            continue;
        }
        if (lexer->lookahead == '#') {
            skip_line_comment(lexer);
            continue;
        }
        if (lexer->lookahead == '<') {
            enum BlockCommentScanResult block_comment = scan_block_comment(lexer);
            if (block_comment == BLOCK_COMMENT_TERMINATED) {
                continue;
            }
            if (block_comment == BLOCK_COMMENT_UNTERMINATED) {
                return true;
            }
            return saw_newline;
        }
        if (!saw_newline) {
            return false;
        }
        if (has_line_initial_pipeline_continuation(lexer)) {
            return false;
        }
        // A line-initial `param(...)` after attributes should remain part of a
        // script/program param block, not start a standalone attribute statement.
        if (has_attribute_list_param_block_lookahead(lexer)) {
            return false;
        }
        return true;
    }
}

static bool scan_for_clause_break(TSLexer *lexer, const bool *valid_symbols)
{
    if (!valid_symbols[FOR_CLAUSE_BREAK]) {
        return false;
    }

    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
        }
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
    } else {
        return false;
    }

    while (is_inline_trivia(lexer->lookahead)) {
        skip(lexer);
    }

    lexer->result_symbol = FOR_CLAUSE_BREAK;
    // A newline-style `for (...)` separator is only valid between present clauses.
    lexer->mark_end(lexer);
    return true;
}

static bool scan_expandable_string_immcontent(TSLexer *lexer, const bool *valid_symbols)
{
    if (!valid_symbols[EXPANDABLE_STRING_IMMCONTENT]) {
        return false;
    }

    // Error recovery enables every external symbol at once. If both
    // STATEMENT_BOUNDARY and FOR_CLAUSE_BREAK are also valid we're
    // speculating outside any string context — bail so recovery doesn't
    // swallow whole lines as string content.
    if (valid_symbols[STATEMENT_BOUNDARY] && valid_symbols[FOR_CLAUSE_BREAK]) {
        return false;
    }

    bool advanced = false;
    // Expandable strings may span multiple lines. Stopping at `\r`/`\n`
    // would let the `comment` extra fire at the start of the next line and
    // eat a leading `#` — the exact bug this external token exists to
    // prevent.
    while (lexer->lookahead != 0 &&
           lexer->lookahead != '$' &&
           lexer->lookahead != '`' &&
           lexer->lookahead != '"') {
        lexer->advance(lexer, false);
        advanced = true;
    }
    if (!advanced) {
        return false;
    }

    lexer->result_symbol = EXPANDABLE_STRING_IMMCONTENT;
    lexer->mark_end(lexer);
    return true;
}

/* --- API Implementation --- */

bool tree_sitter_powershell_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    (void)payload;

    if (scan_expandable_string_immcontent(lexer, valid_symbols)) {
        return true;
    }
    if (valid_symbols[ATTRIBUTE_STATEMENT_BOUNDARY]) {
        return scan_attribute_statement_boundary(lexer);
    }
    if (scan_for_clause_break(lexer, valid_symbols)) {
        return true;
    }
    return scan_statement_boundary(lexer, valid_symbols);
}

void *tree_sitter_powershell_external_scanner_create(void)
{
    return NULL;
}

void tree_sitter_powershell_external_scanner_destroy(void *payload)
{
    (void)payload;
}

// NOLINTNEXTLINE(readability-non-const-parameter): Tree-sitter external scanner ABI requires char *.
unsigned tree_sitter_powershell_external_scanner_serialize(void *payload, char *buffer)
{
    (void)payload;
    (void)buffer;
    return 0;
}

void tree_sitter_powershell_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
{
    (void)payload;
    (void)buffer;
    (void)length;
}
