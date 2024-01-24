#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator{
//Derived calsses can access
protected:
    double res; //result
    double mem; //memory

public:
    //Constructor
    Calculator();

    //Operations
    void add();             
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();

    //Mem setter and getter
    void setMem();          
    void getMem() const;

    //Virtual destructor
    virtual ~Calculator() = default;

    /// Parse input to number when it's 'result' or 'mem'
    virtual double parseInput(const std::string&) const;

    /// provides data on user options, will be overloaded
    virtual void welcome() const;

    /// parse input and decide which member func to call
    virtual void parseOperation(const std::string&);
};

#endif // CALCULATOR_H