#ifndef FACADE_H
#define FACADE_H
#include <iostream>

class Scanner
{
public:
    void Scan() { std::cout << "Sacnner scan." << std::endl; }
};

class Parser
{
public:
    void Parse() { std::cout << "Parser parse." << std::endl; }
};

class GenMidCode
{
public:
    void GenCode() { std::cout << "GenMidCode genCode." << std::endl; }
};

class GenMachineCode
{
public:
    void GenCode() { std::cout << "GenMachineCode genCode." << std::endl; }
};

class Compiler
{
public:
    void run() {
        Scanner scan;
        Parser parser;
        GenMidCode genMidCode;
        GenMachineCode genMachineCode;
        scan.Scan();
        parser.Parse();
        genMidCode.GenCode();
        genMachineCode.GenCode();
    }
};

#endif // FACADE_H
