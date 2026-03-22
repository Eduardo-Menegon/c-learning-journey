/*Escreva um programa que pede ao usuário a quantidade de gols marcados por um jogador em uma temporada e verifica :

    Se fez mais de 10 gols,
    exibir "Excelente temporada!"

    Se fez entre 5 e 10 gols(inclusive),
    exibir "Boa temporada!"

    Se fez menos de 5 gols,
    exibir "Temporada abaixo do esperado."*/

int main(){

    int gols;

    printf("Informe quantos gols voce fe na temporada: ");

    scanf("%d", &gols);

    if (gols > 10)
    {

        printf("Excelente temporada");
    }

    else if (gols >= 5)
    {

        printf("Boa temporada");
    }

    else
    {

        printf("Temporada abaixo do esperado");
    }

    return 0;
}