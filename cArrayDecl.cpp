/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cArrayDecl.h"

cArrayDecl::cArrayDecl(cSymbol* typeId, cSymbol* identifier, cArraySpec* array)
    :m_typeId(typeId), m_identifier(identifier), m_array(array)
{
    m_size = -1;
    m_offset = -1;
    SetSize();
}

string cArrayDecl::toString()
{
    string retVal = "ARRAY: ";
    
    retVal += m_typeId->toString() + " " + m_identifier->toString();
    if(m_array != nullptr)
        retVal += " " + m_array->toString();
    
    if(m_size != -1)
        retVal += " size: " + std::to_string(m_size);
    if(m_offset != -1)
        retVal += " offset: " + std::to_string(m_offset);
    
    return retVal;
}

void cArrayDecl::SetSize()
{
    m_identifier->SetSize(m_typeId->GetSize() * m_array->GetSize());
}

int cArrayDecl::CalculateSize(int offset)
{
    m_offset = offset;
    m_size = m_identifier->GetSize();
    
    return m_offset + m_size;
}

int cArrayDecl::GetSize()
{
    return m_identifier->GetSize();
}

string cArrayDecl::GetBaseType()
{
    return m_identifier->GetBaseType();
}

void cArrayDecl::GenerateCode()
{
    gen->IncreaseStack(m_size);
}