#pragma once
//*******************************************************
// Purpose: Utility functions for code generation
//
// Author: Philip Howard
// Email:  phil.howard@oit.edu
//
// Date: 2/20/2015
//
//*******************************************************
#include <iostream>
#include <string>

class codegen
{
public:
    codegen(){}
    bool InitOutput(const char *outfileName);
    bool FinalizeOutput();
    void StartFunctionOutput();
    void EndFunctionOutput();
    void EmitString(std::string str);
    void EmitInteger(int val);
    void EmitFloat(double val);
    void RewriteFunctions();
    std::string GenerateLabel();
    void EmitPrintTemp();
    void EmitPrintTemp_F();
    void AssignTemp(int val);
    void AssignTemp(float val);
    void Push(int offset, int val);
    void Push(int offset, double val);
    void Reference(int offset, bool isFloat = false);
    void IncreaseStack(int size);
    void ReduceStack(int size);
    
};