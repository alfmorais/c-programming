#include <iostream>

using namespace std;

int main() {
    // incremento e decremento
    int n1,n2;

    n1 = 10;
    n2 = 10;

    cout << "Valor de n1: " << n1 << "\n\n";
    cout << "Valor de n2: " << n2 << "\n\n";
    
    // n1 = n1 + 1;
    // n2 = n2 - 1;
    // Outra forma de incremento e decremento
    // n1 += 1;
    // n2 -= 1;
    // pode ser usados em outras operações matematicas
    // ++n1;
    // n2++;

    cout << "Valor de n1: " << ++n1 << "\n\n";
    cout << "Valor de n2: " << n2++ << "\n\n";

    return 0;
}