/*Lógica
Utilizei alocação dinâmica para criar uma matriz utilizando ponteiros de ponteiros (int **). Primeiro aloquei as linhas com malloc e depois cada coluna com calloc. Em seguida, percorri a matriz com dois laços for para preencher os valores e calcular a soma de cada linha.

Dificuldade
Tive dificuldade em entender como funciona a alocação de uma matriz dinâmica, principalmente o uso de "**" e a diferença entre alocar as linhas e depois as colunas.

Decisão
Optei por separar a lógica de soma em uma função para organizar melhor o código. Utilizei dois laços for para percorrer a matriz e garantir que cada elemento fosse acessado corretamente, calculando a soma de cada linha de forma separada.

=============================================================================================

Aloque dinamicamente uma matriz m x n, preencha - a e imprima a soma de cada linha.*/

#include <stdio.h> 
#include <stdlib.h>

void somalinha(int **matriz, int linhas, int colunas)
{
    int i, j, soma = 0;

    for (i = 0; i < linhas; i++)
    {
        soma = 0;
        for (j = 0; j < colunas; j++)
        {
            soma += matriz[i][j];
        }
        printf("\nSoma das linhas %d: %d ", i + 1, soma);
    }
}

int main()
{
    int colunas, linhas, i, j;
    int **matriz;

    printf("Informe a quantidades de colunas e linhas desta matriz: \n");
    scanf("%d %d", &colunas, &linhas);

    matriz = (int **)malloc(linhas * sizeof(int *)); // aqui faz as linhas

    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)calloc(colunas, sizeof(int)); // aqui as colunas
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\nInforme os valores[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n===========Matriz============\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    somalinha(matriz, linhas, colunas);

    free(matriz);

    return 0;
}