/*Crie uma função que recebe duas notas (float) e retorna a média com 2 casas decimais. */

#include <stdio.h>

#include <stdlib.h>

int media(int numA, int numB)
{

    return (numA + numB) / 2;
}

int main()
{

    int numA, numB;

    printf("Informe o numero: ");

    scanf("%d", &numA);

    printf("Informe o numero: ");

    scanf("%d", &numB);

    printf("O valor da media e: %d", media(numA, numB));

    return 0;
}