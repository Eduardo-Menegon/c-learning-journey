/*Crie uma função que inverte uma string alocada dinamicamente usando ponteiros. */

#include <stdio.h>
#include <stdlib.h>

void inverte(char *palavra, int contador)
{

    int i;

    char temp;

    for (i = 0; i < contador / 2; i++)
    {

        temp = palavra[i];

        palavra[i] = palavra[contador - 1 - i];

        palavra[contador - 1 - i] = temp;
    }
}

int main()
{

    char palavra[50];

    int i, contador = 0;

    printf("Informe sua palavra: ");

    scanf("%s", &palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {

        contador++;
    }

    printf("\nPalavra original: %s\n", palavra);

    inverte(palavra, contador);

    printf("\nPalavra original: %s\n", palavra);

    return 0;
}