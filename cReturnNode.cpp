/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cReturnNode.h"

cReturnNode::cReturnNode(ExprNode* expr)
    :m_expr(expr)
{
    m_size = -1;
    m_offset = -1;
}

string cReturnNode::toString()
{
    return "RETURN: " + m_expr->toString();
}

int cReturnNode::CalculateSize(int offset)
{
    m_expr->CalculateSize(offset);
    return offset;
}

void cReturnNode::GenerateCode()
{
    if(m_expr->GetBaseType() == "float")
        gen->EmitString("Temp_F = ");
    else
        gen->EmitString("Temp = ");
    
    m_expr->GenerateCode();
    gen->EmitString(";\n");
}