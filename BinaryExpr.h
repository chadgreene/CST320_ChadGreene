/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <math.h>
#include "ExprNode.h"

class BinaryExpr : public ExprNode
{
    public:
        BinaryExpr(ExprNode* lhs = nullptr, char oper = '~', ExprNode* rhs = nullptr);
        string toString();
        string GetType();
        string GetBaseType();
        int CalculateSize(int offset);
        double GetValue();
        void GenerateCode();
        
    
    private:
        ExprNode* m_rhs;
        char m_oper;
        ExprNode* m_lhs;
        
};