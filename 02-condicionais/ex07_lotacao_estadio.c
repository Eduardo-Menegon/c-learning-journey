/*Escreva um programa que solicita ao usuário:

A capacidade total do estádio.

A quantidade de torcedores presentes no jogo.

Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:

✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"

✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"

✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."

✅ Se estiver abaixo de 50%: "Morumbis" */

#include <stdio.h>
#include <string.h>

int main()
{

    float porc;

    int total, torcida;

    printf("Informe a capacidade total: ");

    scanf("%d", &total);

    printf("\nInforme quantos torcedores compareceram: ");

    scanf("%d", &torcida);

    porc = (float)torcida / total * 100;

    printf("Lotacao: %.2f%% \n", porc);

    if (porc > 90)
    {

        printf("\nLotado");
    }

    else if (porc >= 70)
    {

        printf("\nOtima presenca de publico");
    }

    else if (porc >= 50)
    {

        printf("\nPublico razoavel");
    }

    else
    {

        printf("\nMorumbis");
    }

    return 0;
}