/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once
#include <iostream>
#include <string>
#include "codegen.h"
using std::string;

extern codegen* gen;
const int WORD_ALIGN = 4;

class cAstNode
{
    public:
        virtual string toString() = 0;
        virtual int CalculateSize(int offset) = 0;
        
        
        virtual bool SemanticError()
        {
            return m_semanticError;
        }
        
        int WordAlign(int offset)
        {
            while((offset % WORD_ALIGN) != 0)
                offset++;
            return offset;
        }
        
        virtual void GenerateCode()
        {
            gen->EmitString("Somethings not implemented\n");
        }
        
        int GetCalculatedSize()
        {
            return m_size;
        }
        
        int GetCalculatedOffset()
        {
            return m_offset;
        }
        
    protected:
        bool m_semanticError;
        int m_offset;
        int m_size;
};