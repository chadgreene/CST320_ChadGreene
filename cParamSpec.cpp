/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cParamSpec.h"

cParamSpec::cParamSpec(cVarNode* node)
    :m_param(node)
{}

string cParamSpec::toString()
{
    return m_param->toString();
}

int cParamSpec::CalculateSize(int offset)
{
    return m_param->CalculateSize(offset);
}

void cParamSpec::GenerateCode()
{
    m_param->GenerateCode();
}