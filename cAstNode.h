/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 4 Abstract Syntax Tree
 * Date: 2/8/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once
#include <iostream>
#include <string>
using std::string;

class cAstNode
{
    public:
        virtual string toString() = 0;
};