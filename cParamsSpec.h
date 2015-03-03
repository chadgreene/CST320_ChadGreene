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
#include "cParamSpec.h"

class cParamsSpec : public cStmtNode
{
    public:
        cParamsSpec();
        string toString();
        void Add(cParamSpec* param = nullptr);
        int CalculateSize(int offset);
        
    private:
        list<cParamSpec*> m_params;
};