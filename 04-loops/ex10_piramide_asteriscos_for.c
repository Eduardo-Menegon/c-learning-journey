/*Lógica:
Usei dois loops internos: um para imprimir os espaços à esquerda (centralização)
e outro para imprimir os asteriscos.

Dificuldade:
O principal desafio foi entender como controlar a quantidade de espaços em branco
à esquerda para centralizar a pirâmide, percebi que o número de espaços diminui a cada linha (N - i), enquanto a quantidade de asteriscos aumenta seguindo o padrão (2 * i - 1).

Decisão:
Utilizei a expressão (2 * i - 1) para controlar a quantidade de asteriscos,
garantindo o formato correto da pirâmide.

============================================================================================

Faça um programa que leia um número N e imprima um triângulo de asteriscos com altura N e largura 2N-1.

Exemplo de N = 4:

 *
***
*****
******* */

int main()
{

    int N, i, j;

    printf("Digite o valor de N: ");

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {

        for (j = 1; j <= N - i; j++)
        {

            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    return 0;
}
