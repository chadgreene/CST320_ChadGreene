/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 6 Calculate node sizes and offsets
 * Date: 3/4/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include "cStmtNode.h"
#include "ExprNode.h"

class cReturnNode: public cStmtNode
{
    public:
        cReturnNode(ExprNode* expr = nullptr);
        string toString();
        int CalculateSize(int offset);
    
    private:
        ExprNode* m_expr;
};