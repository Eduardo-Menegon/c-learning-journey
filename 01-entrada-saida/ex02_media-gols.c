/* Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida. */

#include <stdio.h>
#include <string.h>

int main()
{

    int gols, partida;

    float total; // se quando tiver que dividir números inteiros e eles derem algum numero quebrado 			criar uma nova variável float

    printf("Informe quantos gols voce possui em sua carreira: ");

    scanf("%d", &gols);

    printf("Informe quantas partidas voce jogou: ");

    scanf("%d", &partida);

    total = (float)gols / partida; // colocar float em parentes para poder ler

    printf("A media de gols por partida e: %.2f", total);

    return 0;
}