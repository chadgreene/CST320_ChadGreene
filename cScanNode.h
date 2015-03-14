/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include "cStmtNode.h"
#include "ExprNode.h"

class cScanNode: public cStmtNode
{
    public:
        cScanNode(ExprNode* expr = nullptr);
        string toString();
        int CalculateSize(int offset);
        void GenerateCode();
    
    private:
        ExprNode* m_expr;
};