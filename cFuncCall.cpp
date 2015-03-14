/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cFuncCall.h"

cFuncCall::cFuncCall(cSymbol* identifier, cParamsNode* params)
    :m_identifier(identifier), m_params(params)
{
}

string cFuncCall::toString()
{
    string retVal = "(FUNC CALL: " + m_identifier->toString();
    
    if(m_params != nullptr)
        retVal += m_params->toString();
        
    retVal += ")";
    
    return retVal;
}

string cFuncCall::GetType()
{
    return m_identifier->GetType();
}

string cFuncCall::GetBaseType()
{
    return GetType();
}

int cFuncCall::CalculateSize(int offset)
{
    m_params->CalculateSize(offset);
    
    return offset;
}

void cFuncCall::GenerateCode()
{
    gen->EmitString("INT_VAL(Stack_Pointer) = Frame_Pointer;\n");
    gen->IncreaseStack(4);
    if(m_params != nullptr)
        m_params->GenerateCode();
    gen->EmitString("Frame_Pointer = Stack_Pointer -" + std::to_string(m_params->GetParamsOffset()) + ";\n");
    gen->EmitString(m_identifier->GetSymbol() + "();\n");
    gen->ReduceStack(4);
    gen->EmitString("Frame_Pointer = INT_VAL(Stack_Pointer);\n");
    
    
}