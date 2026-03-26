/*Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra: 

Vitória = 3 pontos 

Empate = 1 ponto 

Derrota = 0 pontos */

#include <stdio.h>
#include <string.h>
 
int main() {
    int vitorias, empates, total;

    printf("Informe quantas vitorias seu time possui: ");
    scanf("%d", &vitorias);

    printf("Informe quantos empates seu time possui: ");
    scanf("%d", &empates);

    total = vitorias * 3 + empates;

    printf("O agregado de pontos que sua equipe possui e: %d\n", total);

    return 0;
}