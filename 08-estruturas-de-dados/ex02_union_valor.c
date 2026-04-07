/*Crie uma union chamada Valor que possa armazenar um inteiro, um float ou um char. Crie um programa que permita ao usuário escolher qual tipo deseja armazenar e mostre o valor.*/

#include <stdio.h>

#include <stdlib.h>

union valor
{

    int inteiro;

    float flutuante;

    char string[50];
};

int main()
{

    int escolha;

    union valor p1;

    printf("Escolha uma variavel para armazenar: \n");

    printf(" 1-inteiro\n 2-flutuante\n 3-string\n ");

    scanf("%d", &escolha);

    switch (escolha)
    {

    case 1:

        printf("\nInforme o numero inteiro que deseja armazenar: \n");

        scanf("%d", &p1.inteiro);

        printf("Numero inteiro %d armazenado", p1.inteiro);

        break;

    case 2:

        printf("\nInforme o numero flutuante que deseja armazenar: \n");

        scanf("%f", &p1.flutuante);

        printf("Numero flutuante %f armazenado", p1.flutuante);

        break;

    case 3:

        printf("\nInforme a string que deseja armazenar: \n");

        scanf("%49s", p1.string);

        printf("String %s armazenada", p1.string);

        break;

    default:

        printf("caracter digitado informado nao existe!!!");

        return 1;
    }

    return 0;
}