/* Lógica
Criei uma lista ligada usando malloc para alocar memória para cada novo nó.
A cada número digitado, adiciono esse valor no final da lista, mantendo um ponteiro para o primeiro e outro para o último elemento.

Dificuldade
No começo foi meio confuso entender como os nós se conectam entre si e como garantir que o ponteiro inicial da lista não fosse perdido durante as inserções.

Decisão
Usei dois ponteiros para facilitar a inserção no final sem precisar percorrer toda a lista toda vez. Isso deixou o código mais simples e mais eficiente.

=============================================================================================

Implemente uma lista ligada simples que insere 5 números inteiros no final da lista e imprime todos.*/

#include <stdio.h> 
#include <stdlib.h>

struct no
{
    int valor;
    struct no *proximo;
};

int main()
{
    int i;

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
