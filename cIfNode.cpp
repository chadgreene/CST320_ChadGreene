/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cIfNode.h"

cIfNode::cIfNode(ExprNode* expr, cStmtNode* stmt1, cStmtNode* stmt2)
    :m_expr(expr), m_stmt1(stmt1), m_stmt2(stmt2)
{}

string cIfNode::toString()
{
    string retVal = "(IF: " + m_expr->toString() + "\n" + m_stmt1->toString() + "\n";
    
    if(m_stmt2 != nullptr)
        retVal += "ELSE:\n" + m_stmt2->toString() + "\n";
    
    retVal += ")";
    
    return retVal;
}

int cIfNode::CalculateSize(int offset)
{
    if(m_expr != nullptr)
        m_expr->CalculateSize(offset);
    if(m_stmt1 != nullptr)
        m_stmt1->CalculateSize(offset);
    if(m_stmt2 != nullptr)
    m_stmt2->CalculateSize(offset);
    
    return offset;
}

void cIfNode::GenerateCode()
{
    string elseLbl = gen->GenerateLabel();
    string endLbl = gen->GenerateLabel();
    gen->EmitString("if(!");
    m_expr->GenerateCode();
    gen->EmitString(") goto " + elseLbl + ";\n");
    if(m_stmt1 != nullptr)
    {
        m_stmt1->GenerateCode();
        gen->EmitString("goto " + endLbl + ";\n");
    }
    gen->EmitString(elseLbl + ":\n");
    if(m_stmt2 != nullptr)
        m_stmt2->GenerateCode();
    gen->EmitString(endLbl + ":\n");
}