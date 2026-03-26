/*Lógica:
Percorri o vetor de danos utilizando um loop para comparar os valores e encontrar o maior entre eles.
Inicializei a variável "maior" com o primeiro valor do vetor e fui atualizando sempre que encontrava um dano maior.

Dificuldade:
A principal dificuldade foi entender como comparar 4 valores para definir o maior entre eles,
percebendo que começar com o primeiro elemento do vetor evita erros na lógica.

Decisão:
Optei por criar uma função separada para encontrar o maior valor,
melhorando a organização do código e facilitando a reutilização da lógica.

============================================================================================

Crie um programa que leia o dano causado em 4 ataques e exiba qual foi o ataque mais forte.

    Digite o dano de 4 ataques :

    Ataque 1 : 10

    Ataque 2 : 33

    Ataque 3 : 99

    Ataque 4 : 78

    Maior dano causado : 99*/

    #include <stdio.h>
    #include <string.h>

    int ataque(int dano[4])
{

    int i, maior = dano[0];

    for (i = 0; i < 4; i++)
    {

        if (dano[i] > maior)
        {

            maior = dano[i];
        }
    }

    return maior;
}

int main()
{

    int i, dano[4];

    for (i = 0; i < 4; i++)
    {

        printf("Informe o ataque do %d golpe: ", i + 1);

        scanf("%d", &dano[i]);
    }

    printf("Maior dano causado %d", ataque(dano));

    return 0;
}