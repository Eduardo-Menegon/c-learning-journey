/*Crie um programa que imprima um triângulo invertido de números.

🔹 O usuário entra com um número N.

🔹 A saída esperada, para N = 5, seria:

1 2 3 4 5

1 2 3 4

1 2 3

1 2

1 */

#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, num;

    printf("Informe o numero: ");

    scanf("%d", &num);

    for (i = num; i > 0; i--)
    {

        for (j = 1; j <= i; j++)
        {

            printf(" %d ", j);
        }

        printf("\n");
    }

    return 0;
}