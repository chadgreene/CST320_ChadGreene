/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "IntExpr.h"

IntExpr::IntExpr(int val)
    :m_val(val)
{
   
    m_size = 4;
    m_offset = -1;
}

string IntExpr::toString()
{
    return "(EXPR: " + std::to_string(m_val) + ")";
}

string IntExpr::GetType()
{
    if(m_val >= -128 && m_val <= 127)
        return "char";
    return "int";
}

string IntExpr::GetBaseType()
{
    return GetType();
}

void IntExpr::GenerateCode()
{
    gen->EmitString(std::to_string(m_val));
}

double IntExpr::GetValue()
{
    return m_val;
}