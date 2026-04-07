/*Escreva um programa em C que verifica se os parênteses em uma expressão matemática estão balanceados usando uma pilha. Exemplo:

Entrada: (2+3)*(4+(5-1)) → Saída: Balanceado

Entrada: ((3+4)*(2-1) → Saída: Não balanceado*/

#include <stdio.h>

#include <stdlib.h>

int tamanhopilha = 5;

int pilha[5];

int topo = -1;

void push()
{

    if (topo == tamanhopilha - 1)
    {

        printf("Erro pilha vazia");

        return;
    }

    topo++;
}

void pop()
{

    if (topo == -1)
    {

        printf("Pilha vazia");

        return;
    }

    topo--;
}

int balanceado(char *expresao)
{

    int i;

    for (i = 0; expresao[i] != '\0'; i++)
    {

        if (expresao[i] == '(')
        {

            push();
        }
        else if (expresao[i] == ')')
        {

            if (topo == -1)
            {

                return 0;
            }

            pop();
        }
    }

    if (topo == -1)
    {

        return 1;
    }

    return 0;
}

int main()
{

    int i;

    char expresao[100];

    for (i = 0; i < 5; i++)
    {

        printf("\nInforme as expressoes: ");

        scanf("%s", expresao);

        if (balanceado(expresao))
        {

            printf("\nEntrada: %s Saida: Balanceado \n", expresao);
        }
        else
        {

            printf("\nEntrada: %s Saida: Nao balanceado\n", expresao);
        }
    }

    return 0;
}