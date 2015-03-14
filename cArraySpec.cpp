/*******************************************************************************
 * Author: Chad Greene
 * Lab: Lab 7 Generate Code
 * Date: 3/14/15
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

    retVal += ")";
        //Return string
    return retVal;
}

void cArraySpec::Add(int val)
{
    m_array.push_back(val);
}

int cArraySpec::GetSize()
{
    int retVal = 0;
    list<int>::iterator it = m_array.begin();
    if(it != m_array.end())
        retVal = *it;
    for(++it; it != m_array.end(); ++it)
        retVal *= *it;
    
    return retVal;
}
