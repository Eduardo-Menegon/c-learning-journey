/*Um banco quer somar todos os valores de uma matriz 2x3 que representa o valor arrecadado por 2 agências em 3 dias. Imprima o total arrecadado.

Exemplo de saída:

Agencia 1, Dia 1: 1890

 Agencia 1, Dia 2: 12000

 Agencia 1, Dia 3: 7000

 Agencia 2, Dia 1: 976

 Agencia 2, Dia 2: 123

 Agencia 2, Dia 3: 80

 Total arrecadado: R$22069*/

#include <stdio.h>

#include <stdlib.h>

int main()
{

    int banco[2][3], i, j, soma = 0;

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("\nInforme o valor da agencia %d, Dia %d:  ", i + 1, j + 1);

            scanf("%d", &banco[i][j]);

            soma += banco[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("\nAgencia %d, Dia %d: %d\n", i + 1, j + 1, banco[i][j]);
        }
    }

    printf("\nTotal arrecadado: %d", soma);

    return 0;
}