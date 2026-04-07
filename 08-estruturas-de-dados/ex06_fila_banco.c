/* Lógica
Simulei uma fila de banco usando um array de strings. Quem entra primeiro é atendido primeiro. Quando um cliente é atendido, os outros são deslocados para frente no array.

Dificuldade
A parte mais chata foi entender como "remover" um elemento do início da fila usando array, já que não dá pra simplesmente apagar sem reorganizar os outros.

Decisão
Escolhi usar array pela simplicidade. Mesmo não sendo a forma mais eficiente, funciona bem para entender o conceito de fila na prática.

=============================================================================================

Implemente uma fila para simular o atendimento em um banco. O programa deve permitir:

Inserir cliente na fila

Atender (remover) o próximo cliente

Mostrar a fila atual*/

#include <stdio.h>

#include <string.h>

#define TAM 5

char fila[TAM][50];

int fim = 0;

void enqueue(char nome[])
{

    if (fim == TAM)
    {

        printf("Fila cheia!\n");

        return;
    }

    strcpy(fila[fim], nome);

    fim++;
}

void dequeue()
{

    int i;

    if (fim == 0)
    {

        printf("Fila vazia!\n");

        return;
    }

    printf("Cliente atendido: %s\n", fila[0]);

    for (i = 0; i < fim - 1; i++)
    {

        strcpy(fila[i], fila[i + 1]);
    }

    fim--;
}

void mostrarFila()
{

    int i;

    if (fim == 0)
    {

        printf("Fila vazia!\n");

        return;
    }

    printf("Fila atual:\n");

    for (i = 0; i < fim; i++)
    {

        printf("%s ", fila[i]);
    }
}

int main()
{

    int opcao;

    char nome[50];

    do
    {

        printf("\n1 - Inserir cliente\n");

        printf("2 - Atender cliente\n");

        printf("3 - Mostrar fila\n");

        printf("4 - Sair\n");

        printf("Escolha: ");

        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            printf("Nome do cliente: ");

            scanf(" %s", nome);

            enqueue(nome);

            break;

        case 2:

            dequeue();

            break;

        case 3:

            mostrarFila();

            break;

        case 4:

            printf("Encerrando...\n");

            break;

        default:

            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}