/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 5 Semantic Error Checking
 * Date: 2/18/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "cDeclNode.h"
using std::string;

class cSymbol
{
  public:
    cSymbol(string symbol, bool type = false);
    string toString();
    bool IsType();
    string GetSymbol();
    void SetTypeFlag();
    void SetDeclared();
    bool IsDeclared();
    void SetTypeRef(string typeRef, string baseType, cDeclNode* decl = nullptr);
    string GetType();
    string GetBaseType();
    cDeclNode* GetRef();
    void ReduceSymbolCount();
    
  private:
    string m_symbol;
    int m_sequence;
    static int symbolCount;
    bool m_type;
    bool m_declared;
    string m_typeRef;
    cDeclNode* m_decl;
    string m_baseType;
};