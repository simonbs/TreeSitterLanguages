/* Regression for the 0.5.4 scanner's serialization bounds and incremental state.
 * Compile with AddressSanitizer using markdown_scanner_regression.py. The deeply
 * nested document exceeds the 1024-byte scanner serialization buffer; it must
 * remain safe and incremental parsing must agree with a fresh parse.
 */
#include <tree_sitter/api.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern const TSLanguage *tree_sitter_markdown(void);
extern const TSLanguage *tree_sitter_markdown_inline(void);

static void check(const TSLanguage *language, char *source, uint32_t length, uint32_t edit) {
    TSParser *parser = ts_parser_new();
    assert(ts_parser_set_language(parser, language));
    TSTree *tree = ts_parser_parse_string(parser, NULL, source, length);
    assert(tree && !ts_node_has_error(ts_tree_root_node(tree)));
    TSPoint point = {0, 0};
    for (uint32_t i = 0; i < edit; i++) {
        if (source[i] == '\n') { point.row++; point.column = 0; }
        else point.column++;
    }
    TSPoint end = {point.row, point.column + 1};
    TSInputEdit change = {edit, edit + 1, edit + 1, point, end, end};
    source[edit] = 'Y';
    ts_tree_edit(tree, &change);
    TSTree *incremental = ts_parser_parse_string(parser, tree, source, length);
    TSTree *fresh = ts_parser_parse_string(parser, NULL, source, length);
    assert(incremental && fresh);
    assert(!ts_node_has_error(ts_tree_root_node(incremental)));
    char *actual = ts_node_string(ts_tree_root_node(incremental));
    char *expected = ts_node_string(ts_tree_root_node(fresh));
    assert(strcmp(actual, expected) == 0);
    assert(ts_node_end_byte(ts_tree_root_node(fresh)) == length);
    free(actual); free(expected);
    ts_tree_delete(tree); ts_tree_delete(incremental); ts_tree_delete(fresh);
    ts_parser_delete(parser);
}

int main(void) {
    const uint32_t depth = 1600;
    char *nested = calloc(depth * 2 + 32, 1);
    for (uint32_t i = 0; i < depth; i++) memcpy(nested + i * 2, "> ", 2);
    strcpy(nested + depth * 2, "X text\n\n# End\n");
    check(tree_sitter_markdown(), nested, (uint32_t)strlen(nested), depth * 2);
    free(nested);

    /* Distinct, unclosed delimiter runs exercise the scanner's lookahead path. */
    char *inline_text = calloc(16384, 1);
    uint32_t length = 0;
    for (uint32_t run = 1; run < 128; run++) {
        memset(inline_text + length, '`', run); length += run;
        memcpy(inline_text + length, " X ", 3); length += 3;
    }
    check(tree_sitter_markdown_inline(), inline_text, length, length - 2);
    free(inline_text);
    puts("Markdown scanner: PASS (deep serialization bounds, unmatched delimiters, incremental/fresh AST equality under ASan)");
    return 0;
}
