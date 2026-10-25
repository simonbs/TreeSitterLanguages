/* A partially parsed long string must not affect another editor or a reset parser. */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/api.h>
#include "../../Sources/TreeSitterLua/src/scanner.c"
extern const TSLanguage *tree_sitter_lua(void);

typedef struct {
    TSLexer lexer;
    const char *input;
    unsigned position;
} Lexer;
static void advance(TSLexer *lexer, bool skip) {
    (void)skip;
    Lexer *state = (Lexer *)lexer;
    if (state->input[state->position]) state->position++;
    lexer->lookahead = state->input[state->position];
}
static void mark_end(TSLexer *lexer) { (void)lexer; }
static bool eof(const TSLexer *lexer) { return lexer->lookahead == 0; }
static bool scan(void *scanner, const char *input, unsigned symbol) {
    Lexer lexer = {.lexer = {.advance = advance, .mark_end = mark_end, .eof = eof}, .input = input};
    lexer.lexer.lookahead = input[0];
    bool valid[6] = {false}; valid[symbol] = true;
    return tree_sitter_lua_external_scanner_scan(scanner, &lexer.lexer, valid);
}
static void parse(TSParser *parser, const char *source, bool errors) {
    TSTree *tree = ts_parser_parse_string(parser, NULL, source, (uint32_t)strlen(source));
    assert(tree);
    assert(ts_node_has_error(ts_tree_root_node(tree)) == errors);
    ts_tree_delete(tree);
}
int main(void) {
    void *first = tree_sitter_lua_external_scanner_create();
    void *second = tree_sitter_lua_external_scanner_create();
    assert(first != second);
    assert(scan(first, "[==[", BLOCK_STRING_START));
    assert(scan(second, "[=[", BLOCK_STRING_START));
    assert(scan(first, "]==]", BLOCK_STRING_END));
    assert(scan(second, "]=]", BLOCK_STRING_END));
    assert(scan(first, "[==[", BLOCK_STRING_START));
    tree_sitter_lua_external_scanner_deserialize(first, NULL, 0);
    /* Initial state expects level zero. This fails without the local reset fix. */
    assert(scan(first, "]]", BLOCK_STRING_END));
    tree_sitter_lua_external_scanner_destroy(first);
    tree_sitter_lua_external_scanner_destroy(second);

    TSParser *a = ts_parser_new(), *b = ts_parser_new();
    assert(ts_parser_set_language(a, tree_sitter_lua()));
    assert(ts_parser_set_language(b, tree_sitter_lua()));
    parse(a, "return 'unfinished", true);
    parse(b, "return \"hello\"", false);
    parse(a, "return [==[unfinished", true);
    parse(b, "--[=[a comment]=]\nreturn [=[hello]=]", false);
    ts_parser_reset(a);
    parse(a, "return [[hello]]", false);
    parse(b, "return [==[another]==]", false);
    ts_parser_delete(a); ts_parser_delete(b);
    puts("Lua scanner: PASS (independent payloads, deserialize reset, parser isolation/reuse)");
}
