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
#include "cArraySpec.h"
#include "cSymbol.h"

class cArrayDecl : public cDeclNode
{
    public:
        cArrayDecl(cSymbol* typeId = nullptr, cSymbol* identifier = nullptr, cArraySpec* array = nullptr);
        string toString();
        int CalculateSize(int offset);
        int GetSize();
        string GetBaseType();
        void GenerateCode();
    
    private:
        cSymbol* m_typeId;
        cSymbol* m_identifier;
        cArraySpec* m_array;
        void SetSize();
};