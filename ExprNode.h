/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <string>
#include "cAstNode.h"
#include "cDeclNode.h"
using std::string;
class ExprNode : public cAstNode
{
  public:
    virtual string GetType() = 0;
    virtual string GetBaseType() = 0;
    virtual double GetValue() = 0;

      //Default declnode return for expressions that do not have/require one
    virtual cDeclNode* GetTypeRef()
    {
      return nullptr;
    }
    
      //Default CalculateSize for expressions (float/int)
    virtual int CalculateSize(int offset)
    {
      return offset;
    }
};