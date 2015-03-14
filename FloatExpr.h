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

class FloatExpr : public ExprNode
{
    public:
        FloatExpr(double val = 0.0);
        string toString();
        string GetType();
        string GetBaseType();
        double GetValue();
        void GenerateCode();
        
    private:
        double m_val;
};
