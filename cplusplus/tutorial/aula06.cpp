#include <iostream>

using namespace std;

// variaveis globais
int number3; int number4;

int main(){
    // variaveis locais
    int number1; int number2;

    cout << "Digite o número 1: ";
    cin >> number1;

    cout << "Digite o número 2: ";
    cin >> number2;

    // Operadores matemáticos: + - / * % ()

    int res;

    number3 = 5;
    number4 = 2;

    res = (number1 + number2 + number3 + number4) - 10;
    cout << "Soma de todos as variaveis: " << res << "\n\n";

    res = (number1 + number2) * number4;
    cout << "Calculo aleatório: " << res << "\n\n";

    double res_div = (11 / 3);
    double res_mod = (11 % 3);

    cout << "Divisão de 11 / 3: " << res_div << "\n\n";
    cout << "Modulo de 11 % 3: " << res_mod << "\n\n";
    
    return 0;
}