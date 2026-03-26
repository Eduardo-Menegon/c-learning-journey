/*Lógica:
Armazenei os nomes em um vetor de strings e utilizei um loop para percorrer cada nome,
verificando se ele contém a letra informada pelo usuário com a função strchr.

Dificuldade:
A maior dificuldade foi trabalhar com vetor de strings e entender como usar a função strchr.

Decisão:
Decidi utilizar a função strchr da biblioteca string.h,
pois é uma forma mais simples e eficiente de buscar caracteres em uma string
sem precisar implementar a lógica manualmente.

=============================================================================================

Crie um programa que recebe 5 nomes e imprime apenas os nomes que contêm um determinado caracter definido pelo usuário. Exemplo: letra 'a'.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main()
{

    int i;

    char nomes[5][50], letra;

    printf("Informe a letra: ");

    scanf(" %c", &letra);

    for (i = 0; i < 5; i++)
    {

        printf("%d nome: ", i + 1);

        scanf("%s", nomes[i]);
    }

    printf("\n========Nomes que tem a letra '%c'==========\n", letra);

    for (i = 0; i < 5; i++)
    {

        if (strchr(nomes[i], letra) != NULL)
        {

            printf("\n%s\n", nomes[i]);
        }
    }

    return 0;
}