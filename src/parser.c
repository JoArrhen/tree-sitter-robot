#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 434
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 3
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 25

enum {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_setting_name_token1 = 4,
  aux_sym_setting_name_token2 = 5,
  aux_sym_setting_name_token3 = 6,
  aux_sym_setting_name_token4 = 7,
  aux_sym_setting_name_token5 = 8,
  aux_sym_setting_name_token6 = 9,
  aux_sym_setting_name_token7 = 10,
  aux_sym_setting_name_token8 = 11,
  aux_sym_setting_name_token9 = 12,
  aux_sym_setting_name_token10 = 13,
  aux_sym_setting_name_token11 = 14,
  aux_sym_setting_name_token12 = 15,
  aux_sym_setting_name_token13 = 16,
  aux_sym_setting_name_token14 = 17,
  aux_sym_setting_name_token15 = 18,
  aux_sym_setting_name_token16 = 19,
  aux_sym_setting_name_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  anon_sym_ = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  aux_sym_keyword_setting_name_token1 = 30,
  aux_sym_keyword_setting_name_token2 = 31,
  aux_sym_keyword_setting_name_token3 = 32,
  aux_sym_keyword_setting_name_token4 = 33,
  aux_sym_keyword_setting_name_token5 = 34,
  aux_sym_test_cases_section_token1 = 35,
  aux_sym_test_case_setting_name_token1 = 36,
  aux_sym_test_case_setting_name_token2 = 37,
  anon_sym_RETURN = 38,
  sym__keyword_start_text = 39,
  anon_sym_IF = 40,
  anon_sym_END = 41,
  anon_sym_ELSEIF = 42,
  anon_sym_ELSE = 43,
  anon_sym_TRY = 44,
  anon_sym_EXCEPT = 45,
  anon_sym_FINALLY = 46,
  anon_sym_WHILE = 47,
  anon_sym_FOR = 48,
  anon_sym_IN = 49,
  anon_sym_INRANGE = 50,
  anon_sym_INENUMERATE = 51,
  anon_sym_INZIP = 52,
  anon_sym_VAR = 53,
  anon_sym_GROUP = 54,
  sym_continue_statement = 55,
  sym_break_statement = 56,
  sym_ellipses = 57,
  anon_sym_AT_LBRACE = 58,
  anon_sym_AMP_LBRACE = 59,
  anon_sym_DOLLAR_LBRACE_LBRACE = 60,
  aux_sym_inline_python_expression_token1 = 61,
  anon_sym_RBRACE_RBRACE = 62,
  sym_variable_name = 63,
  sym_text_chunk = 64,
  sym_comment = 65,
  sym__separator = 66,
  aux_sym__whitespace_token1 = 67,
  sym__line_break = 68,
  sym_source_file = 69,
  sym_section = 70,
  sym_settings_section = 71,
  sym_setting_statement = 72,
  sym_setting_name = 73,
  sym_variables_section = 74,
  sym_variable_definition = 75,
  sym_keywords_section = 76,
  sym_keyword_definition = 77,
  sym__keyword_definition_name = 78,
  sym_keyword_definition_body = 79,
  sym_keyword_setting = 80,
  sym_keyword_setting_name = 81,
  sym_test_cases_section = 82,
  sym_test_case_definition = 83,
  sym_test_case_definition_body = 84,
  sym_test_case_setting = 85,
  sym_test_case_setting_name = 86,
  sym_statement = 87,
  sym_return_statement = 88,
  sym_variable_assignment = 89,
  sym_keyword_invocation = 90,
  sym_keyword = 91,
  sym_if_statement = 92,
  sym_elseif_statement = 93,
  sym_else_statement = 94,
  sym_inline_if_statement = 95,
  sym_block = 96,
  sym_inline_elseif_statement = 97,
  sym_inline_else_statement = 98,
  sym_inline_statement = 99,
  sym_try_statement = 100,
  sym_except_statement = 101,
  sym_finally_statement = 102,
  sym_while_statement = 103,
  sym_for_statement = 104,
  sym__for_in = 105,
  sym__for_in_range = 106,
  sym__for_in_enumerate = 107,
  sym__for_in_zip = 108,
  sym_var_statement = 109,
  sym_group_statement = 110,
  sym_arguments = 111,
  sym_arguments_without_continuation = 112,
  sym_continuation = 113,
  sym_argument = 114,
  sym_scalar_variable = 115,
  sym_list_variable = 116,
  sym_dictionary_variable = 117,
  sym_inline_python_expression = 118,
  sym__indentation = 119,
  sym__empty_line = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_settings_section_repeat1 = 122,
  aux_sym_variables_section_repeat1 = 123,
  aux_sym_keywords_section_repeat1 = 124,
  aux_sym__keyword_definition_name_repeat1 = 125,
  aux_sym_keyword_definition_body_repeat1 = 126,
  aux_sym_test_cases_section_repeat1 = 127,
  aux_sym_test_case_definition_body_repeat1 = 128,
  aux_sym_if_statement_repeat1 = 129,
  aux_sym_inline_if_statement_repeat1 = 130,
  aux_sym_block_repeat1 = 131,
  aux_sym_try_statement_repeat1 = 132,
  aux_sym_for_statement_repeat1 = 133,
  aux_sym_arguments_repeat1 = 134,
  aux_sym_arguments_repeat2 = 135,
  aux_sym_argument_repeat1 = 136,
  aux_sym_inline_python_expression_repeat1 = 137,
  alias_sym_python_expression = 138,
  alias_sym_return_value = 139,
  alias_sym_variable_list = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_setting_name_token1] = "setting_name_token1",
  [aux_sym_setting_name_token2] = "setting_name_token2",
  [aux_sym_setting_name_token3] = "setting_name_token3",
  [aux_sym_setting_name_token4] = "setting_name_token4",
  [aux_sym_setting_name_token5] = "setting_name_token5",
  [aux_sym_setting_name_token6] = "setting_name_token6",
  [aux_sym_setting_name_token7] = "setting_name_token7",
  [aux_sym_setting_name_token8] = "setting_name_token8",
  [aux_sym_setting_name_token9] = "setting_name_token9",
  [aux_sym_setting_name_token10] = "setting_name_token10",
  [aux_sym_setting_name_token11] = "setting_name_token11",
  [aux_sym_setting_name_token12] = "setting_name_token12",
  [aux_sym_setting_name_token13] = "setting_name_token13",
  [aux_sym_setting_name_token14] = "setting_name_token14",
  [aux_sym_setting_name_token15] = "setting_name_token15",
  [aux_sym_setting_name_token16] = "setting_name_token16",
  [aux_sym_setting_name_token17] = "setting_name_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [anon_sym_] = " ",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_keyword_setting_name_token1] = "keyword_setting_name_token1",
  [aux_sym_keyword_setting_name_token2] = "keyword_setting_name_token2",
  [aux_sym_keyword_setting_name_token3] = "keyword_setting_name_token3",
  [aux_sym_keyword_setting_name_token4] = "keyword_setting_name_token4",
  [aux_sym_keyword_setting_name_token5] = "keyword_setting_name_token5",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_name_token1] = "test_case_setting_name_token1",
  [aux_sym_test_case_setting_name_token2] = "test_case_setting_name_token2",
  [anon_sym_RETURN] = "RETURN",
  [sym__keyword_start_text] = "text_chunk",
  [anon_sym_IF] = "IF",
  [anon_sym_END] = "END",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_TRY] = "TRY",
  [anon_sym_EXCEPT] = "EXCEPT",
  [anon_sym_FINALLY] = "FINALLY",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_INRANGE] = "IN RANGE",
  [anon_sym_INENUMERATE] = "IN ENUMERATE",
  [anon_sym_INZIP] = "IN ZIP",
  [anon_sym_VAR] = "VAR",
  [anon_sym_GROUP] = "GROUP",
  [sym_continue_statement] = "continue_statement",
  [sym_break_statement] = "break_statement",
  [sym_ellipses] = "ellipses",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [aux_sym_inline_python_expression_token1] = "inline_python_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_setting_name] = "setting_name",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym__keyword_definition_name] = "name",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_keyword_setting_name] = "keyword_setting_name",
  [sym_test_cases_section] = "test_cases_section",
  [sym_test_case_definition] = "test_case_definition",
  [sym_test_case_definition_body] = "body",
  [sym_test_case_setting] = "test_case_setting",
  [sym_test_case_setting_name] = "test_case_setting_name",
  [sym_statement] = "statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_keyword] = "keyword",
  [sym_if_statement] = "if_statement",
  [sym_elseif_statement] = "elseif_statement",
  [sym_else_statement] = "else_statement",
  [sym_inline_if_statement] = "inline_if_statement",
  [sym_block] = "block",
  [sym_inline_elseif_statement] = "inline_elseif_statement",
  [sym_inline_else_statement] = "inline_else_statement",
  [sym_inline_statement] = "inline_statement",
  [sym_try_statement] = "try_statement",
  [sym_except_statement] = "except_statement",
  [sym_finally_statement] = "finally_statement",
  [sym_while_statement] = "while_statement",
  [sym_for_statement] = "for_statement",
  [sym__for_in] = "in",
  [sym__for_in_range] = "in_range",
  [sym__for_in_enumerate] = "in_enumerate",
  [sym__for_in_zip] = "in_zip",
  [sym_var_statement] = "var_statement",
  [sym_group_statement] = "group_statement",
  [sym_arguments] = "arguments",
  [sym_arguments_without_continuation] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym_inline_python_expression] = "inline_python_expression",
  [sym__indentation] = "_indentation",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym__keyword_definition_name_repeat1] = "_keyword_definition_name_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_section_repeat1] = "test_cases_section_repeat1",
  [aux_sym_test_case_definition_body_repeat1] = "test_case_definition_body_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_inline_if_statement_repeat1] = "inline_if_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_inline_python_expression_repeat1] = "inline_python_expression_repeat1",
  [alias_sym_python_expression] = "python_expression",
  [alias_sym_return_value] = "return_value",
  [alias_sym_variable_list] = "variable_list",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_setting_name_token1] = aux_sym_setting_name_token1,
  [aux_sym_setting_name_token2] = aux_sym_setting_name_token2,
  [aux_sym_setting_name_token3] = aux_sym_setting_name_token3,
  [aux_sym_setting_name_token4] = aux_sym_setting_name_token4,
  [aux_sym_setting_name_token5] = aux_sym_setting_name_token5,
  [aux_sym_setting_name_token6] = aux_sym_setting_name_token6,
  [aux_sym_setting_name_token7] = aux_sym_setting_name_token7,
  [aux_sym_setting_name_token8] = aux_sym_setting_name_token8,
  [aux_sym_setting_name_token9] = aux_sym_setting_name_token9,
  [aux_sym_setting_name_token10] = aux_sym_setting_name_token10,
  [aux_sym_setting_name_token11] = aux_sym_setting_name_token11,
  [aux_sym_setting_name_token12] = aux_sym_setting_name_token12,
  [aux_sym_setting_name_token13] = aux_sym_setting_name_token13,
  [aux_sym_setting_name_token14] = aux_sym_setting_name_token14,
  [aux_sym_setting_name_token15] = aux_sym_setting_name_token15,
  [aux_sym_setting_name_token16] = aux_sym_setting_name_token16,
  [aux_sym_setting_name_token17] = aux_sym_setting_name_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_name_token1] = aux_sym_test_case_setting_name_token1,
  [aux_sym_test_case_setting_name_token2] = aux_sym_test_case_setting_name_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [sym__keyword_start_text] = sym_text_chunk,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_EXCEPT] = anon_sym_EXCEPT,
  [anon_sym_FINALLY] = anon_sym_FINALLY,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_INRANGE] = anon_sym_INRANGE,
  [anon_sym_INENUMERATE] = anon_sym_INENUMERATE,
  [anon_sym_INZIP] = anon_sym_INZIP,
  [anon_sym_VAR] = anon_sym_VAR,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [sym_continue_statement] = sym_continue_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_ellipses] = sym_ellipses,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [aux_sym_inline_python_expression_token1] = aux_sym_inline_python_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_setting_name] = sym_setting_name,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym__keyword_definition_name] = sym__keyword_definition_name,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_keyword_setting_name] = sym_keyword_setting_name,
  [sym_test_cases_section] = sym_test_cases_section,
  [sym_test_case_definition] = sym_test_case_definition,
  [sym_test_case_definition_body] = sym_keyword_definition_body,
  [sym_test_case_setting] = sym_test_case_setting,
  [sym_test_case_setting_name] = sym_test_case_setting_name,
  [sym_statement] = sym_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_keyword] = sym_keyword,
  [sym_if_statement] = sym_if_statement,
  [sym_elseif_statement] = sym_elseif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_inline_if_statement] = sym_inline_if_statement,
  [sym_block] = sym_block,
  [sym_inline_elseif_statement] = sym_inline_elseif_statement,
  [sym_inline_else_statement] = sym_inline_else_statement,
  [sym_inline_statement] = sym_inline_statement,
  [sym_try_statement] = sym_try_statement,
  [sym_except_statement] = sym_except_statement,
  [sym_finally_statement] = sym_finally_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_for_statement] = sym_for_statement,
  [sym__for_in] = sym__for_in,
  [sym__for_in_range] = sym__for_in_range,
  [sym__for_in_enumerate] = sym__for_in_enumerate,
  [sym__for_in_zip] = sym__for_in_zip,
  [sym_var_statement] = sym_var_statement,
  [sym_group_statement] = sym_group_statement,
  [sym_arguments] = sym_arguments,
  [sym_arguments_without_continuation] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym_inline_python_expression] = sym_inline_python_expression,
  [sym__indentation] = sym__indentation,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym__keyword_definition_name_repeat1] = aux_sym__keyword_definition_name_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_section_repeat1] = aux_sym_test_cases_section_repeat1,
  [aux_sym_test_case_definition_body_repeat1] = aux_sym_test_case_definition_body_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_inline_if_statement_repeat1] = aux_sym_inline_if_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_try_statement_repeat1] = aux_sym_try_statement_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_inline_python_expression_repeat1] = aux_sym_inline_python_expression_repeat1,
  [alias_sym_python_expression] = alias_sym_python_expression,
  [alias_sym_return_value] = alias_sym_return_value,
  [alias_sym_variable_list] = alias_sym_variable_list,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keywords_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [sym__keyword_start_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXCEPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINALLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INRANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INENUMERATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INZIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_python_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_definition_name] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_test_cases_section] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_try_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_except_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_finally_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_range] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_enumerate] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_zip] = {
    .visible = true,
    .named = true,
  },
  [sym_var_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_group_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_without_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_python_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__indentation] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keywords_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyword_definition_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_try_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_python_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_python_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_list] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_name = 6,
  field_right = 7,
  field_variable = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 1},
  [12] = {.index = 8, .length = 2},
  [13] = {.index = 10, .length = 1},
  [14] = {.index = 11, .length = 2},
  [15] = {.index = 13, .length = 2},
  [16] = {.index = 15, .length = 2},
  [17] = {.index = 17, .length = 2},
  [18] = {.index = 19, .length = 2},
  [19] = {.index = 21, .length = 3},
  [20] = {.index = 24, .length = 3},
  [21] = {.index = 27, .length = 3},
  [22] = {.index = 30, .length = 3},
  [23] = {.index = 33, .length = 4},
  [24] = {.index = 37, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_variable, 2},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_alternative, 0},
  [5] =
    {field_condition, 1},
  [6] =
    {field_body, 2},
  [7] =
    {field_condition, 2},
  [8] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [10] =
    {field_consequence, 3},
  [11] =
    {field_body, 3},
    {field_condition, 1},
  [13] =
    {field_body, 3},
    {field_name, 1},
  [15] =
    {field_alternative, 4},
    {field_condition, 2},
  [17] =
    {field_condition, 2},
    {field_consequence, 4},
  [19] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [21] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [24] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [27] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [30] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [33] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [37] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym__keyword_definition_name,
  },
  [3] = {
    [1] = alias_sym_python_expression,
  },
  [4] = {
    [2] = alias_sym_return_value,
  },
  [22] = {
    [1] = alias_sym_variable_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_return_value,
  aux_sym_for_statement_repeat1, 2,
    aux_sym_for_statement_repeat1,
    alias_sym_variable_list,
  aux_sym_inline_python_expression_repeat1, 2,
    aux_sym_inline_python_expression_repeat1,
    alias_sym_python_expression,
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 12,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 43,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 12,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 57,
  [68] = 68,
  [69] = 62,
  [70] = 70,
  [71] = 61,
  [72] = 61,
  [73] = 57,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 92,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 86,
  [127] = 127,
  [128] = 128,
  [129] = 110,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 108,
  [134] = 104,
  [135] = 135,
  [136] = 108,
  [137] = 118,
  [138] = 123,
  [139] = 121,
  [140] = 119,
  [141] = 141,
  [142] = 115,
  [143] = 122,
  [144] = 123,
  [145] = 121,
  [146] = 122,
  [147] = 130,
  [148] = 96,
  [149] = 125,
  [150] = 118,
  [151] = 119,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 115,
  [159] = 154,
  [160] = 130,
  [161] = 96,
  [162] = 104,
  [163] = 125,
  [164] = 103,
  [165] = 124,
  [166] = 103,
  [167] = 156,
  [168] = 124,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 152,
  [176] = 176,
  [177] = 172,
  [178] = 172,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 174,
  [187] = 187,
  [188] = 173,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 187,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 198,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 193,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 189,
  [212] = 198,
  [213] = 196,
  [214] = 189,
  [215] = 197,
  [216] = 192,
  [217] = 217,
  [218] = 181,
  [219] = 219,
  [220] = 220,
  [221] = 180,
  [222] = 12,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 225,
  [228] = 228,
  [229] = 225,
  [230] = 230,
  [231] = 231,
  [232] = 228,
  [233] = 225,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 234,
  [238] = 238,
  [239] = 235,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 234,
  [250] = 235,
  [251] = 251,
  [252] = 240,
  [253] = 243,
  [254] = 254,
  [255] = 246,
  [256] = 256,
  [257] = 247,
  [258] = 234,
  [259] = 259,
  [260] = 260,
  [261] = 225,
  [262] = 235,
  [263] = 235,
  [264] = 264,
  [265] = 265,
  [266] = 118,
  [267] = 130,
  [268] = 122,
  [269] = 228,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 234,
  [274] = 247,
  [275] = 246,
  [276] = 230,
  [277] = 277,
  [278] = 254,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 243,
  [283] = 240,
  [284] = 284,
  [285] = 285,
  [286] = 251,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 122,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 130,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 118,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 359,
  [376] = 368,
  [377] = 377,
  [378] = 378,
  [379] = 357,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 351,
  [386] = 386,
  [387] = 339,
  [388] = 388,
  [389] = 389,
  [390] = 336,
  [391] = 391,
  [392] = 327,
  [393] = 326,
  [394] = 368,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 357,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 351,
  [406] = 339,
  [407] = 407,
  [408] = 408,
  [409] = 336,
  [410] = 327,
  [411] = 326,
  [412] = 368,
  [413] = 413,
  [414] = 414,
  [415] = 357,
  [416] = 351,
  [417] = 417,
  [418] = 418,
  [419] = 357,
  [420] = 351,
  [421] = 421,
  [422] = 367,
  [423] = 423,
  [424] = 354,
  [425] = 425,
  [426] = 426,
  [427] = 367,
  [428] = 428,
  [429] = 354,
  [430] = 430,
  [431] = 367,
  [432] = 432,
  [433] = 367,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < 'C'
      ? (c < '@'
        ? c == '&'
        : c <= '@')
      : (c <= 'C' || c == 'c'))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < 'K'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= '@')))
    : (c <= 'K' || (c < 'k'
      ? (c < 'V'
        ? (c >= 'S' && c <= 'T')
        : c <= 'V')
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(351);
      if (lookahead == '\t') ADVANCE(627);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(384);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == 'G') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '[') ADVANCE(397);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(627);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(629);
      if (lookahead == '#') ADVANCE(625);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(626);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(626);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(628);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(629);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '#') ADVANCE(517);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(519);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(357);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(420);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'F') ADVANCE(434);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(420);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'E') ADVANCE(441);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(420);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(420);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(420);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(515);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(519);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(387);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(354);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(377);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(405);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(573);
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(508);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(478);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(485);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(492);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(497);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(498);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(482);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'Z') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(476);
      if (lookahead == 'N') ADVANCE(496);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(480);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(472);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(506);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == 'X') ADVANCE(64);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == 'X') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(502);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(499);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 114:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(488);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 122:
      if (lookahead == 'U') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'Y') ADVANCE(486);
      END_STATE();
    case 124:
      if (lookahead == 'Y') ADVANCE(490);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(381);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(381);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(511);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(511);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(510);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(510);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(380);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(380);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(380);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(470);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(541);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(474);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 139:
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(580);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 140:
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 141:
      if (lookahead == '{') ADVANCE(577);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 168:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 211:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 217:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 224:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 232:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 258:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 259:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 260:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 328:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 329:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 330:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 332:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 333:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 334:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 335:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 336:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 337:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(250);
      END_STATE();
    case 338:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 340:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 341:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 342:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 343:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(470);
      END_STATE();
    case 344:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(541);
      END_STATE();
    case 345:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(474);
      END_STATE();
    case 346:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(577);
      END_STATE();
    case 347:
      if (eof) ADVANCE(351);
      if (lookahead == '\t') ADVANCE(626);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 348:
      if (eof) ADVANCE(351);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 349:
      if (eof) ADVANCE(351);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 350:
      if (eof) ADVANCE(351);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(84);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(353);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(357);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(512);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '{') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '=') ADVANCE(386);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '{') ADVANCE(541);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(629);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(519);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '{') ADVANCE(470);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(617);
      if (lookahead == '{') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(613);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(613);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(613);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '.') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'A') ADVANCE(456);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'A') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(462);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(477);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'H') ADVANCE(433);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == 'O') ADVANCE(455);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'K') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'X') ADVANCE(422);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(444);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(455);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(449);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(466);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'U') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'Y') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == 'Y') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(134);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(137);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(137);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(137);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(137);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(625);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '{') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(567);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '{') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '{') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(567);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(567);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(567);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(567);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(567);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(567);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(567);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(567);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(567);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(567);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(567);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '*') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(141);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(607);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(607);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(141);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(541);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == '{') ADVANCE(625);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '{') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(625);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(625);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(625);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '#') ADVANCE(625);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 350},
  [2] = {.lex_state = 348},
  [3] = {.lex_state = 348},
  [4] = {.lex_state = 348},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 348},
  [7] = {.lex_state = 348},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 348},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 348},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 349},
  [17] = {.lex_state = 349},
  [18] = {.lex_state = 349},
  [19] = {.lex_state = 349},
  [20] = {.lex_state = 349},
  [21] = {.lex_state = 347},
  [22] = {.lex_state = 347},
  [23] = {.lex_state = 347},
  [24] = {.lex_state = 347},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 349},
  [27] = {.lex_state = 348},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 348},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 349},
  [34] = {.lex_state = 349},
  [35] = {.lex_state = 349},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 348},
  [38] = {.lex_state = 348},
  [39] = {.lex_state = 348},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 347},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 347},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 347},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 349},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 349},
  [64] = {.lex_state = 349},
  [65] = {.lex_state = 348},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 348},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 350},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 350},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 350},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 8},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 350},
  [327] = {.lex_state = 350},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 350},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 350},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 350},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 35},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 350},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 35},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 350},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 35},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 350},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 350},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 350},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 350},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 350},
  [393] = {.lex_state = 350},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 350},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 350},
  [406] = {.lex_state = 350},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 350},
  [410] = {.lex_state = 350},
  [411] = {.lex_state = 350},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 350},
  [416] = {.lex_state = 350},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 350},
  [420] = {.lex_state = 350},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 35},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 35},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 35},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 35},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 35},
  [432] = {.lex_state = 8},
  [433] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token1] = ACTIONS(1),
    [aux_sym_setting_name_token1] = ACTIONS(1),
    [aux_sym_setting_name_token2] = ACTIONS(1),
    [aux_sym_setting_name_token3] = ACTIONS(1),
    [aux_sym_setting_name_token4] = ACTIONS(1),
    [aux_sym_setting_name_token5] = ACTIONS(1),
    [aux_sym_setting_name_token6] = ACTIONS(1),
    [aux_sym_setting_name_token7] = ACTIONS(1),
    [aux_sym_setting_name_token8] = ACTIONS(1),
    [aux_sym_setting_name_token9] = ACTIONS(1),
    [aux_sym_setting_name_token10] = ACTIONS(1),
    [aux_sym_setting_name_token11] = ACTIONS(1),
    [aux_sym_setting_name_token12] = ACTIONS(1),
    [aux_sym_setting_name_token13] = ACTIONS(1),
    [aux_sym_setting_name_token14] = ACTIONS(1),
    [aux_sym_setting_name_token15] = ACTIONS(1),
    [aux_sym_setting_name_token16] = ACTIONS(1),
    [aux_sym_setting_name_token17] = ACTIONS(1),
    [aux_sym_variables_section_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token5] = ACTIONS(1),
    [aux_sym_test_cases_section_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token2] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_EXCEPT] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_INRANGE] = ACTIONS(1),
    [anon_sym_INENUMERATE] = ACTIONS(1),
    [anon_sym_INZIP] = ACTIONS(1),
    [anon_sym_VAR] = ACTIONS(1),
    [anon_sym_GROUP] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(397),
    [sym_section] = STATE(41),
    [sym_settings_section] = STATE(153),
    [sym_variables_section] = STATE(153),
    [sym_keywords_section] = STATE(153),
    [sym_test_cases_section] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_settings_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token1] = ACTIONS(11),
    [aux_sym_keywords_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_section_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      aux_sym__whitespace_token1,
    ACTIONS(25), 1,
      sym__line_break,
    STATE(106), 1,
      sym_setting_name,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [44] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(34), 1,
      sym__line_break,
    STATE(106), 1,
      sym_setting_name,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(36), 1,
      sym__line_break,
    STATE(106), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [132] = 19,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(46), 1,
      anon_sym_END,
    ACTIONS(48), 1,
      anon_sym_ELSE,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(52), 1,
      anon_sym_EXCEPT,
    ACTIONS(54), 1,
      anon_sym_FINALLY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(329), 1,
      sym_statement,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [200] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(34), 1,
      sym__line_break,
    STATE(106), 1,
      sym_setting_name,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(72), 1,
      sym__line_break,
    STATE(106), 1,
      sym_setting_name,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [288] = 18,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(48), 1,
      anon_sym_ELSE,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_ELSEIF,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(329), 1,
      sym_statement,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [353] = 16,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(340), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [413] = 16,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(341), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [473] = 16,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_END,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(329), 1,
      sym_statement,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym__whitespace_token1,
    ACTIONS(84), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [565] = 16,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(329), 1,
      sym_statement,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(90), 23,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [656] = 15,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(44), 1,
      anon_sym_IF,
    ACTIONS(50), 1,
      anon_sym_TRY,
    ACTIONS(56), 1,
      anon_sym_WHILE,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      anon_sym_VAR,
    ACTIONS(62), 1,
      anon_sym_GROUP,
    ACTIONS(66), 1,
      sym_comment,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(329), 1,
      sym_statement,
    ACTIONS(64), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(342), 10,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
      sym_var_statement,
      sym_group_statement,
  [712] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(104), 1,
      sym__line_break,
    STATE(112), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(19), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(96), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [748] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__line_break,
    STATE(112), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(18), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(108), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [784] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(104), 1,
      sym__line_break,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(19), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(114), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [820] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(123), 1,
      sym_text_chunk,
    ACTIONS(126), 1,
      aux_sym__whitespace_token1,
    ACTIONS(129), 1,
      sym__line_break,
    STATE(112), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(19), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(118), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [856] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(112), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(16), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(114), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [892] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__separator,
    ACTIONS(141), 1,
      aux_sym__whitespace_token1,
    ACTIONS(144), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(136), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [923] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(149), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [954] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym__separator,
    ACTIONS(163), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(24), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(159), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [984] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym__separator,
    ACTIONS(172), 1,
      aux_sym__whitespace_token1,
    ACTIONS(175), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(24), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(167), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [1014] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(153), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1043] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym_text_chunk,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(28), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(182), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1095] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      sym_text_chunk,
    ACTIONS(201), 1,
      aux_sym__whitespace_token1,
    ACTIONS(204), 1,
      sym__line_break,
    STATE(28), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(196), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__separator,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(5), 1,
      sym__indentation,
    STATE(117), 1,
      sym_block,
    STATE(199), 1,
      sym_else_statement,
    STATE(304), 1,
      sym_finally_statement,
    STATE(114), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(153), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1209] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_settings_section_token1,
    ACTIONS(222), 1,
      aux_sym_variables_section_token1,
    ACTIONS(225), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(228), 1,
      aux_sym_test_cases_section_token1,
    STATE(32), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(153), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1238] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      sym_text_chunk,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(26), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(233), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1265] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      sym_text_chunk,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(239), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1292] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      sym_text_chunk,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(233), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1319] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(247), 1,
      anon_sym_EQ2,
    ACTIONS(251), 1,
      sym__separator,
    ACTIONS(254), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(295), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_,
      sym_text_chunk,
    STATE(173), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      sym__line_break,
    STATE(27), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(268), 1,
      aux_sym__whitespace_token1,
    ACTIONS(271), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1427] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_EQ2,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(280), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(295), 1,
      sym_arguments,
    ACTIONS(249), 2,
      anon_sym_,
      sym_text_chunk,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1460] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(153), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1489] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(270), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1517] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(292), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1545] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(271), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1573] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1591] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(293), 1,
      sym__separator,
    STATE(8), 1,
      sym__indentation,
    STATE(141), 1,
      sym_block,
    STATE(155), 1,
      aux_sym_if_statement_repeat1,
    STATE(238), 1,
      sym_else_statement,
    STATE(417), 1,
      sym_elseif_statement,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1623] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(299), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(303), 1,
      sym_text_chunk,
    STATE(315), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1651] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1669] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1697] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(313), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(317), 1,
      sym_text_chunk,
    STATE(319), 1,
      sym_argument,
    STATE(69), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1725] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(291), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1753] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(299), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(303), 1,
      sym_text_chunk,
    STATE(292), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1781] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(299), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(303), 1,
      sym_text_chunk,
    STATE(323), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 1,
      anon_sym_IN,
    ACTIONS(323), 1,
      anon_sym_INRANGE,
    ACTIONS(325), 1,
      anon_sym_INENUMERATE,
    ACTIONS(327), 1,
      anon_sym_INZIP,
    STATE(324), 1,
      sym_scalar_variable,
    STATE(430), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1837] = 8,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(331), 1,
      anon_sym_RETURN,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(129), 1,
      sym_keyword,
    STATE(220), 1,
      sym_inline_statement,
    STATE(236), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1864] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1881] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(343), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(346), 1,
      sym_text_chunk,
    ACTIONS(349), 2,
      sym__separator,
      sym__line_break,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1906] = 8,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(331), 1,
      anon_sym_RETURN,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(129), 1,
      sym_keyword,
    STATE(302), 1,
      sym_inline_statement,
    STATE(236), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1933] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1950] = 8,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RETURN,
    ACTIONS(42), 1,
      sym__keyword_start_text,
    ACTIONS(66), 1,
      sym_comment,
    STATE(83), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(320), 1,
      sym_inline_statement,
    STATE(236), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1977] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      sym_text_chunk,
    ACTIONS(359), 2,
      sym__separator,
      sym__line_break,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2002] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(361), 1,
      sym_text_chunk,
    ACTIONS(363), 2,
      sym__separator,
      sym__line_break,
    STATE(61), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2027] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2044] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym__whitespace_token1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2076] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(363), 1,
      sym__line_break,
    ACTIONS(373), 1,
      anon_sym_,
    ACTIONS(375), 1,
      sym_text_chunk,
    STATE(72), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2100] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__line_break,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(383), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_text_chunk,
    STATE(67), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2124] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(389), 1,
      sym_ellipses,
    ACTIONS(391), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(364), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2150] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(363), 1,
      sym__separator,
    ACTIONS(394), 1,
      anon_sym_,
    ACTIONS(396), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(352), 1,
      sym_arguments,
    ACTIONS(398), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2198] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__separator,
    ACTIONS(394), 1,
      anon_sym_,
    ACTIONS(402), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2222] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(373), 1,
      anon_sym_,
    ACTIONS(404), 1,
      sym_text_chunk,
    STATE(67), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2246] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__separator,
    ACTIONS(406), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(409), 1,
      anon_sym_,
    ACTIONS(412), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(415), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_,
    STATE(279), 1,
      sym_keyword_setting_name,
    ACTIONS(418), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2288] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(389), 1,
      sym_ellipses,
    ACTIONS(422), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(297), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_,
    STATE(303), 1,
      sym_test_case_setting_name,
    ACTIONS(424), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym__whitespace_token1,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym__separator,
    ACTIONS(432), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(64), 1,
      sym_test_case_definition_body,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(434), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(272), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2394] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(436), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(362), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(434), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(366), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2440] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(439), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(307), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2463] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(444), 1,
      anon_sym_,
    ACTIONS(446), 1,
      sym_text_chunk,
    ACTIONS(448), 2,
      sym__separator,
      sym__line_break,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(296), 1,
      sym_test_case_setting_name,
    ACTIONS(424), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(294), 1,
      sym_keyword_setting_name,
    ACTIONS(418), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2514] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(456), 1,
      sym_text_chunk,
    ACTIONS(459), 2,
      sym__separator,
      sym__line_break,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2535] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(59), 1,
      sym_keyword_definition_body,
    STATE(22), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2558] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(444), 1,
      anon_sym_,
    ACTIONS(463), 1,
      sym_text_chunk,
    ACTIONS(465), 2,
      sym__separator,
      sym__line_break,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2579] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(467), 1,
      sym__separator,
    STATE(11), 1,
      sym__indentation,
    STATE(226), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(434), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(322), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2625] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    ACTIONS(434), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(231), 1,
      sym_block,
    STATE(116), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__separator,
    ACTIONS(472), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(223), 1,
      sym_arguments,
    STATE(173), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(400), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(402), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__separator,
    ACTIONS(478), 1,
      aux_sym__whitespace_token1,
    ACTIONS(481), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(95), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2728] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(488), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(408), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__separator,
    STATE(176), 1,
      sym__indentation,
    STATE(209), 1,
      sym_else_statement,
    STATE(241), 1,
      sym_finally_statement,
    STATE(169), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(418), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(335), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(421), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(492), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(223), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2862] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2876] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(423), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(306), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(503), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(328), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2950] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2964] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(401), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(509), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(300), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3004] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(428), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3024] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(512), 1,
      anon_sym_,
    ACTIONS(514), 1,
      sym_text_chunk,
    ACTIONS(516), 1,
      sym__line_break,
    STATE(127), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(358), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__separator,
    STATE(170), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(285), 1,
      sym_finally_statement,
    STATE(169), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3084] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(520), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__whitespace_token1,
    ACTIONS(524), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(95), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__separator,
    STATE(170), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(285), 1,
      sym_finally_statement,
    STATE(98), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3138] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3152] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(337), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3186] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(537), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3200] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(249), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3214] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(349), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3228] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3242] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3256] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__line_break,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(554), 1,
      anon_sym_,
    ACTIONS(557), 1,
      sym_text_chunk,
    STATE(126), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3276] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(512), 1,
      anon_sym_,
    ACTIONS(560), 1,
      sym_text_chunk,
    ACTIONS(562), 1,
      sym__line_break,
    STATE(126), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(391), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(567), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(300), 1,
      sym_arguments,
    STATE(173), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3336] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(570), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(389), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
    STATE(388), 1,
      sym_arguments,
    STATE(188), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3390] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3403] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__separator,
    STATE(185), 1,
      aux_sym_if_statement_repeat1,
    STATE(204), 1,
      sym__indentation,
    STATE(284), 1,
      sym_else_statement,
    STATE(417), 1,
      sym_elseif_statement,
  [3435] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3448] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3461] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(349), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3474] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(537), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3487] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__separator,
    STATE(135), 1,
      aux_sym_if_statement_repeat1,
    STATE(217), 1,
      sym__indentation,
    STATE(256), 1,
      sym_else_statement,
    STATE(417), 1,
      sym_elseif_statement,
  [3519] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(520), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3532] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(249), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3545] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(349), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3558] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(537), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3571] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(249), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3584] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(570), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3597] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3610] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3623] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3636] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3649] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(459), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(582), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
    STATE(221), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__separator,
    STATE(185), 1,
      aux_sym_if_statement_repeat1,
    STATE(194), 1,
      sym__indentation,
    STATE(259), 1,
      sym_else_statement,
    STATE(417), 1,
      sym_elseif_statement,
  [3709] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(587), 1,
      sym_text_chunk,
    STATE(138), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3726] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(589), 1,
      sym_text_chunk,
    STATE(123), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3743] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(520), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__separator,
    ACTIONS(594), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
    STATE(180), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3773] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(570), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3786] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3799] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3812] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3825] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3838] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3851] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3864] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(597), 1,
      sym_text_chunk,
    STATE(144), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3881] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__separator,
    STATE(407), 1,
      sym__indentation,
    STATE(169), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_END,
    ACTIONS(604), 1,
      anon_sym_ELSE,
    ACTIONS(606), 1,
      anon_sym_EXCEPT,
    ACTIONS(608), 1,
      anon_sym_FINALLY,
  [3924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(207), 1,
      aux_sym_arguments_repeat1,
    STATE(365), 1,
      sym_arguments_without_continuation,
  [3940] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(182), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__line_break,
    ACTIONS(616), 1,
      sym__separator,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3968] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(183), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3982] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(578), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_ELSE,
    ACTIONS(606), 1,
      anon_sym_EXCEPT,
    ACTIONS(608), 1,
      anon_sym_FINALLY,
    ACTIONS(620), 1,
      anon_sym_END,
  [4010] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(186), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4024] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_ELSEIF,
    ACTIONS(628), 1,
      anon_sym_ELSE,
    STATE(277), 1,
      sym_inline_elseif_statement,
    STATE(349), 1,
      sym_inline_else_statement,
  [4054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__separator,
    ACTIONS(632), 1,
      sym__line_break,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__separator,
    ACTIONS(637), 1,
      sym__line_break,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4082] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(183), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4096] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(183), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(642), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_ELSEIF,
    ACTIONS(628), 1,
      anon_sym_ELSE,
    STATE(277), 1,
      sym_inline_elseif_statement,
    STATE(311), 1,
      sym_inline_else_statement,
  [4126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__separator,
    STATE(185), 1,
      aux_sym_if_statement_repeat1,
    STATE(332), 1,
      sym__indentation,
    STATE(417), 1,
      sym_elseif_statement,
  [4142] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(183), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_ellipses,
    ACTIONS(654), 1,
      sym__separator,
    STATE(375), 1,
      sym__indentation,
  [4169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__line_break,
    STATE(218), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4180] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_,
    ACTIONS(660), 1,
      sym_variable_name,
  [4193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
    ACTIONS(665), 1,
      sym__line_break,
    STATE(190), 1,
      aux_sym_inline_if_statement_repeat1,
  [4206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__separator,
    STATE(241), 1,
      sym_finally_statement,
    STATE(242), 1,
      sym__indentation,
  [4219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(669), 1,
      sym__line_break,
    STATE(200), 1,
      aux_sym_arguments_repeat1,
  [4232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(669), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_ELSE,
    ACTIONS(671), 1,
      anon_sym_END,
    ACTIONS(673), 1,
      anon_sym_ELSEIF,
  [4258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_ellipses,
    ACTIONS(675), 1,
      sym__separator,
    STATE(359), 1,
      sym__indentation,
  [4271] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(677), 1,
      sym_text_chunk,
    STATE(152), 1,
      sym_scalar_variable,
  [4284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__separator,
    ACTIONS(682), 1,
      sym__line_break,
    STATE(206), 1,
      aux_sym_arguments_repeat1,
  [4297] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_,
    ACTIONS(688), 1,
      sym_variable_name,
  [4310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__separator,
    STATE(280), 1,
      sym__indentation,
    STATE(285), 1,
      sym_finally_statement,
  [4323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(692), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__line_break,
    ACTIONS(694), 1,
      sym__separator,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4349] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 1,
      anon_sym_,
    ACTIONS(701), 1,
      sym_variable_name,
  [4362] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(703), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_ELSE,
    ACTIONS(673), 1,
      anon_sym_ELSEIF,
    ACTIONS(707), 1,
      anon_sym_END,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    ACTIONS(712), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym__line_break,
    ACTIONS(714), 1,
      sym__separator,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(717), 1,
      sym__line_break,
    STATE(205), 1,
      aux_sym_arguments_repeat1,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__separator,
    ACTIONS(721), 1,
      sym__line_break,
    STATE(190), 1,
      aux_sym_inline_if_statement_repeat1,
  [4438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__separator,
    STATE(264), 1,
      sym_finally_statement,
    STATE(265), 1,
      sym__indentation,
  [4451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    STATE(207), 1,
      aux_sym_arguments_repeat1,
    STATE(331), 1,
      sym_arguments_without_continuation,
  [4464] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_,
    ACTIONS(729), 1,
      sym_variable_name,
  [4477] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_,
    ACTIONS(735), 1,
      sym_variable_name,
  [4490] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(737), 1,
      sym_text_chunk,
    STATE(175), 1,
      sym_scalar_variable,
  [4503] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_,
    ACTIONS(743), 1,
      sym_variable_name,
  [4516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__separator,
    ACTIONS(682), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym__line_break,
    ACTIONS(714), 1,
      sym__separator,
    STATE(201), 1,
      aux_sym_arguments_repeat1,
  [4542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_ELSE,
    ACTIONS(673), 1,
      anon_sym_ELSEIF,
    ACTIONS(745), 1,
      anon_sym_END,
  [4555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__line_break,
    STATE(218), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__line_break,
    ACTIONS(750), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym__separator,
    ACTIONS(756), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_inline_if_statement_repeat1,
  [4590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__line_break,
    STATE(218), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__line_break,
    ACTIONS(86), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__separator,
    ACTIONS(763), 1,
      sym__line_break,
  [4622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym__separator,
    ACTIONS(767), 1,
      sym__line_break,
  [4632] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_,
    ACTIONS(771), 1,
      sym_variable_name,
  [4642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__separator,
    STATE(404), 1,
      sym__indentation,
  [4652] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_,
    ACTIONS(777), 1,
      sym_variable_name,
  [4662] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 1,
      sym_variable_name,
  [4672] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_,
    ACTIONS(785), 1,
      sym_variable_name,
  [4682] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_,
    ACTIONS(789), 1,
      sym_variable_name,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__separator,
    STATE(395), 1,
      sym__indentation,
  [4702] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_,
    ACTIONS(795), 1,
      sym_variable_name,
  [4712] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_,
    ACTIONS(797), 1,
      sym_variable_name,
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(801), 1,
      anon_sym_,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    ACTIONS(805), 1,
      anon_sym_,
  [4742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__separator,
    ACTIONS(809), 1,
      sym__line_break,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      anon_sym_,
  [4762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__separator,
    STATE(386), 1,
      sym__indentation,
  [4772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(819), 1,
      anon_sym_,
  [4782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
    ACTIONS(823), 1,
      anon_sym_,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__separator,
    STATE(371), 1,
      sym__indentation,
  [4802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_FINALLY,
    ACTIONS(620), 1,
      anon_sym_END,
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    ACTIONS(829), 1,
      anon_sym_,
  [4822] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(831), 1,
      aux_sym_settings_section_token2,
    ACTIONS(833), 1,
      sym__line_break,
  [4832] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(835), 1,
      aux_sym_settings_section_token2,
    ACTIONS(837), 1,
      sym__line_break,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      anon_sym_,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_,
  [4862] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(843), 1,
      aux_sym_settings_section_token2,
    ACTIONS(845), 1,
      sym__line_break,
  [4872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      anon_sym_,
  [4882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
    ACTIONS(857), 1,
      anon_sym_,
  [4902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    ACTIONS(861), 1,
      anon_sym_,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 1,
      anon_sym_,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__separator,
    ACTIONS(869), 1,
      sym__line_break,
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(873), 1,
      anon_sym_,
  [4942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__separator,
    STATE(344), 1,
      sym__indentation,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(879), 1,
      anon_sym_,
  [4972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__separator,
    STATE(334), 1,
      sym__indentation,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__separator,
    ACTIONS(885), 1,
      sym__line_break,
  [4992] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_,
    ACTIONS(889), 1,
      sym_variable_name,
  [5002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      anon_sym_,
  [5022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym__separator,
    STATE(370), 1,
      sym__indentation,
  [5032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_FINALLY,
    ACTIONS(899), 1,
      anon_sym_END,
  [5042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__separator,
    ACTIONS(531), 1,
      sym__line_break,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__separator,
    ACTIONS(572), 1,
      sym__line_break,
  [5062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__line_break,
    ACTIONS(249), 1,
      sym__separator,
  [5072] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_,
    ACTIONS(903), 1,
      sym_variable_name,
  [5082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
    ACTIONS(905), 1,
      sym__separator,
  [5092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__separator,
    ACTIONS(909), 1,
      sym__line_break,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__separator,
    STATE(309), 1,
      sym__indentation,
  [5112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    ACTIONS(915), 1,
      anon_sym_,
  [5122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_,
  [5132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      anon_sym_,
  [5142] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_,
    ACTIONS(921), 1,
      sym_variable_name,
  [5152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__line_break,
    ACTIONS(923), 1,
      sym__separator,
  [5162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
    ACTIONS(925), 1,
      sym__separator,
  [5172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
  [5182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_END,
    ACTIONS(608), 1,
      anon_sym_FINALLY,
  [5192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__separator,
    STATE(290), 1,
      aux_sym_for_statement_repeat1,
  [5202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    ACTIONS(935), 1,
      anon_sym_,
  [5212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    ACTIONS(939), 1,
      anon_sym_,
  [5222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__separator,
    STATE(313), 1,
      sym__indentation,
  [5232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__separator,
    STATE(414), 1,
      sym__indentation,
  [5242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [5252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
  [5262] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_settings_section_token2,
    ACTIONS(953), 1,
      sym__line_break,
  [5272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(324), 1,
      sym_scalar_variable,
  [5282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__separator,
    STATE(299), 1,
      aux_sym_for_statement_repeat1,
  [5292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__separator,
    ACTIONS(959), 1,
      sym__line_break,
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__separator,
    ACTIONS(963), 1,
      sym__line_break,
  [5312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
  [5322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
  [5332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__separator,
    ACTIONS(975), 1,
      sym__line_break,
  [5342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
  [5352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__separator,
    STATE(426), 1,
      sym__indentation,
  [5362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_ELSEIF,
    STATE(277), 1,
      sym_inline_elseif_statement,
  [5372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__separator,
    STATE(299), 1,
      aux_sym_for_statement_repeat1,
  [5382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym__separator,
    ACTIONS(988), 1,
      sym__line_break,
  [5392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(111), 1,
      sym_scalar_variable,
  [5402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym__separator,
    ACTIONS(994), 1,
      sym__line_break,
  [5412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
  [5422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym__separator,
    STATE(378), 1,
      sym__indentation,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__separator,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym__line_break,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__separator,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_END,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym__line_break,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym__line_break,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_END,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym__line_break,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__line_break,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym__line_break,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__line_break,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym__line_break,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym__separator,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym__line_break,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__line_break,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym__separator,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__line_break,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__separator,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym__line_break,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym__line_break,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__line_break,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__line_break,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_ELSEIF,
  [5628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym__line_break,
  [5635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_END,
  [5642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym__line_break,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__line_break,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym__line_break,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym__line_break,
  [5684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym__line_break,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym__line_break,
  [5698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__separator,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_END,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym__line_break,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__separator,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym__separator,
  [5733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym__line_break,
  [5740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym__line_break,
  [5747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__separator,
  [5754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
  [5761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym__line_break,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__separator,
  [5775] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_variable_name,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__line_break,
  [5789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__separator,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
  [5803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym__line_break,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_ellipses,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym__line_break,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__line_break,
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__separator,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym__line_break,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym__separator,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym__line_break,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym__separator,
  [5866] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_variable_name,
  [5873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__line_break,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_END,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_END,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym__line_break,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__line_break,
  [5915] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym_variable_name,
  [5922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_ellipses,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym__line_break,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym__line_break,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_END,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__line_break,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym__separator,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym__line_break,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym__line_break,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym__line_break,
  [5992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_END,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym__line_break,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym__line_break,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym__line_break,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym__line_break,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_END,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym__line_break,
  [6076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      ts_builtin_sym_end,
  [6083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym__line_break,
  [6090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym__line_break,
  [6104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym__line_break,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym__line_break,
  [6118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym__line_break,
  [6125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_END,
  [6132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
  [6139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_EXCEPT,
  [6153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym__line_break,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RBRACE,
  [6174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RBRACE,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym__line_break,
  [6188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__line_break,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_END,
  [6202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
  [6216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__separator,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym__line_break,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
  [6237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym__line_break,
  [6251] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym_variable_name,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym__line_break,
  [6265] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym_variable_name,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
  [6279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_END,
  [6286] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym_variable_name,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym__line_break,
  [6300] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_variable_name,
  [6307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym__line_break,
  [6314] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_variable_name,
  [6321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym__separator,
  [6328] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 244,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 413,
  [SMALL_STATE(11)] = 473,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 565,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 656,
  [SMALL_STATE(16)] = 712,
  [SMALL_STATE(17)] = 748,
  [SMALL_STATE(18)] = 784,
  [SMALL_STATE(19)] = 820,
  [SMALL_STATE(20)] = 856,
  [SMALL_STATE(21)] = 892,
  [SMALL_STATE(22)] = 923,
  [SMALL_STATE(23)] = 954,
  [SMALL_STATE(24)] = 984,
  [SMALL_STATE(25)] = 1014,
  [SMALL_STATE(26)] = 1043,
  [SMALL_STATE(27)] = 1070,
  [SMALL_STATE(28)] = 1095,
  [SMALL_STATE(29)] = 1122,
  [SMALL_STATE(30)] = 1147,
  [SMALL_STATE(31)] = 1180,
  [SMALL_STATE(32)] = 1209,
  [SMALL_STATE(33)] = 1238,
  [SMALL_STATE(34)] = 1265,
  [SMALL_STATE(35)] = 1292,
  [SMALL_STATE(36)] = 1319,
  [SMALL_STATE(37)] = 1352,
  [SMALL_STATE(38)] = 1377,
  [SMALL_STATE(39)] = 1402,
  [SMALL_STATE(40)] = 1427,
  [SMALL_STATE(41)] = 1460,
  [SMALL_STATE(42)] = 1489,
  [SMALL_STATE(43)] = 1517,
  [SMALL_STATE(44)] = 1545,
  [SMALL_STATE(45)] = 1573,
  [SMALL_STATE(46)] = 1591,
  [SMALL_STATE(47)] = 1623,
  [SMALL_STATE(48)] = 1651,
  [SMALL_STATE(49)] = 1669,
  [SMALL_STATE(50)] = 1697,
  [SMALL_STATE(51)] = 1725,
  [SMALL_STATE(52)] = 1753,
  [SMALL_STATE(53)] = 1781,
  [SMALL_STATE(54)] = 1809,
  [SMALL_STATE(55)] = 1837,
  [SMALL_STATE(56)] = 1864,
  [SMALL_STATE(57)] = 1881,
  [SMALL_STATE(58)] = 1906,
  [SMALL_STATE(59)] = 1933,
  [SMALL_STATE(60)] = 1950,
  [SMALL_STATE(61)] = 1977,
  [SMALL_STATE(62)] = 2002,
  [SMALL_STATE(63)] = 2027,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2060,
  [SMALL_STATE(66)] = 2076,
  [SMALL_STATE(67)] = 2100,
  [SMALL_STATE(68)] = 2124,
  [SMALL_STATE(69)] = 2150,
  [SMALL_STATE(70)] = 2174,
  [SMALL_STATE(71)] = 2198,
  [SMALL_STATE(72)] = 2222,
  [SMALL_STATE(73)] = 2246,
  [SMALL_STATE(74)] = 2270,
  [SMALL_STATE(75)] = 2288,
  [SMALL_STATE(76)] = 2314,
  [SMALL_STATE(77)] = 2332,
  [SMALL_STATE(78)] = 2348,
  [SMALL_STATE(79)] = 2371,
  [SMALL_STATE(80)] = 2394,
  [SMALL_STATE(81)] = 2417,
  [SMALL_STATE(82)] = 2440,
  [SMALL_STATE(83)] = 2463,
  [SMALL_STATE(84)] = 2484,
  [SMALL_STATE(85)] = 2499,
  [SMALL_STATE(86)] = 2514,
  [SMALL_STATE(87)] = 2535,
  [SMALL_STATE(88)] = 2558,
  [SMALL_STATE(89)] = 2579,
  [SMALL_STATE(90)] = 2602,
  [SMALL_STATE(91)] = 2625,
  [SMALL_STATE(92)] = 2648,
  [SMALL_STATE(93)] = 2668,
  [SMALL_STATE(94)] = 2688,
  [SMALL_STATE(95)] = 2708,
  [SMALL_STATE(96)] = 2728,
  [SMALL_STATE(97)] = 2742,
  [SMALL_STATE(98)] = 2762,
  [SMALL_STATE(99)] = 2782,
  [SMALL_STATE(100)] = 2802,
  [SMALL_STATE(101)] = 2822,
  [SMALL_STATE(102)] = 2842,
  [SMALL_STATE(103)] = 2862,
  [SMALL_STATE(104)] = 2876,
  [SMALL_STATE(105)] = 2890,
  [SMALL_STATE(106)] = 2910,
  [SMALL_STATE(107)] = 2930,
  [SMALL_STATE(108)] = 2950,
  [SMALL_STATE(109)] = 2964,
  [SMALL_STATE(110)] = 2984,
  [SMALL_STATE(111)] = 3004,
  [SMALL_STATE(112)] = 3024,
  [SMALL_STATE(113)] = 3044,
  [SMALL_STATE(114)] = 3064,
  [SMALL_STATE(115)] = 3084,
  [SMALL_STATE(116)] = 3098,
  [SMALL_STATE(117)] = 3118,
  [SMALL_STATE(118)] = 3138,
  [SMALL_STATE(119)] = 3152,
  [SMALL_STATE(120)] = 3166,
  [SMALL_STATE(121)] = 3186,
  [SMALL_STATE(122)] = 3200,
  [SMALL_STATE(123)] = 3214,
  [SMALL_STATE(124)] = 3228,
  [SMALL_STATE(125)] = 3242,
  [SMALL_STATE(126)] = 3256,
  [SMALL_STATE(127)] = 3276,
  [SMALL_STATE(128)] = 3296,
  [SMALL_STATE(129)] = 3316,
  [SMALL_STATE(130)] = 3336,
  [SMALL_STATE(131)] = 3350,
  [SMALL_STATE(132)] = 3370,
  [SMALL_STATE(133)] = 3390,
  [SMALL_STATE(134)] = 3403,
  [SMALL_STATE(135)] = 3416,
  [SMALL_STATE(136)] = 3435,
  [SMALL_STATE(137)] = 3448,
  [SMALL_STATE(138)] = 3461,
  [SMALL_STATE(139)] = 3474,
  [SMALL_STATE(140)] = 3487,
  [SMALL_STATE(141)] = 3500,
  [SMALL_STATE(142)] = 3519,
  [SMALL_STATE(143)] = 3532,
  [SMALL_STATE(144)] = 3545,
  [SMALL_STATE(145)] = 3558,
  [SMALL_STATE(146)] = 3571,
  [SMALL_STATE(147)] = 3584,
  [SMALL_STATE(148)] = 3597,
  [SMALL_STATE(149)] = 3610,
  [SMALL_STATE(150)] = 3623,
  [SMALL_STATE(151)] = 3636,
  [SMALL_STATE(152)] = 3649,
  [SMALL_STATE(153)] = 3662,
  [SMALL_STATE(154)] = 3673,
  [SMALL_STATE(155)] = 3690,
  [SMALL_STATE(156)] = 3709,
  [SMALL_STATE(157)] = 3726,
  [SMALL_STATE(158)] = 3743,
  [SMALL_STATE(159)] = 3756,
  [SMALL_STATE(160)] = 3773,
  [SMALL_STATE(161)] = 3786,
  [SMALL_STATE(162)] = 3799,
  [SMALL_STATE(163)] = 3812,
  [SMALL_STATE(164)] = 3825,
  [SMALL_STATE(165)] = 3838,
  [SMALL_STATE(166)] = 3851,
  [SMALL_STATE(167)] = 3864,
  [SMALL_STATE(168)] = 3881,
  [SMALL_STATE(169)] = 3894,
  [SMALL_STATE(170)] = 3908,
  [SMALL_STATE(171)] = 3924,
  [SMALL_STATE(172)] = 3940,
  [SMALL_STATE(173)] = 3954,
  [SMALL_STATE(174)] = 3968,
  [SMALL_STATE(175)] = 3982,
  [SMALL_STATE(176)] = 3994,
  [SMALL_STATE(177)] = 4010,
  [SMALL_STATE(178)] = 4024,
  [SMALL_STATE(179)] = 4038,
  [SMALL_STATE(180)] = 4054,
  [SMALL_STATE(181)] = 4068,
  [SMALL_STATE(182)] = 4082,
  [SMALL_STATE(183)] = 4096,
  [SMALL_STATE(184)] = 4110,
  [SMALL_STATE(185)] = 4126,
  [SMALL_STATE(186)] = 4142,
  [SMALL_STATE(187)] = 4156,
  [SMALL_STATE(188)] = 4169,
  [SMALL_STATE(189)] = 4180,
  [SMALL_STATE(190)] = 4193,
  [SMALL_STATE(191)] = 4206,
  [SMALL_STATE(192)] = 4219,
  [SMALL_STATE(193)] = 4232,
  [SMALL_STATE(194)] = 4245,
  [SMALL_STATE(195)] = 4258,
  [SMALL_STATE(196)] = 4271,
  [SMALL_STATE(197)] = 4284,
  [SMALL_STATE(198)] = 4297,
  [SMALL_STATE(199)] = 4310,
  [SMALL_STATE(200)] = 4323,
  [SMALL_STATE(201)] = 4336,
  [SMALL_STATE(202)] = 4349,
  [SMALL_STATE(203)] = 4362,
  [SMALL_STATE(204)] = 4373,
  [SMALL_STATE(205)] = 4386,
  [SMALL_STATE(206)] = 4399,
  [SMALL_STATE(207)] = 4412,
  [SMALL_STATE(208)] = 4425,
  [SMALL_STATE(209)] = 4438,
  [SMALL_STATE(210)] = 4451,
  [SMALL_STATE(211)] = 4464,
  [SMALL_STATE(212)] = 4477,
  [SMALL_STATE(213)] = 4490,
  [SMALL_STATE(214)] = 4503,
  [SMALL_STATE(215)] = 4516,
  [SMALL_STATE(216)] = 4529,
  [SMALL_STATE(217)] = 4542,
  [SMALL_STATE(218)] = 4555,
  [SMALL_STATE(219)] = 4566,
  [SMALL_STATE(220)] = 4577,
  [SMALL_STATE(221)] = 4590,
  [SMALL_STATE(222)] = 4601,
  [SMALL_STATE(223)] = 4612,
  [SMALL_STATE(224)] = 4622,
  [SMALL_STATE(225)] = 4632,
  [SMALL_STATE(226)] = 4642,
  [SMALL_STATE(227)] = 4652,
  [SMALL_STATE(228)] = 4662,
  [SMALL_STATE(229)] = 4672,
  [SMALL_STATE(230)] = 4682,
  [SMALL_STATE(231)] = 4692,
  [SMALL_STATE(232)] = 4702,
  [SMALL_STATE(233)] = 4712,
  [SMALL_STATE(234)] = 4722,
  [SMALL_STATE(235)] = 4732,
  [SMALL_STATE(236)] = 4742,
  [SMALL_STATE(237)] = 4752,
  [SMALL_STATE(238)] = 4762,
  [SMALL_STATE(239)] = 4772,
  [SMALL_STATE(240)] = 4782,
  [SMALL_STATE(241)] = 4792,
  [SMALL_STATE(242)] = 4802,
  [SMALL_STATE(243)] = 4812,
  [SMALL_STATE(244)] = 4822,
  [SMALL_STATE(245)] = 4832,
  [SMALL_STATE(246)] = 4842,
  [SMALL_STATE(247)] = 4852,
  [SMALL_STATE(248)] = 4862,
  [SMALL_STATE(249)] = 4872,
  [SMALL_STATE(250)] = 4882,
  [SMALL_STATE(251)] = 4892,
  [SMALL_STATE(252)] = 4902,
  [SMALL_STATE(253)] = 4912,
  [SMALL_STATE(254)] = 4922,
  [SMALL_STATE(255)] = 4932,
  [SMALL_STATE(256)] = 4942,
  [SMALL_STATE(257)] = 4952,
  [SMALL_STATE(258)] = 4962,
  [SMALL_STATE(259)] = 4972,
  [SMALL_STATE(260)] = 4982,
  [SMALL_STATE(261)] = 4992,
  [SMALL_STATE(262)] = 5002,
  [SMALL_STATE(263)] = 5012,
  [SMALL_STATE(264)] = 5022,
  [SMALL_STATE(265)] = 5032,
  [SMALL_STATE(266)] = 5042,
  [SMALL_STATE(267)] = 5052,
  [SMALL_STATE(268)] = 5062,
  [SMALL_STATE(269)] = 5072,
  [SMALL_STATE(270)] = 5082,
  [SMALL_STATE(271)] = 5092,
  [SMALL_STATE(272)] = 5102,
  [SMALL_STATE(273)] = 5112,
  [SMALL_STATE(274)] = 5122,
  [SMALL_STATE(275)] = 5132,
  [SMALL_STATE(276)] = 5142,
  [SMALL_STATE(277)] = 5152,
  [SMALL_STATE(278)] = 5162,
  [SMALL_STATE(279)] = 5172,
  [SMALL_STATE(280)] = 5182,
  [SMALL_STATE(281)] = 5192,
  [SMALL_STATE(282)] = 5202,
  [SMALL_STATE(283)] = 5212,
  [SMALL_STATE(284)] = 5222,
  [SMALL_STATE(285)] = 5232,
  [SMALL_STATE(286)] = 5242,
  [SMALL_STATE(287)] = 5252,
  [SMALL_STATE(288)] = 5262,
  [SMALL_STATE(289)] = 5272,
  [SMALL_STATE(290)] = 5282,
  [SMALL_STATE(291)] = 5292,
  [SMALL_STATE(292)] = 5302,
  [SMALL_STATE(293)] = 5312,
  [SMALL_STATE(294)] = 5322,
  [SMALL_STATE(295)] = 5332,
  [SMALL_STATE(296)] = 5342,
  [SMALL_STATE(297)] = 5352,
  [SMALL_STATE(298)] = 5362,
  [SMALL_STATE(299)] = 5372,
  [SMALL_STATE(300)] = 5382,
  [SMALL_STATE(301)] = 5392,
  [SMALL_STATE(302)] = 5402,
  [SMALL_STATE(303)] = 5412,
  [SMALL_STATE(304)] = 5422,
  [SMALL_STATE(305)] = 5432,
  [SMALL_STATE(306)] = 5439,
  [SMALL_STATE(307)] = 5446,
  [SMALL_STATE(308)] = 5453,
  [SMALL_STATE(309)] = 5460,
  [SMALL_STATE(310)] = 5467,
  [SMALL_STATE(311)] = 5474,
  [SMALL_STATE(312)] = 5481,
  [SMALL_STATE(313)] = 5488,
  [SMALL_STATE(314)] = 5495,
  [SMALL_STATE(315)] = 5502,
  [SMALL_STATE(316)] = 5509,
  [SMALL_STATE(317)] = 5516,
  [SMALL_STATE(318)] = 5523,
  [SMALL_STATE(319)] = 5530,
  [SMALL_STATE(320)] = 5537,
  [SMALL_STATE(321)] = 5544,
  [SMALL_STATE(322)] = 5551,
  [SMALL_STATE(323)] = 5558,
  [SMALL_STATE(324)] = 5565,
  [SMALL_STATE(325)] = 5572,
  [SMALL_STATE(326)] = 5579,
  [SMALL_STATE(327)] = 5586,
  [SMALL_STATE(328)] = 5593,
  [SMALL_STATE(329)] = 5600,
  [SMALL_STATE(330)] = 5607,
  [SMALL_STATE(331)] = 5614,
  [SMALL_STATE(332)] = 5621,
  [SMALL_STATE(333)] = 5628,
  [SMALL_STATE(334)] = 5635,
  [SMALL_STATE(335)] = 5642,
  [SMALL_STATE(336)] = 5649,
  [SMALL_STATE(337)] = 5656,
  [SMALL_STATE(338)] = 5663,
  [SMALL_STATE(339)] = 5670,
  [SMALL_STATE(340)] = 5677,
  [SMALL_STATE(341)] = 5684,
  [SMALL_STATE(342)] = 5691,
  [SMALL_STATE(343)] = 5698,
  [SMALL_STATE(344)] = 5705,
  [SMALL_STATE(345)] = 5712,
  [SMALL_STATE(346)] = 5719,
  [SMALL_STATE(347)] = 5726,
  [SMALL_STATE(348)] = 5733,
  [SMALL_STATE(349)] = 5740,
  [SMALL_STATE(350)] = 5747,
  [SMALL_STATE(351)] = 5754,
  [SMALL_STATE(352)] = 5761,
  [SMALL_STATE(353)] = 5768,
  [SMALL_STATE(354)] = 5775,
  [SMALL_STATE(355)] = 5782,
  [SMALL_STATE(356)] = 5789,
  [SMALL_STATE(357)] = 5796,
  [SMALL_STATE(358)] = 5803,
  [SMALL_STATE(359)] = 5810,
  [SMALL_STATE(360)] = 5817,
  [SMALL_STATE(361)] = 5824,
  [SMALL_STATE(362)] = 5831,
  [SMALL_STATE(363)] = 5838,
  [SMALL_STATE(364)] = 5845,
  [SMALL_STATE(365)] = 5852,
  [SMALL_STATE(366)] = 5859,
  [SMALL_STATE(367)] = 5866,
  [SMALL_STATE(368)] = 5873,
  [SMALL_STATE(369)] = 5880,
  [SMALL_STATE(370)] = 5887,
  [SMALL_STATE(371)] = 5894,
  [SMALL_STATE(372)] = 5901,
  [SMALL_STATE(373)] = 5908,
  [SMALL_STATE(374)] = 5915,
  [SMALL_STATE(375)] = 5922,
  [SMALL_STATE(376)] = 5929,
  [SMALL_STATE(377)] = 5936,
  [SMALL_STATE(378)] = 5943,
  [SMALL_STATE(379)] = 5950,
  [SMALL_STATE(380)] = 5957,
  [SMALL_STATE(381)] = 5964,
  [SMALL_STATE(382)] = 5971,
  [SMALL_STATE(383)] = 5978,
  [SMALL_STATE(384)] = 5985,
  [SMALL_STATE(385)] = 5992,
  [SMALL_STATE(386)] = 5999,
  [SMALL_STATE(387)] = 6006,
  [SMALL_STATE(388)] = 6013,
  [SMALL_STATE(389)] = 6020,
  [SMALL_STATE(390)] = 6027,
  [SMALL_STATE(391)] = 6034,
  [SMALL_STATE(392)] = 6041,
  [SMALL_STATE(393)] = 6048,
  [SMALL_STATE(394)] = 6055,
  [SMALL_STATE(395)] = 6062,
  [SMALL_STATE(396)] = 6069,
  [SMALL_STATE(397)] = 6076,
  [SMALL_STATE(398)] = 6083,
  [SMALL_STATE(399)] = 6090,
  [SMALL_STATE(400)] = 6097,
  [SMALL_STATE(401)] = 6104,
  [SMALL_STATE(402)] = 6111,
  [SMALL_STATE(403)] = 6118,
  [SMALL_STATE(404)] = 6125,
  [SMALL_STATE(405)] = 6132,
  [SMALL_STATE(406)] = 6139,
  [SMALL_STATE(407)] = 6146,
  [SMALL_STATE(408)] = 6153,
  [SMALL_STATE(409)] = 6160,
  [SMALL_STATE(410)] = 6167,
  [SMALL_STATE(411)] = 6174,
  [SMALL_STATE(412)] = 6181,
  [SMALL_STATE(413)] = 6188,
  [SMALL_STATE(414)] = 6195,
  [SMALL_STATE(415)] = 6202,
  [SMALL_STATE(416)] = 6209,
  [SMALL_STATE(417)] = 6216,
  [SMALL_STATE(418)] = 6223,
  [SMALL_STATE(419)] = 6230,
  [SMALL_STATE(420)] = 6237,
  [SMALL_STATE(421)] = 6244,
  [SMALL_STATE(422)] = 6251,
  [SMALL_STATE(423)] = 6258,
  [SMALL_STATE(424)] = 6265,
  [SMALL_STATE(425)] = 6272,
  [SMALL_STATE(426)] = 6279,
  [SMALL_STATE(427)] = 6286,
  [SMALL_STATE(428)] = 6293,
  [SMALL_STATE(429)] = 6300,
  [SMALL_STATE(430)] = 6307,
  [SMALL_STATE(431)] = 6314,
  [SMALL_STATE(432)] = 6321,
  [SMALL_STATE(433)] = 6328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(260),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(376),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(261),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(112),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(368),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(394),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(394),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(24),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(171),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(368),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(42),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(187),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(374),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(376),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(39),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(195),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(233),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(157),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(172),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(57),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(261),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(156),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(177),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(67),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(13),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(225),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(167),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(178),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(73),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(233),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(196),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(86),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(42),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(187),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(412),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(195),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(195),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 2),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(261),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(213),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 2),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1), SHIFT(42),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(187),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(195),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(42),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(187),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(407),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(187),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(187),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(203),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 12), SHIFT_REPEAT(332),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(298),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(42),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(42),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(42),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(42),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(195),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(195),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(289),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 19),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 20),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 21),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 22),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 23),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 24),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, .production_id = 6),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 17),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 16),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, .production_id = 7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_statement, 6, .production_id = 15),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 14),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 13),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, .production_id = 7),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 6),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 7),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_statement, 5, .production_id = 10),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 9),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 8),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 6),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 7),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, .production_id = 6),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 4, .production_id = 5),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_robot(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
