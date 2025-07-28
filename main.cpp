#include <iostream>
#include "functions.h"


int main()
{
    std::cout << "Addition [+] || Subtraction [-] || Multiplication [*] || Division [/]" << std::endl;

    char optrn{};
    std::cout << "Type in the operation symbol you want to perform from above: ";
    std::cin >> optrn;

    double firstNumber{};
    double secondNumber{};


    if(optrn == '+' || optrn == '-' || optrn == '*' || optrn == '/')
    {
        std::cout << "Type in the first number: ";
        std::cin >> firstNumber;
        std::cout << "Type in the second number: ";
        std::cin >> secondNumber;
        if(optrn == '+')
        {
            double result = add(firstNumber, secondNumber);
            std::cout << firstNumber << " + "  << secondNumber << " = ";
            std::cout << result;
        }
        if(optrn == '-')
        {
            double result = subtract(firstNumber, secondNumber);
            std::cout << firstNumber << " - "  << secondNumber << " = ";
            std::cout << result;
        }
        if(optrn == '*')
        {
            double result = product(firstNumber, secondNumber);
            std::cout << firstNumber << " * "  << secondNumber << " = ";
            std::cout << result;
        }
        if(optrn == '/')
        {
            double result = divide(firstNumber, secondNumber);
            std::cout << firstNumber << " / "  << secondNumber << " = ";
            std::cout << result;
        }
    }
    else
    {
        std::cout << "Input a valid operation." << std::endl;
    }

    return 0;
}
