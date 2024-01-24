#include <iostream>
#include "calculator.h"
#include "scientific.h"

using namespace std;

int main(){
    Calculator calc;
    Scientific sci;

    Calculator* calcP;

    bool sciON = false;

    cout << "____________________Description____________________\n"
    << "This calculator has 2 modes, normal and scientific.\n"
    << "You can change it using the 'change' keyword.\n"
    << "-----------------------------------------------------------\n"
    << "It has 2 other special keywords, 'result' and 'mem'.\n"
    << "'result' stores the result of the previous calculation.\n"
    << "'mem' allows you to store and access a number.\n"
    << "Both can be used instead of numbers during calculations.\n"
    << "They are both local to the mode you are using.\n"
    << "-----------------------------------------------------------\n\n";

    calc.welcome();

    string input = "";
    while (cin >> input && input != "exit")
    {
        if (input == "change")
        {
            if (sciON){
                calcP = &calc;
                sciON = false;
                cout << "\nSimple Calculator Activated";
            }else{
                calcP = &sci;
                sciON = true;
                cout << "\nScientific Calculator Activated";
            }
        }
        calcP->parseOperation(input);
        calcP->welcome();
    }

    return 0;
}