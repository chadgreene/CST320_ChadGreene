/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cWhileNode.h"

cWhileNode::cWhileNode(ExprNode* expr, cStmtNode* stmt)
    :m_expr(expr), m_stmt(stmt)
{}

string cWhileNode::toString()
{
    return "(WHILE: " + m_expr->toString() + "\n" + m_stmt->toString() + "\n)";
}

int cWhileNode::CalculateSize(int offset)
{
    m_expr->CalculateSize(offset);
    if(m_stmt != nullptr)
        m_stmt->CalculateSize(offset);
    
    return offset;
}

void cWhileNode::GenerateCode()
{
    string loopLbl = gen->GenerateLabel();
    string endLbl = gen->GenerateLabel();
    gen->EmitString(loopLbl + ":\n");
    gen->EmitString("if(!");
    m_expr->GenerateCode();
    gen->EmitString(") goto " + endLbl + ";\n");
    m_stmt->GenerateCode();
    gen->EmitString("goto " + loopLbl + ";\n");
    gen->EmitString(endLbl + ":\n");
    
}