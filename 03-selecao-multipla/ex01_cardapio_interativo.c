/*Crie um programa que exiba um menu com 4 opções de lanches: 

Hambúrguer 

Cachorro-quente 

Pizza 

Sair 

O usuário deve digitar a opção desejada e o programa deve mostrar uma mensagem correspondente. Se o usuário digitar 4, o programa deve exibir "Encerrando pedido...". Se digitar qualquer outro número, mostrar "Opção inválida!". */

int main()
{

    int lanches;

    printf("Informe qual numero do lanche voce quer\n \n1-Hamburger\n \n2-Cachorro-Quente\n \n3-Pizza\n \n4-Sair\n \n");

    scanf("%d", &lanches);

    switch (lanches)
    {

    case 1:

        printf("Pedido Anotado");

        break;

    case 2:

        printf("Pedido Anotado");

        break;

    case 3:

        printf("Pedido Anotado");

        break;

    case 4:

        printf("Encerrando Pedidio...");

        break;

    default:

        printf("Opcao Invalida");

        break;
    }

    return 0;
}