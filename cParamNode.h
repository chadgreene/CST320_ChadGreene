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

class cParamNode
{
    public:
        cParamNode(ExprNode* expr = nullptr);
        string toString();
        int CalculateSize(int offset);
        void GenerateCode();
        int GetOffset();
    
    private:
        int m_stackOffset;
        ExprNode* m_expr;
};