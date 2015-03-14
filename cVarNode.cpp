/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cVarNode.h"

cVarNode::cVarNode(cSymbol* typeId, cSymbol* identifier)
    :m_typeId(typeId), m_identifier(identifier)
{
    m_offset = -1;
    m_size = -1;
}

string cVarNode::toString()
{
    string retVal = "VAR: ";
    
    retVal += m_typeId->toString() + " " + m_identifier->toString();
    
    if(m_size != -1)
        retVal += " size: " + std::to_string(m_size);
    if(m_offset != -1)
        retVal += " offset: " + std::to_string(m_offset);
    
    return retVal;
}

cSymbol* cVarNode::GetSymbol()
{
    return m_identifier;
}
string cVarNode::GetBaseType()
{
    return m_identifier->GetBaseType();
}

int cVarNode::CalculateSize(int offset)
{
    m_offset = offset;
    m_size = m_identifier->GetSize();
    
    return m_offset + m_size;
}

int cVarNode::GetSize()
{
    return m_identifier->GetSize();
}

void cVarNode::GenerateCode()
{
    gen->IncreaseStack(m_size);
}