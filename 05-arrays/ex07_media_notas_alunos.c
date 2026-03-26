/*Registre as notas de 3 alunos em 4 provas. Depois, calcule e exiba a média de cada aluno.*/

#include <stdio.h>

#include <stdlib.h>

int main()
{

    float aluno[3][4], soma = 0, media = 0;

    int i, j;

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("\nInforme a nota do aluno %d, Prova %d: ", i + 1, j + 1);

            scanf("%f", &aluno[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("\nAluno %d, Prova %d: %.2f", i + 1, j + 1, aluno[i][j]);

            soma += aluno[i][j];

            media = soma / 4;
        }

        printf("\nMedia do aluno %d: %.2f\n", i + 1, media);

        media = 0;

        soma = 0;
    }

    return 0;
}