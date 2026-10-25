/* Regression for the external scanner's fixed 1024-byte serialization contract.
 * Build against the shipped implementation to force otherwise rare oversized
 * heredoc states; inspecting only a final parse can miss writes during recovery. */
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../../Sources/TreeSitterRuby/src/scanner.c"

static void heredoc_boundary(unsigned length, bool fits) {
    Scanner *scanner = tree_sitter_ruby_external_scanner_create();
    Heredoc heredoc = {0};
    array_reserve(&heredoc.word, length);
    memset(heredoc.word.contents, 'A', length);
    heredoc.word.size = length;
    heredoc.allows_interpolation = true;
    array_push(&scanner->open_heredocs, heredoc);
    unsigned char storage[TREE_SITTER_SERIALIZATION_BUFFER_SIZE + 32];
    memset(storage, 0xA5, sizeof(storage));
    unsigned size = tree_sitter_ruby_external_scanner_serialize(scanner, (char *)storage);
    assert(size <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
    for (unsigned i = TREE_SITTER_SERIALIZATION_BUFFER_SIZE; i < sizeof(storage); i++)
        assert(storage[i] == 0xA5);
    assert(fits ? size > 0 : size == 0);
    if (fits) {
        Scanner *restored = tree_sitter_ruby_external_scanner_create();
        tree_sitter_ruby_external_scanner_deserialize(restored, (char *)storage, size);
        char roundtrip[TREE_SITTER_SERIALIZATION_BUFFER_SIZE];
        assert(tree_sitter_ruby_external_scanner_serialize(restored, roundtrip) == size);
        assert(memcmp(storage, roundtrip, size) == 0);
        tree_sitter_ruby_external_scanner_destroy(restored);
    }
    tree_sitter_ruby_external_scanner_destroy(scanner);
}

int main(void) {
    heredoc_boundary(8, true);
    heredoc_boundary(1014, true);  /* 2 count bytes, 3 flags, 4 length bytes. */
    heredoc_boundary(1015, false);
    heredoc_boundary(1019, false); /* Old scanner overflowed the buffer here. */
    heredoc_boundary(2048, false);
    puts("Ruby scanner: PASS (heredoc bounds, guard bytes, serialized roundtrip)");
}
