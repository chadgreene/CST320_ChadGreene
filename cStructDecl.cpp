/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cStructDecl.h"

cStructDecl::cStructDecl(map<string,cSymbol*>* symTable, cDeclsNode* decls, cSymbol* identifier)
    :m_symTable(symTable), m_decls(decls), m_identifier(identifier)
{
    m_size = -1;
    m_offset = -1;
    SetSize();
}

string cStructDecl::toString()
{
    string retVal = "STRUCT: ";
    
    retVal += m_decls->toString() + " " + m_identifier->toString();
    
    if(m_size != -1)
        retVal += " size: " + std::to_string(m_size);
    
    return retVal;
}

void cStructDecl::PrintSymbolTable()
{
    std::cout << "My table for " << m_identifier->GetSymbol() << " holds" << std::endl;
     for(auto &sym : *m_symTable)
        std::cout << sym.second->GetSymbol() << std::endl;
}

cSymbol* cStructDecl::Find(string symbol)
{
    cSymbol* retVal = nullptr;
  
    if(m_symTable != nullptr)
    {
        map<string,cSymbol*>::iterator it = m_symTable->find(symbol);
        if(it != m_symTable->end())
            retVal = it->second;
    }
    
    return retVal;
}

int cStructDecl::CalculateSize(int offset)
{
    m_offset = 0;
    m_size = m_decls->CalculateSize(m_offset);
    
    m_offset = m_decls->CalculateOffset(offset);
        
    return offset;
}

void cStructDecl::SetSize()
{
    m_identifier->SetSize(m_decls->GetSize());
}

int cStructDecl::GetSize()
{
    return m_identifier->GetSize();
}

int cStructDecl::FindSymbolOffset(cSymbol* symbol)
{
    return m_decls->FindSymbolOffset(symbol);
}

string cStructDecl::GetBaseType()
{
    return m_identifier->GetBaseType();
}

void cStructDecl::GenerateCode()
{
    if(m_decls != nullptr)
        m_decls->GenerateCode();
}