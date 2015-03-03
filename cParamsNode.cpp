/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 6 Calculate node sizes and offsets
 * Date: 3/4/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cParamsNode.h"

cParamsNode::cParamsNode()
{}

string cParamsNode::toString()
{
    if(m_params.size() > 0)
    {
        string retVal = "(PARAM:";
    
        for(auto &param : m_params)
            retVal += param->toString()+" ";
        
        retVal += ")\n";
        return retVal;
    }
    
    return "";
}

void cParamsNode::Add(cParamNode* param)
{
    if(param != nullptr)
        m_params.push_back(param);
}

int cParamsNode::CalculateSize(int offset)
{
    for(auto &param : m_params)
        param->CalculateSize(offset);
        
    return offset;
}