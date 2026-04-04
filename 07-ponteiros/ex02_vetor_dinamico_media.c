/*Aloque dinamicamente um vetor de n floats (digitado pelo usuário),
preencha-o com valores e calcule a média. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i;
    float *vetor;
    float media = 0, soma = 0;

    printf("Informe quantas notas sao: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0)
    {
        printf("Valor invalido.");
        return 1;
    }

    vetor = calloc(tamanho, sizeof(float));

    if (vetor == NULL)
    {
        printf("Erro: Memoria insuficiente.");
        return 1;
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe sua %d nota: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tamanho;

    printf("\n==============Vetor============\n");

    for (i = 0; i < tamanho; i++)
    {
        printf(" %.2f ", vetor[i]);
    }

    printf("\nMedia das notas: %.2f", media);

    free(vetor);

    return 0;
}