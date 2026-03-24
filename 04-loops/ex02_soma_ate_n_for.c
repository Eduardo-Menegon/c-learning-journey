/*O usuário digita um número n, e o programa calcula a soma de todos os números de 1 até n.

Saída esperada (se o usuário digitar 5):

A soma de 1 ate 5 e: 15

(Cálculo: 1 + 2 + 3 + 4 + 5 = 15)*/

int main()
{

    int i, num, soma = 0;

    printf("Informe o numero: ");

    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {

        soma += i;
    }

    printf("A soma dos numeros e: %d ", soma);

    return 0;
}