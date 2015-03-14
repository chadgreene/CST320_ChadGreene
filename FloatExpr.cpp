/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "FloatExpr.h"

FloatExpr::FloatExpr(double val)
    :m_val(val)
{
    m_size = 8;
    m_offset = -1;
}

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

void FloatExpr::GenerateCode()
{
    gen->EmitString(std::to_string(m_val));
}

double FloatExpr::GetValue()
{
    return m_val;
}