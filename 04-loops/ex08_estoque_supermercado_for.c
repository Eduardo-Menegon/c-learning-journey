/*Lógica:
Usei um loop para cadastrar múltiplos produtos e, para cada um,
comparei o estoque atual com o estoque mínimo usando uma estrutura condicional.

Dificuldade:
Trabalhar com entrada de dados (principalmente string) e garantir que os valores
fossem corretamente capturados e comparados.

Decisão:
Utilizei um if/else simples para separar os casos de reposição e estoque suficiente,

============================================================================================
O supermercado deseja controlar o estoque de seus produtos e verificar quais precisam ser repostos. O programa deve:

Pedir ao usuário quantos produtos ele deseja cadastrar.
Para cada produto, solicitar:

- Nome do produto

- Quantidade em estoque

- Estoque mínimo recomendado

- Exibir imediatamente se o produto precisa de reposição ou não.*/

#include <stdio.h>
#include <string.h>

int main()
{

    int i, cads, min, estoque;

    char produto[50];

    printf("Infrome a quantidades de produtos a serem cadastrados: ");

    scanf("%d", &cads);

    for (i = 1; i <= cads; i++)
    {

        printf("\nProduto %d", i);

        printf("\nNome do produto: ");

        scanf("%s", &produto);

        printf("quantidade em estoque: ");

        scanf("%d", &estoque);

        printf("Estoque minimo recomendado: ");

        scanf("%d", &min);

        if (min > estoque)
        {

            printf("\n-> O produto '%s' precisa ser reposto! (Estoque: %d, Minimo: %d)\n", produto, estoque, min);
        }
        else
        {

            printf("\n-> O produto '%s' tem estoque suficiente. (Estoque: %d, Minimo: %d)\n", produto, estoque, min);
        }
    }

    return 0;
}