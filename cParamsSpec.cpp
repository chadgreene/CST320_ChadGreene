/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 4 Abstract Syntax Tree
 * Date: 2/8/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cParamsSpec.h"

cParamsSpec::cParamsSpec()
{}

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