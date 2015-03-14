/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include "cDeclNode.h"
#include "cSymbol.h"

class cVarNode : public cDeclNode
{
    public:
        cVarNode(cSymbol* typeId = nullptr, cSymbol* identifier = nullptr);
        string toString();
        cSymbol* GetSymbol();
        int CalculateSize(int offset);
        int GetSize();
        void GenerateCode();
        string GetBaseType();
    
    private:
        cSymbol* m_typeId;
        cSymbol* m_identifier;
};