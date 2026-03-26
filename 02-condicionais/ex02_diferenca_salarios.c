/*Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.*/

#include <stdio.h>
#include <string.h>

int main()
{

    float salario1, salario2, maior, menor;

    printf("\nInforrme o primeiro salario: ");

    scanf("%f", &salario1);

    printf("\nInforme o segundo salario: ");

    scanf("%f", &salario2);

    if (salario1 >= salario2)
    {

        maior = salario1;

        menor = salario2;
    }

    else
    {

        maior = salario2;

        menor = salario1;
    }

    printf("A diferenca de salarios e: %f - %f = %.2f", maior, menor, maior - menor);

    // fiz o if e o else para não dar valores negativos

    return 0;
}
