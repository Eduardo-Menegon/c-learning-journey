/*Você tem 5 jogadores. Para cada jogador, leia 3 notas de avaliação (float). Calcule a média de cada jogador. Use if/else para classificar:

        Excelente : média >= 9
        Bom : entre 7 e 9
        Regular : entre 5 e 7
        Ruim : abaixo de 5*/

#include <stdio.h>

#include <stdlib.h>

float media(float notaA, float notaB, float notaC)
{

    float media;

    media = (notaA + notaB + notaC) / 3;

    return media;
}

int main()
{

    float notaA, notaB, notaC;

    int i;

    for (i = 1; i <= 5; i++)
    {

        printf("\nJogador %d suas 3 notas: \n", i);

        scanf("%f %f %f", &notaA, &notaB, &notaC);

        if (media(notaA, notaB, notaC) >= 9)
        {

            printf("\njogador %d sua media e de %.2f, exelente!!!\n", i, media(notaA, notaB, notaC));
        }
        else if (media(notaA, notaB, notaC) > 7 && media(notaA, notaB, notaC) < 9)
        {

            printf("\njogador %d sua media e de %.2f, bom\n", i, media(notaA, notaB, notaC));
        }
        else if (media(notaA, notaB, notaC) > 5 && media(notaA, notaB, notaC) < 7)
        {

            printf("\njogador %d sua media e de %.2f, regular\n", i, media(notaA, notaB, notaC));
        }
        else if (media(notaA, notaB, notaC) < 5)
        {

            printf("\njogador %d sua media e de %.2f, ruim\n", i, media(notaA, notaB, notaC));
        }
    }

    return 0;
}