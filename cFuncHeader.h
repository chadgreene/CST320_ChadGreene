/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 4 Abstract Syntax Tree
 * Date: 2/8/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <string>
#include "cFuncPrefix.h"
#include "cParamsSpec.h"

using std::string;

class cFuncHeader
{
    public:
        cFuncHeader(cFuncPrefix* prefix, cParamsSpec* params = nullptr);
        string toString();
    
    private:
        cFuncPrefix* m_prefix;
        cParamsSpec* m_params;
        
};