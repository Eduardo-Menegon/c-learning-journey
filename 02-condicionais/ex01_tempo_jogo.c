/*Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.*/

#include <stdio.h>
#include <string.h>

int main()
{

    int minutos, horas, min_restantes;

    printf("Informe a quantidade de minutos jogados: ");

    scanf("%d", &minutos);

    horas = minutos / 60;

    min_restantes = minutos % 60;

    if (horas <= 1)
    {

        printf("o total jogado e: %d hora e %d minutos", horas, min_restantes);
    }

    else
    {

        printf("o total jogado e: %d horas e %d minutos", horas, min_restantes);
    }

    return 0;
}