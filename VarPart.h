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
#include "ArrayVal.h"
#include "cSymbol.h"

class VarPart : public ExprNode
{
    public:
        VarPart(cSymbol* identifier = nullptr, ArrayVal* ary = nullptr);
        string toString();
        string GetType();
        cSymbol* GetIdentifier();
        cDeclNode* GetTypeRef();
        void SetIdentifier(cSymbol* identifier);
        string GetBaseType();
        string GetSymbol();
        double GetValue(){ return 0; } 
        
    private:
        cSymbol* m_identifier;
        ArrayVal* m_ary;
};
