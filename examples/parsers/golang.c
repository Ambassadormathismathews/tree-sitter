#include "tree_sitter/parser.h"

#define STATE_COUNT 212
#define SYMBOL_COUNT 67

enum {
    ts_sym_program = ts_start_sym,
    ts_sym_package_directive,
    ts_sym_imports_block,
    ts_sym_package_import,
    ts_sym_declaration,
    ts_sym_type_declaration,
    ts_sym_var_declaration,
    ts_sym_func_declaration,
    ts_sym_statement_block,
    ts_sym_type_expression,
    ts_sym_pointer_type,
    ts_sym_map_type,
    ts_sym_slice_type,
    ts_sym_struct_type,
    ts_sym_interface_type,
    ts_sym_expression,
    ts_sym_math_op,
    ts_sym_bool_op,
    ts_sym__func_signature,
    ts_sym_package_name,
    ts_sym_var_name,
    ts_sym_type_name,
    ts_sym__terminator,
    ts_sym_string,
    ts_sym__identifier,
    ts_sym_number,
    ts_sym_comment,
    ts_aux_sym_program_repeat0,
    ts_aux_sym_program_repeat1,
    ts_aux_sym_imports_block_repeat0,
    ts_aux_sym_struct_type_repeat0,
    ts_aux_sym_interface_type_repeat0,
    ts_aux_sym__func_signature_repeat0,
    ts_aux_sym__func_signature_repeat1,
    ts_aux_sym__func_signature_repeat2,
    ts_aux_sym__func_signature_repeat3,
    ts_aux_sym__func_signature_repeat4,
    ts_aux_sym_package,
    ts_aux_sym_import,
    ts_aux_sym_1,
    ts_aux_sym_2,
    ts_aux_sym_type,
    ts_aux_sym_var,
    ts_aux_sym_3,
    ts_aux_sym_func,
    ts_aux_sym_4,
    ts_aux_sym_5,
    ts_aux_sym_6,
    ts_aux_sym_map,
    ts_aux_sym_7,
    ts_aux_sym_8,
    ts_aux_sym_struct,
    ts_aux_sym_interface,
    ts_aux_sym_9,
    ts_aux_sym_10,
    ts_aux_sym_11,
    ts_aux_sym_12,
    ts_aux_sym_13,
    ts_aux_sym_14,
    ts_aux_sym_15,
    ts_aux_sym_16,
    ts_aux_sym_17,
    ts_aux_sym_18,
    ts_aux_sym_19,
    ts_aux_sym_20,
};

SYMBOL_NAMES = {
    [ts_sym_program] = "program",
    [ts_sym_package_directive] = "package_directive",
    [ts_sym_imports_block] = "imports_block",
    [ts_sym_package_import] = "package_import",
    [ts_sym_declaration] = "declaration",
    [ts_sym_type_declaration] = "type_declaration",
    [ts_sym_var_declaration] = "var_declaration",
    [ts_sym_func_declaration] = "func_declaration",
    [ts_sym_statement_block] = "statement_block",
    [ts_sym_type_expression] = "type_expression",
    [ts_sym_pointer_type] = "pointer_type",
    [ts_sym_map_type] = "map_type",
    [ts_sym_slice_type] = "slice_type",
    [ts_sym_struct_type] = "struct_type",
    [ts_sym_interface_type] = "interface_type",
    [ts_sym_expression] = "expression",
    [ts_sym_math_op] = "math_op",
    [ts_sym_bool_op] = "bool_op",
    [ts_sym__func_signature] = "_func_signature",
    [ts_sym_package_name] = "package_name",
    [ts_sym_var_name] = "var_name",
    [ts_sym_type_name] = "type_name",
    [ts_builtin_sym_error] = "error",
    [ts_builtin_sym_end] = "end",
    [ts_sym__terminator] = "_terminator",
    [ts_sym_string] = "string",
    [ts_sym__identifier] = "_identifier",
    [ts_sym_number] = "number",
    [ts_sym_comment] = "comment",
    [ts_aux_sym_program_repeat0] = "program_repeat0",
    [ts_aux_sym_program_repeat1] = "program_repeat1",
    [ts_aux_sym_imports_block_repeat0] = "imports_block_repeat0",
    [ts_aux_sym_struct_type_repeat0] = "struct_type_repeat0",
    [ts_aux_sym_interface_type_repeat0] = "interface_type_repeat0",
    [ts_aux_sym__func_signature_repeat0] = "_func_signature_repeat0",
    [ts_aux_sym__func_signature_repeat1] = "_func_signature_repeat1",
    [ts_aux_sym__func_signature_repeat2] = "_func_signature_repeat2",
    [ts_aux_sym__func_signature_repeat3] = "_func_signature_repeat3",
    [ts_aux_sym__func_signature_repeat4] = "_func_signature_repeat4",
    [ts_aux_sym_package] = "'package'",
    [ts_aux_sym_import] = "'import'",
    [ts_aux_sym_1] = "'('",
    [ts_aux_sym_2] = "')'",
    [ts_aux_sym_type] = "'type'",
    [ts_aux_sym_var] = "'var'",
    [ts_aux_sym_3] = "'='",
    [ts_aux_sym_func] = "'func'",
    [ts_aux_sym_4] = "'{'",
    [ts_aux_sym_5] = "'}'",
    [ts_aux_sym_6] = "'*'",
    [ts_aux_sym_map] = "'map'",
    [ts_aux_sym_7] = "'['",
    [ts_aux_sym_8] = "']'",
    [ts_aux_sym_struct] = "'struct'",
    [ts_aux_sym_interface] = "'interface'",
    [ts_aux_sym_9] = "'/'",
    [ts_aux_sym_10] = "'+'",
    [ts_aux_sym_11] = "'-'",
    [ts_aux_sym_12] = "'||'",
    [ts_aux_sym_13] = "'&&'",
    [ts_aux_sym_14] = "'=='",
    [ts_aux_sym_15] = "'<='",
    [ts_aux_sym_16] = "'<'",
    [ts_aux_sym_17] = "'>='",
    [ts_aux_sym_18] = "'>'",
    [ts_aux_sym_19] = "'!'",
    [ts_aux_sym_20] = "','",
};

UBIQUITOUS_SYMBOLS = {
    [ts_sym_comment] = 1,
};

HIDDEN_SYMBOLS = {
    [ts_sym__func_signature] = 1,
    [ts_sym__terminator] = 1,
    [ts_sym__identifier] = 1,
    [ts_aux_sym_program_repeat0] = 1,
    [ts_aux_sym_program_repeat1] = 1,
    [ts_aux_sym_imports_block_repeat0] = 1,
    [ts_aux_sym_struct_type_repeat0] = 1,
    [ts_aux_sym_interface_type_repeat0] = 1,
    [ts_aux_sym__func_signature_repeat0] = 1,
    [ts_aux_sym__func_signature_repeat1] = 1,
    [ts_aux_sym__func_signature_repeat2] = 1,
    [ts_aux_sym__func_signature_repeat3] = 1,
    [ts_aux_sym__func_signature_repeat4] = 1,
    [ts_aux_sym_package] = 1,
    [ts_aux_sym_import] = 1,
    [ts_aux_sym_1] = 1,
    [ts_aux_sym_2] = 1,
    [ts_aux_sym_type] = 1,
    [ts_aux_sym_var] = 1,
    [ts_aux_sym_3] = 1,
    [ts_aux_sym_func] = 1,
    [ts_aux_sym_4] = 1,
    [ts_aux_sym_5] = 1,
    [ts_aux_sym_6] = 1,
    [ts_aux_sym_map] = 1,
    [ts_aux_sym_7] = 1,
    [ts_aux_sym_8] = 1,
    [ts_aux_sym_struct] = 1,
    [ts_aux_sym_interface] = 1,
    [ts_aux_sym_9] = 1,
    [ts_aux_sym_10] = 1,
    [ts_aux_sym_11] = 1,
    [ts_aux_sym_12] = 1,
    [ts_aux_sym_13] = 1,
    [ts_aux_sym_14] = 1,
    [ts_aux_sym_15] = 1,
    [ts_aux_sym_16] = 1,
    [ts_aux_sym_17] = 1,
    [ts_aux_sym_18] = 1,
    [ts_aux_sym_19] = 1,
    [ts_aux_sym_20] = 1,
};

