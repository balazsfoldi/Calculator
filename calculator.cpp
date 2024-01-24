#include <iostream>
#include "calculator.h"

Calculator::Calculator(): mem(0.0), res(0.0) {};

void Calculator::setMem(){
    std::cout<<"Enter the number: ";
    std::cin>>mem;
}   
void Calculator::getMem() const {std::cout<<mem;}

void Calculator::add(){
    std::string a;
    std::string b;
    std::cout<<"____________________ADDITION____________________\n"
                "Step 1.: Enter the first number!\n"
                "Step 2.: Press 'Enter' to confirm the number!\n"
                "Step 3.: Enter the other number!\n"
                "Step 4.: Press 'Enter to confirm the operation!\n\n";
    std::cin>>a>>b;
    res, mem = parseInput(a) + parseInput(b);
    std::cout<<"Result: "<<mem<<std::endl;
}

void Calculator::subtract(){
    std::string a;
    std::string b;
    std::cout<<"_________________________SUBTRACTION_________________________\n"
                "Step 1.: Enter the first number (minuend)!\n"
                "Step 2.: Press 'Enter' to confirm the first number!\n"
                "Step 3.: Enter the second number (subtrahend)!\n"
                "Step 4.: Press 'Enter to confirm the operation!\n\n";
    std::cin>>a>>b;
    res, mem = parseInput(a) - parseInput(b);
    std::cout<<"Result: "<<res<<std::endl;
}

void Calculator::multiply(){
    std::string a;
    std::string b;
    std::cout<<"____________________MULTIPLICATION____________________\n"
                "Step 1.: Enter the first number!\n"
                "Step 2.: Press 'Enter' to confirm the number!\n"
                "Step 3.: Enter the other number!\n"
                "Step 4.: Press 'Enter to confirm the operation!\n\n";
    std::cin>>a>>b;
    res, mem = parseInput(a) * parseInput(b);
    std::cout<<a<<"Result: "<<res<<std::endl;
}

void Calculator::divide(){
    std::string a;
    std::string b;
    std::cout<<"_________________________DIVISION_________________________\n"
                "Step 1.: Enter the first number (dividend)!\n"
                "Step 2.: Press 'Enter' to confirm the first number!\n"
                "Step 3.: Enter the second number (divisor)!\n"
                "Step 4.: Press 'Enter to confirm the operation!\n\n";
    std::cin>>a>>b;
    res, mem = parseInput(a) / parseInput(b);
    std::cout<<a<<"Result: "<<res<<std::endl;
}

void Calculator::square(){
    std::string a;
    std::cout<<"_________________________SQUARE_________________________\n"
                "Step 1.: Enter the number (base)!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = parseInput(a) * parseInput(a);
    std::cout<<a<<"Result: "<<res<<std::endl;
}

void Calculator::sqrt(){
    std::string a;
    std::cout<<"____________________SQUARE_ROOT____________________\n"
                "Step 1.: Enter the number (radicant)!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::sqrt(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

double Calculator::parseInput(const std::string& input) const{
    if (input == "res"){
        return res;
    }else if (input == "mem"){
        return mem;
    }else return std::stod(input);
}

void Calculator::parseOperation(const std::string& input){
    if (input == "+" || input == "add" || input == "addition"){
        add();
    }else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus"){
        subtract();
    }else if (input == "/" || input == "divide" || input == "div" || input == "division"){
        divide();
    }else if (input == "*" || input == "multiply"){
        multiply();
    }else if (input == "sqrt"){
        sqrt();
    }else if (input == "square"){
        square();
    }else if (input == "setmem"){
        setMem();
    }else if (input == "printmem"){
        getMem();
    }
}

void Calculator::welcome() const{
    std::cout <<"\n___________________________________CALCULATOR___________________________________\n"
                "You can enter an operation. (+, -, *, /, square, sqrt)\n"
                "You can enter 'setmem' or 'printmem' to set the memory or to print it's content\n"
                "You can leave by entering 'exit'\n"
                "---------------------------------------------------------------------------------\n";
}