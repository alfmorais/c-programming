#include <iostream>

int number1;
int number2;

std::cout << "Digite o primeiro número: ";
std::cin >> number1;
std::cout << "Digite o segundo número: ";
std::cin >> number2;

if (number1 == number2)
    cout << number1 << " == " << number2 << std::endl;

if (number1 != number2)
    cout << number1 << " != " << number2 << std::endl;

if (number1 < number2)
    cout << number1 << " < " << number2 << std::endl;

if (number1 > number2)
    cout << number1 << " > " << number2 << std::endl;

// Pode ser usado outros operadores de condicionais:
// >= maior igual a
// <= menor igual a