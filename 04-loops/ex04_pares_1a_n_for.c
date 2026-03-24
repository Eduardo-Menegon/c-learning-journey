/*O usuário digita um número n, e o programa imprime todos os números pares de 1 até n.

Saída esperada (se o usuário digitar 10):

Numeros pares de 1 ate 10:

2 4 6 8 10 */

int main()
{

    int i, j, num;

    printf("Informe o numero: ");

    scanf("%d", &num);

    printf("\n---------------Numeros pares------------------\n");

    for (i = 1; i <= num; i++)
    {

        if (i % 2 == 0)
        {

            printf("\n%d\n", i);
        }
    }

    return 0;
}