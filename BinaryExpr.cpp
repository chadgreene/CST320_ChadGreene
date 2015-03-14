/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "BinaryExpr.h"

BinaryExpr::BinaryExpr(ExprNode* lhs, char oper, ExprNode* rhs)
    :m_lhs(lhs), m_oper(oper), m_rhs(rhs)
{
    if(m_lhs->GetBaseType() == "float" || m_rhs->GetBaseType() == "float")
        m_size = 8;
    else
        m_size = 4;
}

string BinaryExpr::toString()
{
    return "(EXPR: " + m_lhs->toString() + " " + m_oper + " " + m_rhs->toString() + ")";
}

string BinaryExpr::GetType()
{
    if(m_lhs->GetBaseType() == "float" || m_rhs->GetBaseType() == "float")
        return "float";
        
    return m_lhs->GetType();
}

string BinaryExpr::GetBaseType()
{
    return GetType();
}

int BinaryExpr::CalculateSize(int offset)
{
    m_lhs->CalculateSize(offset);
    m_rhs->CalculateSize(offset);
    
    return offset;
}

double BinaryExpr::GetValue()
{
    double lhs = m_lhs->GetValue();
    double rhs = m_rhs->GetValue();
    double retVal = 0;
    
    switch(m_oper)
    {
        case '+':
            retVal = lhs + rhs;
            break;
        case '-':
            retVal = lhs - rhs;
            break;
        case '*':
            retVal = lhs * rhs;
            break;
        case '/':
            if(rhs != 0)
                retVal = lhs / rhs;
            break;
        case '%':
            if(rhs != 0)
                retVal = fmod(lhs, rhs);
            break;
    }
    
    return retVal;
}

void BinaryExpr::GenerateCode()
{
    gen->EmitString("(");
    m_lhs->GenerateCode();
    gen->EmitString(&m_oper);
    m_rhs->GenerateCode();
    gen->EmitString(") ");
}