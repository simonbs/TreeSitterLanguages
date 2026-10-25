#ifndef TREE_SITTER_LANGUAGES_COMMON_H_
#define TREE_SITTER_LANGUAGES_COMMON_H_

#include <stdint.h>

// TSLanguage is owned by the Tree-sitter runtime. Its layout is private and
// depends on the grammar ABI; consumers should only pass language pointers.
typedef struct TSLanguage TSLanguage;
typedef uint16_t TSSymbol;
typedef uint16_t TSFieldId;
typedef uint16_t TSStateId;

#endif // TREE_SITTER_LANGUAGES_COMMON_H_
