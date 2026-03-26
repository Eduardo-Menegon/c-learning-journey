/*Você foi contratado para fazer um sistema simples de avaliação escolar. O programa deve apresentar o seguinte menu:

Verificar se o aluno foi aprovado

Sair

Se o usuário escolher a opção 1, o programa deve solicitar a nota final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).

O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior ou igual a 75%. Use if else para essa verificação dentro do case 1.

Se o usuário escolher a opção 2, o programa deve encerrar.

Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!". */

#include <stdio.h>
#include <string.h>

int main()
{

    int aprovado;

    float nota, presenca;

    printf("Informe qual opcao voce quer\n \n1-Verificar se o aluno foi aprovado\n \n2-sair\n \n");

    scanf("%d", &aprovado);

    switch (aprovado)
    {

    case 1:

        printf("\nInforme sua nota, de 0 a 10 e a porcentagem de presenca, de 0 a 100: ");

        scanf("%f %f", &nota, &presenca);

        if (nota >= 7 && presenca >= 75)
        {

            printf("APROVADO!!!!");
        }
        else
        {

            printf("Reprovado");
        }

        break;

    case 2:

        printf("Encerrando Progama");

        break;

    default:

        printf("Opcao Invalida");
    }

    return 0;
}