#include <iostream>

using namespace std;

int main() {
    /*
    if(){
        // código que está dentro da condição if.
    } else{
        // código que não está dentro da condição if.
    }
    // teste lógico
    // >, <, >=, <=, ==, !=
    */
    int num;
    char opc = 's';

    cout << "Digite um número: " << "\n\n";
    cin >> num;

    if(num >= 0){
        cout << "Número é positivo!" << "\n\n";
    } else {
        cout << "Número é negativo!" << "\n\n";
    }

    return 0;
}