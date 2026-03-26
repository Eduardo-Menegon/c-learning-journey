/*Lógica:
Percorri toda a matriz utilizando dois loops e verifiquei duas condições:
se os elementos da diagonal principal são iguais a 1 (i == j)
e se os demais elementos são iguais a 0 (i != j).

Dificuldade:
A maior dificuldade foi montar e entender a condição lógica correta.

Decisão:
Utilizei uma variável de controle (identidade) para assumir que a matriz é identidade inicialmente,
alterando para 0 caso alguma condição não seja atendida,
garantindo uma validação completa da matriz.

=============================================================================================

Uma matriz identidade é uma matriz quadrada onde os elementos da diagonal principal são 1 e os demais são 0. Escreva um programa que leia uma matriz 4x4, diga se ela é uma matriz identidade e exiba a matriz formatada.



Exemplo:



Matriz identidade? SIM



 1   0   0   0

 0   1   0   0

 0   0   1   0

 0   0   0   1 */

#include <stdio.h>

#include <stdlib.h>

int main()
{

    int i, j, matriz[4][4], identidade = 1;

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("\nInforme o valor da matriz [%d][%d]: ", i + 1, j + 1);

            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j]

                                                                != 0))
            {

                identidade = 0;
            }
        }
    }

    if (identidade == 1)
    {

        printf("\nMatriz identidade?  SIM  \n");
    }
    else
    {

        printf("\nMatriz identidade?  NAO  \n");
    }

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("  %d  ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}