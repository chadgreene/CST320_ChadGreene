/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cDeclsNode.h"

cDeclsNode::cDeclsNode()
{
    m_offset = -1;
    m_size = -1;
}

string cDeclsNode::toString()
{
    string retVal = "DECLS:\n{\n";
    
    for(auto &decl : m_decls)
        retVal += decl->toString()+ "\n";
    
    retVal += "}\n";
    
    return retVal;
}

void cDeclsNode::Add(cDeclNode* data)
{
    m_decls.push_back(data);
}

int cDeclsNode::CalculateSize(int offset)
{
    m_offset = offset;
    for(auto &decl : m_decls)
    {
        if(decl->GetBaseType() == "char")
            m_offset = decl->CalculateSize(m_offset);
        else
            m_offset = decl->CalculateSize(WordAlign(m_offset));
    }   
    return m_offset;
}

int cDeclsNode::CalculateOffset(int offset)
{
    for(auto &decl : m_decls)
        offset += decl->GetCalculatedOffset();
    
    return offset;
}

int cDeclsNode::GetSize()
{
    int retVal = 0;
    for(auto &decl : m_decls)
    {
        retVal = WordAlign(retVal);
        retVal += decl->GetSize();
    }
    
    return retVal;
}

int cDeclsNode::FindSymbolOffset(cSymbol* symbol)
{
    int retVal = 0;
    for(auto &decl : m_decls)
    {
        cVarNode* var = dynamic_cast<cVarNode*>(decl);
        if(var != nullptr)
        {
            if(var->GetSymbol() == symbol)
                return var->GetCalculatedOffset();
        }
    }
    
    return retVal;
}

void cDeclsNode::GenerateCode()
{
    for(auto & decl : m_decls)
        decl->GenerateCode();
}