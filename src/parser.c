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
#define STATE_COUNT 411
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 3
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

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
  sym_continue_statement = 53,
  sym_break_statement = 54,
  sym_ellipses = 55,
  anon_sym_AT_LBRACE = 56,
  anon_sym_AMP_LBRACE = 57,
  anon_sym_DOLLAR_LBRACE_LBRACE = 58,
  aux_sym_inline_python_expression_token1 = 59,
  anon_sym_RBRACE_RBRACE = 60,
  sym_variable_name = 61,
  sym_text_chunk = 62,
  sym_comment = 63,
  sym__separator = 64,
  aux_sym__whitespace_token1 = 65,
  sym__line_break = 66,
  sym_source_file = 67,
  sym_section = 68,
  sym_settings_section = 69,
  sym_setting_statement = 70,
  sym_setting_name = 71,
  sym_variables_section = 72,
  sym_variable_definition = 73,
  sym_keywords_section = 74,
  sym_keyword_definition = 75,
  sym__keyword_definition_name = 76,
  sym_keyword_definition_body = 77,
  sym_keyword_setting = 78,
  sym_keyword_setting_name = 79,
  sym_test_cases_section = 80,
  sym_test_case_definition = 81,
  sym_test_case_definition_body = 82,
  sym_test_case_setting = 83,
  sym_test_case_setting_name = 84,
  sym_statement = 85,
  sym_return_statement = 86,
  sym_variable_assignment = 87,
  sym_keyword_invocation = 88,
  sym_keyword = 89,
  sym_if_statement = 90,
  sym_elseif_statement = 91,
  sym_else_statement = 92,
  sym_inline_if_statement = 93,
  sym_block = 94,
  sym_inline_elseif_statement = 95,
  sym_inline_else_statement = 96,
  sym_inline_statement = 97,
  sym_try_statement = 98,
  sym_except_statement = 99,
  sym_finally_statement = 100,
  sym_while_statement = 101,
  sym_for_statement = 102,
  sym__for_in = 103,
  sym__for_in_range = 104,
  sym__for_in_enumerate = 105,
  sym__for_in_zip = 106,
  sym_arguments = 107,
  sym_arguments_without_continuation = 108,
  sym_continuation = 109,
  sym_argument = 110,
  sym_scalar_variable = 111,
  sym_list_variable = 112,
  sym_dictionary_variable = 113,
  sym_inline_python_expression = 114,
  sym__indentation = 115,
  sym__empty_line = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_settings_section_repeat1 = 118,
  aux_sym_variables_section_repeat1 = 119,
  aux_sym_keywords_section_repeat1 = 120,
  aux_sym__keyword_definition_name_repeat1 = 121,
  aux_sym_keyword_definition_body_repeat1 = 122,
  aux_sym_test_cases_section_repeat1 = 123,
  aux_sym_test_case_definition_body_repeat1 = 124,
  aux_sym_if_statement_repeat1 = 125,
  aux_sym_inline_if_statement_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  aux_sym_try_statement_repeat1 = 128,
  aux_sym_for_statement_repeat1 = 129,
  aux_sym_arguments_repeat1 = 130,
  aux_sym_arguments_repeat2 = 131,
  aux_sym_argument_repeat1 = 132,
  aux_sym_inline_python_expression_repeat1 = 133,
  alias_sym_python_expression = 134,
  alias_sym_return_value = 135,
  alias_sym_variable_list = 136,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 1},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 3},
  [17] = {.index = 20, .length = 3},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 4},
  [21] = {.index = 33, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_alternative, 0},
  [4] =
    {field_condition, 1},
  [5] =
    {field_condition, 2},
  [6] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [8] =
    {field_consequence, 3},
  [9] =
    {field_body, 3},
    {field_condition, 1},
  [11] =
    {field_alternative, 4},
    {field_condition, 2},
  [13] =
    {field_condition, 2},
    {field_consequence, 4},
  [15] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [17] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [23] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [26] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [29] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [33] =
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
  [19] = {
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
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 7,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 7,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 68,
  [69] = 58,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 58,
  [74] = 57,
  [75] = 57,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 103,
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
  [126] = 126,
  [127] = 82,
  [128] = 111,
  [129] = 105,
  [130] = 104,
  [131] = 126,
  [132] = 116,
  [133] = 118,
  [134] = 134,
  [135] = 117,
  [136] = 114,
  [137] = 121,
  [138] = 121,
  [139] = 118,
  [140] = 125,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 116,
  [145] = 97,
  [146] = 122,
  [147] = 106,
  [148] = 148,
  [149] = 105,
  [150] = 150,
  [151] = 125,
  [152] = 122,
  [153] = 119,
  [154] = 143,
  [155] = 119,
  [156] = 117,
  [157] = 157,
  [158] = 143,
  [159] = 157,
  [160] = 104,
  [161] = 106,
  [162] = 97,
  [163] = 126,
  [164] = 114,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 168,
  [169] = 165,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 150,
  [174] = 168,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 168,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 187,
  [195] = 7,
  [196] = 167,
  [197] = 197,
  [198] = 197,
  [199] = 199,
  [200] = 193,
  [201] = 201,
  [202] = 189,
  [203] = 183,
  [204] = 188,
  [205] = 205,
  [206] = 206,
  [207] = 190,
  [208] = 208,
  [209] = 190,
  [210] = 210,
  [211] = 171,
  [212] = 170,
  [213] = 213,
  [214] = 214,
  [215] = 186,
  [216] = 189,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 222,
  [225] = 225,
  [226] = 223,
  [227] = 222,
  [228] = 228,
  [229] = 220,
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
  [241] = 220,
  [242] = 231,
  [243] = 243,
  [244] = 232,
  [245] = 235,
  [246] = 246,
  [247] = 247,
  [248] = 238,
  [249] = 249,
  [250] = 239,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 222,
  [255] = 231,
  [256] = 231,
  [257] = 223,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 220,
  [262] = 239,
  [263] = 263,
  [264] = 238,
  [265] = 225,
  [266] = 247,
  [267] = 267,
  [268] = 235,
  [269] = 232,
  [270] = 270,
  [271] = 243,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
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
  [332] = 116,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 126,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 118,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 345,
  [359] = 351,
  [360] = 360,
  [361] = 361,
  [362] = 343,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 337,
  [369] = 369,
  [370] = 326,
  [371] = 371,
  [372] = 372,
  [373] = 323,
  [374] = 374,
  [375] = 312,
  [376] = 311,
  [377] = 351,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 343,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 337,
  [389] = 326,
  [390] = 390,
  [391] = 391,
  [392] = 323,
  [393] = 312,
  [394] = 311,
  [395] = 351,
  [396] = 396,
  [397] = 397,
  [398] = 343,
  [399] = 337,
  [400] = 400,
  [401] = 350,
  [402] = 402,
  [403] = 340,
  [404] = 404,
  [405] = 405,
  [406] = 350,
  [407] = 407,
  [408] = 340,
  [409] = 409,
  [410] = 350,
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
      if (eof) ADVANCE(345);
      if (lookahead == '\t') ADVANCE(611);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(378);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == '[') ADVANCE(391);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(611);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(614);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(613);
      if (lookahead == '#') ADVANCE(609);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead == '}') ADVANCE(376);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(610);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '=') ADVANCE(379);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(610);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(612);
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(129);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(613);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(502);
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '}') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(503);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(219);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(311);
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
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'F') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead == 'W') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'F') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead == 'W') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead == 'F') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead == 'W') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead == 'F') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead == 'W') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'F') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead == 'W') ADVANCE(425);
      if (lookahead == '[') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(499);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(503);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(381);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(348);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(371);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(399);
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
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(492);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(466);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(473);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(480);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(485);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(470);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(464);
      if (lookahead == 'N') ADVANCE(484);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(468);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(490);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(487);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(476);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(474);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(478);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(375);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(375);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(495);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(495);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(494);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(494);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(374);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(374);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(374);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(458);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(462);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(564);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(561);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 162:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 163:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 164:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 218:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 219:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 227:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 254:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 255:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 256:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 257:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 258:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 328:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(233);
      END_STATE();
    case 329:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 330:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(236);
      END_STATE();
    case 331:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 332:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 333:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 334:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(591);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 335:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 336:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 337:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(525);
      END_STATE();
    case 339:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(462);
      END_STATE();
    case 340:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(561);
      END_STATE();
    case 341:
      if (eof) ADVANCE(345);
      if (lookahead == '\t') ADVANCE(610);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(615);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 342:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 343:
      if (eof) ADVANCE(345);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '$') ADVANCE(127);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(616);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 344:
      if (eof) ADVANCE(345);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == '}') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(347);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(496);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '{') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '=') ADVANCE(380);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(613);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(503);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '{') ADVANCE(458);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(601);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(597);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(597);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(597);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(599);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(599);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(599);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(465);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(426);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'K') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(447);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead == 'X') ADVANCE(415);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'Y') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'Y') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == 'F') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(131);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__keyword_start_text);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(503);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(609);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(603);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(598);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(598);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(598);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(600);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(600);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(600);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(133);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(551);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '{') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '{') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(129);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(551);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(551);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(551);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(591);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(591);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(591);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(591);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(591);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(591);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(591);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(591);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(591);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(591);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(591);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(591);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(591);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(591);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(591);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(591);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(129);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(458);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(561);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(599);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(599);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(600);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(600);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(617);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '#') ADVANCE(609);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(617);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(619);
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
  [1] = {.lex_state = 344},
  [2] = {.lex_state = 342},
  [3] = {.lex_state = 342},
  [4] = {.lex_state = 342},
  [5] = {.lex_state = 342},
  [6] = {.lex_state = 342},
  [7] = {.lex_state = 342},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 342},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 343},
  [17] = {.lex_state = 343},
  [18] = {.lex_state = 343},
  [19] = {.lex_state = 343},
  [20] = {.lex_state = 343},
  [21] = {.lex_state = 341},
  [22] = {.lex_state = 341},
  [23] = {.lex_state = 341},
  [24] = {.lex_state = 341},
  [25] = {.lex_state = 343},
  [26] = {.lex_state = 342},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 342},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 343},
  [32] = {.lex_state = 342},
  [33] = {.lex_state = 343},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 343},
  [36] = {.lex_state = 343},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 342},
  [41] = {.lex_state = 342},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 341},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 341},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 343},
  [61] = {.lex_state = 341},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 343},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 343},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 342},
  [72] = {.lex_state = 342},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 344},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 344},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 344},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 344},
  [312] = {.lex_state = 344},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 344},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 344},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 344},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 35},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 344},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 35},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 344},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 35},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 344},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 344},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 344},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 344},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 344},
  [376] = {.lex_state = 344},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 344},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 344},
  [389] = {.lex_state = 344},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 344},
  [393] = {.lex_state = 344},
  [394] = {.lex_state = 344},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 344},
  [399] = {.lex_state = 344},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 35},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 35},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 35},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 35},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 35},
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
    [sym_source_file] = STATE(380),
    [sym_section] = STATE(39),
    [sym_settings_section] = STATE(134),
    [sym_variables_section] = STATE(134),
    [sym_keywords_section] = STATE(134),
    [sym_test_cases_section] = STATE(134),
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
    STATE(98), 1,
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
    ACTIONS(30), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(98), 1,
      sym_setting_name,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(27), 17,
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
    ACTIONS(23), 1,
      sym__line_break,
    STATE(98), 1,
      sym_setting_name,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
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
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(40), 1,
      sym__line_break,
    STATE(98), 1,
      sym_setting_name,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(38), 5,
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
  [176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(98), 1,
      sym_setting_name,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
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
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 24,
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
  [253] = 17,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_END,
    ACTIONS(58), 1,
      anon_sym_ELSE,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_EXCEPT,
    ACTIONS(64), 1,
      anon_sym_FINALLY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(361), 1,
      sym_statement,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym__whitespace_token1,
    ACTIONS(74), 23,
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
  [345] = 16,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(58), 1,
      anon_sym_ELSE,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(361), 1,
      sym_statement,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [402] = 14,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(328), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [454] = 14,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [506] = 14,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_ellipses,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(361), 1,
      sym_statement,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [557] = 14,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_END,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(361), 1,
      sym_statement,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [608] = 13,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_WHILE,
    ACTIONS(68), 1,
      anon_sym_FOR,
    ACTIONS(72), 1,
      sym_comment,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(361), 1,
      sym_statement,
    ACTIONS(70), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(329), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [656] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      sym_text_chunk,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__line_break,
    STATE(109), 1,
      sym_scalar_variable,
    STATE(355), 1,
      sym__keyword_definition_name,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(92), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [692] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      sym_text_chunk,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__line_break,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_scalar_variable,
    STATE(355), 1,
      sym__keyword_definition_name,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(104), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [728] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      sym_text_chunk,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__line_break,
    STATE(109), 1,
      sym_scalar_variable,
    STATE(355), 1,
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
  [764] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      sym_text_chunk,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(112), 1,
      sym__line_break,
    STATE(109), 1,
      sym_scalar_variable,
    STATE(355), 1,
      sym__keyword_definition_name,
    STATE(17), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(92), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [800] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(121), 1,
      sym_text_chunk,
    ACTIONS(124), 1,
      aux_sym__whitespace_token1,
    ACTIONS(127), 1,
      sym__line_break,
    STATE(109), 1,
      sym_scalar_variable,
    STATE(355), 1,
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
  [836] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__separator,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(138), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(132), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [867] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__separator,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(150), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(142), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [898] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__separator,
    ACTIONS(160), 1,
      aux_sym__whitespace_token1,
    ACTIONS(163), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(155), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [928] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym__separator,
    ACTIONS(172), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(168), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [958] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(180), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(176), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1010] = 8,
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
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(134), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(41), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      aux_sym_settings_section_token1,
    ACTIONS(197), 1,
      aux_sym_variables_section_token1,
    ACTIONS(200), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(203), 1,
      aux_sym_test_cases_section_token1,
    STATE(29), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(134), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1093] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      anon_sym_EQ2,
    ACTIONS(214), 1,
      sym__separator,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(290), 1,
      sym_arguments,
    ACTIONS(212), 2,
      anon_sym_,
      sym_text_chunk,
    STATE(167), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1126] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(222), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(228), 1,
      sym__line_break,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1178] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym__line_break,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(232), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1205] = 10,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(236), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      anon_sym_EQ2,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(242), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(290), 1,
      sym_arguments,
    ACTIONS(212), 2,
      anon_sym_,
      sym_text_chunk,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1238] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(180), 1,
      sym__line_break,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(232), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1265] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym_text_chunk,
    ACTIONS(252), 1,
      aux_sym__whitespace_token1,
    ACTIONS(255), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(247), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1292] = 8,
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
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(134), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__separator,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(115), 1,
      sym_block,
    STATE(192), 1,
      sym_else_statement,
    STATE(286), 1,
      sym_finally_statement,
    STATE(110), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1354] = 8,
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
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(134), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(41), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(266), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      aux_sym__whitespace_token1,
    ACTIONS(276), 1,
      sym__line_break,
    STATE(41), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1433] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(287), 1,
      sym_text_chunk,
    STATE(293), 1,
      sym_argument,
    STATE(67), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1461] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(289), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(141), 1,
      sym_block,
    STATE(148), 1,
      aux_sym_if_statement_repeat1,
    STATE(230), 1,
      sym_else_statement,
    STATE(397), 1,
      sym_elseif_statement,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1493] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(293), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1511] = 8,
    ACTIONS(72), 1,
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
    STATE(283), 1,
      sym_argument,
    STATE(64), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1539] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(309), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(260), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1567] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(309), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(285), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1595] = 8,
    ACTIONS(72), 1,
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
    STATE(303), 1,
      sym_argument,
    STATE(64), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1623] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(309), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(283), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1651] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(309), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(258), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(317), 1,
      anon_sym_IN,
    ACTIONS(319), 1,
      anon_sym_INRANGE,
    ACTIONS(321), 1,
      anon_sym_INENUMERATE,
    ACTIONS(323), 1,
      anon_sym_INZIP,
    STATE(305), 1,
      sym_scalar_variable,
    STATE(407), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1707] = 8,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(307), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(309), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(291), 1,
      sym_argument,
    STATE(62), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1735] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(46), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1753] = 8,
    ACTIONS(72), 1,
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
    STATE(300), 1,
      sym_argument,
    STATE(64), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1781] = 8,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(327), 1,
      anon_sym_RETURN,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(128), 1,
      sym_keyword,
    STATE(289), 1,
      sym_inline_statement,
    STATE(228), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1808] = 8,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(327), 1,
      anon_sym_RETURN,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(128), 1,
      sym_keyword,
    STATE(208), 1,
      sym_inline_statement,
    STATE(228), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1835] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_,
    ACTIONS(335), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(338), 1,
      sym_text_chunk,
    ACTIONS(341), 2,
      sym__separator,
      sym__line_break,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1860] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(345), 1,
      sym_text_chunk,
    ACTIONS(347), 2,
      sym__separator,
      sym__line_break,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1885] = 8,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RETURN,
    ACTIONS(52), 1,
      sym__keyword_start_text,
    ACTIONS(72), 1,
      sym_comment,
    STATE(88), 1,
      sym_scalar_variable,
    STATE(111), 1,
      sym_keyword,
    STATE(294), 1,
      sym_inline_statement,
    STATE(228), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1912] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(351), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1929] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1946] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(357), 1,
      sym_text_chunk,
    ACTIONS(359), 2,
      sym__separator,
      sym__line_break,
    STATE(58), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1971] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1988] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(363), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2012] = 3,
    ACTIONS(72), 1,
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
  [2028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(369), 1,
      sym_ellipses,
    ACTIONS(371), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(354), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2054] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__separator,
    ACTIONS(374), 1,
      anon_sym_,
    ACTIONS(376), 1,
      sym_text_chunk,
    STATE(69), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_,
    STATE(273), 1,
      sym_keyword_setting_name,
    ACTIONS(378), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2096] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym__separator,
    ACTIONS(374), 1,
      anon_sym_,
    ACTIONS(382), 1,
      sym_text_chunk,
    STATE(75), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_,
    STATE(279), 1,
      sym_test_case_setting_name,
    ACTIONS(384), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__whitespace_token1,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__whitespace_token1,
    ACTIONS(392), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2170] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym__line_break,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(396), 1,
      sym_text_chunk,
    STATE(74), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2194] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__line_break,
    ACTIONS(398), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(401), 1,
      anon_sym_,
    ACTIONS(404), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(74), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2218] = 7,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(410), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_,
    ACTIONS(416), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(419), 1,
      sym_text_chunk,
    STATE(75), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(338), 1,
      sym_arguments,
    ACTIONS(422), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2266] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(426), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(314), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2289] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      sym_text_chunk,
    ACTIONS(435), 2,
      sym__separator,
      sym__line_break,
    STATE(82), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(280), 1,
      sym_keyword_setting_name,
    ACTIONS(378), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(170), 1,
      sym__separator,
    ACTIONS(437), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(65), 1,
      sym_test_case_definition_body,
    STATE(24), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(288), 1,
      sym_test_case_setting_name,
    ACTIONS(384), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2363] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(442), 1,
      anon_sym_,
    ACTIONS(445), 1,
      sym_text_chunk,
    ACTIONS(448), 2,
      sym__separator,
      sym__line_break,
    STATE(82), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(450), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(221), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2407] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(452), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(299), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__separator,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(454), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(60), 1,
      sym_keyword_definition_body,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2453] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(452), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(259), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2476] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(456), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(349), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2499] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym_text_chunk,
    ACTIONS(461), 2,
      sym__separator,
      sym__line_break,
    STATE(78), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line_break,
    ACTIONS(452), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(356), 1,
      sym_block,
    STATE(112), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(383), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(404), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(346), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__separator,
    ACTIONS(466), 1,
      aux_sym__whitespace_token1,
    ACTIONS(469), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(472), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(390), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
    STATE(179), 1,
      sym__indentation,
    STATE(218), 1,
      sym_else_statement,
    STATE(233), 1,
      sym_finally_statement,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(372), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2683] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2697] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(353), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2717] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(400), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(402), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2757] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(374), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(322), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(480), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(219), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2817] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(483), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2831] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(487), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2845] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(378), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym__separator,
    ACTIONS(498), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(219), 1,
      sym_arguments,
    STATE(167), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2899] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(501), 1,
      anon_sym_,
    ACTIONS(503), 1,
      sym_text_chunk,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(113), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    STATE(172), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(282), 1,
      sym_finally_statement,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(509), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(512), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2979] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(501), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym_text_chunk,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(127), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [2999] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(521), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    STATE(172), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(282), 1,
      sym_finally_statement,
    STATE(95), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3033] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(212), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3047] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(525), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3061] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3075] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(296), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3109] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(341), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3123] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(539), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(381), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
    STATE(384), 1,
      sym_arguments,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3177] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3191] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3205] = 6,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(551), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(554), 1,
      anon_sym_,
    ACTIONS(557), 1,
      sym_text_chunk,
    STATE(127), 2,
      sym_scalar_variable,
      aux_sym__keyword_definition_name_repeat1,
  [3225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__separator,
    ACTIONS(563), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(167), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3245] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(487), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3258] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(483), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3271] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3284] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(212), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3297] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3321] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(525), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3334] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(521), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3347] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(341), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3360] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(341), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3373] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3386] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
    STATE(142), 1,
      aux_sym_if_statement_repeat1,
    STATE(214), 1,
      sym__indentation,
    STATE(246), 1,
      sym_else_statement,
    STATE(397), 1,
      sym_elseif_statement,
  [3418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__separator,
    STATE(182), 1,
      aux_sym_if_statement_repeat1,
    STATE(184), 1,
      sym__indentation,
    STATE(270), 1,
      sym_else_statement,
    STATE(397), 1,
      sym_elseif_statement,
  [3437] = 5,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(572), 1,
      sym_text_chunk,
    STATE(137), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3454] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(212), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3467] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3480] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(539), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3493] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__separator,
    STATE(182), 1,
      aux_sym_if_statement_repeat1,
    STATE(210), 1,
      sym__indentation,
    STATE(249), 1,
      sym_else_statement,
    STATE(397), 1,
      sym_elseif_statement,
  [3525] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(487), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3538] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3551] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(543), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3564] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(539), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3577] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3590] = 5,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(578), 1,
      sym_text_chunk,
    STATE(138), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3607] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3620] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(525), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(580), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
    STATE(212), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3650] = 5,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(583), 1,
      sym_text_chunk,
    STATE(121), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__separator,
    ACTIONS(588), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3684] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(483), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3697] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3710] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3723] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3736] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(521), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3749] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3763] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(178), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__line_break,
    ACTIONS(597), 1,
      sym__separator,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3791] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3805] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__separator,
    ACTIONS(605), 1,
      sym__line_break,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_END,
    ACTIONS(615), 1,
      anon_sym_ELSE,
    ACTIONS(617), 1,
      anon_sym_EXCEPT,
    ACTIONS(619), 1,
      anon_sym_FINALLY,
  [3863] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(576), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3875] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(623), 1,
      sym__line_break,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
    STATE(348), 1,
      sym_arguments_without_continuation,
  [3905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_ELSEIF,
    ACTIONS(627), 1,
      anon_sym_ELSE,
    STATE(263), 1,
      sym_inline_elseif_statement,
    STATE(308), 1,
      sym_inline_else_statement,
  [3921] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(629), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3935] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_ELSE,
    ACTIONS(617), 1,
      anon_sym_EXCEPT,
    ACTIONS(619), 1,
      anon_sym_FINALLY,
    ACTIONS(636), 1,
      anon_sym_END,
  [3965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__separator,
    STATE(387), 1,
      sym__indentation,
    STATE(180), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_ELSEIF,
    ACTIONS(627), 1,
      anon_sym_ELSE,
    STATE(263), 1,
      sym_inline_elseif_statement,
    STATE(339), 1,
      sym_inline_else_statement,
  [3995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__separator,
    STATE(182), 1,
      aux_sym_if_statement_repeat1,
    STATE(317), 1,
      sym__indentation,
    STATE(397), 1,
      sym_elseif_statement,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    ACTIONS(647), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_ELSE,
    ACTIONS(649), 1,
      anon_sym_END,
    ACTIONS(651), 1,
      anon_sym_ELSEIF,
  [4037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__separator,
    ACTIONS(656), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_inline_if_statement_repeat1,
  [4050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [4063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_ellipses,
    ACTIONS(665), 1,
      sym__separator,
    STATE(358), 1,
      sym__indentation,
  [4076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    ACTIONS(647), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4089] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(671), 1,
      sym_variable_name,
  [4102] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      anon_sym_,
    ACTIONS(677), 1,
      sym_variable_name,
  [4115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__separator,
    STATE(233), 1,
      sym_finally_statement,
    STATE(234), 1,
      sym__indentation,
  [4128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym__separator,
    STATE(281), 1,
      sym__indentation,
    STATE(282), 1,
      sym_finally_statement,
  [4141] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(683), 1,
      sym_text_chunk,
    STATE(150), 1,
      sym_scalar_variable,
  [4154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_ellipses,
    ACTIONS(685), 1,
      sym__separator,
    STATE(345), 1,
      sym__indentation,
  [4167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__line_break,
    STATE(211), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym__separator,
    ACTIONS(690), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(690), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__line_break,
    ACTIONS(692), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4226] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(696), 1,
      sym_text_chunk,
    STATE(173), 1,
      sym_scalar_variable,
  [4239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
    STATE(335), 1,
      sym_arguments_without_continuation,
  [4252] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_,
    ACTIONS(702), 1,
      sym_variable_name,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(647), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [4278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(647), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4291] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(704), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    ACTIONS(710), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_inline_if_statement_repeat1,
  [4315] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_,
    ACTIONS(716), 1,
      sym_variable_name,
  [4328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    ACTIONS(720), 1,
      sym__line_break,
    STATE(206), 1,
      aux_sym_inline_if_statement_repeat1,
  [4341] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_,
    ACTIONS(726), 1,
      sym_variable_name,
  [4354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_ELSE,
    ACTIONS(651), 1,
      anon_sym_ELSEIF,
    ACTIONS(728), 1,
      anon_sym_END,
  [4367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__line_break,
    STATE(211), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__line_break,
    STATE(211), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    ACTIONS(739), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_ELSE,
    ACTIONS(651), 1,
      anon_sym_ELSEIF,
    ACTIONS(741), 1,
      anon_sym_END,
  [4415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
    STATE(204), 1,
      aux_sym_arguments_repeat1,
  [4428] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      anon_sym_,
    ACTIONS(747), 1,
      sym_variable_name,
  [4441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(749), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym__separator,
    STATE(252), 1,
      sym_finally_statement,
    STATE(253), 1,
      sym__indentation,
  [4467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym__separator,
    ACTIONS(755), 1,
      sym__line_break,
  [4477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(759), 1,
      anon_sym_,
  [4487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__separator,
    STATE(386), 1,
      sym__indentation,
  [4497] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_,
    ACTIONS(765), 1,
      sym_variable_name,
  [4507] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_,
    ACTIONS(769), 1,
      sym_variable_name,
  [4517] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_,
    ACTIONS(773), 1,
      sym_variable_name,
  [4527] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_,
    ACTIONS(777), 1,
      sym_variable_name,
  [4537] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 1,
      sym_variable_name,
  [4547] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_,
    ACTIONS(783), 1,
      sym_variable_name,
  [4557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym__separator,
    ACTIONS(787), 1,
      sym__line_break,
  [4567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 1,
      anon_sym_,
  [4577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__separator,
    STATE(371), 1,
      sym__indentation,
  [4587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    ACTIONS(797), 1,
      anon_sym_,
  [4597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(801), 1,
      anon_sym_,
  [4607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__separator,
    STATE(360), 1,
      sym__indentation,
  [4617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_FINALLY,
    ACTIONS(636), 1,
      anon_sym_END,
  [4627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_,
  [4637] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(809), 1,
      aux_sym_settings_section_token2,
    ACTIONS(811), 1,
      sym__line_break,
  [4647] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym_settings_section_token2,
    ACTIONS(815), 1,
      sym__line_break,
  [4657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(819), 1,
      anon_sym_,
  [4667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_,
  [4677] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_settings_section_token2,
    ACTIONS(823), 1,
      sym__line_break,
  [4687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    ACTIONS(827), 1,
      anon_sym_,
  [4697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    ACTIONS(831), 1,
      anon_sym_,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 1,
      anon_sym_,
  [4717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(839), 1,
      anon_sym_,
  [4727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      anon_sym_,
  [4737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym__separator,
    STATE(325), 1,
      sym__indentation,
  [4747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__separator,
    ACTIONS(849), 1,
      sym__line_break,
  [4757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_,
  [4767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__separator,
    STATE(319), 1,
      sym__indentation,
  [4777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      anon_sym_,
  [4787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__separator,
    ACTIONS(859), 1,
      sym__line_break,
  [4797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__separator,
    STATE(315), 1,
      sym__indentation,
  [4807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_FINALLY,
    ACTIONS(863), 1,
      anon_sym_END,
  [4817] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_,
    ACTIONS(867), 1,
      sym_variable_name,
  [4827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(873), 1,
      anon_sym_,
  [4847] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_,
    ACTIONS(877), 1,
      sym_variable_name,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__separator,
    ACTIONS(881), 1,
      sym__line_break,
  [4867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__separator,
    STATE(310), 1,
      sym__indentation,
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__line_break,
    ACTIONS(885), 1,
      sym__separator,
  [4887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    ACTIONS(889), 1,
      anon_sym_,
  [4897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__line_break,
    ACTIONS(891), 1,
      sym__separator,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      anon_sym_,
  [4927] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_,
    ACTIONS(897), 1,
      sym_variable_name,
  [4937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym__line_break,
    ACTIONS(899), 1,
      sym__separator,
  [4947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__separator,
    STATE(276), 1,
      aux_sym_for_statement_repeat1,
  [4957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    ACTIONS(905), 1,
      anon_sym_,
  [4967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__separator,
    STATE(306), 1,
      sym__indentation,
  [4987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
  [4997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
  [5007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
  [5017] = 3,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(923), 1,
      aux_sym_settings_section_token2,
    ACTIONS(925), 1,
      sym__line_break,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(305), 1,
      sym_scalar_variable,
  [5037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__separator,
    STATE(287), 1,
      aux_sym_for_statement_repeat1,
  [5047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__separator,
    ACTIONS(931), 1,
      sym__line_break,
  [5057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
  [5067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_,
    ACTIONS(943), 1,
      anon_sym_RBRACK,
  [5087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_END,
    ACTIONS(619), 1,
      anon_sym_FINALLY,
  [5097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__separator,
    STATE(396), 1,
      sym__indentation,
  [5107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__separator,
    ACTIONS(949), 1,
      sym__line_break,
  [5117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_ELSEIF,
    STATE(263), 1,
      sym_inline_elseif_statement,
  [5127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__separator,
    ACTIONS(953), 1,
      sym__line_break,
  [5137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__separator,
    STATE(313), 1,
      sym__indentation,
  [5147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__separator,
    STATE(287), 1,
      aux_sym_for_statement_repeat1,
  [5157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
  [5167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym__separator,
    ACTIONS(966), 1,
      sym__line_break,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym__separator,
    ACTIONS(970), 1,
      sym__line_break,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym__separator,
    ACTIONS(974), 1,
      sym__line_break,
  [5197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym__line_break,
  [5204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      sym__separator,
  [5211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym__line_break,
  [5218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym__line_break,
  [5225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym__line_break,
  [5232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
  [5239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym__line_break,
  [5246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym__separator,
  [5253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym__line_break,
  [5260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      sym__line_break,
  [5267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_RBRACK,
  [5274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym__line_break,
  [5281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym__line_break,
  [5288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__separator,
  [5295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_END,
  [5302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__line_break,
  [5309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym__line_break,
  [5316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
  [5323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_END,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
  [5337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
  [5344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_END,
  [5351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym__separator,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_END,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__line_break,
  [5372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_ELSEIF,
  [5379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym__line_break,
  [5386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_END,
  [5393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym__line_break,
  [5400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym__line_break,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym__line_break,
  [5414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [5421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__line_break,
  [5428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_END,
  [5435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__line_break,
  [5449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__line_break,
  [5456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__line_break,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym__line_break,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__line_break,
  [5477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__separator,
  [5484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym__separator,
  [5491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym__line_break,
  [5498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__line_break,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__separator,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
  [5519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym__line_break,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym__line_break,
  [5533] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_variable_name,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__separator,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__separator,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym__separator,
  [5568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_ellipses,
  [5575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym__line_break,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym__line_break,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__line_break,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym__separator,
  [5603] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym_variable_name,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym__line_break,
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym__line_break,
  [5631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__separator,
  [5638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym__line_break,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__separator,
  [5652] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_variable_name,
  [5659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_ellipses,
  [5666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym__line_break,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_END,
  [5680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__line_break,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [5694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym__line_break,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__line_break,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__separator,
  [5715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym__line_break,
  [5722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym__line_break,
  [5729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym__line_break,
  [5743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
  [5750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_END,
  [5757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__line_break,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [5771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym__line_break,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
  [5785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_RBRACE,
  [5792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__line_break,
  [5799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym__line_break,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym__line_break,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      ts_builtin_sym_end,
  [5820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym__line_break,
  [5827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__line_break,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym__line_break,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym__line_break,
  [5855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_END,
  [5862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_EXCEPT,
  [5869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym__line_break,
  [5890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym__line_break,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
  [5904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_RBRACE,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym__line_break,
  [5925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_END,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym__separator,
  [5939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym__line_break,
  [5960] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_variable_name,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym__line_break,
  [5974] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_variable_name,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym__line_break,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
  [5995] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_variable_name,
  [6002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym__line_break,
  [6009] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_variable_name,
  [6016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym__separator,
  [6023] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 557,
  [SMALL_STATE(15)] = 608,
  [SMALL_STATE(16)] = 656,
  [SMALL_STATE(17)] = 692,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 764,
  [SMALL_STATE(20)] = 800,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 867,
  [SMALL_STATE(23)] = 898,
  [SMALL_STATE(24)] = 928,
  [SMALL_STATE(25)] = 958,
  [SMALL_STATE(26)] = 985,
  [SMALL_STATE(27)] = 1010,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1064,
  [SMALL_STATE(30)] = 1093,
  [SMALL_STATE(31)] = 1126,
  [SMALL_STATE(32)] = 1153,
  [SMALL_STATE(33)] = 1178,
  [SMALL_STATE(34)] = 1205,
  [SMALL_STATE(35)] = 1238,
  [SMALL_STATE(36)] = 1265,
  [SMALL_STATE(37)] = 1292,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1354,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1408,
  [SMALL_STATE(42)] = 1433,
  [SMALL_STATE(43)] = 1461,
  [SMALL_STATE(44)] = 1493,
  [SMALL_STATE(45)] = 1511,
  [SMALL_STATE(46)] = 1539,
  [SMALL_STATE(47)] = 1567,
  [SMALL_STATE(48)] = 1595,
  [SMALL_STATE(49)] = 1623,
  [SMALL_STATE(50)] = 1651,
  [SMALL_STATE(51)] = 1679,
  [SMALL_STATE(52)] = 1707,
  [SMALL_STATE(53)] = 1735,
  [SMALL_STATE(54)] = 1753,
  [SMALL_STATE(55)] = 1781,
  [SMALL_STATE(56)] = 1808,
  [SMALL_STATE(57)] = 1835,
  [SMALL_STATE(58)] = 1860,
  [SMALL_STATE(59)] = 1885,
  [SMALL_STATE(60)] = 1912,
  [SMALL_STATE(61)] = 1929,
  [SMALL_STATE(62)] = 1946,
  [SMALL_STATE(63)] = 1971,
  [SMALL_STATE(64)] = 1988,
  [SMALL_STATE(65)] = 2012,
  [SMALL_STATE(66)] = 2028,
  [SMALL_STATE(67)] = 2054,
  [SMALL_STATE(68)] = 2078,
  [SMALL_STATE(69)] = 2096,
  [SMALL_STATE(70)] = 2120,
  [SMALL_STATE(71)] = 2138,
  [SMALL_STATE(72)] = 2154,
  [SMALL_STATE(73)] = 2170,
  [SMALL_STATE(74)] = 2194,
  [SMALL_STATE(75)] = 2218,
  [SMALL_STATE(76)] = 2242,
  [SMALL_STATE(77)] = 2266,
  [SMALL_STATE(78)] = 2289,
  [SMALL_STATE(79)] = 2310,
  [SMALL_STATE(80)] = 2325,
  [SMALL_STATE(81)] = 2348,
  [SMALL_STATE(82)] = 2363,
  [SMALL_STATE(83)] = 2384,
  [SMALL_STATE(84)] = 2407,
  [SMALL_STATE(85)] = 2430,
  [SMALL_STATE(86)] = 2453,
  [SMALL_STATE(87)] = 2476,
  [SMALL_STATE(88)] = 2499,
  [SMALL_STATE(89)] = 2520,
  [SMALL_STATE(90)] = 2543,
  [SMALL_STATE(91)] = 2563,
  [SMALL_STATE(92)] = 2583,
  [SMALL_STATE(93)] = 2603,
  [SMALL_STATE(94)] = 2623,
  [SMALL_STATE(95)] = 2643,
  [SMALL_STATE(96)] = 2663,
  [SMALL_STATE(97)] = 2683,
  [SMALL_STATE(98)] = 2697,
  [SMALL_STATE(99)] = 2717,
  [SMALL_STATE(100)] = 2737,
  [SMALL_STATE(101)] = 2757,
  [SMALL_STATE(102)] = 2777,
  [SMALL_STATE(103)] = 2797,
  [SMALL_STATE(104)] = 2817,
  [SMALL_STATE(105)] = 2831,
  [SMALL_STATE(106)] = 2845,
  [SMALL_STATE(107)] = 2859,
  [SMALL_STATE(108)] = 2879,
  [SMALL_STATE(109)] = 2899,
  [SMALL_STATE(110)] = 2919,
  [SMALL_STATE(111)] = 2939,
  [SMALL_STATE(112)] = 2959,
  [SMALL_STATE(113)] = 2979,
  [SMALL_STATE(114)] = 2999,
  [SMALL_STATE(115)] = 3013,
  [SMALL_STATE(116)] = 3033,
  [SMALL_STATE(117)] = 3047,
  [SMALL_STATE(118)] = 3061,
  [SMALL_STATE(119)] = 3075,
  [SMALL_STATE(120)] = 3089,
  [SMALL_STATE(121)] = 3109,
  [SMALL_STATE(122)] = 3123,
  [SMALL_STATE(123)] = 3137,
  [SMALL_STATE(124)] = 3157,
  [SMALL_STATE(125)] = 3177,
  [SMALL_STATE(126)] = 3191,
  [SMALL_STATE(127)] = 3205,
  [SMALL_STATE(128)] = 3225,
  [SMALL_STATE(129)] = 3245,
  [SMALL_STATE(130)] = 3258,
  [SMALL_STATE(131)] = 3271,
  [SMALL_STATE(132)] = 3284,
  [SMALL_STATE(133)] = 3297,
  [SMALL_STATE(134)] = 3310,
  [SMALL_STATE(135)] = 3321,
  [SMALL_STATE(136)] = 3334,
  [SMALL_STATE(137)] = 3347,
  [SMALL_STATE(138)] = 3360,
  [SMALL_STATE(139)] = 3373,
  [SMALL_STATE(140)] = 3386,
  [SMALL_STATE(141)] = 3399,
  [SMALL_STATE(142)] = 3418,
  [SMALL_STATE(143)] = 3437,
  [SMALL_STATE(144)] = 3454,
  [SMALL_STATE(145)] = 3467,
  [SMALL_STATE(146)] = 3480,
  [SMALL_STATE(147)] = 3493,
  [SMALL_STATE(148)] = 3506,
  [SMALL_STATE(149)] = 3525,
  [SMALL_STATE(150)] = 3538,
  [SMALL_STATE(151)] = 3551,
  [SMALL_STATE(152)] = 3564,
  [SMALL_STATE(153)] = 3577,
  [SMALL_STATE(154)] = 3590,
  [SMALL_STATE(155)] = 3607,
  [SMALL_STATE(156)] = 3620,
  [SMALL_STATE(157)] = 3633,
  [SMALL_STATE(158)] = 3650,
  [SMALL_STATE(159)] = 3667,
  [SMALL_STATE(160)] = 3684,
  [SMALL_STATE(161)] = 3697,
  [SMALL_STATE(162)] = 3710,
  [SMALL_STATE(163)] = 3723,
  [SMALL_STATE(164)] = 3736,
  [SMALL_STATE(165)] = 3749,
  [SMALL_STATE(166)] = 3763,
  [SMALL_STATE(167)] = 3777,
  [SMALL_STATE(168)] = 3791,
  [SMALL_STATE(169)] = 3805,
  [SMALL_STATE(170)] = 3819,
  [SMALL_STATE(171)] = 3833,
  [SMALL_STATE(172)] = 3847,
  [SMALL_STATE(173)] = 3863,
  [SMALL_STATE(174)] = 3875,
  [SMALL_STATE(175)] = 3889,
  [SMALL_STATE(176)] = 3905,
  [SMALL_STATE(177)] = 3921,
  [SMALL_STATE(178)] = 3935,
  [SMALL_STATE(179)] = 3949,
  [SMALL_STATE(180)] = 3965,
  [SMALL_STATE(181)] = 3979,
  [SMALL_STATE(182)] = 3995,
  [SMALL_STATE(183)] = 4011,
  [SMALL_STATE(184)] = 4024,
  [SMALL_STATE(185)] = 4037,
  [SMALL_STATE(186)] = 4050,
  [SMALL_STATE(187)] = 4063,
  [SMALL_STATE(188)] = 4076,
  [SMALL_STATE(189)] = 4089,
  [SMALL_STATE(190)] = 4102,
  [SMALL_STATE(191)] = 4115,
  [SMALL_STATE(192)] = 4128,
  [SMALL_STATE(193)] = 4141,
  [SMALL_STATE(194)] = 4154,
  [SMALL_STATE(195)] = 4167,
  [SMALL_STATE(196)] = 4178,
  [SMALL_STATE(197)] = 4189,
  [SMALL_STATE(198)] = 4202,
  [SMALL_STATE(199)] = 4215,
  [SMALL_STATE(200)] = 4226,
  [SMALL_STATE(201)] = 4239,
  [SMALL_STATE(202)] = 4252,
  [SMALL_STATE(203)] = 4265,
  [SMALL_STATE(204)] = 4278,
  [SMALL_STATE(205)] = 4291,
  [SMALL_STATE(206)] = 4302,
  [SMALL_STATE(207)] = 4315,
  [SMALL_STATE(208)] = 4328,
  [SMALL_STATE(209)] = 4341,
  [SMALL_STATE(210)] = 4354,
  [SMALL_STATE(211)] = 4367,
  [SMALL_STATE(212)] = 4378,
  [SMALL_STATE(213)] = 4389,
  [SMALL_STATE(214)] = 4402,
  [SMALL_STATE(215)] = 4415,
  [SMALL_STATE(216)] = 4428,
  [SMALL_STATE(217)] = 4441,
  [SMALL_STATE(218)] = 4454,
  [SMALL_STATE(219)] = 4467,
  [SMALL_STATE(220)] = 4477,
  [SMALL_STATE(221)] = 4487,
  [SMALL_STATE(222)] = 4497,
  [SMALL_STATE(223)] = 4507,
  [SMALL_STATE(224)] = 4517,
  [SMALL_STATE(225)] = 4527,
  [SMALL_STATE(226)] = 4537,
  [SMALL_STATE(227)] = 4547,
  [SMALL_STATE(228)] = 4557,
  [SMALL_STATE(229)] = 4567,
  [SMALL_STATE(230)] = 4577,
  [SMALL_STATE(231)] = 4587,
  [SMALL_STATE(232)] = 4597,
  [SMALL_STATE(233)] = 4607,
  [SMALL_STATE(234)] = 4617,
  [SMALL_STATE(235)] = 4627,
  [SMALL_STATE(236)] = 4637,
  [SMALL_STATE(237)] = 4647,
  [SMALL_STATE(238)] = 4657,
  [SMALL_STATE(239)] = 4667,
  [SMALL_STATE(240)] = 4677,
  [SMALL_STATE(241)] = 4687,
  [SMALL_STATE(242)] = 4697,
  [SMALL_STATE(243)] = 4707,
  [SMALL_STATE(244)] = 4717,
  [SMALL_STATE(245)] = 4727,
  [SMALL_STATE(246)] = 4737,
  [SMALL_STATE(247)] = 4747,
  [SMALL_STATE(248)] = 4757,
  [SMALL_STATE(249)] = 4767,
  [SMALL_STATE(250)] = 4777,
  [SMALL_STATE(251)] = 4787,
  [SMALL_STATE(252)] = 4797,
  [SMALL_STATE(253)] = 4807,
  [SMALL_STATE(254)] = 4817,
  [SMALL_STATE(255)] = 4827,
  [SMALL_STATE(256)] = 4837,
  [SMALL_STATE(257)] = 4847,
  [SMALL_STATE(258)] = 4857,
  [SMALL_STATE(259)] = 4867,
  [SMALL_STATE(260)] = 4877,
  [SMALL_STATE(261)] = 4887,
  [SMALL_STATE(262)] = 4897,
  [SMALL_STATE(263)] = 4907,
  [SMALL_STATE(264)] = 4917,
  [SMALL_STATE(265)] = 4927,
  [SMALL_STATE(266)] = 4937,
  [SMALL_STATE(267)] = 4947,
  [SMALL_STATE(268)] = 4957,
  [SMALL_STATE(269)] = 4967,
  [SMALL_STATE(270)] = 4977,
  [SMALL_STATE(271)] = 4987,
  [SMALL_STATE(272)] = 4997,
  [SMALL_STATE(273)] = 5007,
  [SMALL_STATE(274)] = 5017,
  [SMALL_STATE(275)] = 5027,
  [SMALL_STATE(276)] = 5037,
  [SMALL_STATE(277)] = 5047,
  [SMALL_STATE(278)] = 5057,
  [SMALL_STATE(279)] = 5067,
  [SMALL_STATE(280)] = 5077,
  [SMALL_STATE(281)] = 5087,
  [SMALL_STATE(282)] = 5097,
  [SMALL_STATE(283)] = 5107,
  [SMALL_STATE(284)] = 5117,
  [SMALL_STATE(285)] = 5127,
  [SMALL_STATE(286)] = 5137,
  [SMALL_STATE(287)] = 5147,
  [SMALL_STATE(288)] = 5157,
  [SMALL_STATE(289)] = 5167,
  [SMALL_STATE(290)] = 5177,
  [SMALL_STATE(291)] = 5187,
  [SMALL_STATE(292)] = 5197,
  [SMALL_STATE(293)] = 5204,
  [SMALL_STATE(294)] = 5211,
  [SMALL_STATE(295)] = 5218,
  [SMALL_STATE(296)] = 5225,
  [SMALL_STATE(297)] = 5232,
  [SMALL_STATE(298)] = 5239,
  [SMALL_STATE(299)] = 5246,
  [SMALL_STATE(300)] = 5253,
  [SMALL_STATE(301)] = 5260,
  [SMALL_STATE(302)] = 5267,
  [SMALL_STATE(303)] = 5274,
  [SMALL_STATE(304)] = 5281,
  [SMALL_STATE(305)] = 5288,
  [SMALL_STATE(306)] = 5295,
  [SMALL_STATE(307)] = 5302,
  [SMALL_STATE(308)] = 5309,
  [SMALL_STATE(309)] = 5316,
  [SMALL_STATE(310)] = 5323,
  [SMALL_STATE(311)] = 5330,
  [SMALL_STATE(312)] = 5337,
  [SMALL_STATE(313)] = 5344,
  [SMALL_STATE(314)] = 5351,
  [SMALL_STATE(315)] = 5358,
  [SMALL_STATE(316)] = 5365,
  [SMALL_STATE(317)] = 5372,
  [SMALL_STATE(318)] = 5379,
  [SMALL_STATE(319)] = 5386,
  [SMALL_STATE(320)] = 5393,
  [SMALL_STATE(321)] = 5400,
  [SMALL_STATE(322)] = 5407,
  [SMALL_STATE(323)] = 5414,
  [SMALL_STATE(324)] = 5421,
  [SMALL_STATE(325)] = 5428,
  [SMALL_STATE(326)] = 5435,
  [SMALL_STATE(327)] = 5442,
  [SMALL_STATE(328)] = 5449,
  [SMALL_STATE(329)] = 5456,
  [SMALL_STATE(330)] = 5463,
  [SMALL_STATE(331)] = 5470,
  [SMALL_STATE(332)] = 5477,
  [SMALL_STATE(333)] = 5484,
  [SMALL_STATE(334)] = 5491,
  [SMALL_STATE(335)] = 5498,
  [SMALL_STATE(336)] = 5505,
  [SMALL_STATE(337)] = 5512,
  [SMALL_STATE(338)] = 5519,
  [SMALL_STATE(339)] = 5526,
  [SMALL_STATE(340)] = 5533,
  [SMALL_STATE(341)] = 5540,
  [SMALL_STATE(342)] = 5547,
  [SMALL_STATE(343)] = 5554,
  [SMALL_STATE(344)] = 5561,
  [SMALL_STATE(345)] = 5568,
  [SMALL_STATE(346)] = 5575,
  [SMALL_STATE(347)] = 5582,
  [SMALL_STATE(348)] = 5589,
  [SMALL_STATE(349)] = 5596,
  [SMALL_STATE(350)] = 5603,
  [SMALL_STATE(351)] = 5610,
  [SMALL_STATE(352)] = 5617,
  [SMALL_STATE(353)] = 5624,
  [SMALL_STATE(354)] = 5631,
  [SMALL_STATE(355)] = 5638,
  [SMALL_STATE(356)] = 5645,
  [SMALL_STATE(357)] = 5652,
  [SMALL_STATE(358)] = 5659,
  [SMALL_STATE(359)] = 5666,
  [SMALL_STATE(360)] = 5673,
  [SMALL_STATE(361)] = 5680,
  [SMALL_STATE(362)] = 5687,
  [SMALL_STATE(363)] = 5694,
  [SMALL_STATE(364)] = 5701,
  [SMALL_STATE(365)] = 5708,
  [SMALL_STATE(366)] = 5715,
  [SMALL_STATE(367)] = 5722,
  [SMALL_STATE(368)] = 5729,
  [SMALL_STATE(369)] = 5736,
  [SMALL_STATE(370)] = 5743,
  [SMALL_STATE(371)] = 5750,
  [SMALL_STATE(372)] = 5757,
  [SMALL_STATE(373)] = 5764,
  [SMALL_STATE(374)] = 5771,
  [SMALL_STATE(375)] = 5778,
  [SMALL_STATE(376)] = 5785,
  [SMALL_STATE(377)] = 5792,
  [SMALL_STATE(378)] = 5799,
  [SMALL_STATE(379)] = 5806,
  [SMALL_STATE(380)] = 5813,
  [SMALL_STATE(381)] = 5820,
  [SMALL_STATE(382)] = 5827,
  [SMALL_STATE(383)] = 5834,
  [SMALL_STATE(384)] = 5841,
  [SMALL_STATE(385)] = 5848,
  [SMALL_STATE(386)] = 5855,
  [SMALL_STATE(387)] = 5862,
  [SMALL_STATE(388)] = 5869,
  [SMALL_STATE(389)] = 5876,
  [SMALL_STATE(390)] = 5883,
  [SMALL_STATE(391)] = 5890,
  [SMALL_STATE(392)] = 5897,
  [SMALL_STATE(393)] = 5904,
  [SMALL_STATE(394)] = 5911,
  [SMALL_STATE(395)] = 5918,
  [SMALL_STATE(396)] = 5925,
  [SMALL_STATE(397)] = 5932,
  [SMALL_STATE(398)] = 5939,
  [SMALL_STATE(399)] = 5946,
  [SMALL_STATE(400)] = 5953,
  [SMALL_STATE(401)] = 5960,
  [SMALL_STATE(402)] = 5967,
  [SMALL_STATE(403)] = 5974,
  [SMALL_STATE(404)] = 5981,
  [SMALL_STATE(405)] = 5988,
  [SMALL_STATE(406)] = 5995,
  [SMALL_STATE(407)] = 6002,
  [SMALL_STATE(408)] = 6009,
  [SMALL_STATE(409)] = 6016,
  [SMALL_STATE(410)] = 6023,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(251),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(359),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(254),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(109),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(351),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(11),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(377),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(12),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(377),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(23),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(46),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(187),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(194),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(175),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(351),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(36),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(357),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(359),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(41),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(227),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(158),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(165),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(57),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(13),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(254),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(143),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(169),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(74),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(222),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(154),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(166),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(75),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(227),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(193),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(82),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(395),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(93),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(194),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 2),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(46),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(194),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyword_definition_name, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(254),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(200),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2), SHIFT_REPEAT(127),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1), SHIFT(46),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(187),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyword_definition_name_repeat1, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(194),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(46),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(187),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(187),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(187),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(205),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(387),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 10), SHIFT_REPEAT(317),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(46),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(284),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(46),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(46),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(194),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(194),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(275),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 19),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 20),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, .production_id = 5),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 21),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 18),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 16),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 15),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, .production_id = 6),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 12),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 11),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 9),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, .production_id = 6),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 5),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 6),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 8),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 7),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 5),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 6),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, .production_id = 5),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
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
