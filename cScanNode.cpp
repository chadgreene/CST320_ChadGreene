/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cScanNode.h"

cScanNode::cScanNode(ExprNode* expr)
    :m_expr(expr)
{}

string cScanNode::toString()
{
    return "SCAN: " + m_expr->toString();
}

int cScanNode::CalculateSize(int offset)
{
    m_expr->CalculateSize(offset);
    
    return offset;
}

void cScanNode::GenerateCode()
{
    m_expr->GenerateCode();
}