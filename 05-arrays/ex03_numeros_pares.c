/*Crie um programa que recebe 10 números inteiros do usuário e retorna um array com apenas os números pares.*/

#include <stdio.h>
#include <string.h>

int main()
{

    int i, par[10];

    for (i = 0; i < 10; i++)
    {

        printf("%d numero: ", i + 1);

        scanf("%d", &par[i]);
    }

    printf("\n========Numeros pares==========\n");

    for (i = 0; i < 10; i++)
    {

        if (par[i] % 2 == 0)
        {

            printf("%d ", par[i]);
        }
    }

    return 0;
}