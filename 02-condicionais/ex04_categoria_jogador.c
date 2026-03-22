/*Escreva um programa que solicita ao usuário a idade de um jogador e verifica se ele pode jogar na categoria Sub-20 (jogadores com 20 anos ou menos). Se for mais velho, ele deve jogar na categoria profissional*/

int main()
{

    int idade;

    printf("Informe sua idade: ");

    scanf("%d", &idade);

    if (idade <= 20)
    {

        printf("voce deve jogar na categoria sub20");
    }

    else
    {

        printf("voce deve jogar na categoria profissional");
    }

    return 0;
}