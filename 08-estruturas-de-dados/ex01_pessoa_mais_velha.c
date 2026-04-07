/*Crie uma estrutura chamada pessoa com os campos: nome, idade e altura. Leia os dados de 3 pessoas e imprima os dados da mais velha.*/

#include <stdio.h>

#include <stdlib.h>

struct pessoas
{

    char nome[50];

    int idade;

    float altura;
};

int main()
{

    int i;

    struct pessoas pessoas[3];

    for (i = 0; i < 3; i++)
    {

        printf("\nPessoa %d\n", i + 1);

        printf("Informe seu nome: ");

        scanf("%s", pessoas[i].nome);

        printf("Informe sua idade: ");

        scanf("%d", &pessoas[i].idade);

        printf("Informe sua altura: ");

        scanf("%f", &pessoas[i].altura);
    }

    for (i = 0; i < 3; i++)
    {

        printf("\nPessoa %d\n", i + 1);

        printf("\nNome: %s\n", pessoas[i].nome);

        printf("\nIdade: %d\n", pessoas[i].idade);

        printf("\nAltura: %.2f\n", pessoas[i].altura);
    }

    return 0;
}