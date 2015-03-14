/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cFuncDecl.h"

cFuncDecl::cFuncDecl(cSymbol* header, cParamsSpec* params)
    :m_header(header), m_params(params), m_decls(nullptr), m_stmts(nullptr), m_paramSize(0)
{
    m_size = -1;
    m_offset = -1;
}

string cFuncDecl::toString()
{
    string retVal = "(FUNC: " + m_header->toString();
    
    if(m_params != nullptr)
        retVal += " " + m_params->toString();
    else
        retVal += "()";
        
    if(m_decls != nullptr)
        retVal += "\n" + m_decls->toString();
    
    if(m_stmts != nullptr)
        retVal += "\n" + m_stmts->toString();
    
    if(m_size != -1)
        retVal += "\nsize: " + std::to_string(m_size);
    
    return retVal + "\n)";
}

void cFuncDecl::SetStmts(cStmtsNode* stmts)
{
    m_stmts = stmts;
}

void cFuncDecl::SetDecls(cDeclsNode* decls)
{
    m_decls = decls;
}

int cFuncDecl::CalculateSize(int offset)
{
    m_offset = 0;
    
    if(m_params != nullptr)
       m_paramSize = m_params->CalculateSize(m_offset);
    if(m_decls != nullptr)
        m_offset = m_decls->CalculateSize(m_paramSize);
    if(m_stmts != nullptr)
        m_offset = m_stmts->CalculateSize(m_offset);
  
    m_size = (m_offset == 0) ? m_offset : m_offset - m_paramSize;

    return offset;
}

int cFuncDecl::GetSize()
{
    return m_header->GetSize();
}

int cFuncDecl::GetParamsSize()
{
    return m_paramSize;
}

string cFuncDecl::GetBaseType()
{
    return m_header->GetBaseType();
}

void cFuncDecl::GenerateCode()
{
    gen->StartFunctionOutput();
    gen->EmitString("int " + m_header->GetSymbol() + "()\n{\n");
    if(m_decls != nullptr)
        m_decls->GenerateCode();
    if(m_stmts != nullptr)
        m_stmts->GenerateCode();
    gen->ReduceStack(m_size + m_paramSize);
    gen->EmitString("}\n");
    gen->EndFunctionOutput();
}