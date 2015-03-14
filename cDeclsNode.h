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
#include "cDeclNode.h"
#include "cSymbol.h"
#include "cVarNode.h"
using std::list;

class cDeclsNode : public cAstNode
{
    public:
        cDeclsNode();
        string toString();
        void Add(cDeclNode* data = nullptr);
        int CalculateSize(int offset);
        int CalculateOffset(int offset);
        int GetSize();
        int FindSymbolOffset(cSymbol* symbol);
        void GenerateCode();
        
    private:
        list<cDeclNode*> m_decls;
};