/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cPrintNode.h"

cPrintNode::cPrintNode(ExprNode* expr)
    :m_expr(expr)
{}

string cPrintNode::toString()
{
    return "PRINT: " + m_expr->toString();
}

int cPrintNode::CalculateSize(int offset)
{
    m_expr->CalculateSize(offset);
    
    return offset;
}

void cPrintNode::GenerateCode()
{
    if(m_expr->GetBaseType() == "float")
        gen->EmitString("printf(\"%6.4f\\n\",");
    else
        gen->EmitString("printf(\"%d\\n\",");
    m_expr->GenerateCode();
    gen->EmitString(");\n");
}