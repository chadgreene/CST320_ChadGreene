/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
%{

#include "lex.h"


#define RETURN(a) return Return(a);
static int Return(int val);

%}

%option noyywrap
%option noinput
%option nounput
%option yylineno

    /* definitions go here. period is an example. */
punct           [\.\(\)\[\]\,\;]
digit           [\-]?[0-9]+
oper            [\+\*\/\%\<\!\=\-]
comment         "//".*$
ident           [a-zA-Z][a-zA-Z0-9_]*

%%

    // control scope with curly braces
    // NOTE: This functionality will eventually move to the parser
    // token definitions go here. "if" is an example.
"if"                        RETURN(IF);
"else"                      RETURN(ELSE);
"while"                     RETURN(WHILE);
"print"                     RETURN(PRINT);
"scan"                      RETURN(SCAN);
"struct"                    RETURN(STRUCT);
"return"                    RETURN(RETURN);
"{"                         return yytext[0];
"}"                         return yytext[0];
"array"                     RETURN(ARRAY);
{ident}                     {
                                    //Find any matching symbol in entire table
                                yylval.symbol = symbolTableRoot->Lookup(yytext);
                                    
                                    //If symbol present return found symbol
                                    //Otherwise create new symbol for yylval
                                if(yylval.symbol != nullptr)
                                {
                                    //If symbol is a type return TYPE_ID instead
                                    //of IDENTIFIER but keep yylval as found symbol
                                    if(yylval.symbol->IsType())
                                        RETURN(TYPE_ID);
                                    
                                }
                                else
                                    yylval.symbol = symbolTableRoot->InsertSymbol(yytext);
                                    
                                RETURN(IDENTIFIER);
                            }
{digit}                     {
                                yylval.int_val = atoi(yytext);
                                RETURN(INT_VAL);
                            }
{digit}"."{digit}           {
                                yylval.float_val = atof(yytext);
                                RETURN(FLOAT_VAL);
                            }
{comment}                   /* Skip comments */
{punct}|{oper}              RETURN(yytext[0]);
[ \t\n\r]                   /* Skip whitespace */
.                           RETURN(JUNK_TOKEN);
%%

// This function allows us to do extra processing on each token
static int Return(int val)
{
//    printf("Scanned '%s': %d\n", yytext, val);
    return val;
}