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
#define STATE_COUNT 442
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 12,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 12,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 57,
  [65] = 58,
  [66] = 58,
  [67] = 61,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 57,
  [72] = 72,
  [73] = 73,
  [74] = 61,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 98,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 86,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 97,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 114,
  [137] = 100,
  [138] = 133,
  [139] = 115,
  [140] = 140,
  [141] = 131,
  [142] = 121,
  [143] = 105,
  [144] = 119,
  [145] = 145,
  [146] = 104,
  [147] = 123,
  [148] = 109,
  [149] = 121,
  [150] = 119,
  [151] = 115,
  [152] = 106,
  [153] = 100,
  [154] = 111,
  [155] = 145,
  [156] = 106,
  [157] = 114,
  [158] = 123,
  [159] = 111,
  [160] = 104,
  [161] = 105,
  [162] = 162,
  [163] = 133,
  [164] = 109,
  [165] = 165,
  [166] = 166,
  [167] = 135,
  [168] = 145,
  [169] = 169,
  [170] = 131,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 162,
  [175] = 175,
  [176] = 171,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 172,
  [183] = 175,
  [184] = 184,
  [185] = 171,
  [186] = 172,
  [187] = 187,
  [188] = 179,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 197,
  [199] = 193,
  [200] = 200,
  [201] = 201,
  [202] = 194,
  [203] = 203,
  [204] = 204,
  [205] = 181,
  [206] = 173,
  [207] = 207,
  [208] = 208,
  [209] = 195,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 178,
  [214] = 12,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 217,
  [221] = 221,
  [222] = 212,
  [223] = 200,
  [224] = 194,
  [225] = 225,
  [226] = 210,
  [227] = 227,
  [228] = 210,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 230,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 229,
  [247] = 247,
  [248] = 234,
  [249] = 236,
  [250] = 237,
  [251] = 251,
  [252] = 230,
  [253] = 253,
  [254] = 254,
  [255] = 230,
  [256] = 256,
  [257] = 257,
  [258] = 237,
  [259] = 230,
  [260] = 111,
  [261] = 100,
  [262] = 262,
  [263] = 237,
  [264] = 264,
  [265] = 109,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 245,
  [271] = 271,
  [272] = 256,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 273,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 256,
  [287] = 276,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 237,
  [292] = 292,
  [293] = 236,
  [294] = 234,
  [295] = 295,
  [296] = 273,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 242,
  [301] = 256,
  [302] = 302,
  [303] = 280,
  [304] = 247,
  [305] = 256,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 229,
  [311] = 245,
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
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 109,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 100,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 111,
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
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 374,
  [381] = 351,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 345,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 335,
  [392] = 392,
  [393] = 322,
  [394] = 394,
  [395] = 395,
  [396] = 316,
  [397] = 397,
  [398] = 319,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 374,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 345,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 335,
  [414] = 322,
  [415] = 415,
  [416] = 416,
  [417] = 316,
  [418] = 319,
  [419] = 399,
  [420] = 374,
  [421] = 421,
  [422] = 422,
  [423] = 345,
  [424] = 335,
  [425] = 425,
  [426] = 426,
  [427] = 345,
  [428] = 335,
  [429] = 429,
  [430] = 363,
  [431] = 431,
  [432] = 342,
  [433] = 433,
  [434] = 434,
  [435] = 363,
  [436] = 436,
  [437] = 342,
  [438] = 438,
  [439] = 363,
  [440] = 399,
  [441] = 363,
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
      if (eof) ADVANCE(352);
      if (lookahead == '\t') ADVANCE(628);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '}') ADVANCE(384);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(628);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead == '#') ADVANCE(626);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(627);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(627);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(134);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(629);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(136);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(630);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(519);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(520);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(449);
      if (lookahead == 'G') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead == 'V') ADVANCE(421);
      if (lookahead == 'W') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead == 'F') ADVANCE(435);
      if (lookahead == 'G') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead == 'V') ADVANCE(421);
      if (lookahead == 'W') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(449);
      if (lookahead == 'G') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead == 'V') ADVANCE(421);
      if (lookahead == 'W') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead == 'E') ADVANCE(443);
      if (lookahead == 'F') ADVANCE(449);
      if (lookahead == 'G') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead == 'V') ADVANCE(421);
      if (lookahead == 'W') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead == 'F') ADVANCE(449);
      if (lookahead == 'G') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead == 'V') ADVANCE(421);
      if (lookahead == 'W') ADVANCE(433);
      if (lookahead == '[') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '}') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(516);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(520);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(388);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(355);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(378);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(406);
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
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(573);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(575);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(509);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(479);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(493);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(498);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(499);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(483);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'Z') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(477);
      if (lookahead == 'N') ADVANCE(497);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(481);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(507);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == 'X') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == 'X') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(503);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(500);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 123:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'Y') ADVANCE(487);
      END_STATE();
    case 125:
      if (lookahead == 'Y') ADVANCE(491);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(382);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(382);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(512);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(512);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(511);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(511);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(381);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(381);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(381);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(471);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(475);
      END_STATE();
    case 139:
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 140:
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 141:
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 142:
      if (lookahead == '{') ADVANCE(578);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
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
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(273);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 212:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 217:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 218:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 226:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 237:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 259:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 260:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(370);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
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
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
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
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
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
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
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
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 332:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 333:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
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
          lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 337:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 338:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 339:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(361);
      END_STATE();
    case 341:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(608);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 342:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 343:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 344:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(471);
      END_STATE();
    case 345:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(542);
      END_STATE();
    case 346:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(475);
      END_STATE();
    case 347:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(578);
      END_STATE();
    case 348:
      if (eof) ADVANCE(352);
      if (lookahead == '\t') ADVANCE(627);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(134);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 349:
      if (eof) ADVANCE(352);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(248);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 350:
      if (eof) ADVANCE(352);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(623);
      if (lookahead == '$') ADVANCE(134);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 351:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == '}') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(513);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(517);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '=') ADVANCE(387);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(520);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '{') ADVANCE(471);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '{') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(614);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '.') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'A') ADVANCE(457);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'A') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(463);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(478);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(434);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'K') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead == 'X') ADVANCE(423);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(450);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(467);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'T') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'T') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'Y') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'Y') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '{') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == 'F') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(626);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(615);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(617);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(617);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(617);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(568);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(545);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '*') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '{') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(136);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(568);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(568);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(568);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(568);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(568);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(568);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(568);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(568);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(568);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(568);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(568);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(568);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(568);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(568);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(142);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(608);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(608);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(608);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(608);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(608);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(608);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(608);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(608);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(608);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(608);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(608);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(608);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(608);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(608);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(608);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(608);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(142);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '{') ADVANCE(626);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(542);
      if (lookahead == '{') ADVANCE(626);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == '{') ADVANCE(626);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '{') ADVANCE(626);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(616);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(617);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(617);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(626);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(636);
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
  [1] = {.lex_state = 351},
  [2] = {.lex_state = 349},
  [3] = {.lex_state = 349},
  [4] = {.lex_state = 349},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 349},
  [7] = {.lex_state = 349},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 349},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 349},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 350},
  [17] = {.lex_state = 350},
  [18] = {.lex_state = 350},
  [19] = {.lex_state = 350},
  [20] = {.lex_state = 350},
  [21] = {.lex_state = 348},
  [22] = {.lex_state = 348},
  [23] = {.lex_state = 348},
  [24] = {.lex_state = 348},
  [25] = {.lex_state = 349},
  [26] = {.lex_state = 349},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 349},
  [30] = {.lex_state = 350},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 350},
  [33] = {.lex_state = 350},
  [34] = {.lex_state = 349},
  [35] = {.lex_state = 350},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 350},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 348},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 348},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 348},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 350},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 350},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 349},
  [73] = {.lex_state = 350},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 349},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 351},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 35},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 35},
  [177] = {.lex_state = 35},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 35},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 351},
  [190] = {.lex_state = 351},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 35},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 351},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 351},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 351},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 351},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 7},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 36},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 351},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 7},
  [363] = {.lex_state = 36},
  [364] = {.lex_state = 351},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 7},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 351},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 351},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 351},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 351},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 351},
  [399] = {.lex_state = 351},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 7},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 351},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 351},
  [414] = {.lex_state = 351},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 7},
  [417] = {.lex_state = 351},
  [418] = {.lex_state = 351},
  [419] = {.lex_state = 351},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 351},
  [424] = {.lex_state = 351},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 351},
  [428] = {.lex_state = 351},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 36},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 36},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 36},
  [436] = {.lex_state = 7},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 36},
  [440] = {.lex_state = 351},
  [441] = {.lex_state = 36},
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
    [sym_source_file] = STATE(401),
    [sym_section] = STATE(39),
    [sym_settings_section] = STATE(166),
    [sym_variables_section] = STATE(166),
    [sym_keywords_section] = STATE(166),
    [sym_test_cases_section] = STATE(166),
    [aux_sym_source_file_repeat1] = STATE(39),
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
      sym__line_break,
    STATE(129), 1,
      sym_setting_name,
    STATE(3), 3,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(129), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
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
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(29), 1,
      sym__line_break,
    STATE(129), 1,
      sym_setting_name,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
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
  [132] = 19,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_END,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(45), 1,
      anon_sym_EXCEPT,
    ACTIONS(47), 1,
      anon_sym_FINALLY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(421), 1,
      sym_statement,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(326), 10,
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
    ACTIONS(66), 1,
      aux_sym__whitespace_token1,
    ACTIONS(69), 1,
      sym__line_break,
    STATE(129), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(63), 17,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(129), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(72), 5,
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
  [288] = 18,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_ELSEIF,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(421), 1,
      sym_statement,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(326), 10,
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
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(324), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(326), 10,
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
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(325), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(326), 10,
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
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_ellipses,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(421), 1,
      sym_statement,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(326), 10,
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
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_END,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(421), 1,
      sym_statement,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(326), 10,
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
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WHILE,
    ACTIONS(51), 1,
      anon_sym_FOR,
    ACTIONS(53), 1,
      anon_sym_VAR,
    ACTIONS(55), 1,
      anon_sym_GROUP,
    ACTIONS(59), 1,
      sym_comment,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(421), 1,
      sym_statement,
    ACTIONS(57), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(326), 10,
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
    ACTIONS(59), 1,
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
    STATE(132), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(96), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [748] = 10,
    ACTIONS(59), 1,
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
    STATE(132), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(16), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(108), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [784] = 10,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(112), 1,
      sym__line_break,
    STATE(132), 1,
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
  [820] = 10,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(100), 1,
      sym_text_chunk,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(104), 1,
      sym__line_break,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(116), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [856] = 10,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(125), 1,
      sym_text_chunk,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(131), 1,
      sym__line_break,
    STATE(132), 1,
      sym_scalar_variable,
    STATE(372), 1,
      sym__keyword_definition_name,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(120), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [892] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__separator,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(136), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [923] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__separator,
    ACTIONS(151), 1,
      aux_sym__whitespace_token1,
    ACTIONS(154), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(146), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [954] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym__separator,
    ACTIONS(164), 1,
      aux_sym__whitespace_token1,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(159), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [984] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym__separator,
    ACTIONS(176), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(172), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [1014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(182), 1,
      sym__line_break,
    STATE(29), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_settings_section_token1,
    ACTIONS(193), 1,
      aux_sym_variables_section_token1,
    ACTIONS(196), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(199), 1,
      aux_sym_test_cases_section_token1,
    STATE(27), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(204), 1,
      sym__line_break,
    STATE(26), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1143] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      sym_text_chunk,
    ACTIONS(213), 1,
      aux_sym__whitespace_token1,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(30), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(208), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1170] = 8,
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
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1199] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_text_chunk,
    ACTIONS(227), 1,
      sym__line_break,
    STATE(30), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(223), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1226] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(225), 1,
      sym_text_chunk,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(231), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(240), 1,
      aux_sym__whitespace_token1,
    ACTIONS(243), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1278] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(225), 1,
      sym_text_chunk,
    ACTIONS(227), 1,
      sym__line_break,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(30), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(231), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1305] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__separator,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    STATE(5), 1,
      sym__indentation,
    STATE(122), 1,
      sym_block,
    STATE(204), 1,
      sym_else_statement,
    STATE(289), 1,
      sym_finally_statement,
    STATE(116), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1338] = 8,
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
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1367] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__whitespace_token1,
    ACTIONS(225), 1,
      sym_text_chunk,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(256), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1394] = 8,
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
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1423] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(264), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(268), 1,
      sym_text_chunk,
    STATE(295), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1451] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(274), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym_text_chunk,
    STATE(321), 1,
      sym_argument,
    STATE(64), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1479] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(280), 1,
      sym__separator,
    STATE(8), 1,
      sym__indentation,
    STATE(165), 1,
      aux_sym_if_statement_repeat1,
    STATE(169), 1,
      sym_block,
    STATE(240), 1,
      sym_else_statement,
    STATE(405), 1,
      sym_elseif_statement,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1511] = 3,
    ACTIONS(59), 1,
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
  [1529] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(286), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text_chunk,
    STATE(279), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1557] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_IN,
    ACTIONS(296), 1,
      anon_sym_INRANGE,
    ACTIONS(298), 1,
      anon_sym_INENUMERATE,
    ACTIONS(300), 1,
      anon_sym_INZIP,
    STATE(436), 1,
      sym_scalar_variable,
    STATE(415), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1585] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(264), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(268), 1,
      sym_text_chunk,
    STATE(318), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1613] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(286), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text_chunk,
    STATE(274), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1641] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(286), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text_chunk,
    STATE(309), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1669] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(286), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text_chunk,
    STATE(295), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1697] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1715] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(262), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(264), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(268), 1,
      sym_text_chunk,
    STATE(331), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1743] = 8,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(286), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text_chunk,
    STATE(292), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1771] = 8,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      anon_sym_RETURN,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(98), 1,
      sym_keyword,
    STATE(225), 1,
      sym_inline_statement,
    STATE(239), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1798] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1815] = 8,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      anon_sym_RETURN,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(98), 1,
      sym_keyword,
    STATE(312), 1,
      sym_inline_statement,
    STATE(239), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1842] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1859] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(320), 1,
      sym_text_chunk,
    ACTIONS(322), 2,
      sym__separator,
      sym__line_break,
    STATE(58), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1884] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(324), 1,
      sym_text_chunk,
    ACTIONS(326), 2,
      sym__separator,
      sym__line_break,
    STATE(61), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1909] = 3,
    ACTIONS(59), 1,
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
  [1926] = 8,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RETURN,
    ACTIONS(35), 1,
      sym__keyword_start_text,
    ACTIONS(59), 1,
      sym_comment,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(110), 1,
      sym_keyword,
    STATE(320), 1,
      sym_inline_statement,
    STATE(239), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1953] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(334), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_text_chunk,
    ACTIONS(340), 2,
      sym__separator,
      sym__line_break,
    STATE(61), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1978] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(342), 1,
      sym_ellipses,
    ACTIONS(344), 1,
      sym__separator,
    STATE(11), 1,
      sym__indentation,
    STATE(365), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2004] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(342), 1,
      sym_ellipses,
    ACTIONS(347), 1,
      sym__separator,
    STATE(11), 1,
      sym__indentation,
    STATE(284), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2030] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(322), 1,
      sym__separator,
    ACTIONS(349), 1,
      anon_sym_,
    ACTIONS(351), 1,
      sym_text_chunk,
    STATE(66), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2054] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(326), 1,
      sym__line_break,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      sym_text_chunk,
    STATE(67), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2078] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(326), 1,
      sym__separator,
    ACTIONS(349), 1,
      anon_sym_,
    ACTIONS(357), 1,
      sym_text_chunk,
    STATE(74), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2102] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__line_break,
    ACTIONS(359), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(362), 1,
      anon_sym_,
    ACTIONS(365), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(368), 1,
      sym_text_chunk,
    STATE(67), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_,
    STATE(290), 1,
      sym_keyword_setting_name,
    ACTIONS(371), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_,
    STATE(306), 1,
      sym_test_case_setting_name,
    ACTIONS(375), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(336), 1,
      sym_arguments,
    ACTIONS(379), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2186] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(322), 1,
      sym__line_break,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(385), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__whitespace_token1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2226] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2242] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(398), 1,
      anon_sym_,
    ACTIONS(401), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(404), 1,
      sym_text_chunk,
    STATE(74), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym__whitespace_token1,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(411), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(275), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__separator,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(413), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(56), 1,
      sym_keyword_definition_body,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(282), 1,
      sym_test_case_setting_name,
    ACTIONS(375), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(340), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2366] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(411), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(367), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2389] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 1,
      anon_sym_EQ,
    ACTIONS(422), 1,
      anon_sym_EQ2,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(429), 1,
      sym__line_break,
    ACTIONS(424), 2,
      anon_sym_,
      sym_text_chunk,
  [2412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(431), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(361), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(298), 1,
      sym_keyword_setting_name,
    ACTIONS(371), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2450] = 7,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym__line_break,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_EQ2,
    ACTIONS(438), 1,
      sym__separator,
    ACTIONS(424), 2,
      anon_sym_,
      sym_text_chunk,
  [2473] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(442), 1,
      anon_sym_,
    ACTIONS(444), 1,
      sym_text_chunk,
    ACTIONS(446), 2,
      sym__separator,
      sym__line_break,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2494] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(451), 1,
      anon_sym_,
    ACTIONS(454), 1,
      sym_text_chunk,
    ACTIONS(457), 2,
      sym__separator,
      sym__line_break,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2515] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(411), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(313), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(174), 1,
      sym__separator,
    ACTIONS(459), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(73), 1,
      sym_test_case_definition_body,
    STATE(24), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(461), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(231), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2584] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(442), 1,
      anon_sym_,
    ACTIONS(463), 1,
      sym_text_chunk,
    ACTIONS(465), 2,
      sym__separator,
      sym__line_break,
    STATE(85), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2605] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(411), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(235), 1,
      sym_block,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(467), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(397), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(357), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(315), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(377), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__separator,
    STATE(189), 1,
      sym__indentation,
    STATE(227), 1,
      sym_else_statement,
    STATE(243), 1,
      sym_finally_statement,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(471), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(253), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
    ACTIONS(477), 1,
      sym__line_break,
    STATE(167), 1,
      aux_sym_arguments_repeat1,
    STATE(254), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(314), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2788] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(406), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(408), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(379), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2862] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2876] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2890] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(492), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(496), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(317), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(409), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2944] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(498), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(254), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2978] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(412), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(386), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3032] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3046] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    STATE(190), 1,
      sym__indentation,
    STATE(216), 1,
      sym_else_statement,
    STATE(269), 1,
      sym_finally_statement,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3080] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__line_break,
    ACTIONS(515), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(518), 1,
      anon_sym_,
    ACTIONS(521), 1,
      sym_text_chunk,
    STATE(117), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(524), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(130), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3120] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(387), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3154] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    STATE(190), 1,
      sym__indentation,
    STATE(216), 1,
      sym_else_statement,
    STATE(269), 1,
      sym_finally_statement,
    STATE(96), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3188] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(340), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(539), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(278), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(388), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__separator,
    ACTIONS(545), 1,
      sym__line_break,
    STATE(167), 1,
      aux_sym_arguments_repeat1,
    STATE(253), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__separator,
    ACTIONS(551), 1,
      sym__line_break,
    STATE(167), 1,
      aux_sym_arguments_repeat1,
    STATE(278), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(431), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
    STATE(366), 1,
      sym_arguments,
    STATE(213), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__separator,
    ACTIONS(557), 1,
      aux_sym__whitespace_token1,
    ACTIONS(560), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(130), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3342] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(563), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3356] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(567), 1,
      anon_sym_,
    ACTIONS(569), 1,
      sym_text_chunk,
    ACTIONS(571), 1,
      sym__line_break,
    STATE(134), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3376] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(573), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3390] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(567), 1,
      anon_sym_,
    ACTIONS(577), 1,
      sym_text_chunk,
    ACTIONS(579), 1,
      sym__line_break,
    STATE(117), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
    STATE(206), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3427] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3440] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3453] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(573), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3466] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3479] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__separator,
    STATE(191), 1,
      aux_sym_if_statement_repeat1,
    STATE(203), 1,
      sym__indentation,
    STATE(288), 1,
      sym_else_statement,
    STATE(405), 1,
      sym_elseif_statement,
  [3498] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(563), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3511] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3524] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3537] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3550] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(586), 1,
      sym_text_chunk,
    STATE(158), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3567] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3580] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(340), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3593] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3606] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3619] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3632] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3645] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(492), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3658] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3671] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3684] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(588), 1,
      sym_text_chunk,
    STATE(123), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3701] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(492), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3714] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3727] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(340), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3740] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3753] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3766] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3779] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3792] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(573), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3805] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3818] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__separator,
    STATE(191), 1,
      aux_sym_if_statement_repeat1,
    STATE(215), 1,
      sym__indentation,
    STATE(262), 1,
      sym_else_statement,
    STATE(405), 1,
      sym_elseif_statement,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
    STATE(173), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3865] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(602), 1,
      sym_text_chunk,
    STATE(147), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__separator,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(218), 1,
      sym__indentation,
    STATE(257), 1,
      sym_else_statement,
    STATE(405), 1,
      sym_elseif_statement,
  [3901] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(563), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3914] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(172), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3928] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__separator,
    ACTIONS(614), 1,
      sym__line_break,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3956] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(590), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3968] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(617), 1,
      sym__keyword_start_text,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(126), 1,
      sym_keyword,
  [3984] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(182), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3998] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(621), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__line_break,
    ACTIONS(626), 1,
      sym__separator,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4026] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(617), 1,
      sym__keyword_start_text,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(127), 1,
      sym_keyword,
  [4042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym__separator,
    STATE(395), 1,
      sym__indentation,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [4056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__separator,
    ACTIONS(633), 1,
      sym__line_break,
    STATE(181), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4070] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4084] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(617), 1,
      sym__keyword_start_text,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(97), 1,
      sym_keyword,
  [4100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(211), 1,
      aux_sym_arguments_repeat1,
    STATE(359), 1,
      sym_arguments_without_continuation,
  [4116] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(186), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4130] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_ELSEIF,
    ACTIONS(646), 1,
      anon_sym_ELSE,
    STATE(281), 1,
      sym_inline_elseif_statement,
    STATE(353), 1,
      sym_inline_else_statement,
  [4160] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(617), 1,
      sym__keyword_start_text,
    STATE(90), 1,
      sym_scalar_variable,
    STATE(124), 1,
      sym_keyword,
  [4176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_END,
    ACTIONS(650), 1,
      anon_sym_ELSE,
    ACTIONS(652), 1,
      anon_sym_EXCEPT,
    ACTIONS(654), 1,
      anon_sym_FINALLY,
  [4192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_ELSE,
    ACTIONS(652), 1,
      anon_sym_EXCEPT,
    ACTIONS(654), 1,
      anon_sym_FINALLY,
    ACTIONS(656), 1,
      anon_sym_END,
  [4208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__separator,
    STATE(191), 1,
      aux_sym_if_statement_repeat1,
    STATE(344), 1,
      sym__indentation,
    STATE(405), 1,
      sym_elseif_statement,
  [4224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_ELSEIF,
    ACTIONS(646), 1,
      anon_sym_ELSE,
    STATE(281), 1,
      sym_inline_elseif_statement,
    STATE(338), 1,
      sym_inline_else_statement,
  [4240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4253] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_,
    ACTIONS(670), 1,
      sym_variable_name,
  [4266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__separator,
    ACTIONS(675), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    STATE(211), 1,
      aux_sym_arguments_repeat1,
    STATE(373), 1,
      sym_arguments_without_continuation,
  [4292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
    STATE(200), 1,
      aux_sym_arguments_repeat1,
  [4305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
    STATE(223), 1,
      aux_sym_arguments_repeat1,
  [4318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__separator,
    ACTIONS(680), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4344] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4355] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 1,
      anon_sym_,
    ACTIONS(690), 1,
      sym_variable_name,
  [4368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(692), 1,
      anon_sym_END,
    ACTIONS(694), 1,
      anon_sym_ELSEIF,
  [4381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
    STATE(266), 1,
      sym__indentation,
    STATE(269), 1,
      sym_finally_statement,
  [4394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__line_break,
    STATE(205), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__line_break,
    STATE(205), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    ACTIONS(707), 1,
      sym__line_break,
    STATE(207), 1,
      aux_sym_inline_if_statement_repeat1,
  [4429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    ACTIONS(712), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(675), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_arguments_repeat1,
  [4455] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 1,
      anon_sym_,
    ACTIONS(718), 1,
      sym_variable_name,
  [4468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(720), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4481] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(722), 1,
      sym_text_chunk,
    STATE(174), 1,
      sym_scalar_variable,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(205), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__line_break,
    ACTIONS(86), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(694), 1,
      anon_sym_ELSEIF,
    ACTIONS(724), 1,
      anon_sym_END,
  [4529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__separator,
    STATE(243), 1,
      sym_finally_statement,
    STATE(244), 1,
      sym__indentation,
  [4542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_ellipses,
    ACTIONS(728), 1,
      sym__separator,
    STATE(351), 1,
      sym__indentation,
  [4555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(694), 1,
      anon_sym_ELSEIF,
    ACTIONS(730), 1,
      anon_sym_END,
  [4568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__separator,
    ACTIONS(734), 1,
      sym__line_break,
    STATE(207), 1,
      aux_sym_inline_if_statement_repeat1,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_ellipses,
    ACTIONS(738), 1,
      sym__separator,
    STATE(381), 1,
      sym__indentation,
  [4594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym__line_break,
    ACTIONS(740), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4605] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(744), 1,
      sym_text_chunk,
    STATE(162), 1,
      sym_scalar_variable,
  [4618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__separator,
    ACTIONS(680), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4631] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 1,
      anon_sym_,
    ACTIONS(750), 1,
      sym_variable_name,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__separator,
    ACTIONS(754), 1,
      sym__line_break,
    STATE(219), 1,
      aux_sym_inline_if_statement_repeat1,
  [4657] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      sym_variable_name,
  [4670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym__separator,
    STATE(267), 1,
      sym_finally_statement,
    STATE(268), 1,
      sym__indentation,
  [4683] = 4,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(766), 1,
      anon_sym_,
    ACTIONS(768), 1,
      sym_variable_name,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      anon_sym_,
  [4706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      anon_sym_,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym__separator,
    STATE(394), 1,
      sym__indentation,
  [4726] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(780), 1,
      aux_sym_settings_section_token2,
    ACTIONS(782), 1,
      sym__line_break,
  [4736] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(784), 1,
      aux_sym_settings_section_token2,
    ACTIONS(786), 1,
      sym__line_break,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    ACTIONS(790), 1,
      anon_sym_,
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__separator,
    STATE(382), 1,
      sym__indentation,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(796), 1,
      anon_sym_,
  [4786] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym_settings_section_token2,
    ACTIONS(800), 1,
      sym__line_break,
  [4796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
    ACTIONS(804), 1,
      sym__line_break,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__separator,
    STATE(375), 1,
      sym__indentation,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    ACTIONS(810), 1,
      anon_sym_,
  [4826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      anon_sym_,
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__separator,
    STATE(368), 1,
      sym__indentation,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_END,
    ACTIONS(654), 1,
      anon_sym_FINALLY,
  [4856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(820), 1,
      anon_sym_,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 1,
      anon_sym_,
  [4876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__separator,
    ACTIONS(828), 1,
      sym__line_break,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    ACTIONS(832), 1,
      anon_sym_,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 1,
      anon_sym_,
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    ACTIONS(836), 1,
      anon_sym_,
  [4916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__separator,
    ACTIONS(840), 1,
      sym__line_break,
  [4926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [4936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__separator,
    ACTIONS(846), 1,
      sym__line_break,
  [4946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__separator,
    ACTIONS(850), 1,
      sym__line_break,
  [4956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    ACTIONS(854), 1,
      anon_sym_,
  [4966] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_,
    ACTIONS(858), 1,
      sym_variable_name,
  [4976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__separator,
    STATE(349), 1,
      sym__indentation,
  [4986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(864), 1,
      anon_sym_,
  [4996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(868), 1,
      anon_sym_,
  [5006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(503), 1,
      sym__line_break,
  [5016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__separator,
    ACTIONS(482), 1,
      sym__line_break,
  [5026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__separator,
    STATE(347), 1,
      sym__indentation,
  [5036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    ACTIONS(874), 1,
      anon_sym_,
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      sym_scalar_variable,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym__line_break,
    ACTIONS(424), 1,
      sym__separator,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_FINALLY,
    ACTIONS(656), 1,
      anon_sym_END,
  [5076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__separator,
    STATE(341), 1,
      sym__indentation,
  [5086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_FINALLY,
    ACTIONS(880), 1,
      anon_sym_END,
  [5096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__separator,
    STATE(404), 1,
      sym__indentation,
  [5106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(886), 1,
      anon_sym_,
  [5116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__separator,
    STATE(285), 1,
      aux_sym_for_statement_repeat1,
  [5126] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(892), 1,
      sym_variable_name,
  [5136] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_,
    ACTIONS(896), 1,
      sym_variable_name,
  [5146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__separator,
    ACTIONS(900), 1,
      sym__line_break,
  [5156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__separator,
    STATE(339), 1,
      sym__indentation,
  [5166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__separator,
    ACTIONS(906), 1,
      sym__line_break,
  [5176] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_,
    ACTIONS(910), 1,
      sym_variable_name,
  [5186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__separator,
    ACTIONS(914), 1,
      sym__line_break,
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
    ACTIONS(916), 1,
      sym__separator,
  [5206] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(918), 1,
      sym_variable_name,
  [5216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym__line_break,
    ACTIONS(920), 1,
      sym__separator,
  [5226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
  [5236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(436), 1,
      sym_scalar_variable,
  [5246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__separator,
    STATE(411), 1,
      sym__indentation,
  [5256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym__separator,
    STATE(285), 1,
      aux_sym_for_statement_repeat1,
  [5266] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_,
    ACTIONS(933), 1,
      sym_variable_name,
  [5276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__line_break,
    ACTIONS(935), 1,
      sym__separator,
  [5286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym__separator,
    STATE(334), 1,
      sym__indentation,
  [5296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym__separator,
    STATE(429), 1,
      sym__indentation,
  [5306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
  [5316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(948), 1,
      anon_sym_,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym__separator,
    ACTIONS(952), 1,
      sym__line_break,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 1,
      anon_sym_,
  [5346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(956), 1,
      anon_sym_,
  [5356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym__separator,
    ACTIONS(960), 1,
      sym__line_break,
  [5366] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_,
    ACTIONS(964), 1,
      sym_variable_name,
  [5376] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_settings_section_token2,
    ACTIONS(968), 1,
      sym__line_break,
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
  [5396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
  [5406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
  [5416] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_,
    ACTIONS(982), 1,
      sym_variable_name,
  [5426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_ELSEIF,
    STATE(281), 1,
      sym_inline_elseif_statement,
  [5436] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(984), 1,
      sym_variable_name,
  [5446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__line_break,
    ACTIONS(986), 1,
      sym__separator,
  [5456] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_,
    ACTIONS(990), 1,
      sym_variable_name,
  [5466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
  [5476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym__separator,
    STATE(271), 1,
      aux_sym_for_statement_repeat1,
  [5486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
  [5496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__separator,
    ACTIONS(1004), 1,
      sym__line_break,
  [5506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    ACTIONS(1008), 1,
      anon_sym_,
  [5516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    ACTIONS(1012), 1,
      anon_sym_,
  [5526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym__separator,
    ACTIONS(1016), 1,
      sym__line_break,
  [5536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym__separator,
  [5543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym__line_break,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__line_break,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
  [5564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym__line_break,
  [5571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__line_break,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym__line_break,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym__separator,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
  [5606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__line_break,
  [5613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym__line_break,
  [5620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__line_break,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__line_break,
  [5634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__separator,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym__line_break,
  [5648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__line_break,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym__line_break,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym__line_break,
  [5669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__separator,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__line_break,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_END,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym__line_break,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__line_break,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym__line_break,
  [5718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_END,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym__separator,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_END,
  [5739] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_variable_name,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym__line_break,
  [5753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_ELSEIF,
  [5760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym__line_break,
  [5774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_END,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym__line_break,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_END,
  [5795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__line_break,
  [5802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_ellipses,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym__separator,
  [5816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__line_break,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym__separator,
  [5830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__separator,
  [5837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__separator,
  [5844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym__line_break,
  [5851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__line_break,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym__line_break,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__line_break,
  [5872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__separator,
  [5879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
  [5886] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_variable_name,
  [5893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym__separator,
  [5907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym__line_break,
  [5914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym__separator,
  [5921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_END,
  [5928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__line_break,
  [5935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym__separator,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym__line_break,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym__line_break,
  [5956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__line_break,
  [5963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym__line_break,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_END,
  [5977] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_variable_name,
  [5984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym__line_break,
  [5991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__line_break,
  [5998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym__line_break,
  [6005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym__line_break,
  [6012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_ellipses,
  [6019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_END,
  [6026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym__line_break,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym__line_break,
  [6040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym__line_break,
  [6054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym__line_break,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym__line_break,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym__line_break,
  [6075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym__line_break,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
  [6089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__line_break,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_END,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_EXCEPT,
  [6117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym__line_break,
  [6131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym__line_break,
  [6152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [6159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym__line_break,
  [6166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym__line_break,
  [6173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_END,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym__separator,
  [6187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym__line_break,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym__line_break,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym__line_break,
  [6215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_RBRACK,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_END,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym__line_break,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym__line_break,
  [6257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym__separator,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym__line_break,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym__line_break,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym__line_break,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_RBRACE,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym__line_break,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym__line_break,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [6341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_END,
  [6355] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym_variable_name,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym__line_break,
  [6369] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_variable_name,
  [6376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
  [6390] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_variable_name,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym__separator,
  [6404] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym_variable_name,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
  [6418] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1232), 1,
      sym_variable_name,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
  [6432] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(1236), 1,
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
  [SMALL_STATE(26)] = 1039,
  [SMALL_STATE(27)] = 1064,
  [SMALL_STATE(28)] = 1093,
  [SMALL_STATE(29)] = 1118,
  [SMALL_STATE(30)] = 1143,
  [SMALL_STATE(31)] = 1170,
  [SMALL_STATE(32)] = 1199,
  [SMALL_STATE(33)] = 1226,
  [SMALL_STATE(34)] = 1253,
  [SMALL_STATE(35)] = 1278,
  [SMALL_STATE(36)] = 1305,
  [SMALL_STATE(37)] = 1338,
  [SMALL_STATE(38)] = 1367,
  [SMALL_STATE(39)] = 1394,
  [SMALL_STATE(40)] = 1423,
  [SMALL_STATE(41)] = 1451,
  [SMALL_STATE(42)] = 1479,
  [SMALL_STATE(43)] = 1511,
  [SMALL_STATE(44)] = 1529,
  [SMALL_STATE(45)] = 1557,
  [SMALL_STATE(46)] = 1585,
  [SMALL_STATE(47)] = 1613,
  [SMALL_STATE(48)] = 1641,
  [SMALL_STATE(49)] = 1669,
  [SMALL_STATE(50)] = 1697,
  [SMALL_STATE(51)] = 1715,
  [SMALL_STATE(52)] = 1743,
  [SMALL_STATE(53)] = 1771,
  [SMALL_STATE(54)] = 1798,
  [SMALL_STATE(55)] = 1815,
  [SMALL_STATE(56)] = 1842,
  [SMALL_STATE(57)] = 1859,
  [SMALL_STATE(58)] = 1884,
  [SMALL_STATE(59)] = 1909,
  [SMALL_STATE(60)] = 1926,
  [SMALL_STATE(61)] = 1953,
  [SMALL_STATE(62)] = 1978,
  [SMALL_STATE(63)] = 2004,
  [SMALL_STATE(64)] = 2030,
  [SMALL_STATE(65)] = 2054,
  [SMALL_STATE(66)] = 2078,
  [SMALL_STATE(67)] = 2102,
  [SMALL_STATE(68)] = 2126,
  [SMALL_STATE(69)] = 2144,
  [SMALL_STATE(70)] = 2162,
  [SMALL_STATE(71)] = 2186,
  [SMALL_STATE(72)] = 2210,
  [SMALL_STATE(73)] = 2226,
  [SMALL_STATE(74)] = 2242,
  [SMALL_STATE(75)] = 2266,
  [SMALL_STATE(76)] = 2282,
  [SMALL_STATE(77)] = 2305,
  [SMALL_STATE(78)] = 2328,
  [SMALL_STATE(79)] = 2343,
  [SMALL_STATE(80)] = 2366,
  [SMALL_STATE(81)] = 2389,
  [SMALL_STATE(82)] = 2412,
  [SMALL_STATE(83)] = 2435,
  [SMALL_STATE(84)] = 2450,
  [SMALL_STATE(85)] = 2473,
  [SMALL_STATE(86)] = 2494,
  [SMALL_STATE(87)] = 2515,
  [SMALL_STATE(88)] = 2538,
  [SMALL_STATE(89)] = 2561,
  [SMALL_STATE(90)] = 2584,
  [SMALL_STATE(91)] = 2605,
  [SMALL_STATE(92)] = 2628,
  [SMALL_STATE(93)] = 2648,
  [SMALL_STATE(94)] = 2668,
  [SMALL_STATE(95)] = 2688,
  [SMALL_STATE(96)] = 2708,
  [SMALL_STATE(97)] = 2728,
  [SMALL_STATE(98)] = 2748,
  [SMALL_STATE(99)] = 2768,
  [SMALL_STATE(100)] = 2788,
  [SMALL_STATE(101)] = 2802,
  [SMALL_STATE(102)] = 2822,
  [SMALL_STATE(103)] = 2842,
  [SMALL_STATE(104)] = 2862,
  [SMALL_STATE(105)] = 2876,
  [SMALL_STATE(106)] = 2890,
  [SMALL_STATE(107)] = 2904,
  [SMALL_STATE(108)] = 2924,
  [SMALL_STATE(109)] = 2944,
  [SMALL_STATE(110)] = 2958,
  [SMALL_STATE(111)] = 2978,
  [SMALL_STATE(112)] = 2992,
  [SMALL_STATE(113)] = 3012,
  [SMALL_STATE(114)] = 3032,
  [SMALL_STATE(115)] = 3046,
  [SMALL_STATE(116)] = 3060,
  [SMALL_STATE(117)] = 3080,
  [SMALL_STATE(118)] = 3100,
  [SMALL_STATE(119)] = 3120,
  [SMALL_STATE(120)] = 3134,
  [SMALL_STATE(121)] = 3154,
  [SMALL_STATE(122)] = 3168,
  [SMALL_STATE(123)] = 3188,
  [SMALL_STATE(124)] = 3202,
  [SMALL_STATE(125)] = 3222,
  [SMALL_STATE(126)] = 3242,
  [SMALL_STATE(127)] = 3262,
  [SMALL_STATE(128)] = 3282,
  [SMALL_STATE(129)] = 3302,
  [SMALL_STATE(130)] = 3322,
  [SMALL_STATE(131)] = 3342,
  [SMALL_STATE(132)] = 3356,
  [SMALL_STATE(133)] = 3376,
  [SMALL_STATE(134)] = 3390,
  [SMALL_STATE(135)] = 3410,
  [SMALL_STATE(136)] = 3427,
  [SMALL_STATE(137)] = 3440,
  [SMALL_STATE(138)] = 3453,
  [SMALL_STATE(139)] = 3466,
  [SMALL_STATE(140)] = 3479,
  [SMALL_STATE(141)] = 3498,
  [SMALL_STATE(142)] = 3511,
  [SMALL_STATE(143)] = 3524,
  [SMALL_STATE(144)] = 3537,
  [SMALL_STATE(145)] = 3550,
  [SMALL_STATE(146)] = 3567,
  [SMALL_STATE(147)] = 3580,
  [SMALL_STATE(148)] = 3593,
  [SMALL_STATE(149)] = 3606,
  [SMALL_STATE(150)] = 3619,
  [SMALL_STATE(151)] = 3632,
  [SMALL_STATE(152)] = 3645,
  [SMALL_STATE(153)] = 3658,
  [SMALL_STATE(154)] = 3671,
  [SMALL_STATE(155)] = 3684,
  [SMALL_STATE(156)] = 3701,
  [SMALL_STATE(157)] = 3714,
  [SMALL_STATE(158)] = 3727,
  [SMALL_STATE(159)] = 3740,
  [SMALL_STATE(160)] = 3753,
  [SMALL_STATE(161)] = 3766,
  [SMALL_STATE(162)] = 3779,
  [SMALL_STATE(163)] = 3792,
  [SMALL_STATE(164)] = 3805,
  [SMALL_STATE(165)] = 3818,
  [SMALL_STATE(166)] = 3837,
  [SMALL_STATE(167)] = 3848,
  [SMALL_STATE(168)] = 3865,
  [SMALL_STATE(169)] = 3882,
  [SMALL_STATE(170)] = 3901,
  [SMALL_STATE(171)] = 3914,
  [SMALL_STATE(172)] = 3928,
  [SMALL_STATE(173)] = 3942,
  [SMALL_STATE(174)] = 3956,
  [SMALL_STATE(175)] = 3968,
  [SMALL_STATE(176)] = 3984,
  [SMALL_STATE(177)] = 3998,
  [SMALL_STATE(178)] = 4012,
  [SMALL_STATE(179)] = 4026,
  [SMALL_STATE(180)] = 4042,
  [SMALL_STATE(181)] = 4056,
  [SMALL_STATE(182)] = 4070,
  [SMALL_STATE(183)] = 4084,
  [SMALL_STATE(184)] = 4100,
  [SMALL_STATE(185)] = 4116,
  [SMALL_STATE(186)] = 4130,
  [SMALL_STATE(187)] = 4144,
  [SMALL_STATE(188)] = 4160,
  [SMALL_STATE(189)] = 4176,
  [SMALL_STATE(190)] = 4192,
  [SMALL_STATE(191)] = 4208,
  [SMALL_STATE(192)] = 4224,
  [SMALL_STATE(193)] = 4240,
  [SMALL_STATE(194)] = 4253,
  [SMALL_STATE(195)] = 4266,
  [SMALL_STATE(196)] = 4279,
  [SMALL_STATE(197)] = 4292,
  [SMALL_STATE(198)] = 4305,
  [SMALL_STATE(199)] = 4318,
  [SMALL_STATE(200)] = 4331,
  [SMALL_STATE(201)] = 4344,
  [SMALL_STATE(202)] = 4355,
  [SMALL_STATE(203)] = 4368,
  [SMALL_STATE(204)] = 4381,
  [SMALL_STATE(205)] = 4394,
  [SMALL_STATE(206)] = 4405,
  [SMALL_STATE(207)] = 4416,
  [SMALL_STATE(208)] = 4429,
  [SMALL_STATE(209)] = 4442,
  [SMALL_STATE(210)] = 4455,
  [SMALL_STATE(211)] = 4468,
  [SMALL_STATE(212)] = 4481,
  [SMALL_STATE(213)] = 4494,
  [SMALL_STATE(214)] = 4505,
  [SMALL_STATE(215)] = 4516,
  [SMALL_STATE(216)] = 4529,
  [SMALL_STATE(217)] = 4542,
  [SMALL_STATE(218)] = 4555,
  [SMALL_STATE(219)] = 4568,
  [SMALL_STATE(220)] = 4581,
  [SMALL_STATE(221)] = 4594,
  [SMALL_STATE(222)] = 4605,
  [SMALL_STATE(223)] = 4618,
  [SMALL_STATE(224)] = 4631,
  [SMALL_STATE(225)] = 4644,
  [SMALL_STATE(226)] = 4657,
  [SMALL_STATE(227)] = 4670,
  [SMALL_STATE(228)] = 4683,
  [SMALL_STATE(229)] = 4696,
  [SMALL_STATE(230)] = 4706,
  [SMALL_STATE(231)] = 4716,
  [SMALL_STATE(232)] = 4726,
  [SMALL_STATE(233)] = 4736,
  [SMALL_STATE(234)] = 4746,
  [SMALL_STATE(235)] = 4756,
  [SMALL_STATE(236)] = 4766,
  [SMALL_STATE(237)] = 4776,
  [SMALL_STATE(238)] = 4786,
  [SMALL_STATE(239)] = 4796,
  [SMALL_STATE(240)] = 4806,
  [SMALL_STATE(241)] = 4816,
  [SMALL_STATE(242)] = 4826,
  [SMALL_STATE(243)] = 4836,
  [SMALL_STATE(244)] = 4846,
  [SMALL_STATE(245)] = 4856,
  [SMALL_STATE(246)] = 4866,
  [SMALL_STATE(247)] = 4876,
  [SMALL_STATE(248)] = 4886,
  [SMALL_STATE(249)] = 4896,
  [SMALL_STATE(250)] = 4906,
  [SMALL_STATE(251)] = 4916,
  [SMALL_STATE(252)] = 4926,
  [SMALL_STATE(253)] = 4936,
  [SMALL_STATE(254)] = 4946,
  [SMALL_STATE(255)] = 4956,
  [SMALL_STATE(256)] = 4966,
  [SMALL_STATE(257)] = 4976,
  [SMALL_STATE(258)] = 4986,
  [SMALL_STATE(259)] = 4996,
  [SMALL_STATE(260)] = 5006,
  [SMALL_STATE(261)] = 5016,
  [SMALL_STATE(262)] = 5026,
  [SMALL_STATE(263)] = 5036,
  [SMALL_STATE(264)] = 5046,
  [SMALL_STATE(265)] = 5056,
  [SMALL_STATE(266)] = 5066,
  [SMALL_STATE(267)] = 5076,
  [SMALL_STATE(268)] = 5086,
  [SMALL_STATE(269)] = 5096,
  [SMALL_STATE(270)] = 5106,
  [SMALL_STATE(271)] = 5116,
  [SMALL_STATE(272)] = 5126,
  [SMALL_STATE(273)] = 5136,
  [SMALL_STATE(274)] = 5146,
  [SMALL_STATE(275)] = 5156,
  [SMALL_STATE(276)] = 5166,
  [SMALL_STATE(277)] = 5176,
  [SMALL_STATE(278)] = 5186,
  [SMALL_STATE(279)] = 5196,
  [SMALL_STATE(280)] = 5206,
  [SMALL_STATE(281)] = 5216,
  [SMALL_STATE(282)] = 5226,
  [SMALL_STATE(283)] = 5236,
  [SMALL_STATE(284)] = 5246,
  [SMALL_STATE(285)] = 5256,
  [SMALL_STATE(286)] = 5266,
  [SMALL_STATE(287)] = 5276,
  [SMALL_STATE(288)] = 5286,
  [SMALL_STATE(289)] = 5296,
  [SMALL_STATE(290)] = 5306,
  [SMALL_STATE(291)] = 5316,
  [SMALL_STATE(292)] = 5326,
  [SMALL_STATE(293)] = 5336,
  [SMALL_STATE(294)] = 5346,
  [SMALL_STATE(295)] = 5356,
  [SMALL_STATE(296)] = 5366,
  [SMALL_STATE(297)] = 5376,
  [SMALL_STATE(298)] = 5386,
  [SMALL_STATE(299)] = 5396,
  [SMALL_STATE(300)] = 5406,
  [SMALL_STATE(301)] = 5416,
  [SMALL_STATE(302)] = 5426,
  [SMALL_STATE(303)] = 5436,
  [SMALL_STATE(304)] = 5446,
  [SMALL_STATE(305)] = 5456,
  [SMALL_STATE(306)] = 5466,
  [SMALL_STATE(307)] = 5476,
  [SMALL_STATE(308)] = 5486,
  [SMALL_STATE(309)] = 5496,
  [SMALL_STATE(310)] = 5506,
  [SMALL_STATE(311)] = 5516,
  [SMALL_STATE(312)] = 5526,
  [SMALL_STATE(313)] = 5536,
  [SMALL_STATE(314)] = 5543,
  [SMALL_STATE(315)] = 5550,
  [SMALL_STATE(316)] = 5557,
  [SMALL_STATE(317)] = 5564,
  [SMALL_STATE(318)] = 5571,
  [SMALL_STATE(319)] = 5578,
  [SMALL_STATE(320)] = 5585,
  [SMALL_STATE(321)] = 5592,
  [SMALL_STATE(322)] = 5599,
  [SMALL_STATE(323)] = 5606,
  [SMALL_STATE(324)] = 5613,
  [SMALL_STATE(325)] = 5620,
  [SMALL_STATE(326)] = 5627,
  [SMALL_STATE(327)] = 5634,
  [SMALL_STATE(328)] = 5641,
  [SMALL_STATE(329)] = 5648,
  [SMALL_STATE(330)] = 5655,
  [SMALL_STATE(331)] = 5662,
  [SMALL_STATE(332)] = 5669,
  [SMALL_STATE(333)] = 5676,
  [SMALL_STATE(334)] = 5683,
  [SMALL_STATE(335)] = 5690,
  [SMALL_STATE(336)] = 5697,
  [SMALL_STATE(337)] = 5704,
  [SMALL_STATE(338)] = 5711,
  [SMALL_STATE(339)] = 5718,
  [SMALL_STATE(340)] = 5725,
  [SMALL_STATE(341)] = 5732,
  [SMALL_STATE(342)] = 5739,
  [SMALL_STATE(343)] = 5746,
  [SMALL_STATE(344)] = 5753,
  [SMALL_STATE(345)] = 5760,
  [SMALL_STATE(346)] = 5767,
  [SMALL_STATE(347)] = 5774,
  [SMALL_STATE(348)] = 5781,
  [SMALL_STATE(349)] = 5788,
  [SMALL_STATE(350)] = 5795,
  [SMALL_STATE(351)] = 5802,
  [SMALL_STATE(352)] = 5809,
  [SMALL_STATE(353)] = 5816,
  [SMALL_STATE(354)] = 5823,
  [SMALL_STATE(355)] = 5830,
  [SMALL_STATE(356)] = 5837,
  [SMALL_STATE(357)] = 5844,
  [SMALL_STATE(358)] = 5851,
  [SMALL_STATE(359)] = 5858,
  [SMALL_STATE(360)] = 5865,
  [SMALL_STATE(361)] = 5872,
  [SMALL_STATE(362)] = 5879,
  [SMALL_STATE(363)] = 5886,
  [SMALL_STATE(364)] = 5893,
  [SMALL_STATE(365)] = 5900,
  [SMALL_STATE(366)] = 5907,
  [SMALL_STATE(367)] = 5914,
  [SMALL_STATE(368)] = 5921,
  [SMALL_STATE(369)] = 5928,
  [SMALL_STATE(370)] = 5935,
  [SMALL_STATE(371)] = 5942,
  [SMALL_STATE(372)] = 5949,
  [SMALL_STATE(373)] = 5956,
  [SMALL_STATE(374)] = 5963,
  [SMALL_STATE(375)] = 5970,
  [SMALL_STATE(376)] = 5977,
  [SMALL_STATE(377)] = 5984,
  [SMALL_STATE(378)] = 5991,
  [SMALL_STATE(379)] = 5998,
  [SMALL_STATE(380)] = 6005,
  [SMALL_STATE(381)] = 6012,
  [SMALL_STATE(382)] = 6019,
  [SMALL_STATE(383)] = 6026,
  [SMALL_STATE(384)] = 6033,
  [SMALL_STATE(385)] = 6040,
  [SMALL_STATE(386)] = 6047,
  [SMALL_STATE(387)] = 6054,
  [SMALL_STATE(388)] = 6061,
  [SMALL_STATE(389)] = 6068,
  [SMALL_STATE(390)] = 6075,
  [SMALL_STATE(391)] = 6082,
  [SMALL_STATE(392)] = 6089,
  [SMALL_STATE(393)] = 6096,
  [SMALL_STATE(394)] = 6103,
  [SMALL_STATE(395)] = 6110,
  [SMALL_STATE(396)] = 6117,
  [SMALL_STATE(397)] = 6124,
  [SMALL_STATE(398)] = 6131,
  [SMALL_STATE(399)] = 6138,
  [SMALL_STATE(400)] = 6145,
  [SMALL_STATE(401)] = 6152,
  [SMALL_STATE(402)] = 6159,
  [SMALL_STATE(403)] = 6166,
  [SMALL_STATE(404)] = 6173,
  [SMALL_STATE(405)] = 6180,
  [SMALL_STATE(406)] = 6187,
  [SMALL_STATE(407)] = 6194,
  [SMALL_STATE(408)] = 6201,
  [SMALL_STATE(409)] = 6208,
  [SMALL_STATE(410)] = 6215,
  [SMALL_STATE(411)] = 6222,
  [SMALL_STATE(412)] = 6229,
  [SMALL_STATE(413)] = 6236,
  [SMALL_STATE(414)] = 6243,
  [SMALL_STATE(415)] = 6250,
  [SMALL_STATE(416)] = 6257,
  [SMALL_STATE(417)] = 6264,
  [SMALL_STATE(418)] = 6271,
  [SMALL_STATE(419)] = 6278,
  [SMALL_STATE(420)] = 6285,
  [SMALL_STATE(421)] = 6292,
  [SMALL_STATE(422)] = 6299,
  [SMALL_STATE(423)] = 6306,
  [SMALL_STATE(424)] = 6313,
  [SMALL_STATE(425)] = 6320,
  [SMALL_STATE(426)] = 6327,
  [SMALL_STATE(427)] = 6334,
  [SMALL_STATE(428)] = 6341,
  [SMALL_STATE(429)] = 6348,
  [SMALL_STATE(430)] = 6355,
  [SMALL_STATE(431)] = 6362,
  [SMALL_STATE(432)] = 6369,
  [SMALL_STATE(433)] = 6376,
  [SMALL_STATE(434)] = 6383,
  [SMALL_STATE(435)] = 6390,
  [SMALL_STATE(436)] = 6397,
  [SMALL_STATE(437)] = 6404,
  [SMALL_STATE(438)] = 6411,
  [SMALL_STATE(439)] = 6418,
  [SMALL_STATE(440)] = 6425,
  [SMALL_STATE(441)] = 6432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(251),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(380),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(256),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(132),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(374),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(402),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(402),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(184),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(374),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(376),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(380),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(34),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(272),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(155),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(171),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(61),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(11),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(256),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(168),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(176),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(67),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(305),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(145),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(185),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(74),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(175),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(272),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(222),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(86),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 5), SHIFT(217),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1), SHIFT(44),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(220),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(217),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(256),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(212),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(117),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 6), SHIFT(217),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 5), SHIFT(44),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 5), SHIFT(220),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 6), SHIFT(44),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 6), SHIFT(220),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(420),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(217),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(44),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(220),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(220),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(201),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(395),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(220),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 12), SHIFT_REPEAT(344),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(44),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(44),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(44),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(217),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(217),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(302),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 7),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(283),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(179),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 24),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 6),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 22),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 21),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 20),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 19),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 18),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 17),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 16),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, .production_id = 7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_statement, 6, .production_id = 15),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 14),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 13),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 11),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, .production_id = 7),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 23),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 7),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_statement, 5, .production_id = 10),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 9),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 8),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 6),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 7),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, .production_id = 6),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_statement, 4, .production_id = 5),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, .production_id = 6),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
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
