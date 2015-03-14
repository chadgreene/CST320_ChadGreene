/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cSymbolTable.h"

cSymbolTable* cSymbolTable::m_symbols = nullptr;

cSymbolTable::cSymbolTable()
{
        //Push global map onto table
    m_tables.push_front(new map<string,cSymbol*>());
        
        //Add char datatype
    cSymbol* global = new cSymbol("char", true);
    global->SetTypeRef("char", "char", nullptr);
    global->SetSize(1);
    m_tables.front()->insert(std::pair<string,cSymbol*>("char", global));
    
        //Add int datatype
    global = new cSymbol("int", true);
    global->SetTypeRef("int", "int", nullptr);
    global->SetSize(4);
    m_tables.front()->insert(std::pair<string,cSymbol*>("int", global));
    
        //Add float datatype
    global = new cSymbol("float", true);
    global->SetTypeRef("float","float",nullptr);
    global->SetSize(8);
    m_tables.front()->insert(std::pair<string,cSymbol*>("float", global));
}

cSymbolTable* cSymbolTable::GetInstance()
{
        //Gets singleton instance of symboltable
    if(m_symbols == nullptr)
        m_symbols = new cSymbolTable();
    
    return m_symbols;
}

map<string,cSymbol*>* cSymbolTable::IncreaseScope()
{
    map<string,cSymbol*> * newMap = new map<string,cSymbol*>();
    //Add symbol table to list
    m_tables.push_front(newMap);
    return newMap;
}

void cSymbolTable::DecreaseScope()
{
    //Remove symbol table from stack    
    m_tables.pop_front();
}

cSymbol* cSymbolTable::InsertSymbol(string symbol, bool type)
{
    //Define return variable
    cSymbol * sym;
    
    //Search for symbol already in table
    map<string,cSymbol*>::iterator it = m_tables.front()->find(symbol);
    
    //Add symbol if it doesn't already exist
    if(it == m_tables.front()->end())
    {
        sym = new cSymbol(symbol, type);
        m_tables.front()->insert(std::pair<string,cSymbol*>(symbol, sym));
    }
    //Otherwise get symbol from symbol table
    else
        sym = it->second;
    
    return sym;
}

//Lookups a symbol from all symbol tables currently in list
cSymbol* cSymbolTable::Lookup(string symbol)
{
        //Iterator for list of maps
    list<map<string,cSymbol*>*>::iterator tbl;
    for(tbl = m_tables.begin(); tbl != m_tables.end(); ++tbl)
    {
            //Search map for symbol
        map<string,cSymbol*>::iterator sym = (*tbl)->find(symbol);
        
            //If found return symbol
        if(sym != (*tbl)->end())
            return sym->second;
    }
    
        //return nothing
    return nullptr;
}

//Checks to see if a symbol is in the current symbol table
bool cSymbolTable::InCurrentScope(string symbol)
{
        //Search for symbol in current scope
    map<string,cSymbol*>::iterator it = m_tables.front()->find(symbol);
    
        //If symbol is in current scope return true
    if(it != m_tables.front()->end())
        return true;
    
    return false;
}

//Allows removal of symbol from table and decrements the symbol counter
void cSymbolTable::RemoveSymbol(cSymbol* symbol)
{
    //symbol->ReduceSymbolCount();
    m_tables.front()->erase(symbol->GetSymbol());
}