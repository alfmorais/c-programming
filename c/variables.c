#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* definindo variaveis do programa */
    char characterName[] = "John";
    int characterAge = 35;

    /* %s para usar com string */
    /* %d para usar com numeros */
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    /* Alterando o valor das variaveis*/
    characterAge = 19;
    printf("He really liked the name %s\n", characterName);
    printf("But did not like being %d.\n", characterAge);

    return 0;
}