/*Escreva um programa que recebe um número inteiro do usuário e imprime a tabuada desse número de 0 a 10.

Exemplo de saída se o usuário digitar 5:

5 x 0 = 0

    5 x 1 = 5

    5 x 2 = 10

    5 x 3 = 15

    ...

    5 x 10 = 5*/

    #include <stdio.h>
    #include <string.h>

    int
    main()
{
    int i, num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("\n------------Tabuada do %d----------------\n", num);
    for (i = 0; i <= 10; i++)
    {
        printf("\n%d * %d = %d\n", num, i, i * num);
    }
    return 0;
}