LEX_FN() {
    START_LEXER();
    switch (lex_state) {
        case 1:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(1);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == 'p')
                ADVANCE(4);
            LEX_ERROR();
        case 2:
            if (lookahead == '/')
                ADVANCE(3);
            LEX_ERROR();
        case 3:
            if (!(lookahead == '\n'))
                ADVANCE(3);
            ACCEPT_TOKEN(ts_sym_comment);
        case 4:
            if (lookahead == 'a')
                ADVANCE(5);
            LEX_ERROR();
        case 5:
            if (lookahead == 'c')
                ADVANCE(6);
            LEX_ERROR();
        case 6:
            if (lookahead == 'k')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (lookahead == 'a')
                ADVANCE(8);
            LEX_ERROR();
        case 8:
            if (lookahead == 'g')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            if (lookahead == 'e')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(ts_aux_sym_package);
        case 11:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 12:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 13:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == 'f')
                ADVANCE(14);
            if (lookahead == 'i')
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(24);
            if (lookahead == 'v')
                ADVANCE(28);
            LEX_ERROR();
        case 14:
            if (lookahead == 'u')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            if (lookahead == 'n')
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            if (lookahead == 'c')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            ACCEPT_TOKEN(ts_aux_sym_func);
        case 18:
            if (lookahead == 'm')
                ADVANCE(19);
            LEX_ERROR();
        case 19:
            if (lookahead == 'p')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            if (lookahead == 'o')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            if (lookahead == 'r')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            if (lookahead == 't')
                ADVANCE(23);
            LEX_ERROR();
        case 23:
            ACCEPT_TOKEN(ts_aux_sym_import);
        case 24:
            if (lookahead == 'y')
                ADVANCE(25);
            LEX_ERROR();
        case 25:
            if (lookahead == 'p')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            if (lookahead == 'e')
                ADVANCE(27);
            LEX_ERROR();
        case 27:
            ACCEPT_TOKEN(ts_aux_sym_type);
        case 28:
            if (lookahead == 'a')
                ADVANCE(29);
            LEX_ERROR();
        case 29:
            if (lookahead == 'r')
                ADVANCE(30);
            LEX_ERROR();
        case 30:
            ACCEPT_TOKEN(ts_aux_sym_var);
        case 31:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(31);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == 'f')
                ADVANCE(14);
            if (lookahead == 't')
                ADVANCE(24);
            if (lookahead == 'v')
                ADVANCE(28);
            LEX_ERROR();
        case 32:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 33:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(33);
            if (lookahead == '\"')
                ADVANCE(34);
            if (lookahead == '\\')
                ADVANCE(35);
            LEX_ERROR();
        case 34:
            ACCEPT_TOKEN(ts_sym_string);
        case 35:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(33);
            if (lookahead == '\"')
                ADVANCE(36);
            if (lookahead == '\\')
                ADVANCE(35);
            LEX_ERROR();
        case 36:
            if (!((lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(33);
            if (lookahead == '\"')
                ADVANCE(34);
            if (lookahead == '\\')
                ADVANCE(35);
            ACCEPT_TOKEN(ts_sym_string);
        case 37:
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 38:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 39:
            ACCEPT_TOKEN(ts_aux_sym_2);
        case 40:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 41:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            LEX_ERROR();
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 43:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '[')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(46);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(58);
            LEX_ERROR();
        case 44:
            ACCEPT_TOKEN(ts_aux_sym_6);
        case 45:
            ACCEPT_TOKEN(ts_aux_sym_7);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(48);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'e')
                ADVANCE(49);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'r')
                ADVANCE(50);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'f')
                ADVANCE(51);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'a')
                ADVANCE(52);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'c')
                ADVANCE(53);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'e')
                ADVANCE(54);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 54:
            ACCEPT_TOKEN(ts_aux_sym_interface);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'a')
                ADVANCE(56);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'p')
                ADVANCE(57);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 57:
            ACCEPT_TOKEN(ts_aux_sym_map);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'r')
                ADVANCE(60);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'u')
                ADVANCE(61);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'c')
                ADVANCE(62);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 63:
            ACCEPT_TOKEN(ts_aux_sym_struct);
        case 64:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(64);
            if (lookahead == '\n')
                ADVANCE(65);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(66);
            LEX_ERROR();
        case 65:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(65);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(66);
            ACCEPT_TOKEN(ts_sym__terminator);
        case 66:
            ACCEPT_TOKEN(ts_sym__terminator);
        case 67:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == '[')
                ADVANCE(45);
            LEX_ERROR();
        case 68:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == ']')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            ACCEPT_TOKEN(ts_aux_sym_8);
        case 70:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == '{')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            ACCEPT_TOKEN(ts_aux_sym_4);
        case 72:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            ACCEPT_TOKEN(ts_aux_sym_5);
        case 74:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == '}')
                ADVANCE(73);
            LEX_ERROR();
        case 75:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(75);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 76:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            LEX_ERROR();
        case 77:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '[')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(46);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(58);
            LEX_ERROR();
        case 78:
            ACCEPT_TOKEN(ts_aux_sym_20);
        case 79:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '/')
                ADVANCE(2);
            LEX_ERROR();
        case 80:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(73);
            LEX_ERROR();
        case 81:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            LEX_ERROR();
        case 82:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(82);
            if (lookahead == '/')
                ADVANCE(2);
            if (lookahead == '=')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            ACCEPT_TOKEN(ts_aux_sym_3);
        case 84:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
            if (lookahead == '!')
                ADVANCE(85);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == '/')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(86);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            LEX_ERROR();
        case 85:
            ACCEPT_TOKEN(ts_aux_sym_19);
        case 86:
            if (lookahead == '.')
                ADVANCE(87);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(86);
            ACCEPT_TOKEN(ts_sym_number);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(88);
            ACCEPT_TOKEN(ts_sym_number);
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
            if (lookahead == '\n')
                ADVANCE(90);
            if (lookahead == '&')
                ADVANCE(91);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '+')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(66);
            if (lookahead == '<')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(98);
            if (lookahead == '>')
                ADVANCE(100);
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 90:
            START_TOKEN();
            if (lookahead == '\n')
                ADVANCE(90);
            if (lookahead == '&')
                ADVANCE(91);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '+')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if (lookahead == ';')
                ADVANCE(66);
            if (lookahead == '<')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(98);
            if (lookahead == '>')
                ADVANCE(100);
            if (lookahead == '|')
                ADVANCE(102);
            ACCEPT_TOKEN(ts_sym__terminator);
        case 91:
            if (lookahead == '&')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            ACCEPT_TOKEN(ts_aux_sym_13);
        case 93:
            ACCEPT_TOKEN(ts_aux_sym_10);
        case 94:
            ACCEPT_TOKEN(ts_aux_sym_11);
        case 95:
            if (lookahead == '/')
                ADVANCE(3);
            ACCEPT_TOKEN(ts_aux_sym_9);
        case 96:
            if (lookahead == '=')
                ADVANCE(97);
            ACCEPT_TOKEN(ts_aux_sym_16);
        case 97:
            ACCEPT_TOKEN(ts_aux_sym_15);
        case 98:
            if (lookahead == '=')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            ACCEPT_TOKEN(ts_aux_sym_14);
        case 100:
            if (lookahead == '=')
                ADVANCE(101);
            ACCEPT_TOKEN(ts_aux_sym_18);
        case 101:
            ACCEPT_TOKEN(ts_aux_sym_17);
        case 102:
            if (lookahead == '|')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            ACCEPT_TOKEN(ts_aux_sym_12);
        case 104:
            START_TOKEN();
            if (('\t' <= lookahead && lookahead <= '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == '/')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '{')
                ADVANCE(71);
            LEX_ERROR();
        case 105:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '\n')
                ADVANCE(106);
            if (lookahead == '!')
                ADVANCE(85);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == '&')
                ADVANCE(91);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '+')
                ADVANCE(93);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '-')
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(86);
            if (lookahead == ';')
                ADVANCE(66);
            if (lookahead == '<')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '>')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '[')
                ADVANCE(45);
            if (lookahead == ']')
                ADVANCE(69);
            if (lookahead == 'f')
                ADVANCE(108);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 'p')
                ADVANCE(118);
            if (lookahead == 's')
                ADVANCE(58);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            if (lookahead == '{')
                ADVANCE(71);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(73);
            LEX_ERROR();
        case 106:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if (lookahead == '\n')
                ADVANCE(106);
            if (lookahead == '!')
                ADVANCE(85);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == '&')
                ADVANCE(91);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '+')
                ADVANCE(93);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '-')
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(86);
            if (lookahead == ';')
                ADVANCE(66);
            if (lookahead == '<')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '>')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '[')
                ADVANCE(45);
            if (lookahead == ']')
                ADVANCE(69);
            if (lookahead == 'f')
                ADVANCE(108);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 'p')
                ADVANCE(118);
            if (lookahead == 's')
                ADVANCE(58);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            if (lookahead == '{')
                ADVANCE(71);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(73);
            ACCEPT_TOKEN(ts_sym__terminator);
        case 107:
            if (lookahead == '=')
                ADVANCE(99);
            ACCEPT_TOKEN(ts_aux_sym_3);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'u')
                ADVANCE(109);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'n')
                ADVANCE(110);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'c')
                ADVANCE(111);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 111:
            ACCEPT_TOKEN(ts_aux_sym_func);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'm')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'p')
                ADVANCE(114);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'o')
                ADVANCE(115);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'r')
                ADVANCE(116);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 't')
                ADVANCE(117);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 117:
            ACCEPT_TOKEN(ts_aux_sym_import);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'a')
                ADVANCE(119);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'c')
                ADVANCE(120);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'k')
                ADVANCE(121);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'a')
                ADVANCE(122);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'g')
                ADVANCE(123);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'e')
                ADVANCE(124);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 124:
            ACCEPT_TOKEN(ts_aux_sym_package);
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(42);
            if (lookahead == 'y')
                ADVANCE(126);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'p')
                ADVANCE(127);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 127:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'e')
                ADVANCE(128);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 128:
            ACCEPT_TOKEN(ts_aux_sym_type);
        case 129:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'a')
                ADVANCE(130);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 130:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == 'r')
                ADVANCE(131);
            ACCEPT_TOKEN(ts_sym__identifier);
        case 131:
            ACCEPT_TOKEN(ts_aux_sym_var);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == '\0')
                ADVANCE(12);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '\n')
                ADVANCE(106);
            if (lookahead == '!')
                ADVANCE(85);
            if (lookahead == '\"')
                ADVANCE(33);
            if (lookahead == '&')
                ADVANCE(91);
            if (lookahead == '(')
                ADVANCE(37);
            if (lookahead == ')')
                ADVANCE(39);
            if (lookahead == '*')
                ADVANCE(44);
            if (lookahead == '+')
                ADVANCE(93);
            if (lookahead == ',')
                ADVANCE(78);
            if (lookahead == '-')
                ADVANCE(94);
            if (lookahead == '/')
                ADVANCE(95);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(86);
            if (lookahead == ';')
                ADVANCE(66);
            if (lookahead == '<')
                ADVANCE(96);
            if (lookahead == '=')
                ADVANCE(107);
            if (lookahead == '>')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(42);
            if (lookahead == '[')
                ADVANCE(45);
            if (lookahead == ']')
                ADVANCE(69);
            if (lookahead == 'f')
                ADVANCE(108);
            if (lookahead == 'i')
                ADVANCE(112);
            if (lookahead == 'm')
                ADVANCE(55);
            if (lookahead == 'p')
                ADVANCE(118);
            if (lookahead == 's')
                ADVANCE(58);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            if (lookahead == '{')
                ADVANCE(71);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(73);
            LEX_ERROR();
        default:
            LEX_PANIC();
    }
}

