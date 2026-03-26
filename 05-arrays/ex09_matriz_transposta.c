/*Lógica:
Percorri a matriz original utilizando dois loops e copiei os valores para uma nova matriz,
invertendo os índices (linha vira coluna e coluna vira linha).

Dificuldade:
A principal dificuldade foi entender a inversão dos índices na transposição,
já que exige atenção para não trocar posições incorretamente e manter o formato correto da matriz.

Decisão:
Decidi criar uma segunda matriz para armazenar a transposta,
pois isso facilita a visualização e evita modificar a matriz original durante o processo.

=============================================================================================

Dada uma matriz 3x2, imprima a sua transposta (2x3).

Exemplo de saída:

Digite os 6 valores da matriz 3x2 (linha por linha):*/

#include <stdio.h>

#include <stdlib.h>

int main()
{

    int i, j, x = 0, matriz[3][2], trasposta[2][3];

    printf("\nDigite os 6 valores da matriz 3x2 (linha por linha):\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 2; j++)
        {

            printf("Elemento [%d][%d]: ", i + 1, j + 1);

            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 2; j++)
        {

            trasposta[j][i] = matriz[i][j];
        }
    }

    printf("\n============Matriz=============\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 2; j++)
        {

            printf(" %d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n================trasposta==========\n");

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf(" %d ", trasposta[i][j]);
        }

        printf("\n");
    }

    return 0;
}