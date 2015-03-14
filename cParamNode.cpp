/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cParamNode.h"

cParamNode::cParamNode(ExprNode* expr)
    :m_expr(expr), m_stackOffset(0)
{}

string cParamNode::toString()
{
    return m_expr->toString();
}

int cParamNode::CalculateSize(int offset)
{
    m_expr->CalculateSize(offset);
    
    return offset;
}

void cParamNode::GenerateCode()
{
    if(m_expr->GetBaseType() == "float")
        gen->EmitString("FLOAT_VAL(Stack_Pointer) = ");
    else
        gen->EmitString("INT_VAL(Stack_Pointer) = ");
    
    m_expr->GenerateCode();
    gen->EmitString(";\n");
    m_stackOffset = m_expr->GetCalculatedSize();
    gen->IncreaseStack(m_stackOffset);
}

int cParamNode::GetOffset()
{
    return m_stackOffset;
}