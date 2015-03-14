/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include "cSymbol.h"
#include "cParamsNode.h"
#include "cStmtNode.h"
#include "ExprNode.h"

class cFuncCall : public cStmtNode, public ExprNode
{
    public:
        cFuncCall(cSymbol* identifier = nullptr, cParamsNode* params = nullptr);
        string toString();
        string GetType();
        string GetBaseType();
        int CalculateSize(int offset);
        double GetValue(){ return 0; }
        void GenerateCode();
    
    private:
        cSymbol* m_identifier;
        cParamsNode* m_params;
};