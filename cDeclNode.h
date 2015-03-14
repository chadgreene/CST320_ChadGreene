/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <string>
#include "cAstNode.h"
using std::string;

class cDeclNode : public cAstNode
{
    public:
        virtual int GetSize() = 0;
        virtual string GetBaseType() = 0;
        virtual void GenerateCode() = 0;
};