/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cParamsSpec.h"

cParamsSpec::cParamsSpec()
{
    m_size = -1;
    m_offset = -1;
}

string cParamsSpec::toString()
{
    string retVal = "(PARAMS:";
    
    for(auto &param : m_params)
        retVal += " " +param->toString();
    
    retVal += ")\n";
    
    return retVal;
}

void cParamsSpec::Add(cParamSpec* param)
{
    m_params.push_back(param);
}

int cParamsSpec::CalculateSize(int offset)
{
    m_offset = offset;
    for(auto &param : m_params)
        m_offset = param->CalculateSize(WordAlign(m_offset));
    return m_offset;
}

void cParamsSpec::GenerateCode()
{
    for(auto & param : m_params)
        param->GenerateCode();
}