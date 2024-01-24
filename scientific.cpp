#define _USE_MATH_DEFINES
#include <iostream>
#include "scientific.h"

Scientific::Scientific():Calculator(){};

void Scientific::welcome() const{
    std::cout << "\n\nEnter one of:\n"
    << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow, fact (!)\n"
    << "or exit\n"
    << "You can use 'pi' and 'e' as valid numbers\n";
} 

void Scientific::parseOperation(const std::string& input){
    Calculator::parseOperation(input);
    if (input == "sin"){
        sin();
    }else if (input == "cos"){
        cos();
    }else if (input == "tan"){
        cos();
    }else if (input == "ln"){
        ln();
    }else if (input == "log"){
        log();
    }else if (input == "abs"){
        abs();
    }else if (input == "pow"){
        pow();
    }else if (input == "fact" || input == "!"){
        factorial();
    }
}

double Scientific::parseInput(const std::string& input) const{
    if (input == "res"){
        return res;
    }else if (input == "mem"){
        return mem;
    }else if (input == "pi"){
        return M_PI;
    }else if (input == "e"){
        return M_E;
    }else return std::stod(input);

}

void Scientific::sin(){
    std::string a;
    std::cout<<"_________________________SINE_________________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::sin(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::cos(){
    std::string a;
    std::cout<<"_________________________COSINE_________________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::cos(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::tan(){
    std::string a;
    std::cout<<"_________________________TANGENT_________________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::tan(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::ln(){
    std::string a;
    std::cout<<"____________________NATURAL_LOGARITHM____________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::log(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

    void Scientific::log(){
    std::string a, b;
    std::cout<<"____________________LOGARITHM____________________\n"
                "Step 1.: Enter the base!\n"
                "Step 2.: Press 'Enter' to confirm the number!\n"
                "Step 3.: Enter a number!\n"
                "Step 4.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a>>b;
    res, mem = std::log(parseInput(b))/std::log(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::abs(){
    std::string a;
    std::cout<<"____________________ABSOLUTE____________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = std::abs(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::pow(){
    std::string a,b;
    std::cout<<"____________________POWER____________________\n"
                "Step 1.: Enter the base!\n"
                "Step 2.: Press 'Enter' to confirm the number!\n"
                "Step 3.: Enter the exponent!\n"
                "Step 4.: Press 'Enter' to confirm the operation\n";
    std::cin>>a>>b;
    res, mem = std::pow(parseInput(a), parseInput(b));
    std::cout<<"Result: "<<res<<std::endl;
}

void Scientific::factorial(){
    std::string a;
    std::cout<<"____________________FACTORIAL____________________\n"
                "Step 1.: Enter a number!\n"
                "Step 2.: Press 'Enter' to confirm the operation!\n";
    std::cin>>a;
    res, mem = fact(parseInput(a));
    std::cout<<"Result: "<<res<<std::endl;
}

int fact(int n) {
  if(n > 1)
    return n * fact(n - 1);
  else
    return 1;
}