/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 4 Abstract Syntax Tree
 * Date: 2/8/15
 * 
 * Purpose: Build an abstract syntax tree by using Bison/Lex to parse a source
 * file into appropriate nodes
*******************************************************************************/
#include "cArraySpec.h"

cArraySpec::cArraySpec()
{}

string cArraySpec::toString()
{
    string retVal = "(ARRAYSPEC:";
    
        //Cycle through array values adding each to a string
    for(auto &i : m_array)
        retVal += " " + std::to_string(i);

    retVal += ")\n";
        //Return string
    return retVal;
}
void cArraySpec::Add(int val)
{
    m_array.push_back(val);
}