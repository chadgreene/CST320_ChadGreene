/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <list>
#include "cAstNode.h"
#include "cStmtNode.h"
using std::list;

class cStmtsNode : public cAstNode
{
    public:
        cStmtsNode();
        string toString();
        void Add(cStmtNode* data = nullptr);
        int CalculateSize(int offset);
        void GenerateCode();
        
    private:
        list<cStmtNode*> m_stmts;        
};