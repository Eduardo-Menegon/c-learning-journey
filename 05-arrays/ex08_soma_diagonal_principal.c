/*Dada uma matriz 4x4, exiba a soma da diagonal principal.

Exemplo de saída:

Soma da diagonal principal: 34 */

#include <stdio.h>

#include <stdlib.h>

int main()
{

    int i, j, soma = 0, matriz[4][4];

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("\nInformes os valores da sua matriz[%d][%d]: ", i + 1, j + 1);

            scanf("%d", &matriz[i][j]);

            if (i == j)
            {

                soma += matriz[i][j];
            }
        }
    }

    printf("\n===============Matriz=================\n");

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf(" %d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("Soma da diagonal principal: %d", soma);

    return 0;
}