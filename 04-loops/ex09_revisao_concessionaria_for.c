/*Lógica:
Analizei duas variáveis (ano e funcionamento) para determinar o estado do carro,
criando combinações possíveis entre elas.

Dificuldade:
Inicialmente utilizei vários if separados, o que fazia o programa testar todas
as condições, mesmo quando uma já era verdadeira.

Decisão:
Substituí por uma estrutura if/else if para garantir que apenas uma condição seja executada, melhorando a eficiência e organização do código.

============================================================================================

Uma concessionária deseja criar um sistema para registrar os carros que entram para revisão e verificar quais precisam de reparos urgentes. O sistema deve:



1. Pedir ao usuário quantos carros serão registrados.

2. Para cada carro, solicitar:

- Modelo

- Ano de fabricação

- Se está funcionando normalmente (1 ou 0).

3. Exibir uma mensagem indicando se o carro está em boas condições ou se precisa de reparos urgentes (se for muito antigo ou estiver com problemas).



- Se o ano for menor que 2005 e o carro não estiver funcionando normalmente, então, retorne "O carro X precisa de REPAROS URGENTES!".

- Se o ano for menor que 2005 e o carro estiver funcionando normalmente, então, retorne "O carro X é antigo, recomenda-se uma revisão!".

- Se o ano for igual ou maior que 2005 e não estiver funcionando normalmente, então, retorne "O carro X precisa de manutenção!".

- Se o ano for igual ou maior que 2005 e estiver funcionando normalmente, então, retorne "O carro X está em boas condições!".*/

#include <stdio.h>
#include <string.h>

int main()
{

    int i, carros, func, ano;

    char modelo[100];

    printf("Infrome a quantidades de carros: ");

    scanf("%d", &carros);

    for (i = 1; i <= carros; i++)
    {

        printf("\nCarro %d", i);

        printf("\nInforme o modelo: ");

        scanf("%s", &modelo);

        printf("Informe o ano de fabricacao: ");

        scanf("%d", &ano);

        printf("Informe se esta funcionando normamalmente (sim = 1 ou nao = 0) ");

        scanf("%d", &func);

        if (ano <= 2005 && func == 0)
        {

            printf("\nO carro '%s' precisa de REPAROS URGENTES!\n", modelo);
        }

        if (ano <= 2005 && func == 1)
        {

            printf("\nO carro '%s' e antigo, recomenda-se uma revisao!\n", modelo);
        }

        if (ano > 2005 && func == 0)
        {

            printf("\nO carro '%s' precisa de manutençao!\n", modelo);
        }

        if (ano > 2005 && func == 1)
        {

            printf("\nO carro '%s' esta em boas condicoes!\n", modelo);
        }
    }

    return 0;
}