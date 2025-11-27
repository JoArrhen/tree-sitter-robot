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
#define STATE_COUNT 401
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 4
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
  anon_sym_LBRACK = 27,
  anon_sym_ = 28,
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
  sym_keyword = 39,
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
  sym_keyword_definition_body = 76,
  sym_keyword_setting = 77,
  sym_keyword_setting_name = 78,
  sym_test_cases_section = 79,
  sym_test_case_definition = 80,
  sym_test_case_definition_body = 81,
  sym_test_case_setting = 82,
  sym_test_case_setting_name = 83,
  sym_statement = 84,
  sym_return_statement = 85,
  sym_variable_assignment = 86,
  sym_keyword_invocation = 87,
  sym_if_statement = 88,
  sym_elseif_statement = 89,
  sym_else_statement = 90,
  sym_inline_if_statement = 91,
  sym_block = 92,
  sym_inline_elseif_statement = 93,
  sym_inline_else_statement = 94,
  sym_inline_statement = 95,
  sym_try_statement = 96,
  sym_except_statement = 97,
  sym_finally_statement = 98,
  sym_while_statement = 99,
  sym_for_statement = 100,
  sym__for_in = 101,
  sym__for_in_range = 102,
  sym__for_in_enumerate = 103,
  sym__for_in_zip = 104,
  sym_arguments = 105,
  sym_arguments_without_continuation = 106,
  sym_continuation = 107,
  sym_argument = 108,
  sym_scalar_variable = 109,
  sym_list_variable = 110,
  sym_dictionary_variable = 111,
  sym_inline_python_expression = 112,
  sym__indentation = 113,
  sym__empty_line = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_settings_section_repeat1 = 116,
  aux_sym_variables_section_repeat1 = 117,
  aux_sym_keywords_section_repeat1 = 118,
  aux_sym_keyword_definition_body_repeat1 = 119,
  aux_sym_test_cases_section_repeat1 = 120,
  aux_sym_test_case_definition_body_repeat1 = 121,
  aux_sym_if_statement_repeat1 = 122,
  aux_sym_inline_if_statement_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym_try_statement_repeat1 = 125,
  aux_sym_for_statement_repeat1 = 126,
  aux_sym_arguments_repeat1 = 127,
  aux_sym_arguments_repeat2 = 128,
  aux_sym_argument_repeat1 = 129,
  aux_sym_inline_python_expression_repeat1 = 130,
  alias_sym_name = 131,
  alias_sym_python_expression = 132,
  alias_sym_return_value = 133,
  alias_sym_variable_list = 134,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_] = " ",
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
  [sym_keyword] = "keyword",
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
  [alias_sym_name] = "name",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_] = anon_sym_,
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
  [sym_keyword] = sym_keyword,
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
  [alias_sym_name] = alias_sym_name,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [sym_keyword] = {
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
  [alias_sym_name] = {
    .visible = true,
    .named = true,
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
    [0] = alias_sym_name,
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
  [34] = 34,
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
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 7,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 56,
  [60] = 54,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 51,
  [65] = 51,
  [66] = 56,
  [67] = 57,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 7,
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
  [102] = 91,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 90,
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
  [123] = 116,
  [124] = 109,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 99,
  [129] = 103,
  [130] = 105,
  [131] = 109,
  [132] = 111,
  [133] = 133,
  [134] = 113,
  [135] = 115,
  [136] = 112,
  [137] = 110,
  [138] = 138,
  [139] = 93,
  [140] = 92,
  [141] = 87,
  [142] = 142,
  [143] = 93,
  [144] = 116,
  [145] = 99,
  [146] = 146,
  [147] = 115,
  [148] = 105,
  [149] = 125,
  [150] = 111,
  [151] = 113,
  [152] = 125,
  [153] = 103,
  [154] = 87,
  [155] = 112,
  [156] = 110,
  [157] = 92,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 158,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 159,
  [169] = 159,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 158,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 171,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 180,
  [183] = 183,
  [184] = 179,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 176,
  [191] = 189,
  [192] = 192,
  [193] = 176,
  [194] = 194,
  [195] = 195,
  [196] = 172,
  [197] = 197,
  [198] = 170,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 177,
  [203] = 203,
  [204] = 199,
  [205] = 205,
  [206] = 199,
  [207] = 181,
  [208] = 7,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 230,
  [241] = 241,
  [242] = 226,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 226,
  [247] = 247,
  [248] = 218,
  [249] = 218,
  [250] = 227,
  [251] = 251,
  [252] = 252,
  [253] = 247,
  [254] = 218,
  [255] = 223,
  [256] = 256,
  [257] = 209,
  [258] = 247,
  [259] = 259,
  [260] = 209,
  [261] = 261,
  [262] = 225,
  [263] = 263,
  [264] = 223,
  [265] = 265,
  [266] = 225,
  [267] = 215,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 247,
  [274] = 274,
  [275] = 275,
  [276] = 227,
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
  [326] = 103,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 115,
  [333] = 333,
  [334] = 334,
  [335] = 93,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 299,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 340,
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
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 299,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 358,
  [378] = 359,
  [379] = 358,
  [380] = 359,
  [381] = 362,
  [382] = 364,
  [383] = 365,
  [384] = 366,
  [385] = 299,
  [386] = 386,
  [387] = 362,
  [388] = 358,
  [389] = 364,
  [390] = 366,
  [391] = 365,
  [392] = 349,
  [393] = 352,
  [394] = 368,
  [395] = 364,
  [396] = 396,
  [397] = 349,
  [398] = 352,
  [399] = 363,
  [400] = 349,
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
      if (eof) ADVANCE(338);
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == '[') ADVANCE(376);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '=') ADVANCE(371);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '=') ADVANCE(372);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '#') ADVANCE(583);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(584);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(587);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(482);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '$') ADVANCE(442);
      if (lookahead == '.') ADVANCE(397);
      if (lookahead == 'B') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'F') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '[') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(443);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '$') ADVANCE(442);
      if (lookahead == 'B') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(416);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(443);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '$') ADVANCE(442);
      if (lookahead == 'B') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == 'F') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(443);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '$') ADVANCE(442);
      if (lookahead == 'B') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(443);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '$') ADVANCE(442);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(443);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(478);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(482);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(373);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(341);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(364);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(389);
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
      if (lookahead == '*') ADVANCE(530);
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(472);
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
      if (lookahead == 'D') ADVANCE(446);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(460);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(468);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'N') ADVANCE(464);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(448);
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
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(410);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(470);
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
      if (lookahead == 'N') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(386);
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
      if (lookahead == 'P') ADVANCE(467);
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
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(226);
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
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(456);
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
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(454);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(458);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(368);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(474);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(474);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(473);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(473);
      if (lookahead != 0) ADVANCE(499);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(367);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(499);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(538);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(535);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 322:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 323:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 324:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 325:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 326:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 327:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 328:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 329:
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 330:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(565);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 331:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(499);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(535);
      END_STATE();
    case 334:
      if (eof) ADVANCE(338);
      if (lookahead == '\t') ADVANCE(584);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(589);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 335:
      if (eof) ADVANCE(338);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 336:
      if (eof) ADVANCE(338);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 337:
      if (eof) ADVANCE(338);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(340);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(475);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(479);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '#') ADVANCE(583);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(482);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(583);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(582);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(583);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == '.') ADVANCE(57);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(415);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(418);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(405);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(447);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(435);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(398);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(451);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(428);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(461);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(469);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(452);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'F') ADVANCE(445);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'F') ADVANCE(449);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'H') ADVANCE(412);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(419);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'O') ADVANCE(430);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(425);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'K') ADVANCE(471);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(433);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == 'X') ADVANCE(400);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(441);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(417);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(406);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(401);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(401);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(394);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(437);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(399);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(439);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(423);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(430);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'P') ADVANCE(436);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(440);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(462);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(403);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(422);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'S') ADVANCE(404);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'S') ADVANCE(408);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(438);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(457);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(414);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'U') ADVANCE(432);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'U') ADVANCE(407);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'Y') ADVANCE(455);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'Y') ADVANCE(459);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == '{') ADVANCE(367);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(85);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(329);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(482);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(583);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(576);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(576);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(576);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(525);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(525);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(525);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(525);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(525);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(525);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(525);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(525);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(525);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(525);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(525);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(525);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(525);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(525);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(525);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(525);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(525);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(525);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(525);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(525);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '{') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(565);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(565);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(565);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(565);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(565);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(565);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(565);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(565);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(565);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(565);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(565);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(565);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(565);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(565);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(565);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(128);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(525);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(502);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(126);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '{') ADVANCE(583);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '{') ADVANCE(583);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(583);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(583);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_comment);
      if (('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(591);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '#') ADVANCE(583);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(591);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 337},
  [2] = {.lex_state = 335},
  [3] = {.lex_state = 335},
  [4] = {.lex_state = 335},
  [5] = {.lex_state = 335},
  [6] = {.lex_state = 335},
  [7] = {.lex_state = 335},
  [8] = {.lex_state = 335},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 334},
  [20] = {.lex_state = 336},
  [21] = {.lex_state = 335},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 336},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 335},
  [30] = {.lex_state = 336},
  [31] = {.lex_state = 335},
  [32] = {.lex_state = 336},
  [33] = {.lex_state = 336},
  [34] = {.lex_state = 336},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 335},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 335},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 334},
  [53] = {.lex_state = 334},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 334},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 335},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 335},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 336},
  [71] = {.lex_state = 336},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 336},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 337},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 34},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 337},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 34},
  [174] = {.lex_state = 337},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 337},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 35},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 8},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 35},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 35},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 337},
  [359] = {.lex_state = 337},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 337},
  [363] = {.lex_state = 337},
  [364] = {.lex_state = 337},
  [365] = {.lex_state = 337},
  [366] = {.lex_state = 337},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 35},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 337},
  [378] = {.lex_state = 337},
  [379] = {.lex_state = 337},
  [380] = {.lex_state = 337},
  [381] = {.lex_state = 337},
  [382] = {.lex_state = 337},
  [383] = {.lex_state = 337},
  [384] = {.lex_state = 337},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 337},
  [388] = {.lex_state = 337},
  [389] = {.lex_state = 337},
  [390] = {.lex_state = 337},
  [391] = {.lex_state = 337},
  [392] = {.lex_state = 35},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 35},
  [395] = {.lex_state = 337},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 35},
  [398] = {.lex_state = 35},
  [399] = {.lex_state = 337},
  [400] = {.lex_state = 35},
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
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
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
    [sym_source_file] = STATE(321),
    [sym_section] = STATE(28),
    [sym_settings_section] = STATE(142),
    [sym_variables_section] = STATE(142),
    [sym_keywords_section] = STATE(142),
    [sym_test_cases_section] = STATE(142),
    [aux_sym_source_file_repeat1] = STATE(28),
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
    STATE(119), 1,
      sym_setting_name,
    STATE(6), 3,
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
    STATE(119), 1,
      sym_setting_name,
    STATE(4), 3,
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
    STATE(119), 1,
      sym_setting_name,
    STATE(5), 3,
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
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    ACTIONS(39), 1,
      sym__line_break,
    STATE(119), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(33), 17,
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
    ACTIONS(29), 1,
      sym__line_break,
    STATE(119), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(42), 5,
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
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 23,
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
  [285] = 15,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_END,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_EXCEPT,
    ACTIONS(68), 1,
      anon_sym_FINALLY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(353), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [339] = 14,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    STATE(353), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [390] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [436] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(375), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [482] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_END,
    STATE(353), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [527] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
    STATE(353), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [572] = 11,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(353), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [614] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(97), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [644] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__separator,
    ACTIONS(110), 1,
      aux_sym__whitespace_token1,
    ACTIONS(113), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(105), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [674] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(118), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [704] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(128), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [734] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(27), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(148), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [786] = 8,
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
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [815] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(158), 1,
      sym__line_break,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(154), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [842] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__separator,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(88), 1,
      sym_block,
    STATE(194), 1,
      sym_else_statement,
    STATE(229), 1,
      sym_finally_statement,
    STATE(97), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [875] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(168), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [902] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_settings_section_token1,
    ACTIONS(177), 1,
      aux_sym_variables_section_token1,
    ACTIONS(180), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(183), 1,
      aux_sym_test_cases_section_token1,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [931] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(188), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [958] = 8,
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
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1012] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym_text_chunk,
    ACTIONS(205), 1,
      aux_sym__whitespace_token1,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(211), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1064] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(215), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1091] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(221), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1118] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(215), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1145] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_text_chunk,
    ACTIONS(232), 1,
      aux_sym__whitespace_token1,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(227), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(246), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1197] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(211), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1249] = 8,
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
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1278] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(133), 1,
      sym_block,
    STATE(138), 1,
      aux_sym_if_statement_repeat1,
    STATE(211), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1310] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(286), 1,
      sym_argument,
    STATE(59), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1338] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(275), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1366] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(219), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1394] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(281), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1422] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(293), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_IN,
    ACTIONS(287), 1,
      anon_sym_INRANGE,
    ACTIONS(289), 1,
      anon_sym_INENUMERATE,
    ACTIONS(291), 1,
      anon_sym_INZIP,
    STATE(374), 1,
      sym_scalar_variable,
    STATE(350), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1478] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(251), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1506] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(236), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1534] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(237), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1562] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(237), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1590] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(296), 1,
      anon_sym_,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(302), 1,
      sym_text_chunk,
    ACTIONS(305), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1615] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(46), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1632] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1649] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(313), 1,
      sym_text_chunk,
    ACTIONS(315), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1674] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1691] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(321), 1,
      sym_text_chunk,
    ACTIONS(323), 2,
      sym__separator,
      sym__line_break,
    STATE(54), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__separator,
    ACTIONS(330), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    ACTIONS(325), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym__whitespace_token1,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1756] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__separator,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(62), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1780] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(343), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_,
    STATE(261), 1,
      sym_test_case_setting_name,
    ACTIONS(345), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [1822] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(349), 1,
      sym_text_chunk,
    STATE(64), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1846] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(351), 1,
      sym_ellipses,
    ACTIONS(353), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(319), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1872] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__separator,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(359), 1,
      anon_sym_,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(365), 1,
      sym_text_chunk,
    STATE(64), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1896] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__line_break,
    ACTIONS(368), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(377), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1920] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__line_break,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(380), 1,
      sym_text_chunk,
    STATE(60), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1944] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    ACTIONS(382), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym__whitespace_token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1984] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(361), 1,
      sym_arguments,
    ACTIONS(393), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2008] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2024] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_,
    STATE(212), 1,
      sym_keyword_setting_name,
    ACTIONS(405), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2058] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2074] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(411), 1,
      anon_sym_RETURN,
    ACTIONS(413), 1,
      sym_keyword,
    STATE(239), 1,
      sym_inline_statement,
    STATE(244), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(221), 1,
      sym_test_case_setting_name,
    ACTIONS(345), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(245), 1,
      sym_keyword_setting_name,
    ACTIONS(405), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2125] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(320), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2148] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(318), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(252), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(420), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(298), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(423), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(259), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2240] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(70), 1,
      sym_keyword_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2263] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(76), 1,
      sym_comment,
    STATE(287), 1,
      sym_inline_statement,
    STATE(244), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2284] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(411), 1,
      anon_sym_RETURN,
    ACTIONS(413), 1,
      sym_keyword,
    STATE(201), 1,
      sym_inline_statement,
    STATE(244), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(292), 1,
      sym_block,
    STATE(100), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2328] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(71), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2351] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__separator,
    STATE(174), 1,
      sym__indentation,
    STATE(183), 1,
      sym_else_statement,
    STATE(272), 1,
      sym_finally_statement,
    STATE(98), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(346), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(435), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(438), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2445] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2459] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(348), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(315), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(345), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__separator,
    STATE(174), 1,
      sym__indentation,
    STATE(183), 1,
      sym_else_statement,
    STATE(272), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
    STATE(160), 1,
      sym__indentation,
    STATE(203), 1,
      sym_else_statement,
    STATE(216), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2573] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(455), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(460), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(339), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2627] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    ACTIONS(465), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2647] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(396), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2681] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(360), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__separator,
    ACTIONS(479), 1,
      aux_sym__whitespace_token1,
    ACTIONS(482), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2735] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__separator,
    ACTIONS(488), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2755] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2769] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2783] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2797] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2811] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(334), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2845] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2859] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(513), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(333), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(331), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(289), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(330), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(329), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
    STATE(328), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2993] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(513), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3006] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3019] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(517), 1,
      sym_text_chunk,
    STATE(134), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
    STATE(198), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3070] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3083] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3096] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3109] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(491), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3122] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__separator,
    STATE(146), 1,
      aux_sym_if_statement_repeat1,
    STATE(195), 1,
      sym__indentation,
    STATE(233), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [3154] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3167] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3180] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3193] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__separator,
    STATE(163), 1,
      aux_sym_if_statement_repeat1,
    STATE(175), 1,
      sym__indentation,
    STATE(238), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [3225] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3238] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3251] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__line_break,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3275] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3288] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(513), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3301] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__separator,
    STATE(163), 1,
      aux_sym_if_statement_repeat1,
    STATE(185), 1,
      sym__indentation,
    STATE(263), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [3333] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3346] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3359] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(536), 1,
      sym_text_chunk,
    STATE(113), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3376] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3389] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3402] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(538), 1,
      sym_text_chunk,
    STATE(151), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3419] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3432] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3445] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3458] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3471] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_,
      sym__separator,
  [3484] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(169), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3498] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_END,
    ACTIONS(548), 1,
      anon_sym_ELSE,
    ACTIONS(550), 1,
      anon_sym_EXCEPT,
    ACTIONS(552), 1,
      anon_sym_FINALLY,
  [3528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_ELSEIF,
    ACTIONS(556), 1,
      anon_sym_ELSE,
    STATE(256), 1,
      sym_inline_elseif_statement,
    STATE(311), 1,
      sym_inline_else_statement,
  [3544] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(159), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3558] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__separator,
    STATE(163), 1,
      aux_sym_if_statement_repeat1,
    STATE(302), 1,
      sym__indentation,
    STATE(344), 1,
      sym_elseif_statement,
  [3574] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(563), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_ELSEIF,
    ACTIONS(556), 1,
      anon_sym_ELSE,
    STATE(256), 1,
      sym_inline_elseif_statement,
    STATE(290), 1,
      sym_inline_else_statement,
  [3604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
    STATE(338), 1,
      sym__indentation,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(571), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
    STATE(306), 1,
      sym_arguments_without_continuation,
  [3634] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3648] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__separator,
    ACTIONS(579), 1,
      sym__line_break,
    STATE(172), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__line_break,
    ACTIONS(582), 1,
      sym__separator,
    STATE(172), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__separator,
    ACTIONS(586), 1,
      sym__line_break,
    STATE(172), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3704] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(540), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_ELSE,
    ACTIONS(550), 1,
      anon_sym_EXCEPT,
    ACTIONS(552), 1,
      anon_sym_FINALLY,
    ACTIONS(591), 1,
      anon_sym_END,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(593), 1,
      anon_sym_END,
    ACTIONS(595), 1,
      anon_sym_ELSEIF,
  [3747] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      sym_variable_name,
  [3760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_ellipses,
    ACTIONS(603), 1,
      sym__separator,
    STATE(340), 1,
      sym__indentation,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(605), 1,
      sym__line_break,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [3797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(605), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__line_break,
    ACTIONS(612), 1,
      sym__separator,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    STATE(216), 1,
      sym_finally_statement,
    STATE(217), 1,
      sym__indentation,
  [3849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__line_break,
    ACTIONS(612), 1,
      sym__separator,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [3862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(595), 1,
      anon_sym_ELSEIF,
    ACTIONS(617), 1,
      anon_sym_END,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__separator,
    ACTIONS(622), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3888] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(624), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym__separator,
    ACTIONS(631), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_inline_if_statement_repeat1,
  [3912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3925] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      anon_sym_,
    ACTIONS(642), 1,
      sym_variable_name,
  [3938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(644), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3964] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_,
    ACTIONS(650), 1,
      sym_variable_name,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__separator,
    STATE(270), 1,
      sym__indentation,
    STATE(272), 1,
      sym_finally_statement,
  [3990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(595), 1,
      anon_sym_ELSEIF,
    ACTIONS(654), 1,
      anon_sym_END,
  [4003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__line_break,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_inline_if_statement_repeat1,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__line_break,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4038] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_,
    ACTIONS(670), 1,
      sym_variable_name,
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__line_break,
    ACTIONS(672), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__separator,
    ACTIONS(678), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_inline_if_statement_repeat1,
  [4075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_ellipses,
    ACTIONS(682), 1,
      sym__separator,
    STATE(347), 1,
      sym__indentation,
  [4088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__separator,
    STATE(210), 1,
      sym__indentation,
    STATE(243), 1,
      sym_finally_statement,
  [4101] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 1,
      anon_sym_,
    ACTIONS(690), 1,
      sym_variable_name,
  [4114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
    STATE(313), 1,
      sym_arguments_without_continuation,
  [4127] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_,
    ACTIONS(696), 1,
      sym_variable_name,
  [4140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4164] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_,
    ACTIONS(700), 1,
      sym_variable_name,
  [4174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_FINALLY,
    ACTIONS(702), 1,
      anon_sym_END,
  [4184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    STATE(327), 1,
      sym__indentation,
  [4194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_,
    ACTIONS(708), 1,
      anon_sym_RBRACK,
  [4204] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_settings_section_token2,
    ACTIONS(712), 1,
      sym__line_break,
  [4214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__separator,
    ACTIONS(716), 1,
      sym__line_break,
  [4224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    ACTIONS(720), 1,
      sym__line_break,
  [4234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__separator,
    STATE(322), 1,
      sym__indentation,
  [4244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_END,
    ACTIONS(552), 1,
      anon_sym_FINALLY,
  [4254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      anon_sym_,
  [4264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__line_break,
    ACTIONS(728), 1,
      sym__separator,
  [4274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__separator,
    STATE(269), 1,
      aux_sym_for_statement_repeat1,
  [4284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
  [4294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(222), 1,
      aux_sym_for_statement_repeat1,
  [4304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_,
  [4314] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_settings_section_token2,
    ACTIONS(741), 1,
      sym__line_break,
  [4324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      anon_sym_,
  [4334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      anon_sym_,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 1,
      anon_sym_,
  [4354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(757), 1,
      anon_sym_,
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__separator,
    STATE(357), 1,
      sym__indentation,
  [4374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(763), 1,
      anon_sym_,
  [4384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 1,
      anon_sym_,
  [4394] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym_settings_section_token2,
    ACTIONS(771), 1,
      sym__line_break,
  [4404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__separator,
    STATE(308), 1,
      sym__indentation,
  [4414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__separator,
    ACTIONS(777), 1,
      sym__line_break,
  [4424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
  [4434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__separator,
    ACTIONS(785), 1,
      sym__line_break,
  [4444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym__separator,
    ACTIONS(789), 1,
      sym__line_break,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__separator,
    STATE(305), 1,
      sym__indentation,
  [4464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__separator,
    ACTIONS(795), 1,
      sym__line_break,
  [4474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_,
  [4484] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_settings_section_token2,
    ACTIONS(803), 1,
      sym__line_break,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_,
  [4504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym__separator,
    STATE(300), 1,
      sym__indentation,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__separator,
    ACTIONS(813), 1,
      sym__line_break,
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [4534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      anon_sym_,
  [4544] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_,
    ACTIONS(825), 1,
      sym_variable_name,
  [4554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    ACTIONS(829), 1,
      anon_sym_,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    ACTIONS(833), 1,
      anon_sym_,
  [4574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      anon_sym_,
  [4584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym__separator,
    ACTIONS(841), 1,
      sym__line_break,
  [4594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
  [4604] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_,
    ACTIONS(847), 1,
      sym_variable_name,
  [4614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_,
  [4624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__line_break,
    ACTIONS(853), 1,
      sym__separator,
  [4644] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_,
    ACTIONS(857), 1,
      sym_variable_name,
  [4654] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_,
    ACTIONS(861), 1,
      sym_variable_name,
  [4664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__separator,
    STATE(337), 1,
      sym__indentation,
  [4674] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_,
    ACTIONS(867), 1,
      sym_variable_name,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
  [4694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(875), 1,
      anon_sym_,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__separator,
    STATE(279), 1,
      sym__indentation,
  [4714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      anon_sym_,
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    ACTIONS(885), 1,
      anon_sym_,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__line_break,
    ACTIONS(887), 1,
      sym__separator,
  [4754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__separator,
    ACTIONS(891), 1,
      sym__line_break,
  [4764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym__separator,
    STATE(222), 1,
      aux_sym_for_statement_repeat1,
  [4774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_FINALLY,
    ACTIONS(591), 1,
      anon_sym_END,
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(374), 1,
      sym_scalar_variable,
  [4794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__separator,
    STATE(343), 1,
      sym__indentation,
  [4804] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_,
    ACTIONS(899), 1,
      sym_variable_name,
  [4814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_ELSEIF,
    STATE(256), 1,
      sym_inline_elseif_statement,
  [4824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__separator,
    ACTIONS(903), 1,
      sym__line_break,
  [4834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(907), 1,
      anon_sym_,
  [4844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym__separator,
    ACTIONS(911), 1,
      sym__line_break,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
  [4861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_END,
  [4868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__line_break,
  [4882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__line_break,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_END,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__separator,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__line_break,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__line_break,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__line_break,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__line_break,
  [4945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__separator,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__line_break,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__line_break,
  [4973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__separator,
  [4987] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_variable_name,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym__separator,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__line_break,
  [5008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_END,
  [5015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__line_break,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_ELSEIF,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__line_break,
  [5036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [5043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_END,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__line_break,
  [5057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_END,
  [5071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__line_break,
  [5078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__line_break,
  [5085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__line_break,
  [5092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [5106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__separator,
  [5113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__line_break,
  [5120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [5127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__line_break,
  [5134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__separator,
  [5141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__separator,
  [5148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__separator,
  [5155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
  [5162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_END,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [5176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__separator,
  [5183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__line_break,
  [5190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym__separator,
  [5197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_END,
  [5204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__line_break,
  [5211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__line_break,
  [5218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__line_break,
  [5225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__line_break,
  [5232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__separator,
  [5239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__line_break,
  [5253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__separator,
  [5260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym__line_break,
  [5267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_END,
  [5274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_EXCEPT,
  [5281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__line_break,
  [5288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
  [5295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__line_break,
  [5302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__line_break,
  [5309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_END,
  [5316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__separator,
  [5323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym__line_break,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__line_break,
  [5337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_ellipses,
  [5344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__line_break,
  [5351] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_variable_name,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__line_break,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__separator,
  [5372] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym_variable_name,
  [5379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym__line_break,
  [5386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__line_break,
  [5393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym__line_break,
  [5400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_END,
  [5414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [5421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [5428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__line_break,
  [5435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__line_break,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
  [5449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
  [5456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
  [5477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__line_break,
  [5484] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_variable_name,
  [5491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_RBRACK,
  [5498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__separator,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym__line_break,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
  [5519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__line_break,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__separator,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      sym__line_break,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym__line_break,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
  [5568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
  [5575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
  [5603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__line_break,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [5631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
  [5638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
  [5652] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym_variable_name,
  [5659] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym_variable_name,
  [5666] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_variable_name,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
  [5680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      sym__line_break,
  [5687] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1113), 1,
      sym_variable_name,
  [5694] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_variable_name,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
  [5708] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1119), 1,
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
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 482,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 761,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 842,
  [SMALL_STATE(25)] = 875,
  [SMALL_STATE(26)] = 902,
  [SMALL_STATE(27)] = 931,
  [SMALL_STATE(28)] = 958,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1012,
  [SMALL_STATE(31)] = 1039,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1091,
  [SMALL_STATE(34)] = 1118,
  [SMALL_STATE(35)] = 1145,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1197,
  [SMALL_STATE(38)] = 1224,
  [SMALL_STATE(39)] = 1249,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1310,
  [SMALL_STATE(42)] = 1338,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1422,
  [SMALL_STATE(46)] = 1450,
  [SMALL_STATE(47)] = 1478,
  [SMALL_STATE(48)] = 1506,
  [SMALL_STATE(49)] = 1534,
  [SMALL_STATE(50)] = 1562,
  [SMALL_STATE(51)] = 1590,
  [SMALL_STATE(52)] = 1615,
  [SMALL_STATE(53)] = 1632,
  [SMALL_STATE(54)] = 1649,
  [SMALL_STATE(55)] = 1674,
  [SMALL_STATE(56)] = 1691,
  [SMALL_STATE(57)] = 1716,
  [SMALL_STATE(58)] = 1740,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1780,
  [SMALL_STATE(61)] = 1804,
  [SMALL_STATE(62)] = 1822,
  [SMALL_STATE(63)] = 1846,
  [SMALL_STATE(64)] = 1872,
  [SMALL_STATE(65)] = 1896,
  [SMALL_STATE(66)] = 1920,
  [SMALL_STATE(67)] = 1944,
  [SMALL_STATE(68)] = 1968,
  [SMALL_STATE(69)] = 1984,
  [SMALL_STATE(70)] = 2008,
  [SMALL_STATE(71)] = 2024,
  [SMALL_STATE(72)] = 2040,
  [SMALL_STATE(73)] = 2058,
  [SMALL_STATE(74)] = 2074,
  [SMALL_STATE(75)] = 2095,
  [SMALL_STATE(76)] = 2110,
  [SMALL_STATE(77)] = 2125,
  [SMALL_STATE(78)] = 2148,
  [SMALL_STATE(79)] = 2171,
  [SMALL_STATE(80)] = 2194,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2240,
  [SMALL_STATE(83)] = 2263,
  [SMALL_STATE(84)] = 2284,
  [SMALL_STATE(85)] = 2305,
  [SMALL_STATE(86)] = 2328,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2365,
  [SMALL_STATE(89)] = 2385,
  [SMALL_STATE(90)] = 2405,
  [SMALL_STATE(91)] = 2425,
  [SMALL_STATE(92)] = 2445,
  [SMALL_STATE(93)] = 2459,
  [SMALL_STATE(94)] = 2473,
  [SMALL_STATE(95)] = 2493,
  [SMALL_STATE(96)] = 2513,
  [SMALL_STATE(97)] = 2533,
  [SMALL_STATE(98)] = 2553,
  [SMALL_STATE(99)] = 2573,
  [SMALL_STATE(100)] = 2587,
  [SMALL_STATE(101)] = 2607,
  [SMALL_STATE(102)] = 2627,
  [SMALL_STATE(103)] = 2647,
  [SMALL_STATE(104)] = 2661,
  [SMALL_STATE(105)] = 2681,
  [SMALL_STATE(106)] = 2695,
  [SMALL_STATE(107)] = 2715,
  [SMALL_STATE(108)] = 2735,
  [SMALL_STATE(109)] = 2755,
  [SMALL_STATE(110)] = 2769,
  [SMALL_STATE(111)] = 2783,
  [SMALL_STATE(112)] = 2797,
  [SMALL_STATE(113)] = 2811,
  [SMALL_STATE(114)] = 2825,
  [SMALL_STATE(115)] = 2845,
  [SMALL_STATE(116)] = 2859,
  [SMALL_STATE(117)] = 2873,
  [SMALL_STATE(118)] = 2893,
  [SMALL_STATE(119)] = 2913,
  [SMALL_STATE(120)] = 2933,
  [SMALL_STATE(121)] = 2953,
  [SMALL_STATE(122)] = 2973,
  [SMALL_STATE(123)] = 2993,
  [SMALL_STATE(124)] = 3006,
  [SMALL_STATE(125)] = 3019,
  [SMALL_STATE(126)] = 3036,
  [SMALL_STATE(127)] = 3053,
  [SMALL_STATE(128)] = 3070,
  [SMALL_STATE(129)] = 3083,
  [SMALL_STATE(130)] = 3096,
  [SMALL_STATE(131)] = 3109,
  [SMALL_STATE(132)] = 3122,
  [SMALL_STATE(133)] = 3135,
  [SMALL_STATE(134)] = 3154,
  [SMALL_STATE(135)] = 3167,
  [SMALL_STATE(136)] = 3180,
  [SMALL_STATE(137)] = 3193,
  [SMALL_STATE(138)] = 3206,
  [SMALL_STATE(139)] = 3225,
  [SMALL_STATE(140)] = 3238,
  [SMALL_STATE(141)] = 3251,
  [SMALL_STATE(142)] = 3264,
  [SMALL_STATE(143)] = 3275,
  [SMALL_STATE(144)] = 3288,
  [SMALL_STATE(145)] = 3301,
  [SMALL_STATE(146)] = 3314,
  [SMALL_STATE(147)] = 3333,
  [SMALL_STATE(148)] = 3346,
  [SMALL_STATE(149)] = 3359,
  [SMALL_STATE(150)] = 3376,
  [SMALL_STATE(151)] = 3389,
  [SMALL_STATE(152)] = 3402,
  [SMALL_STATE(153)] = 3419,
  [SMALL_STATE(154)] = 3432,
  [SMALL_STATE(155)] = 3445,
  [SMALL_STATE(156)] = 3458,
  [SMALL_STATE(157)] = 3471,
  [SMALL_STATE(158)] = 3484,
  [SMALL_STATE(159)] = 3498,
  [SMALL_STATE(160)] = 3512,
  [SMALL_STATE(161)] = 3528,
  [SMALL_STATE(162)] = 3544,
  [SMALL_STATE(163)] = 3558,
  [SMALL_STATE(164)] = 3574,
  [SMALL_STATE(165)] = 3588,
  [SMALL_STATE(166)] = 3604,
  [SMALL_STATE(167)] = 3618,
  [SMALL_STATE(168)] = 3634,
  [SMALL_STATE(169)] = 3648,
  [SMALL_STATE(170)] = 3662,
  [SMALL_STATE(171)] = 3676,
  [SMALL_STATE(172)] = 3690,
  [SMALL_STATE(173)] = 3704,
  [SMALL_STATE(174)] = 3718,
  [SMALL_STATE(175)] = 3734,
  [SMALL_STATE(176)] = 3747,
  [SMALL_STATE(177)] = 3760,
  [SMALL_STATE(178)] = 3773,
  [SMALL_STATE(179)] = 3784,
  [SMALL_STATE(180)] = 3797,
  [SMALL_STATE(181)] = 3810,
  [SMALL_STATE(182)] = 3823,
  [SMALL_STATE(183)] = 3836,
  [SMALL_STATE(184)] = 3849,
  [SMALL_STATE(185)] = 3862,
  [SMALL_STATE(186)] = 3875,
  [SMALL_STATE(187)] = 3888,
  [SMALL_STATE(188)] = 3899,
  [SMALL_STATE(189)] = 3912,
  [SMALL_STATE(190)] = 3925,
  [SMALL_STATE(191)] = 3938,
  [SMALL_STATE(192)] = 3951,
  [SMALL_STATE(193)] = 3964,
  [SMALL_STATE(194)] = 3977,
  [SMALL_STATE(195)] = 3990,
  [SMALL_STATE(196)] = 4003,
  [SMALL_STATE(197)] = 4014,
  [SMALL_STATE(198)] = 4027,
  [SMALL_STATE(199)] = 4038,
  [SMALL_STATE(200)] = 4051,
  [SMALL_STATE(201)] = 4062,
  [SMALL_STATE(202)] = 4075,
  [SMALL_STATE(203)] = 4088,
  [SMALL_STATE(204)] = 4101,
  [SMALL_STATE(205)] = 4114,
  [SMALL_STATE(206)] = 4127,
  [SMALL_STATE(207)] = 4140,
  [SMALL_STATE(208)] = 4153,
  [SMALL_STATE(209)] = 4164,
  [SMALL_STATE(210)] = 4174,
  [SMALL_STATE(211)] = 4184,
  [SMALL_STATE(212)] = 4194,
  [SMALL_STATE(213)] = 4204,
  [SMALL_STATE(214)] = 4214,
  [SMALL_STATE(215)] = 4224,
  [SMALL_STATE(216)] = 4234,
  [SMALL_STATE(217)] = 4244,
  [SMALL_STATE(218)] = 4254,
  [SMALL_STATE(219)] = 4264,
  [SMALL_STATE(220)] = 4274,
  [SMALL_STATE(221)] = 4284,
  [SMALL_STATE(222)] = 4294,
  [SMALL_STATE(223)] = 4304,
  [SMALL_STATE(224)] = 4314,
  [SMALL_STATE(225)] = 4324,
  [SMALL_STATE(226)] = 4334,
  [SMALL_STATE(227)] = 4344,
  [SMALL_STATE(228)] = 4354,
  [SMALL_STATE(229)] = 4364,
  [SMALL_STATE(230)] = 4374,
  [SMALL_STATE(231)] = 4384,
  [SMALL_STATE(232)] = 4394,
  [SMALL_STATE(233)] = 4404,
  [SMALL_STATE(234)] = 4414,
  [SMALL_STATE(235)] = 4424,
  [SMALL_STATE(236)] = 4434,
  [SMALL_STATE(237)] = 4444,
  [SMALL_STATE(238)] = 4454,
  [SMALL_STATE(239)] = 4464,
  [SMALL_STATE(240)] = 4474,
  [SMALL_STATE(241)] = 4484,
  [SMALL_STATE(242)] = 4494,
  [SMALL_STATE(243)] = 4504,
  [SMALL_STATE(244)] = 4514,
  [SMALL_STATE(245)] = 4524,
  [SMALL_STATE(246)] = 4534,
  [SMALL_STATE(247)] = 4544,
  [SMALL_STATE(248)] = 4554,
  [SMALL_STATE(249)] = 4564,
  [SMALL_STATE(250)] = 4574,
  [SMALL_STATE(251)] = 4584,
  [SMALL_STATE(252)] = 4594,
  [SMALL_STATE(253)] = 4604,
  [SMALL_STATE(254)] = 4614,
  [SMALL_STATE(255)] = 4624,
  [SMALL_STATE(256)] = 4634,
  [SMALL_STATE(257)] = 4644,
  [SMALL_STATE(258)] = 4654,
  [SMALL_STATE(259)] = 4664,
  [SMALL_STATE(260)] = 4674,
  [SMALL_STATE(261)] = 4684,
  [SMALL_STATE(262)] = 4694,
  [SMALL_STATE(263)] = 4704,
  [SMALL_STATE(264)] = 4714,
  [SMALL_STATE(265)] = 4724,
  [SMALL_STATE(266)] = 4734,
  [SMALL_STATE(267)] = 4744,
  [SMALL_STATE(268)] = 4754,
  [SMALL_STATE(269)] = 4764,
  [SMALL_STATE(270)] = 4774,
  [SMALL_STATE(271)] = 4784,
  [SMALL_STATE(272)] = 4794,
  [SMALL_STATE(273)] = 4804,
  [SMALL_STATE(274)] = 4814,
  [SMALL_STATE(275)] = 4824,
  [SMALL_STATE(276)] = 4834,
  [SMALL_STATE(277)] = 4844,
  [SMALL_STATE(278)] = 4854,
  [SMALL_STATE(279)] = 4861,
  [SMALL_STATE(280)] = 4868,
  [SMALL_STATE(281)] = 4875,
  [SMALL_STATE(282)] = 4882,
  [SMALL_STATE(283)] = 4889,
  [SMALL_STATE(284)] = 4896,
  [SMALL_STATE(285)] = 4903,
  [SMALL_STATE(286)] = 4910,
  [SMALL_STATE(287)] = 4917,
  [SMALL_STATE(288)] = 4924,
  [SMALL_STATE(289)] = 4931,
  [SMALL_STATE(290)] = 4938,
  [SMALL_STATE(291)] = 4945,
  [SMALL_STATE(292)] = 4952,
  [SMALL_STATE(293)] = 4959,
  [SMALL_STATE(294)] = 4966,
  [SMALL_STATE(295)] = 4973,
  [SMALL_STATE(296)] = 4980,
  [SMALL_STATE(297)] = 4987,
  [SMALL_STATE(298)] = 4994,
  [SMALL_STATE(299)] = 5001,
  [SMALL_STATE(300)] = 5008,
  [SMALL_STATE(301)] = 5015,
  [SMALL_STATE(302)] = 5022,
  [SMALL_STATE(303)] = 5029,
  [SMALL_STATE(304)] = 5036,
  [SMALL_STATE(305)] = 5043,
  [SMALL_STATE(306)] = 5050,
  [SMALL_STATE(307)] = 5057,
  [SMALL_STATE(308)] = 5064,
  [SMALL_STATE(309)] = 5071,
  [SMALL_STATE(310)] = 5078,
  [SMALL_STATE(311)] = 5085,
  [SMALL_STATE(312)] = 5092,
  [SMALL_STATE(313)] = 5099,
  [SMALL_STATE(314)] = 5106,
  [SMALL_STATE(315)] = 5113,
  [SMALL_STATE(316)] = 5120,
  [SMALL_STATE(317)] = 5127,
  [SMALL_STATE(318)] = 5134,
  [SMALL_STATE(319)] = 5141,
  [SMALL_STATE(320)] = 5148,
  [SMALL_STATE(321)] = 5155,
  [SMALL_STATE(322)] = 5162,
  [SMALL_STATE(323)] = 5169,
  [SMALL_STATE(324)] = 5176,
  [SMALL_STATE(325)] = 5183,
  [SMALL_STATE(326)] = 5190,
  [SMALL_STATE(327)] = 5197,
  [SMALL_STATE(328)] = 5204,
  [SMALL_STATE(329)] = 5211,
  [SMALL_STATE(330)] = 5218,
  [SMALL_STATE(331)] = 5225,
  [SMALL_STATE(332)] = 5232,
  [SMALL_STATE(333)] = 5239,
  [SMALL_STATE(334)] = 5246,
  [SMALL_STATE(335)] = 5253,
  [SMALL_STATE(336)] = 5260,
  [SMALL_STATE(337)] = 5267,
  [SMALL_STATE(338)] = 5274,
  [SMALL_STATE(339)] = 5281,
  [SMALL_STATE(340)] = 5288,
  [SMALL_STATE(341)] = 5295,
  [SMALL_STATE(342)] = 5302,
  [SMALL_STATE(343)] = 5309,
  [SMALL_STATE(344)] = 5316,
  [SMALL_STATE(345)] = 5323,
  [SMALL_STATE(346)] = 5330,
  [SMALL_STATE(347)] = 5337,
  [SMALL_STATE(348)] = 5344,
  [SMALL_STATE(349)] = 5351,
  [SMALL_STATE(350)] = 5358,
  [SMALL_STATE(351)] = 5365,
  [SMALL_STATE(352)] = 5372,
  [SMALL_STATE(353)] = 5379,
  [SMALL_STATE(354)] = 5386,
  [SMALL_STATE(355)] = 5393,
  [SMALL_STATE(356)] = 5400,
  [SMALL_STATE(357)] = 5407,
  [SMALL_STATE(358)] = 5414,
  [SMALL_STATE(359)] = 5421,
  [SMALL_STATE(360)] = 5428,
  [SMALL_STATE(361)] = 5435,
  [SMALL_STATE(362)] = 5442,
  [SMALL_STATE(363)] = 5449,
  [SMALL_STATE(364)] = 5456,
  [SMALL_STATE(365)] = 5463,
  [SMALL_STATE(366)] = 5470,
  [SMALL_STATE(367)] = 5477,
  [SMALL_STATE(368)] = 5484,
  [SMALL_STATE(369)] = 5491,
  [SMALL_STATE(370)] = 5498,
  [SMALL_STATE(371)] = 5505,
  [SMALL_STATE(372)] = 5512,
  [SMALL_STATE(373)] = 5519,
  [SMALL_STATE(374)] = 5526,
  [SMALL_STATE(375)] = 5533,
  [SMALL_STATE(376)] = 5540,
  [SMALL_STATE(377)] = 5547,
  [SMALL_STATE(378)] = 5554,
  [SMALL_STATE(379)] = 5561,
  [SMALL_STATE(380)] = 5568,
  [SMALL_STATE(381)] = 5575,
  [SMALL_STATE(382)] = 5582,
  [SMALL_STATE(383)] = 5589,
  [SMALL_STATE(384)] = 5596,
  [SMALL_STATE(385)] = 5603,
  [SMALL_STATE(386)] = 5610,
  [SMALL_STATE(387)] = 5617,
  [SMALL_STATE(388)] = 5624,
  [SMALL_STATE(389)] = 5631,
  [SMALL_STATE(390)] = 5638,
  [SMALL_STATE(391)] = 5645,
  [SMALL_STATE(392)] = 5652,
  [SMALL_STATE(393)] = 5659,
  [SMALL_STATE(394)] = 5666,
  [SMALL_STATE(395)] = 5673,
  [SMALL_STATE(396)] = 5680,
  [SMALL_STATE(397)] = 5687,
  [SMALL_STATE(398)] = 5694,
  [SMALL_STATE(399)] = 5701,
  [SMALL_STATE(400)] = 5708,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(268),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(299),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(367),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(367),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(295),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(342),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(30),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(167),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(342),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(297),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(299),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(36),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(247),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(149),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(158),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(51),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(43),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(202),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(273),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(152),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(162),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(64),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(253),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(125),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(173),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(65),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(177),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(177),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(177),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1), SHIFT(43),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(202),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(385),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(43),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(202),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(177),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(43),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(202),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 10), SHIFT_REPEAT(302),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(187),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(338),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(202),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(202),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(43),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(43),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(274),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(43),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(177),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(177),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(271),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 18),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 19),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 20),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 21),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 16),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 15),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, .production_id = 6),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 12),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 11),
  [997] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 9),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, .production_id = 6),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 5),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 6),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 8),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 7),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 5),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 6),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, .production_id = 5),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, .production_id = 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
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
