#ifndef _TOKEN_H_

#define _TOKEN_H_

#include <string>
#include <cstring>
#include <iostream>
#include <map>

enum class Token
{
    undefined,
    LP,
    RP,
    LB,
    RB,
    DOT,
    COMMA,
    COLON,
    MUL,
    DIV,
    UNEQUAL,
    NOT,
    PLUS,
    MINUS,
    GE,
    GT,
    LE,
    LT,
    EQUAL,
    ASSIGN,
    MOD,
    DOTDOT,
    SEMI,
    SYS_CON,
    SYS_FUNCT,
    SYS_PROC,
    SYS_TYPE,
    INTEGER,
    REAL,
    CHAR,
    STRING,
    ID,
    BOOLEAN,
    AND,
    ARRAY,
    SBEGIN,
    CASE,
    CONST,
    DO,
    DOWNTO,
    ELSE,
    END,
    FOR,
    FUNCTION,
    GOTO,
    IF,
    OF,
    OR,
    PACKED,
    PROCEDURE,
    PROGRAM,
    RECORD,
    REPEAT,
    THEN,
    TO,
    TYPE,
    UNTIL,
    VAR,
    WHILE,
    READ,
    NAME,
    // fake token
    program,
    program_head,
    routine,
    routine_head,
    routine_body,
    sub_routine,
    label_part,
    const_part,
    type_part,
    var_part,
    routine_part,
    const_expr_list,
    const_value,
    type_decl,
    type_decl_list,
    type_definition,
    simple_type_decl,
    array_type_decl,
    record_type_decl,
    name_list,
    field_decl_list,
    var_decl_list,
    var_decl,
    function_decl,
    procedure_decl,
    function_head,
    parameters,
    procedure_head,
    para_decl_list,
    para_type_list,
    var_para_list,
    val_para_list,
    compound_stmt,
    stmt_list,
    stmt,
    non_label_stmt,
    assign_stmt,
    proc_stmt,
    if_stmt,
    repeat_stmt,
    while_stmt,
    for_stmt,
    case_stmt,
    goto_stmt,
    expression,
    expression_list,
    factor,
    args_list,
    else_clause,
    direction,
    case_expr_list,
    case_expr,
    expr,
    term
};

// map of string-token
extern std::map<std::string, Token> tokenMap;

extern Token tokenResolver(std::string name);

extern std::string stringResolver(Token token);

#endif
