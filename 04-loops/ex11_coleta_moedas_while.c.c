/*Um jogador precisa coletar moedas em um jogo. A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas. O jogo só termina quando o jogador acumula pelo menos 100 moedas. Escreva um programa em C que solicite ao usuário, repetidamente, a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas. Ao final, exiba quantas rodadas foram necessárias para atingir a meta.*/

#include <stdio.h>
#include <string.h>

int main()
{

    int contador = 0, moedas, totalmoedas = 0;

    while (totalmoedas <= 100)
    {

        printf("Informe quantas moedas vc coletou na %d fase: ", contador + 1);

        scanf("%d", &moedas);

        totalmoedas += moedas;

        contador++;
    }

    printf("Foi nessesario %d rodadas para coletar %d moedas", contador, totalmoedas);

    return 0;
}