// Aula sobre váriaveis
#include <iostream>

using namespace std;


int main(){
    // TIPO NOME;
    // TIPO NOME = VALOR;

    // 10, 5, -5, 0.
    int vidas = 0;

    // letra: exemplo 'a'.
    // chaves identifica quantidade de caracteres suportada pelo var tipo char.
    char letra[20] = "Alfredo";

    // numeral que recebe casa decimais, precisão!
    double decimal = 3.1415; 

    // numeral que recebe casa decimais, menor precisão!
    float decimal_float = 1.585;

    // true ou false.
    bool vivo = true;

    // string: armazena texto.
    string nome = "Joaquim";

    cout << "Digite o número de vidas: ";
    cin >> vidas;

    cout << vidas << "\n";

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << letra << "\n";

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << decimal << "\n";

    cout << "Digite um número pi: ";
    cin >> decimal_float;

    cout << decimal_float << "\n";

    cout << "Quantidade de vidas? "<< vivo << "\n";

    cout << "Digite um nome: ";
    cin >> nome;
    
    cout << nome << "\n";

    return 0;
}