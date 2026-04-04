/*Crie uma função soma que recebe dois ponteiros para inteiros e retorna a soma dos valores apontados. */

#include <stdio.h> 
#include <stdlib.h>

int soma(int *x, int *y) { return *x + *y; }

int main()
{
    int x, y;
    int resultado;

    printf("Informe o dois valores: \n");
    scanf("%d %d", &x, &y);

    resultado = soma(&x, &y);

    printf("Soma dos numeros: %d", resultado);
    return 0;
}