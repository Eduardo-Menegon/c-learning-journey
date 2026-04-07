/* Lógica
A partir da lista ligada, criei uma função que percorre os nós comparando os valores até encontrar o número buscado ou chegar no final da lista.

Dificuldade
Tive dificuldade em entender como percorrer a lista dentro de uma função sem alterar o ponteiro original e sem bagunçar a estrutura.

Decisão
Separei a busca em uma função própria para deixar o código mais organizado e fácil de reutilizar. Assim fica mais claro o que cada parte do programa faz.

=============================================================================================

A partir do exercício anterior, adicione uma função que busca um número na lista e retorna se foi encontrado ou não.*/

#include <stdio.h> 
#include <stdlib.h>

struct no
{
    int valor;
    struct no *proximo;
};

int busca(struct no *primeiro, int valor)
{
    while (primeiro != NULL)
    {
        if (primeiro->valor == valor)
        {
            return 1;
        }
        primeiro = primeiro->proximo;
    }

    return 0;
}

int main()
{
    int i, numero;

    struct no *primeiro = NULL;
    struct no *ultimo = NULL;

    for (i = 0; i < 5; i++)
    {

        struct no *novo = (struct no *)malloc(sizeof(struct no));

        if (novo == NULL)
        {
            printf("Erro de memoria\n");
            return 1;
        }

        printf("Informe os valores: ");
        scanf("%d", &novo->valor);
        novo->proximo = NULL;

        if (primeiro == NULL)
        {
            primeiro = novo;
            ultimo = novo;
        }
        else
        {
            ultimo->proximo = novo;
            ultimo = novo;
        }
    }

    printf("\nDigite o numero para buscar: ");
    scanf("%d", &numero);

    if (busca(primeiro, numero))
    {
        printf("Numero encontrado!\n");
    }
    else
    {
        printf("Numero nao encontrado!\n");
    }

    printf("Valores da lista: ");

    struct no *temp = primeiro;
    while (temp != NULL)
    {
        printf("%d ", temp->valor);
        temp = temp->proximo;
    }

    temp = primeiro;
    while (temp != NULL)
    {
        struct no *proximo = temp->proximo;
        free(temp);
        temp = proximo;
    }

    return 0;
}
