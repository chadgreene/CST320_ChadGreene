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

class cIfNode: public cStmtNode
{
    public:
        cIfNode(ExprNode* expr = nullptr, cStmtNode* stmt1 = nullptr, cStmtNode* stmt2 = nullptr);
        string toString();
        int CalculateSize(int offset);
    
    private:
        ExprNode* m_expr;
        cStmtNode* m_stmt1;
        cStmtNode* m_stmt2;
};