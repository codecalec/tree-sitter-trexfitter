#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_COLON = 2,
  aux_sym_block_token1 = 3,
  aux_sym_setting_token1 = 4,
  anon_sym_Job = 5,
  anon_sym_Fit = 6,
  anon_sym_Limit = 7,
  anon_sym_Significance = 8,
  anon_sym_Options = 9,
  anon_sym_Region = 10,
  anon_sym_Sample = 11,
  anon_sym_NormFactor = 12,
  anon_sym_ShapeFactor = 13,
  anon_sym_Systematic = 14,
  anon_sym_Morphing = 15,
  anon_sym_Multifit = 16,
  aux_sym_setting_name_token1 = 17,
  aux_sym__quoted_value_token1 = 18,
  aux_sym__value_token1 = 19,
  aux_sym__bool_token1 = 20,
  aux_sym__bool_token2 = 21,
  sym_identifier = 22,
  sym_source_file = 23,
  sym_block = 24,
  sym_setting = 25,
  sym_block_type = 26,
  sym_setting_name = 27,
  sym_setting_value = 28,
  sym__quoted_value = 29,
  sym__value = 30,
  sym__bool = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_block_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [aux_sym_block_token1] = "block_token1",
  [aux_sym_setting_token1] = "setting_token1",
  [anon_sym_Job] = "Job",
  [anon_sym_Fit] = "Fit",
  [anon_sym_Limit] = "Limit",
  [anon_sym_Significance] = "Significance",
  [anon_sym_Options] = "Options",
  [anon_sym_Region] = "Region",
  [anon_sym_Sample] = "Sample",
  [anon_sym_NormFactor] = "NormFactor",
  [anon_sym_ShapeFactor] = "ShapeFactor",
  [anon_sym_Systematic] = "Systematic",
  [anon_sym_Morphing] = "Morphing",
  [anon_sym_Multifit] = "Multifit",
  [aux_sym_setting_name_token1] = "setting_name_token1",
  [aux_sym__quoted_value_token1] = "_quoted_value_token1",
  [aux_sym__value_token1] = "_value_token1",
  [aux_sym__bool_token1] = "_bool_token1",
  [aux_sym__bool_token2] = "_bool_token2",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_setting] = "setting",
  [sym_block_type] = "block_type",
  [sym_setting_name] = "setting_name",
  [sym_setting_value] = "setting_value",
  [sym__quoted_value] = "_quoted_value",
  [sym__value] = "_value",
  [sym__bool] = "_bool",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [aux_sym_setting_token1] = aux_sym_setting_token1,
  [anon_sym_Job] = anon_sym_Job,
  [anon_sym_Fit] = anon_sym_Fit,
  [anon_sym_Limit] = anon_sym_Limit,
  [anon_sym_Significance] = anon_sym_Significance,
  [anon_sym_Options] = anon_sym_Options,
  [anon_sym_Region] = anon_sym_Region,
  [anon_sym_Sample] = anon_sym_Sample,
  [anon_sym_NormFactor] = anon_sym_NormFactor,
  [anon_sym_ShapeFactor] = anon_sym_ShapeFactor,
  [anon_sym_Systematic] = anon_sym_Systematic,
  [anon_sym_Morphing] = anon_sym_Morphing,
  [anon_sym_Multifit] = anon_sym_Multifit,
  [aux_sym_setting_name_token1] = aux_sym_setting_name_token1,
  [aux_sym__quoted_value_token1] = aux_sym__quoted_value_token1,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__bool_token1] = aux_sym__bool_token1,
  [aux_sym__bool_token2] = aux_sym__bool_token2,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_setting] = sym_setting,
  [sym_block_type] = sym_block_type,
  [sym_setting_name] = sym_setting_name,
  [sym_setting_value] = sym_setting_value,
  [sym__quoted_value] = sym__quoted_value,
  [sym__value] = sym__value,
  [sym__bool] = sym__bool,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Job] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Significance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NormFactor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShapeFactor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Systematic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Morphing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Multifit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bool_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bool_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_block_type] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_value] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_value] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'J') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(7);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'J') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_setting_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_Job);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_Fit);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_Limit);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_Significance);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_Options);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_Region);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_Sample);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_NormFactor);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ShapeFactor);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_Systematic);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_Morphing);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Multifit);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'F') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'F') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'a') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'b') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'c') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'c') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'c') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'c') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'c') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'f') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'f') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'g') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'g') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'g') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'h') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'i') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'l') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'l') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'm') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'm') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'm') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'm') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'n') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'n') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'n') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'n') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'o') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'p') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'p') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'p') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'p') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'r') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'r') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'r') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 's') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 's') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 's') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (lookahead == 'u') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__quoted_value_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__quoted_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '%') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_block_token1] = ACTIONS(1),
    [anon_sym_Job] = ACTIONS(1),
    [anon_sym_Fit] = ACTIONS(1),
    [anon_sym_Limit] = ACTIONS(1),
    [anon_sym_Significance] = ACTIONS(1),
    [anon_sym_Options] = ACTIONS(1),
    [anon_sym_Region] = ACTIONS(1),
    [anon_sym_Sample] = ACTIONS(1),
    [anon_sym_NormFactor] = ACTIONS(1),
    [anon_sym_ShapeFactor] = ACTIONS(1),
    [anon_sym_Systematic] = ACTIONS(1),
    [anon_sym_Morphing] = ACTIONS(1),
    [anon_sym_Multifit] = ACTIONS(1),
    [aux_sym_setting_name_token1] = ACTIONS(1),
    [aux_sym__quoted_value_token1] = ACTIONS(1),
    [aux_sym__bool_token1] = ACTIONS(1),
    [aux_sym__bool_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_block] = STATE(5),
    [sym_block_type] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Job] = ACTIONS(7),
    [anon_sym_Fit] = ACTIONS(7),
    [anon_sym_Limit] = ACTIONS(7),
    [anon_sym_Significance] = ACTIONS(7),
    [anon_sym_Options] = ACTIONS(7),
    [anon_sym_Region] = ACTIONS(7),
    [anon_sym_Sample] = ACTIONS(7),
    [anon_sym_NormFactor] = ACTIONS(7),
    [anon_sym_ShapeFactor] = ACTIONS(7),
    [anon_sym_Systematic] = ACTIONS(7),
    [anon_sym_Morphing] = ACTIONS(7),
    [anon_sym_Multifit] = ACTIONS(7),
  },
  [2] = {
    [sym_setting] = STATE(3),
    [sym_setting_name] = STATE(18),
    [aux_sym_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [aux_sym_block_token1] = ACTIONS(11),
    [anon_sym_Job] = ACTIONS(13),
    [anon_sym_Fit] = ACTIONS(13),
    [anon_sym_Limit] = ACTIONS(13),
    [anon_sym_Significance] = ACTIONS(13),
    [anon_sym_Options] = ACTIONS(13),
    [anon_sym_Region] = ACTIONS(13),
    [anon_sym_Sample] = ACTIONS(13),
    [anon_sym_NormFactor] = ACTIONS(13),
    [anon_sym_ShapeFactor] = ACTIONS(13),
    [anon_sym_Systematic] = ACTIONS(13),
    [anon_sym_Morphing] = ACTIONS(13),
    [anon_sym_Multifit] = ACTIONS(13),
    [aux_sym_setting_name_token1] = ACTIONS(15),
  },
  [3] = {
    [sym_setting] = STATE(4),
    [sym_setting_name] = STATE(18),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [aux_sym_block_token1] = ACTIONS(19),
    [anon_sym_Job] = ACTIONS(21),
    [anon_sym_Fit] = ACTIONS(21),
    [anon_sym_Limit] = ACTIONS(21),
    [anon_sym_Significance] = ACTIONS(21),
    [anon_sym_Options] = ACTIONS(21),
    [anon_sym_Region] = ACTIONS(21),
    [anon_sym_Sample] = ACTIONS(21),
    [anon_sym_NormFactor] = ACTIONS(21),
    [anon_sym_ShapeFactor] = ACTIONS(21),
    [anon_sym_Systematic] = ACTIONS(21),
    [anon_sym_Morphing] = ACTIONS(21),
    [anon_sym_Multifit] = ACTIONS(21),
    [aux_sym_setting_name_token1] = ACTIONS(15),
  },
  [4] = {
    [sym_setting] = STATE(4),
    [sym_setting_name] = STATE(18),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [aux_sym_block_token1] = ACTIONS(25),
    [anon_sym_Job] = ACTIONS(28),
    [anon_sym_Fit] = ACTIONS(28),
    [anon_sym_Limit] = ACTIONS(28),
    [anon_sym_Significance] = ACTIONS(28),
    [anon_sym_Options] = ACTIONS(28),
    [anon_sym_Region] = ACTIONS(28),
    [anon_sym_Sample] = ACTIONS(28),
    [anon_sym_NormFactor] = ACTIONS(28),
    [anon_sym_ShapeFactor] = ACTIONS(28),
    [anon_sym_Systematic] = ACTIONS(28),
    [anon_sym_Morphing] = ACTIONS(28),
    [anon_sym_Multifit] = ACTIONS(28),
    [aux_sym_setting_name_token1] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_block_type,
    STATE(6), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 12,
      anon_sym_Job,
      anon_sym_Fit,
      anon_sym_Limit,
      anon_sym_Significance,
      anon_sym_Options,
      anon_sym_Region,
      anon_sym_Sample,
      anon_sym_NormFactor,
      anon_sym_ShapeFactor,
      anon_sym_Systematic,
      anon_sym_Morphing,
      anon_sym_Multifit,
  [28] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_block_type,
    STATE(6), 2,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(37), 12,
      anon_sym_Job,
      anon_sym_Fit,
      anon_sym_Limit,
      anon_sym_Significance,
      anon_sym_Options,
      anon_sym_Region,
      anon_sym_Sample,
      anon_sym_NormFactor,
      anon_sym_ShapeFactor,
      anon_sym_Systematic,
      anon_sym_Morphing,
      anon_sym_Multifit,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      aux_sym_block_token1,
    ACTIONS(42), 13,
      anon_sym_Job,
      anon_sym_Fit,
      anon_sym_Limit,
      anon_sym_Significance,
      anon_sym_Options,
      anon_sym_Region,
      anon_sym_Sample,
      anon_sym_NormFactor,
      anon_sym_ShapeFactor,
      anon_sym_Systematic,
      anon_sym_Morphing,
      anon_sym_Multifit,
      aux_sym_setting_name_token1,
  [79] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym_block_token1,
    ACTIONS(46), 13,
      anon_sym_Job,
      anon_sym_Fit,
      anon_sym_Limit,
      anon_sym_Significance,
      anon_sym_Options,
      anon_sym_Region,
      anon_sym_Sample,
      anon_sym_NormFactor,
      anon_sym_ShapeFactor,
      anon_sym_Systematic,
      anon_sym_Morphing,
      anon_sym_Multifit,
      aux_sym_setting_name_token1,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      aux_sym_block_token1,
    ACTIONS(50), 13,
      anon_sym_Job,
      anon_sym_Fit,
      anon_sym_Limit,
      anon_sym_Significance,
      anon_sym_Options,
      anon_sym_Region,
      anon_sym_Sample,
      anon_sym_NormFactor,
      anon_sym_ShapeFactor,
      anon_sym_Systematic,
      anon_sym_Morphing,
      anon_sym_Multifit,
      aux_sym_setting_name_token1,
  [125] = 5,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym__quoted_value_token1,
    STATE(7), 1,
      sym_setting_value,
    ACTIONS(56), 3,
      aux_sym__value_token1,
      aux_sym__bool_token1,
      aux_sym__bool_token2,
    STATE(8), 3,
      sym__quoted_value,
      sym__value,
      sym__bool,
  [145] = 4,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym__value_token1,
    ACTIONS(60), 2,
      aux_sym__bool_token1,
      aux_sym__bool_token2,
    STATE(19), 2,
      sym__value,
      sym__bool,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COLON,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_COLON,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_identifier,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_block_token1,
  [195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_setting_token1,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_setting_token1,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym__quoted_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_value, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_value, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_value, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_value, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_type, 1),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TRexFitter(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
