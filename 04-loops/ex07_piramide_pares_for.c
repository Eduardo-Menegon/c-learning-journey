/*Lógica:
Usei dois loops: o externo controla as linhas e o interno a quantidade de números por linha.
Criei uma variável "num" que começa em 2 e vai sendo incrementada de 2 em 2,
garantindo que apenas números pares sejam exibidos em sequência.

 Dificuldade:
 O principal desafio foi manter a sequência correta dos números pares sem reiniciar a cada linha.

 Decisão:
 Optei por usar uma variável acumuladora (num += 2) fora do loop interno,
 para manter continuidade entre as linhas e evitar cálculos desnecessários.

 ============================================================================================

 Escreva um programa que exiba uma pirâmide de números pares com N linhas.



Exemplo de saída se N for 10:



2

4 6

8 10 12

14 16 18 20

22 24 26 28 30

32 34 36 38 40 42

44 46 48 50 52 54 56

58 60 62 64 66 68 70 72

74 76 78 80 82 84 86 88 90

92 94 96 98 100 102 104 106 108 110 */

#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, num = 2, n;

    printf("Informe quantas linhas vai ter o triangulo: ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            printf(" %d ", num);

            num += 2;
        }

        printf("\n");
    }

    return 0;
}