LEX_STATES = {
    [0] = 1,
    [1] = 11,
    [2] = 13,
    [3] = 13,
    [4] = 31,
    [5] = 32,
    [6] = 13,
    [7] = 13,
    [8] = 38,
    [9] = 38,
    [10] = 38,
    [11] = 40,
    [12] = 40,
    [13] = 13,
    [14] = 31,
    [15] = 31,
    [16] = 31,
    [17] = 11,
    [18] = 41,
    [19] = 43,
    [20] = 64,
    [21] = 31,
    [22] = 64,
    [23] = 64,
    [24] = 43,
    [25] = 64,
    [26] = 67,
    [27] = 43,
    [28] = 68,
    [29] = 43,
    [30] = 64,
    [31] = 68,
    [32] = 43,
    [33] = 64,
    [34] = 70,
    [35] = 72,
    [36] = 43,
    [37] = 72,
    [38] = 43,
    [39] = 74,
    [40] = 72,
    [41] = 72,
    [42] = 43,
    [43] = 72,
    [44] = 67,
    [45] = 43,
    [46] = 68,
    [47] = 43,
    [48] = 72,
    [49] = 68,
    [50] = 43,
    [51] = 72,
    [52] = 70,
    [53] = 72,
    [54] = 74,
    [55] = 72,
    [56] = 70,
    [57] = 72,
    [58] = 75,
    [59] = 72,
    [60] = 75,
    [61] = 74,
    [62] = 76,
    [63] = 77,
    [64] = 43,
    [65] = 79,
    [66] = 40,
    [67] = 80,
    [68] = 72,
    [69] = 41,
    [70] = 41,
    [71] = 79,
    [72] = 40,
    [73] = 72,
    [74] = 41,
    [75] = 41,
    [76] = 79,
    [77] = 40,
    [78] = 79,
    [79] = 41,
    [80] = 79,
    [81] = 40,
    [82] = 72,
    [83] = 41,
    [84] = 79,
    [85] = 40,
    [86] = 81,
    [87] = 41,
    [88] = 77,
    [89] = 43,
    [90] = 79,
    [91] = 40,
    [92] = 79,
    [93] = 43,
    [94] = 79,
    [95] = 67,
    [96] = 43,
    [97] = 68,
    [98] = 43,
    [99] = 79,
    [100] = 68,
    [101] = 43,
    [102] = 79,
    [103] = 70,
    [104] = 72,
    [105] = 74,
    [106] = 79,
    [107] = 70,
    [108] = 72,
    [109] = 74,
    [110] = 79,
    [111] = 68,
    [112] = 68,
    [113] = 43,
    [114] = 68,
    [115] = 67,
    [116] = 43,
    [117] = 68,
    [118] = 43,
    [119] = 68,
    [120] = 68,
    [121] = 43,
    [122] = 68,
    [123] = 70,
    [124] = 72,
    [125] = 74,
    [126] = 68,
    [127] = 70,
    [128] = 72,
    [129] = 74,
    [130] = 68,
    [131] = 41,
    [132] = 77,
    [133] = 43,
    [134] = 77,
    [135] = 41,
    [136] = 77,
    [137] = 43,
    [138] = 80,
    [139] = 72,
    [140] = 41,
    [141] = 41,
    [142] = 79,
    [143] = 40,
    [144] = 79,
    [145] = 40,
    [146] = 72,
    [147] = 74,
    [148] = 72,
    [149] = 74,
    [150] = 64,
    [151] = 70,
    [152] = 72,
    [153] = 74,
    [154] = 64,
    [155] = 43,
    [156] = 41,
    [157] = 82,
    [158] = 84,
    [159] = 89,
    [160] = 31,
    [161] = 84,
    [162] = 89,
    [163] = 84,
    [164] = 89,
    [165] = 84,
    [166] = 89,
    [167] = 84,
    [168] = 89,
    [169] = 84,
    [170] = 89,
    [171] = 89,
    [172] = 89,
    [173] = 84,
    [174] = 89,
    [175] = 82,
    [176] = 41,
    [177] = 75,
    [178] = 70,
    [179] = 64,
    [180] = 31,
    [181] = 74,
    [182] = 64,
    [183] = 76,
    [184] = 77,
    [185] = 43,
    [186] = 79,
    [187] = 40,
    [188] = 104,
    [189] = 70,
    [190] = 70,
    [191] = 41,
    [192] = 41,
    [193] = 79,
    [194] = 40,
    [195] = 70,
    [196] = 79,
    [197] = 40,
    [198] = 70,
    [199] = 104,
    [200] = 70,
    [201] = 41,
    [202] = 41,
    [203] = 79,
    [204] = 40,
    [205] = 79,
    [206] = 40,
    [207] = 70,
    [208] = 11,
    [209] = 41,
    [210] = 13,
    [211] = 13,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

PARSE_TABLE = {
    [0] = {
        [ts_sym_program] = SHIFT(1),
        [ts_sym_package_directive] = SHIFT(2),
        [ts_sym_comment] = SHIFT(0),
        [ts_aux_sym_package] = SHIFT(209),
    },
    [1] = {
        [ts_builtin_sym_end] = ACCEPT_INPUT(),
        [ts_sym_comment] = SHIFT(1),
    },
    [2] = {
        [ts_sym_imports_block] = SHIFT(3),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_sym_comment] = SHIFT(2),
        [ts_aux_sym_program_repeat0] = SHIFT(14),
        [ts_aux_sym_import] = SHIFT(5),
        [ts_aux_sym_type] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_aux_sym_var] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_aux_sym_func] = REDUCE(ts_aux_sym_program_repeat0, 0),
    },
    [3] = {
        [ts_sym_imports_block] = SHIFT(3),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_sym_comment] = SHIFT(3),
        [ts_aux_sym_program_repeat0] = SHIFT(4),
        [ts_aux_sym_import] = SHIFT(5),
        [ts_aux_sym_type] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_aux_sym_var] = REDUCE(ts_aux_sym_program_repeat0, 0),
        [ts_aux_sym_func] = REDUCE(ts_aux_sym_program_repeat0, 0),
    },
    [4] = {
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_sym_comment] = SHIFT(4),
        [ts_aux_sym_type] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_aux_sym_var] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_aux_sym_func] = REDUCE(ts_aux_sym_program_repeat0, 2),
    },
    [5] = {
        [ts_sym_package_import] = SHIFT(6),
        [ts_sym_string] = SHIFT(7),
        [ts_sym_comment] = SHIFT(5),
        [ts_aux_sym_1] = SHIFT(8),
    },
    [6] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_imports_block, 2),
        [ts_sym_comment] = SHIFT(6),
        [ts_aux_sym_import] = REDUCE(ts_sym_imports_block, 2),
        [ts_aux_sym_type] = REDUCE(ts_sym_imports_block, 2),
        [ts_aux_sym_var] = REDUCE(ts_sym_imports_block, 2),
        [ts_aux_sym_func] = REDUCE(ts_sym_imports_block, 2),
    },
    [7] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_package_import, 1),
        [ts_sym_comment] = SHIFT(7),
        [ts_aux_sym_import] = REDUCE(ts_sym_package_import, 1),
        [ts_aux_sym_type] = REDUCE(ts_sym_package_import, 1),
        [ts_aux_sym_var] = REDUCE(ts_sym_package_import, 1),
        [ts_aux_sym_func] = REDUCE(ts_sym_package_import, 1),
    },
    [8] = {
        [ts_sym_package_import] = SHIFT(9),
        [ts_builtin_sym_error] = SHIFT(12),
        [ts_sym_string] = SHIFT(10),
        [ts_sym_comment] = SHIFT(8),
        [ts_aux_sym_imports_block_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_imports_block_repeat0, 0),
    },
    [9] = {
        [ts_sym_package_import] = SHIFT(9),
        [ts_sym_string] = SHIFT(10),
        [ts_sym_comment] = SHIFT(9),
        [ts_aux_sym_imports_block_repeat0] = SHIFT(11),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_imports_block_repeat0, 0),
    },
    [10] = {
        [ts_sym_string] = REDUCE(ts_sym_package_import, 1),
        [ts_sym_comment] = SHIFT(10),
        [ts_aux_sym_2] = REDUCE(ts_sym_package_import, 1),
    },
    [11] = {
        [ts_sym_comment] = SHIFT(11),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_imports_block_repeat0, 2),
    },
    [12] = {
        [ts_sym_comment] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(13),
    },
    [13] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_imports_block, 4),
        [ts_sym_comment] = SHIFT(13),
        [ts_aux_sym_import] = REDUCE(ts_sym_imports_block, 4),
        [ts_aux_sym_type] = REDUCE(ts_sym_imports_block, 4),
        [ts_aux_sym_var] = REDUCE(ts_sym_imports_block, 4),
        [ts_aux_sym_func] = REDUCE(ts_sym_imports_block, 4),
    },
    [14] = {
        [ts_sym_declaration] = SHIFT(15),
        [ts_sym_type_declaration] = SHIFT(16),
        [ts_sym_var_declaration] = SHIFT(16),
        [ts_sym_func_declaration] = SHIFT(16),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat1, 0),
        [ts_sym_comment] = SHIFT(14),
        [ts_aux_sym_program_repeat1] = SHIFT(208),
        [ts_aux_sym_type] = SHIFT(18),
        [ts_aux_sym_var] = SHIFT(156),
        [ts_aux_sym_func] = SHIFT(176),
    },
    [15] = {
        [ts_sym_declaration] = SHIFT(15),
        [ts_sym_type_declaration] = SHIFT(16),
        [ts_sym_var_declaration] = SHIFT(16),
        [ts_sym_func_declaration] = SHIFT(16),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat1, 0),
        [ts_sym_comment] = SHIFT(15),
        [ts_aux_sym_program_repeat1] = SHIFT(17),
        [ts_aux_sym_type] = SHIFT(18),
        [ts_aux_sym_var] = SHIFT(156),
        [ts_aux_sym_func] = SHIFT(176),
    },
    [16] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_declaration, 1),
        [ts_sym_comment] = SHIFT(16),
        [ts_aux_sym_type] = REDUCE(ts_sym_declaration, 1),
        [ts_aux_sym_var] = REDUCE(ts_sym_declaration, 1),
        [ts_aux_sym_func] = REDUCE(ts_sym_declaration, 1),
    },
    [17] = {
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat1, 2),
        [ts_sym_comment] = SHIFT(17),
    },
    [18] = {
        [ts_sym_type_name] = SHIFT(19),
        [ts_sym__identifier] = SHIFT(155),
        [ts_sym_comment] = SHIFT(18),
    },
    [19] = {
        [ts_sym_type_expression] = SHIFT(20),
        [ts_sym_pointer_type] = SHIFT(22),
        [ts_sym_map_type] = SHIFT(22),
        [ts_sym_slice_type] = SHIFT(22),
        [ts_sym_struct_type] = SHIFT(22),
        [ts_sym_interface_type] = SHIFT(22),
        [ts_sym_type_name] = SHIFT(22),
        [ts_sym__identifier] = SHIFT(23),
        [ts_sym_comment] = SHIFT(19),
        [ts_aux_sym_6] = SHIFT(24),
        [ts_aux_sym_map] = SHIFT(26),
        [ts_aux_sym_7] = SHIFT(31),
        [ts_aux_sym_struct] = SHIFT(34),
        [ts_aux_sym_interface] = SHIFT(151),
    },
    [20] = {
        [ts_sym__terminator] = SHIFT(21),
        [ts_sym_comment] = SHIFT(20),
    },
    [21] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_type_declaration, 4),
        [ts_sym_comment] = SHIFT(21),
        [ts_aux_sym_type] = REDUCE(ts_sym_type_declaration, 4),
        [ts_aux_sym_var] = REDUCE(ts_sym_type_declaration, 4),
        [ts_aux_sym_func] = REDUCE(ts_sym_type_declaration, 4),
    },
    [22] = {
        [ts_sym__terminator] = REDUCE(ts_sym_type_expression, 1),
        [ts_sym_comment] = SHIFT(22),
    },
    [23] = {
        [ts_sym__terminator] = REDUCE(ts_sym_type_name, 1),
        [ts_sym_comment] = SHIFT(23),
    },
    [24] = {
        [ts_sym_type_expression] = SHIFT(25),
        [ts_sym_pointer_type] = SHIFT(22),
        [ts_sym_map_type] = SHIFT(22),
        [ts_sym_slice_type] = SHIFT(22),
        [ts_sym_struct_type] = SHIFT(22),
        [ts_sym_interface_type] = SHIFT(22),
        [ts_sym_type_name] = SHIFT(22),
        [ts_sym__identifier] = SHIFT(23),
        [ts_sym_comment] = SHIFT(24),
        [ts_aux_sym_6] = SHIFT(24),
        [ts_aux_sym_map] = SHIFT(26),
        [ts_aux_sym_7] = SHIFT(31),
        [ts_aux_sym_struct] = SHIFT(34),
        [ts_aux_sym_interface] = SHIFT(151),
    },
    [25] = {
        [ts_sym__terminator] = REDUCE(ts_sym_pointer_type, 2),
        [ts_sym_comment] = SHIFT(25),
    },
    [26] = {
        [ts_sym_comment] = SHIFT(26),
        [ts_aux_sym_7] = SHIFT(27),
    },
    [27] = {
        [ts_sym_type_expression] = SHIFT(28),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(27),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [28] = {
        [ts_sym_comment] = SHIFT(28),
        [ts_aux_sym_8] = SHIFT(29),
    },
    [29] = {
        [ts_sym_type_expression] = SHIFT(30),
        [ts_sym_pointer_type] = SHIFT(22),
        [ts_sym_map_type] = SHIFT(22),
        [ts_sym_slice_type] = SHIFT(22),
        [ts_sym_struct_type] = SHIFT(22),
        [ts_sym_interface_type] = SHIFT(22),
        [ts_sym_type_name] = SHIFT(22),
        [ts_sym__identifier] = SHIFT(23),
        [ts_sym_comment] = SHIFT(29),
        [ts_aux_sym_6] = SHIFT(24),
        [ts_aux_sym_map] = SHIFT(26),
        [ts_aux_sym_7] = SHIFT(31),
        [ts_aux_sym_struct] = SHIFT(34),
        [ts_aux_sym_interface] = SHIFT(151),
    },
    [30] = {
        [ts_sym__terminator] = REDUCE(ts_sym_map_type, 5),
        [ts_sym_comment] = SHIFT(30),
    },
    [31] = {
        [ts_sym_comment] = SHIFT(31),
        [ts_aux_sym_8] = SHIFT(32),
    },
    [32] = {
        [ts_sym_type_expression] = SHIFT(33),
        [ts_sym_pointer_type] = SHIFT(22),
        [ts_sym_map_type] = SHIFT(22),
        [ts_sym_slice_type] = SHIFT(22),
        [ts_sym_struct_type] = SHIFT(22),
        [ts_sym_interface_type] = SHIFT(22),
        [ts_sym_type_name] = SHIFT(22),
        [ts_sym__identifier] = SHIFT(23),
        [ts_sym_comment] = SHIFT(32),
        [ts_aux_sym_6] = SHIFT(24),
        [ts_aux_sym_map] = SHIFT(26),
        [ts_aux_sym_7] = SHIFT(31),
        [ts_aux_sym_struct] = SHIFT(34),
        [ts_aux_sym_interface] = SHIFT(151),
    },
    [33] = {
        [ts_sym__terminator] = REDUCE(ts_sym_slice_type, 3),
        [ts_sym_comment] = SHIFT(33),
    },
    [34] = {
        [ts_sym_comment] = SHIFT(34),
        [ts_aux_sym_4] = SHIFT(35),
    },
    [35] = {
        [ts_sym_var_name] = SHIFT(36),
        [ts_sym__identifier] = SHIFT(38),
        [ts_sym_comment] = SHIFT(35),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(149),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 0),
    },
    [36] = {
        [ts_sym_type_expression] = SHIFT(37),
        [ts_sym_pointer_type] = SHIFT(40),
        [ts_sym_map_type] = SHIFT(40),
        [ts_sym_slice_type] = SHIFT(40),
        [ts_sym_struct_type] = SHIFT(40),
        [ts_sym_interface_type] = SHIFT(40),
        [ts_sym_type_name] = SHIFT(40),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(36),
        [ts_aux_sym_6] = SHIFT(42),
        [ts_aux_sym_map] = SHIFT(44),
        [ts_aux_sym_7] = SHIFT(49),
        [ts_aux_sym_struct] = SHIFT(52),
        [ts_aux_sym_interface] = SHIFT(56),
    },
    [37] = {
        [ts_sym_var_name] = SHIFT(36),
        [ts_sym__identifier] = SHIFT(38),
        [ts_sym_comment] = SHIFT(37),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(39),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 0),
    },
    [38] = {
        [ts_sym__identifier] = REDUCE(ts_sym_var_name, 1),
        [ts_sym_comment] = SHIFT(38),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_map] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_interface] = REDUCE(ts_sym_var_name, 1),
    },
    [39] = {
        [ts_sym_comment] = SHIFT(39),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 3),
    },
    [40] = {
        [ts_sym__identifier] = REDUCE(ts_sym_type_expression, 1),
        [ts_sym_comment] = SHIFT(40),
        [ts_aux_sym_5] = REDUCE(ts_sym_type_expression, 1),
    },
    [41] = {
        [ts_sym__identifier] = REDUCE(ts_sym_type_name, 1),
        [ts_sym_comment] = SHIFT(41),
        [ts_aux_sym_5] = REDUCE(ts_sym_type_name, 1),
    },
    [42] = {
        [ts_sym_type_expression] = SHIFT(43),
        [ts_sym_pointer_type] = SHIFT(40),
        [ts_sym_map_type] = SHIFT(40),
        [ts_sym_slice_type] = SHIFT(40),
        [ts_sym_struct_type] = SHIFT(40),
        [ts_sym_interface_type] = SHIFT(40),
        [ts_sym_type_name] = SHIFT(40),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(42),
        [ts_aux_sym_6] = SHIFT(42),
        [ts_aux_sym_map] = SHIFT(44),
        [ts_aux_sym_7] = SHIFT(49),
        [ts_aux_sym_struct] = SHIFT(52),
        [ts_aux_sym_interface] = SHIFT(56),
    },
    [43] = {
        [ts_sym__identifier] = REDUCE(ts_sym_pointer_type, 2),
        [ts_sym_comment] = SHIFT(43),
        [ts_aux_sym_5] = REDUCE(ts_sym_pointer_type, 2),
    },
    [44] = {
        [ts_sym_comment] = SHIFT(44),
        [ts_aux_sym_7] = SHIFT(45),
    },
    [45] = {
        [ts_sym_type_expression] = SHIFT(46),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(45),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [46] = {
        [ts_sym_comment] = SHIFT(46),
        [ts_aux_sym_8] = SHIFT(47),
    },
    [47] = {
        [ts_sym_type_expression] = SHIFT(48),
        [ts_sym_pointer_type] = SHIFT(40),
        [ts_sym_map_type] = SHIFT(40),
        [ts_sym_slice_type] = SHIFT(40),
        [ts_sym_struct_type] = SHIFT(40),
        [ts_sym_interface_type] = SHIFT(40),
        [ts_sym_type_name] = SHIFT(40),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(47),
        [ts_aux_sym_6] = SHIFT(42),
        [ts_aux_sym_map] = SHIFT(44),
        [ts_aux_sym_7] = SHIFT(49),
        [ts_aux_sym_struct] = SHIFT(52),
        [ts_aux_sym_interface] = SHIFT(56),
    },
    [48] = {
        [ts_sym__identifier] = REDUCE(ts_sym_map_type, 5),
        [ts_sym_comment] = SHIFT(48),
        [ts_aux_sym_5] = REDUCE(ts_sym_map_type, 5),
    },
    [49] = {
        [ts_sym_comment] = SHIFT(49),
        [ts_aux_sym_8] = SHIFT(50),
    },
    [50] = {
        [ts_sym_type_expression] = SHIFT(51),
        [ts_sym_pointer_type] = SHIFT(40),
        [ts_sym_map_type] = SHIFT(40),
        [ts_sym_slice_type] = SHIFT(40),
        [ts_sym_struct_type] = SHIFT(40),
        [ts_sym_interface_type] = SHIFT(40),
        [ts_sym_type_name] = SHIFT(40),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(50),
        [ts_aux_sym_6] = SHIFT(42),
        [ts_aux_sym_map] = SHIFT(44),
        [ts_aux_sym_7] = SHIFT(49),
        [ts_aux_sym_struct] = SHIFT(52),
        [ts_aux_sym_interface] = SHIFT(56),
    },
    [51] = {
        [ts_sym__identifier] = REDUCE(ts_sym_slice_type, 3),
        [ts_sym_comment] = SHIFT(51),
        [ts_aux_sym_5] = REDUCE(ts_sym_slice_type, 3),
    },
    [52] = {
        [ts_sym_comment] = SHIFT(52),
        [ts_aux_sym_4] = SHIFT(53),
    },
    [53] = {
        [ts_sym_var_name] = SHIFT(36),
        [ts_sym__identifier] = SHIFT(38),
        [ts_sym_comment] = SHIFT(53),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(54),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 0),
    },
    [54] = {
        [ts_sym_comment] = SHIFT(54),
        [ts_aux_sym_5] = SHIFT(55),
    },
    [55] = {
        [ts_sym__identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT(55),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 4),
    },
    [56] = {
        [ts_sym_comment] = SHIFT(56),
        [ts_aux_sym_4] = SHIFT(57),
    },
    [57] = {
        [ts_sym_var_name] = SHIFT(58),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(57),
        [ts_aux_sym_interface_type_repeat0] = SHIFT(147),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 0),
    },
    [58] = {
        [ts_sym__func_signature] = SHIFT(59),
        [ts_sym_comment] = SHIFT(58),
        [ts_aux_sym_1] = SHIFT(62),
    },
    [59] = {
        [ts_sym_var_name] = SHIFT(58),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(59),
        [ts_aux_sym_interface_type_repeat0] = SHIFT(61),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 0),
    },
    [60] = {
        [ts_sym_comment] = SHIFT(60),
        [ts_aux_sym_1] = REDUCE(ts_sym_var_name, 1),
    },
    [61] = {
        [ts_sym_comment] = SHIFT(61),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 3),
    },
    [62] = {
        [ts_sym_var_name] = SHIFT(63),
        [ts_sym__identifier] = SHIFT(134),
        [ts_sym_comment] = SHIFT(62),
        [ts_aux_sym_2] = SHIFT(138),
    },
    [63] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_sym_comment] = SHIFT(63),
        [ts_aux_sym__func_signature_repeat0] = SHIFT(64),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_20] = SHIFT(135),
    },
    [64] = {
        [ts_sym_type_expression] = SHIFT(65),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(64),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [65] = {
        [ts_sym_comment] = SHIFT(65),
        [ts_aux_sym__func_signature_repeat2] = SHIFT(66),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat2, 0),
        [ts_aux_sym_20] = SHIFT(87),
    },
    [66] = {
        [ts_sym_comment] = SHIFT(66),
        [ts_aux_sym_2] = SHIFT(67),
    },
    [67] = {
        [ts_sym_type_name] = SHIFT(68),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(67),
        [ts_aux_sym_1] = SHIFT(69),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 6),
    },
    [68] = {
        [ts_sym__identifier] = REDUCE(ts_sym__func_signature, 7),
        [ts_sym_comment] = SHIFT(68),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 7),
    },
    [69] = {
        [ts_sym_var_name] = SHIFT(70),
        [ts_sym_type_name] = SHIFT(80),
        [ts_sym__identifier] = SHIFT(86),
        [ts_sym_comment] = SHIFT(69),
    },
    [70] = {
        [ts_sym_type_name] = SHIFT(71),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(70),
    },
    [71] = {
        [ts_sym_comment] = SHIFT(71),
        [ts_aux_sym__func_signature_repeat3] = SHIFT(72),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 0),
        [ts_aux_sym_20] = SHIFT(74),
    },
    [72] = {
        [ts_sym_comment] = SHIFT(72),
        [ts_aux_sym_2] = SHIFT(73),
    },
    [73] = {
        [ts_sym__identifier] = REDUCE(ts_sym__func_signature, 11),
        [ts_sym_comment] = SHIFT(73),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 11),
    },
    [74] = {
        [ts_sym_var_name] = SHIFT(75),
        [ts_sym__identifier] = SHIFT(79),
        [ts_sym_comment] = SHIFT(74),
    },
    [75] = {
        [ts_sym_type_name] = SHIFT(76),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(75),
    },
    [76] = {
        [ts_sym_comment] = SHIFT(76),
        [ts_aux_sym__func_signature_repeat3] = SHIFT(77),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 0),
        [ts_aux_sym_20] = SHIFT(74),
    },
    [77] = {
        [ts_sym_comment] = SHIFT(77),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 4),
    },
    [78] = {
        [ts_sym_comment] = SHIFT(78),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_type_name, 1),
    },
    [79] = {
        [ts_sym__identifier] = REDUCE(ts_sym_var_name, 1),
        [ts_sym_comment] = SHIFT(79),
    },
    [80] = {
        [ts_sym_comment] = SHIFT(80),
        [ts_aux_sym__func_signature_repeat4] = SHIFT(81),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 0),
        [ts_aux_sym_20] = SHIFT(83),
    },
    [81] = {
        [ts_sym_comment] = SHIFT(81),
        [ts_aux_sym_2] = SHIFT(82),
    },
    [82] = {
        [ts_sym__identifier] = REDUCE(ts_sym__func_signature, 10),
        [ts_sym_comment] = SHIFT(82),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 10),
    },
    [83] = {
        [ts_sym_type_name] = SHIFT(84),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(83),
    },
    [84] = {
        [ts_sym_comment] = SHIFT(84),
        [ts_aux_sym__func_signature_repeat4] = SHIFT(85),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 0),
        [ts_aux_sym_20] = SHIFT(83),
    },
    [85] = {
        [ts_sym_comment] = SHIFT(85),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 3),
    },
    [86] = {
        [ts_sym__identifier] = REDUCE(ts_sym_var_name, 1),
        [ts_sym_comment] = SHIFT(86),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_type_name, 1),
    },
    [87] = {
        [ts_sym_var_name] = SHIFT(88),
        [ts_sym__identifier] = SHIFT(134),
        [ts_sym_comment] = SHIFT(87),
    },
    [88] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_sym_comment] = SHIFT(88),
        [ts_aux_sym__func_signature_repeat1] = SHIFT(89),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_20] = SHIFT(131),
    },
    [89] = {
        [ts_sym_type_expression] = SHIFT(90),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(89),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [90] = {
        [ts_sym_comment] = SHIFT(90),
        [ts_aux_sym__func_signature_repeat2] = SHIFT(91),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat2, 0),
        [ts_aux_sym_20] = SHIFT(87),
    },
    [91] = {
        [ts_sym_comment] = SHIFT(91),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat2, 5),
    },
    [92] = {
        [ts_sym_comment] = SHIFT(92),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_type_expression, 1),
    },
    [93] = {
        [ts_sym_type_expression] = SHIFT(94),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(93),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [94] = {
        [ts_sym_comment] = SHIFT(94),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_pointer_type, 2),
    },
    [95] = {
        [ts_sym_comment] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(96),
    },
    [96] = {
        [ts_sym_type_expression] = SHIFT(97),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(96),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [97] = {
        [ts_sym_comment] = SHIFT(97),
        [ts_aux_sym_8] = SHIFT(98),
    },
    [98] = {
        [ts_sym_type_expression] = SHIFT(99),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(98),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [99] = {
        [ts_sym_comment] = SHIFT(99),
        [ts_aux_sym_2] = REDUCE(ts_sym_map_type, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_map_type, 5),
    },
    [100] = {
        [ts_sym_comment] = SHIFT(100),
        [ts_aux_sym_8] = SHIFT(101),
    },
    [101] = {
        [ts_sym_type_expression] = SHIFT(102),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(101),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [102] = {
        [ts_sym_comment] = SHIFT(102),
        [ts_aux_sym_2] = REDUCE(ts_sym_slice_type, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_slice_type, 3),
    },
    [103] = {
        [ts_sym_comment] = SHIFT(103),
        [ts_aux_sym_4] = SHIFT(104),
    },
    [104] = {
        [ts_sym_var_name] = SHIFT(36),
        [ts_sym__identifier] = SHIFT(38),
        [ts_sym_comment] = SHIFT(104),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(105),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 0),
    },
    [105] = {
        [ts_sym_comment] = SHIFT(105),
        [ts_aux_sym_5] = SHIFT(106),
    },
    [106] = {
        [ts_sym_comment] = SHIFT(106),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_struct_type, 4),
    },
    [107] = {
        [ts_sym_comment] = SHIFT(107),
        [ts_aux_sym_4] = SHIFT(108),
    },
    [108] = {
        [ts_sym_var_name] = SHIFT(58),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(108),
        [ts_aux_sym_interface_type_repeat0] = SHIFT(109),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 0),
    },
    [109] = {
        [ts_sym_comment] = SHIFT(109),
        [ts_aux_sym_5] = SHIFT(110),
    },
    [110] = {
        [ts_sym_comment] = SHIFT(110),
        [ts_aux_sym_2] = REDUCE(ts_sym_interface_type, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_interface_type, 4),
    },
    [111] = {
        [ts_sym_comment] = SHIFT(111),
        [ts_aux_sym_8] = REDUCE(ts_sym_type_expression, 1),
    },
    [112] = {
        [ts_sym_comment] = SHIFT(112),
        [ts_aux_sym_8] = REDUCE(ts_sym_type_name, 1),
    },
    [113] = {
        [ts_sym_type_expression] = SHIFT(114),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(113),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [114] = {
        [ts_sym_comment] = SHIFT(114),
        [ts_aux_sym_8] = REDUCE(ts_sym_pointer_type, 2),
    },
    [115] = {
        [ts_sym_comment] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(116),
    },
    [116] = {
        [ts_sym_type_expression] = SHIFT(117),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(116),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [117] = {
        [ts_sym_comment] = SHIFT(117),
        [ts_aux_sym_8] = SHIFT(118),
    },
    [118] = {
        [ts_sym_type_expression] = SHIFT(119),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(118),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [119] = {
        [ts_sym_comment] = SHIFT(119),
        [ts_aux_sym_8] = REDUCE(ts_sym_map_type, 5),
    },
    [120] = {
        [ts_sym_comment] = SHIFT(120),
        [ts_aux_sym_8] = SHIFT(121),
    },
    [121] = {
        [ts_sym_type_expression] = SHIFT(122),
        [ts_sym_pointer_type] = SHIFT(111),
        [ts_sym_map_type] = SHIFT(111),
        [ts_sym_slice_type] = SHIFT(111),
        [ts_sym_struct_type] = SHIFT(111),
        [ts_sym_interface_type] = SHIFT(111),
        [ts_sym_type_name] = SHIFT(111),
        [ts_sym__identifier] = SHIFT(112),
        [ts_sym_comment] = SHIFT(121),
        [ts_aux_sym_6] = SHIFT(113),
        [ts_aux_sym_map] = SHIFT(115),
        [ts_aux_sym_7] = SHIFT(120),
        [ts_aux_sym_struct] = SHIFT(123),
        [ts_aux_sym_interface] = SHIFT(127),
    },
    [122] = {
        [ts_sym_comment] = SHIFT(122),
        [ts_aux_sym_8] = REDUCE(ts_sym_slice_type, 3),
    },
    [123] = {
        [ts_sym_comment] = SHIFT(123),
        [ts_aux_sym_4] = SHIFT(124),
    },
    [124] = {
        [ts_sym_var_name] = SHIFT(36),
        [ts_sym__identifier] = SHIFT(38),
        [ts_sym_comment] = SHIFT(124),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(125),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_struct_type_repeat0, 0),
    },
    [125] = {
        [ts_sym_comment] = SHIFT(125),
        [ts_aux_sym_5] = SHIFT(126),
    },
    [126] = {
        [ts_sym_comment] = SHIFT(126),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [127] = {
        [ts_sym_comment] = SHIFT(127),
        [ts_aux_sym_4] = SHIFT(128),
    },
    [128] = {
        [ts_sym_var_name] = SHIFT(58),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(128),
        [ts_aux_sym_interface_type_repeat0] = SHIFT(129),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 0),
    },
    [129] = {
        [ts_sym_comment] = SHIFT(129),
        [ts_aux_sym_5] = SHIFT(130),
    },
    [130] = {
        [ts_sym_comment] = SHIFT(130),
        [ts_aux_sym_8] = REDUCE(ts_sym_interface_type, 4),
    },
    [131] = {
        [ts_sym_var_name] = SHIFT(132),
        [ts_sym__identifier] = SHIFT(134),
        [ts_sym_comment] = SHIFT(131),
    },
    [132] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_sym_comment] = SHIFT(132),
        [ts_aux_sym__func_signature_repeat1] = SHIFT(133),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat1, 0),
        [ts_aux_sym_20] = SHIFT(131),
    },
    [133] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
        [ts_sym_comment] = SHIFT(133),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat1, 3),
    },
    [134] = {
        [ts_sym__identifier] = REDUCE(ts_sym_var_name, 1),
        [ts_sym_comment] = SHIFT(134),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_map] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_interface] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_var_name, 1),
    },
    [135] = {
        [ts_sym_var_name] = SHIFT(136),
        [ts_sym__identifier] = SHIFT(134),
        [ts_sym_comment] = SHIFT(135),
    },
    [136] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_sym_comment] = SHIFT(136),
        [ts_aux_sym__func_signature_repeat0] = SHIFT(137),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_20] = SHIFT(135),
    },
    [137] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
        [ts_sym_comment] = SHIFT(137),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat0, 3),
    },
    [138] = {
        [ts_sym_type_name] = SHIFT(139),
        [ts_sym__identifier] = SHIFT(41),
        [ts_sym_comment] = SHIFT(138),
        [ts_aux_sym_1] = SHIFT(140),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 2),
    },
    [139] = {
        [ts_sym__identifier] = REDUCE(ts_sym__func_signature, 3),
        [ts_sym_comment] = SHIFT(139),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 3),
    },
    [140] = {
        [ts_sym_var_name] = SHIFT(141),
        [ts_sym_type_name] = SHIFT(144),
        [ts_sym__identifier] = SHIFT(86),
        [ts_sym_comment] = SHIFT(140),
    },
    [141] = {
        [ts_sym_type_name] = SHIFT(142),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(141),
    },
    [142] = {
        [ts_sym_comment] = SHIFT(142),
        [ts_aux_sym__func_signature_repeat3] = SHIFT(143),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 0),
        [ts_aux_sym_20] = SHIFT(74),
    },
    [143] = {
        [ts_sym_comment] = SHIFT(143),
        [ts_aux_sym_2] = SHIFT(68),
    },
    [144] = {
        [ts_sym_comment] = SHIFT(144),
        [ts_aux_sym__func_signature_repeat4] = SHIFT(145),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 0),
        [ts_aux_sym_20] = SHIFT(83),
    },
    [145] = {
        [ts_sym_comment] = SHIFT(145),
        [ts_aux_sym_2] = SHIFT(146),
    },
    [146] = {
        [ts_sym__identifier] = REDUCE(ts_sym__func_signature, 6),
        [ts_sym_comment] = SHIFT(146),
        [ts_aux_sym_5] = REDUCE(ts_sym__func_signature, 6),
    },
    [147] = {
        [ts_sym_comment] = SHIFT(147),
        [ts_aux_sym_5] = SHIFT(148),
    },
    [148] = {
        [ts_sym__identifier] = REDUCE(ts_sym_interface_type, 4),
        [ts_sym_comment] = SHIFT(148),
        [ts_aux_sym_5] = REDUCE(ts_sym_interface_type, 4),
    },
    [149] = {
        [ts_sym_comment] = SHIFT(149),
        [ts_aux_sym_5] = SHIFT(150),
    },
    [150] = {
        [ts_sym__terminator] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT(150),
    },
    [151] = {
        [ts_sym_comment] = SHIFT(151),
        [ts_aux_sym_4] = SHIFT(152),
    },
    [152] = {
        [ts_sym_var_name] = SHIFT(58),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(152),
        [ts_aux_sym_interface_type_repeat0] = SHIFT(153),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_interface_type_repeat0, 0),
    },
    [153] = {
        [ts_sym_comment] = SHIFT(153),
        [ts_aux_sym_5] = SHIFT(154),
    },
    [154] = {
        [ts_sym__terminator] = REDUCE(ts_sym_interface_type, 4),
        [ts_sym_comment] = SHIFT(154),
    },
    [155] = {
        [ts_sym__identifier] = REDUCE(ts_sym_type_name, 1),
        [ts_sym_comment] = SHIFT(155),
        [ts_aux_sym_6] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_map] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_type_name, 1),
        [ts_aux_sym_interface] = REDUCE(ts_sym_type_name, 1),
    },
    [156] = {
        [ts_sym_var_name] = SHIFT(157),
        [ts_sym__identifier] = SHIFT(175),
        [ts_sym_comment] = SHIFT(156),
    },
    [157] = {
        [ts_sym_comment] = SHIFT(157),
        [ts_aux_sym_3] = SHIFT(158),
    },
    [158] = {
        [ts_sym_expression] = SHIFT(159),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(158),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [159] = {
        [ts_sym__terminator] = SHIFT(160),
        [ts_sym_comment] = SHIFT(159),
        [ts_aux_sym_6] = SHIFT(161),
        [ts_aux_sym_9] = SHIFT(161),
        [ts_aux_sym_10] = SHIFT(163),
        [ts_aux_sym_11] = SHIFT(163),
        [ts_aux_sym_12] = SHIFT(165),
        [ts_aux_sym_13] = SHIFT(167),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [160] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT(160),
        [ts_aux_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_var] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_func] = REDUCE(ts_sym_var_declaration, 5),
    },
    [161] = {
        [ts_sym_expression] = SHIFT(162),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(161),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [162] = {
        [ts_sym__terminator] = REDUCE(ts_sym_math_op, 3),
        [ts_sym_comment] = SHIFT(162),
        [ts_aux_sym_6] = SHIFT(161),
        [ts_aux_sym_9] = SHIFT(161),
        [ts_aux_sym_10] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(167),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [163] = {
        [ts_sym_expression] = SHIFT(164),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(163),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [164] = {
        [ts_sym__terminator] = REDUCE(ts_sym_math_op, 3),
        [ts_sym_comment] = SHIFT(164),
        [ts_aux_sym_6] = SHIFT(161),
        [ts_aux_sym_9] = SHIFT(161),
        [ts_aux_sym_10] = SHIFT(163),
        [ts_aux_sym_11] = SHIFT(163),
        [ts_aux_sym_12] = SHIFT(165),
        [ts_aux_sym_13] = SHIFT(167),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [165] = {
        [ts_sym_expression] = SHIFT(166),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(165),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [166] = {
        [ts_sym__terminator] = REDUCE(ts_sym_bool_op, 3),
        [ts_sym_comment] = SHIFT(166),
        [ts_aux_sym_6] = SHIFT(161),
        [ts_aux_sym_9] = SHIFT(161),
        [ts_aux_sym_10] = SHIFT(163),
        [ts_aux_sym_11] = SHIFT(163),
        [ts_aux_sym_12] = SHIFT(165),
        [ts_aux_sym_13] = SHIFT(167),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [167] = {
        [ts_sym_expression] = SHIFT(168),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(167),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [168] = {
        [ts_sym__terminator] = REDUCE(ts_sym_bool_op, 3),
        [ts_sym_comment] = SHIFT(168),
        [ts_aux_sym_6] = SHIFT(161),
        [ts_aux_sym_9] = SHIFT(161),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(167),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [169] = {
        [ts_sym_expression] = SHIFT(170),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(169),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [170] = {
        [ts_sym__terminator] = REDUCE(ts_sym_bool_op, 3),
        [ts_sym_comment] = SHIFT(170),
        [ts_aux_sym_6] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_14] = SHIFT(169),
        [ts_aux_sym_15] = SHIFT(169),
        [ts_aux_sym_16] = SHIFT(169),
        [ts_aux_sym_17] = SHIFT(169),
        [ts_aux_sym_18] = SHIFT(169),
    },
    [171] = {
        [ts_sym__terminator] = REDUCE(ts_sym_expression, 1),
        [ts_sym_comment] = SHIFT(171),
        [ts_aux_sym_6] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
    },
    [172] = {
        [ts_sym__terminator] = REDUCE(ts_sym_var_name, 1),
        [ts_sym_comment] = SHIFT(172),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_name, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_var_name, 1),
    },
    [173] = {
        [ts_sym_expression] = SHIFT(174),
        [ts_sym_math_op] = SHIFT(171),
        [ts_sym_bool_op] = SHIFT(171),
        [ts_sym_var_name] = SHIFT(171),
        [ts_sym_string] = SHIFT(171),
        [ts_sym__identifier] = SHIFT(172),
        [ts_sym_number] = SHIFT(171),
        [ts_sym_comment] = SHIFT(173),
        [ts_aux_sym_19] = SHIFT(173),
    },
    [174] = {
        [ts_sym__terminator] = REDUCE(ts_sym_bool_op, 2),
        [ts_sym_comment] = SHIFT(174),
        [ts_aux_sym_6] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
    },
    [175] = {
        [ts_sym_comment] = SHIFT(175),
        [ts_aux_sym_3] = REDUCE(ts_sym_var_name, 1),
    },
    [176] = {
        [ts_sym_var_name] = SHIFT(177),
        [ts_sym__identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT(176),
    },
    [177] = {
        [ts_sym__func_signature] = SHIFT(178),
        [ts_sym_comment] = SHIFT(177),
        [ts_aux_sym_1] = SHIFT(183),
    },
    [178] = {
        [ts_sym_statement_block] = SHIFT(179),
        [ts_sym_comment] = SHIFT(178),
        [ts_aux_sym_4] = SHIFT(181),
    },
    [179] = {
        [ts_sym__terminator] = SHIFT(180),
        [ts_sym_comment] = SHIFT(179),
    },
    [180] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_func_declaration, 5),
        [ts_sym_comment] = SHIFT(180),
        [ts_aux_sym_type] = REDUCE(ts_sym_func_declaration, 5),
        [ts_aux_sym_var] = REDUCE(ts_sym_func_declaration, 5),
        [ts_aux_sym_func] = REDUCE(ts_sym_func_declaration, 5),
    },
    [181] = {
        [ts_sym_comment] = SHIFT(181),
        [ts_aux_sym_5] = SHIFT(182),
    },
    [182] = {
        [ts_sym__terminator] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT(182),
    },
    [183] = {
        [ts_sym_var_name] = SHIFT(184),
        [ts_sym__identifier] = SHIFT(134),
        [ts_sym_comment] = SHIFT(183),
        [ts_aux_sym_2] = SHIFT(199),
    },
    [184] = {
        [ts_sym__identifier] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_sym_comment] = SHIFT(184),
        [ts_aux_sym__func_signature_repeat0] = SHIFT(185),
        [ts_aux_sym_6] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_map] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_interface] = REDUCE(ts_aux_sym__func_signature_repeat0, 0),
        [ts_aux_sym_20] = SHIFT(135),
    },
    [185] = {
        [ts_sym_type_expression] = SHIFT(186),
        [ts_sym_pointer_type] = SHIFT(92),
        [ts_sym_map_type] = SHIFT(92),
        [ts_sym_slice_type] = SHIFT(92),
        [ts_sym_struct_type] = SHIFT(92),
        [ts_sym_interface_type] = SHIFT(92),
        [ts_sym_type_name] = SHIFT(92),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(185),
        [ts_aux_sym_6] = SHIFT(93),
        [ts_aux_sym_map] = SHIFT(95),
        [ts_aux_sym_7] = SHIFT(100),
        [ts_aux_sym_struct] = SHIFT(103),
        [ts_aux_sym_interface] = SHIFT(107),
    },
    [186] = {
        [ts_sym_comment] = SHIFT(186),
        [ts_aux_sym__func_signature_repeat2] = SHIFT(187),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat2, 0),
        [ts_aux_sym_20] = SHIFT(87),
    },
    [187] = {
        [ts_sym_comment] = SHIFT(187),
        [ts_aux_sym_2] = SHIFT(188),
    },
    [188] = {
        [ts_sym_type_name] = SHIFT(189),
        [ts_sym__identifier] = SHIFT(190),
        [ts_sym_comment] = SHIFT(188),
        [ts_aux_sym_1] = SHIFT(191),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 6),
    },
    [189] = {
        [ts_sym_comment] = SHIFT(189),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 7),
    },
    [190] = {
        [ts_sym_comment] = SHIFT(190),
        [ts_aux_sym_4] = REDUCE(ts_sym_type_name, 1),
    },
    [191] = {
        [ts_sym_var_name] = SHIFT(192),
        [ts_sym_type_name] = SHIFT(196),
        [ts_sym__identifier] = SHIFT(86),
        [ts_sym_comment] = SHIFT(191),
    },
    [192] = {
        [ts_sym_type_name] = SHIFT(193),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(192),
    },
    [193] = {
        [ts_sym_comment] = SHIFT(193),
        [ts_aux_sym__func_signature_repeat3] = SHIFT(194),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 0),
        [ts_aux_sym_20] = SHIFT(74),
    },
    [194] = {
        [ts_sym_comment] = SHIFT(194),
        [ts_aux_sym_2] = SHIFT(195),
    },
    [195] = {
        [ts_sym_comment] = SHIFT(195),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 11),
    },
    [196] = {
        [ts_sym_comment] = SHIFT(196),
        [ts_aux_sym__func_signature_repeat4] = SHIFT(197),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 0),
        [ts_aux_sym_20] = SHIFT(83),
    },
    [197] = {
        [ts_sym_comment] = SHIFT(197),
        [ts_aux_sym_2] = SHIFT(198),
    },
    [198] = {
        [ts_sym_comment] = SHIFT(198),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 10),
    },
    [199] = {
        [ts_sym_type_name] = SHIFT(200),
        [ts_sym__identifier] = SHIFT(190),
        [ts_sym_comment] = SHIFT(199),
        [ts_aux_sym_1] = SHIFT(201),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 2),
    },
    [200] = {
        [ts_sym_comment] = SHIFT(200),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 3),
    },
    [201] = {
        [ts_sym_var_name] = SHIFT(202),
        [ts_sym_type_name] = SHIFT(205),
        [ts_sym__identifier] = SHIFT(86),
        [ts_sym_comment] = SHIFT(201),
    },
    [202] = {
        [ts_sym_type_name] = SHIFT(203),
        [ts_sym__identifier] = SHIFT(78),
        [ts_sym_comment] = SHIFT(202),
    },
    [203] = {
        [ts_sym_comment] = SHIFT(203),
        [ts_aux_sym__func_signature_repeat3] = SHIFT(204),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat3, 0),
        [ts_aux_sym_20] = SHIFT(74),
    },
    [204] = {
        [ts_sym_comment] = SHIFT(204),
        [ts_aux_sym_2] = SHIFT(189),
    },
    [205] = {
        [ts_sym_comment] = SHIFT(205),
        [ts_aux_sym__func_signature_repeat4] = SHIFT(206),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym__func_signature_repeat4, 0),
        [ts_aux_sym_20] = SHIFT(83),
    },
    [206] = {
        [ts_sym_comment] = SHIFT(206),
        [ts_aux_sym_2] = SHIFT(207),
    },
    [207] = {
        [ts_sym_comment] = SHIFT(207),
        [ts_aux_sym_4] = REDUCE(ts_sym__func_signature, 6),
    },
    [208] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 3),
        [ts_sym_comment] = SHIFT(208),
    },
    [209] = {
        [ts_sym_package_name] = SHIFT(210),
        [ts_sym__identifier] = SHIFT(211),
        [ts_sym_comment] = SHIFT(209),
    },
    [210] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_package_directive, 2),
        [ts_sym_comment] = SHIFT(210),
        [ts_aux_sym_import] = REDUCE(ts_sym_package_directive, 2),
        [ts_aux_sym_type] = REDUCE(ts_sym_package_directive, 2),
        [ts_aux_sym_var] = REDUCE(ts_sym_package_directive, 2),
        [ts_aux_sym_func] = REDUCE(ts_sym_package_directive, 2),
    },
    [211] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_package_name, 1),
        [ts_sym_comment] = SHIFT(211),
        [ts_aux_sym_import] = REDUCE(ts_sym_package_name, 1),
        [ts_aux_sym_type] = REDUCE(ts_sym_package_name, 1),
        [ts_aux_sym_var] = REDUCE(ts_sym_package_name, 1),
        [ts_aux_sym_func] = REDUCE(ts_sym_package_name, 1),
    },
};

#pragma GCC diagnostic pop

EXPORT_PARSER(ts_parser_golang);
