/*Crie uma função que recebe uma string (char[ ]) e retorna a quantidade de vogais. */

#include <stdio.h>

#include <stdlib.h>

int vogais(char palavra[100])
{

    int i, contador = 0;

    for (i = 0; palavra[i] != '\0'; i++)
    { 

        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||

            palavra[i] == 'o' || palavra[i] == 'u')
        {

            contador++;
        }
    }

    return contador;
}