/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cBlockNode.h"

cBlockNode::cBlockNode(map<string,cSymbol*>* symTable, cDeclsNode* decls, cStmtsNode* stmts)
    :m_symTable(symTable), m_decls(decls), m_stmts(stmts)
{
    m_size = -1;
    m_offset = -1;
}

string cBlockNode::toString()
{
    string retVal = "BLOCK:";
    
        //Show sizes and offsets
    if(m_size != -1)
        retVal += " size: " + std::to_string(m_size);
    
    retVal += "\n{\n";
    
    if(m_decls != nullptr)
        retVal += m_decls->toString();
    if(m_stmts != nullptr)
        retVal += m_stmts->toString();
    
    retVal += "\n}";
    return retVal;
}

int cBlockNode::CalculateSize(int offset)
{
        //Align offset
    m_offset = offset;
    
        //Calculate offsets and size for decls
    if(m_decls != nullptr)
        m_offset = m_decls->CalculateSize(m_offset);
        
        //Calculate offsets and size for stmts
    if(m_stmts != nullptr)
        m_offset = m_stmts->CalculateSize(m_offset);
    
        //Set Block size
    m_size = m_offset - offset;
    
        //return passed in offset
    return offset;
}

void cBlockNode::GenerateCode()
{
    if(m_decls != nullptr)
        m_decls->GenerateCode();
    if(m_stmts != nullptr)
        m_stmts->GenerateCode();
        
    gen->ReduceStack(m_size);
}
