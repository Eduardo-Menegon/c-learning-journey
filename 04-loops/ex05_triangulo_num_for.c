/*Escreva um programa que exiba um triângulo numérico com N linhas, onde cada linha tem os números de 1 até a posição atual (N).

Exemplo de N = 5:

1

1 2

1 2 3

1 2 3 4

1 2 3 4 5 */

#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, num;

    printf("Informe o numero: ");

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {

        for (j = 0; j <= i; j++)
        {

            printf(" %d ", j + 1);
        }

        printf("\n");
    }

    return 0;
}