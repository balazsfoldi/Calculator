#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include "calculator.h"
#include <string>
#include <array>
#include <cmath>

class Scientific: public Calculator{
public:
    //Constructor
    Scientific();
    virtual void welcome() const override;        
    virtual void parseOperation(const std::string& input) override;
    virtual double parseInput(const std::string&) const override;
    /// Extra operations
    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();
    void factorial();
};

int fact(int);

#endif // SCIENTIFIC_H