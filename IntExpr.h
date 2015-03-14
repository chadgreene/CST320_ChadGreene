/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include "ExprNode.h"

class IntExpr : public ExprNode
{
    public:
        IntExpr(int val = -1);
        string toString();
        string GetType();
        string GetBaseType();
        void GenerateCode();
        double GetValue();
    
    private:
        int m_val;
};