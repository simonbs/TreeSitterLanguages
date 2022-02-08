#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_tag_name_with_argument = 3,
  sym_tag_name_with_type = 4,
  sym_tag_name = 5,
  anon_sym_COLON = 6,
  anon_sym_SLASH = 7,
  anon_sym_DOT = 8,
  anon_sym_POUND = 9,
  anon_sym_TILDE = 10,
  sym_identifier = 11,
  sym_type = 12,
  sym__text = 13,
  sym__begin = 14,
  sym__end = 15,
  sym_document = 16,
  sym_description = 17,
  sym_tag = 18,
  sym_inline_tag = 19,
  sym__expression = 20,
  sym_qualified_expression = 21,
  sym_path_expression = 22,
  sym_member_expression = 23,
  aux_sym_document_repeat1 = 24,
  aux_sym_description_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__expression] = "_expression",
  [sym_qualified_expression] = "qualified_expression",
  [sym_path_expression] = "path_expression",
  [sym_member_expression] = "member_expression",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_identifier] = sym_identifier,
  [sym_type] = sym_type,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__expression] = sym__expression,
  [sym_qualified_expression] = sym_qualified_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_member_expression] = sym_member_expression,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '*') SKIP(5)
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '*') SKIP(8)
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '*') SKIP(10)
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '}') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '*') SKIP(12)
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '*') SKIP(19)
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '~') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(124);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (lookahead == 's') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (lookahead == 's') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 't') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym__begin] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(13), 1,
      sym__end,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(7), 4,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
  [27] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(17), 1,
      sym__end,
    STATE(28), 1,
      sym_description,
    ACTIONS(15), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    STATE(5), 4,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
  [51] = 4,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(25), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(19), 5,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
      sym__end,
  [70] = 5,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(31), 1,
      sym__end,
    STATE(29), 1,
      sym_description,
    ACTIONS(27), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
    ACTIONS(29), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [90] = 3,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(33), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(35), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [106] = 5,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(39), 1,
      sym__end,
    STATE(27), 1,
      sym_description,
    ACTIONS(29), 3,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
    ACTIONS(37), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [126] = 2,
    ACTIONS(41), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(43), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [139] = 7,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(45), 1,
      sym_tag_name_with_argument,
    ACTIONS(47), 1,
      sym_tag_name_with_type,
    ACTIONS(49), 1,
      sym_tag_name,
    ACTIONS(51), 1,
      sym__end,
    STATE(21), 1,
      sym_description,
    STATE(17), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [162] = 2,
    ACTIONS(33), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(35), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [175] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym__text,
    ACTIONS(61), 1,
      sym__end,
    STATE(11), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(56), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [194] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym__text,
    ACTIONS(69), 1,
      sym__end,
    STATE(13), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(65), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [213] = 5,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__text,
    ACTIONS(75), 1,
      sym__end,
    STATE(11), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(71), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [232] = 2,
    ACTIONS(77), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
    ACTIONS(79), 4,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__end,
  [245] = 5,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(13), 1,
      sym__end,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [263] = 4,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(13), 1,
      sym__end,
    STATE(30), 1,
      sym_description,
    ACTIONS(7), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [278] = 5,
    ACTIONS(45), 1,
      sym_tag_name_with_argument,
    ACTIONS(47), 1,
      sym_tag_name_with_type,
    ACTIONS(49), 1,
      sym_tag_name,
    ACTIONS(83), 1,
      sym__end,
    STATE(20), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [295] = 2,
    ACTIONS(85), 2,
      anon_sym_LBRACE,
      sym__end,
    ACTIONS(87), 4,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
      sym__text,
  [306] = 5,
    ACTIONS(45), 1,
      sym_tag_name_with_argument,
    ACTIONS(47), 1,
      sym_tag_name_with_type,
    ACTIONS(49), 1,
      sym_tag_name,
    ACTIONS(89), 1,
      sym__end,
    STATE(20), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [323] = 5,
    ACTIONS(91), 1,
      sym_tag_name_with_argument,
    ACTIONS(94), 1,
      sym_tag_name_with_type,
    ACTIONS(97), 1,
      sym_tag_name,
    ACTIONS(100), 1,
      sym__end,
    STATE(20), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [340] = 5,
    ACTIONS(45), 1,
      sym_tag_name_with_argument,
    ACTIONS(47), 1,
      sym_tag_name_with_type,
    ACTIONS(49), 1,
      sym_tag_name,
    ACTIONS(83), 1,
      sym__end,
    STATE(19), 2,
      sym_tag,
      aux_sym_document_repeat1,
  [357] = 4,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(17), 1,
      sym__end,
    STATE(28), 1,
      sym_description,
    ACTIONS(15), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [372] = 4,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym__text,
    STATE(23), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [386] = 2,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(8), 4,
      sym__expression,
      sym_qualified_expression,
      sym_path_expression,
      sym_member_expression,
  [396] = 4,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      sym__text,
    STATE(26), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [410] = 4,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym__text,
    STATE(23), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [424] = 2,
    ACTIONS(116), 1,
      sym__end,
    ACTIONS(114), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [433] = 2,
    ACTIONS(31), 1,
      sym__end,
    ACTIONS(27), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [442] = 2,
    ACTIONS(120), 1,
      sym__end,
    ACTIONS(118), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [451] = 2,
    ACTIONS(39), 1,
      sym__end,
    ACTIONS(37), 3,
      sym_tag_name_with_argument,
      sym_tag_name_with_type,
      sym_tag_name,
  [460] = 1,
    ACTIONS(85), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__text,
  [466] = 2,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(10), 1,
      sym_qualified_expression,
  [473] = 2,
    ACTIONS(124), 1,
      sym__text,
    STATE(37), 1,
      sym_description,
  [480] = 2,
    ACTIONS(124), 1,
      sym__text,
    STATE(46), 1,
      sym_description,
  [487] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [491] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [495] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
  [499] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [503] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [507] = 1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
  [511] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [515] = 1,
    ACTIONS(140), 1,
      sym_tag_name,
  [519] = 1,
    ACTIONS(142), 1,
      sym_type,
  [523] = 1,
    ACTIONS(144), 1,
      sym_type,
  [527] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [531] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [535] = 1,
    ACTIONS(150), 1,
      sym_tag_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 396,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 424,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 442,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 473,
  [SMALL_STATE(34)] = 480,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 491,
  [SMALL_STATE(37)] = 495,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 503,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 511,
  [SMALL_STATE(42)] = 515,
  [SMALL_STATE(43)] = 519,
  [SMALL_STATE(44)] = 523,
  [SMALL_STATE(45)] = 527,
  [SMALL_STATE(46)] = 531,
  [SMALL_STATE(47)] = 535,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(42),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(47),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsdoc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
