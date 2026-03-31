/*Crie uma função que imprime um quadrado de asteriscos com lado n. O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...). */

#include <stdio.h>

#include <stdlib.h>

void quadrado(char caracter[2], int num)
{

    int i, j;

    for (i = 0; i < num; i++)
    {

        for (j = 0; j < num; j++)
        {

            printf(" %s ", caracter);
        }

        printf("\n");
    }
}

int main()
{

    int num;

    char caracter[2];

    printf("Informe o tamanho do quadrado: ");

    scanf("%d", &num);

    printf("Informe qual caracter deseja utilizar(@, #, $...): ");

    scanf("%s", &caracter);

    quadrado(caracter, num);

    return 0;
}