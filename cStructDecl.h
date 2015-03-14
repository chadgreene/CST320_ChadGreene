/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#pragma once

#include <map>
#include "cDeclNode.h"
#include "cDeclsNode.h"
#include "cSymbol.h"
using std::map;

class cStructDecl : public cDeclNode
{
    public:
        cStructDecl(map<string,cSymbol*>* symTable = nullptr, cDeclsNode* decls = nullptr, cSymbol* identifier = nullptr);
        string toString();
        void PrintSymbolTable();
        cSymbol* Find(string symbol);
        int CalculateSize(int offset);
        int GetSize();
        int FindSymbolOffset(cSymbol* symbol);
        string GetBaseType();
        void GenerateCode();
    
    private:
        map<string,cSymbol*>* m_symTable;
        cDeclsNode* m_decls;
        cSymbol* m_identifier;
        void SetSize();
};