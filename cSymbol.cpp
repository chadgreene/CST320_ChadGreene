/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cSymbol.h"

int cSymbol::symbolCount = 0;

cSymbol::cSymbol(string symbol, bool type)
    :m_symbol(symbol), m_sequence(++symbolCount), m_type(type), m_declared(false), m_typeRef(""), m_decl(nullptr), m_size(0)
{}

string cSymbol::toString()
{
    return "sym: "+ m_symbol + " " + std::to_string(m_sequence);
}

bool cSymbol::IsType()
{
    return m_type;
}

string cSymbol::GetSymbol()
{
    return m_symbol;
}

void cSymbol::SetTypeFlag()
{
    m_type = true;
}

void cSymbol::SetDeclared()
{
    m_declared = true;
}

bool cSymbol::IsDeclared()
{
    return m_declared;
}

void cSymbol::SetTypeRef(string typeRef, string baseType, cDeclNode* decl)
{
    m_typeRef = typeRef;
    m_baseType = baseType;
    m_decl = decl;
}

string cSymbol::GetType()
{
    return m_typeRef;
}

string cSymbol::GetBaseType()
{
    return m_baseType;
}

cDeclNode* cSymbol::GetRef()
{
    return m_decl;
}

void cSymbol::SetDecl(cDeclNode* decl)
{
    m_decl = decl;
}

void cSymbol::ReduceSymbolCount()
{
    symbolCount--;
}

void cSymbol::SetSize(int size)
{
    m_size = size;
}

int cSymbol::GetSize()
{
    return m_size;
}
