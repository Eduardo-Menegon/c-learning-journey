/*Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. Escreva um programa que verifica se um jogador será expulso, baseado na quantidade de cartões amarelos.*/

#include <stdio.h>
#include <string.h>

int main()
{

    int cartao;

    printf("quantos cartoes amarelos voce tomou: ");

    scanf("%d", &cartao);

    if (cartao == 2)
    {

        printf("voce sera expulso");
    }

    else if (cartao == 1)
    { // senao se

        printf("cuidado mais um amarelo e vc e expulso");
    }

    else
    {

        printf("voce nao vai ser expulso");
    }

    return 0;
}
