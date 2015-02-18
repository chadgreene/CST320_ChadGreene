/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 5 Semantic Error Checking
 * Date: 2/18/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "VarPart.h"

VarPart::VarPart(cSymbol* identifier, ArrayVal* ary)
    :m_identifier(identifier), m_ary(ary)
{}

string VarPart::toString()
{
    string retVal = m_identifier->toString();
    
    if(m_ary != nullptr)
        retVal += "[" + m_ary->toString() + "]";
    
    return retVal;
}

string VarPart::GetType()
{
    return m_identifier->GetType();
}

cSymbol* VarPart::GetIdentifier()
{
    return m_identifier;
}

cDeclNode* VarPart::GetTypeRef()
{
    return m_identifier->GetRef();
}

void VarPart::SetIdentifier(cSymbol* identifier)
{
    m_identifier = identifier;
}

string VarPart::GetBaseType()
{
    if(m_ary != nullptr)
        return m_identifier->GetBaseType();
    else
        return GetType();
}

string VarPart::GetSymbol()
{
    return m_identifier->GetSymbol();
}
