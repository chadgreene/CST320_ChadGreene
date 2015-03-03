/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 6 Calculate node sizes and offsets
 * Date: 3/4/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "FloatExpr.h"

FloatExpr::FloatExpr(double val)
    :m_val(val)
{}

string FloatExpr::toString()
{
    return "(EXPR: " + std::to_string(m_val) + ")";
}

string FloatExpr::GetType()
{
    return "float";
}

string FloatExpr::GetBaseType()
{
    return GetType();
}