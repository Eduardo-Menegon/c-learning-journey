/*Crie uma função que receba três inteiros e retorne o maior deles.*/

#include <stdio.h>

#include <stdlib.h>

int maior(int a, int b, int c)
{

    if (a >= b && a >= c)
    {

        return 0;
    }
    else if (b >= a && b >= c)
    {

        return 1;
    }
    else if (c >= a && c >= b)
    {

        return 2;
    }
}

int main()
{

    int a, b, c;

    printf("Informe o valor dos 3 numeros: \n");

    scanf("%d %d %d", &a, &b, &c);

    if (maior(a, b, c) == 0)
    {

        printf("%d e o maior numero", a);
    }

    else if (maior(a, b, c) == 1)
    {

        printf("%d e o maior numero", b);
    }

    else if (maior(a, b, c) == 2)
    {

        printf("%d e o maior numero", c);
    }

    return 0;
}