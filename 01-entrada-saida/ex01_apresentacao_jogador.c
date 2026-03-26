/* Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela. */

#include <stdio.h>
#include <string.h>

int main()
{

    char nome[20];

    int idade, gols;

    printf("Informe seu primeiro nome: ");

    scanf("%s", &nome);

    printf("Informe sua idade: ");

    scanf("%d", &idade);

    printf("Informe quantos gols voce fez em sua carreira: ");

    scanf("%d", &gols);

    printf("Seu nome e: %s\n", nome); // colocar o %s dentro das aspas para aparecer no final

    printf("sua idade e: %d\n ", idade);

    printf("voce possui um total de %d gols em sua carreira", gols);

    return 0;
}