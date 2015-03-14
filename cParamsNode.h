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
#include "cParamNode.h"

class cParamsNode : public cStmtNode
{
    public:
        cParamsNode();
        string toString();
        void Add(cParamNode* param = nullptr);
        int CalculateSize(int offset);
        void GenerateCode();
        int GetParamsOffset();
        
    private:
        int m_paramsOffset;
        list<cParamNode*> m_params;
};
