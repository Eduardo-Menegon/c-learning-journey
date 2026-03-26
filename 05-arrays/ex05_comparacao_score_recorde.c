/*Score 1: 1000

Score 2: 5001

Parabens! Score 5001 superou o recorde!

Score 3: 5001

Score 4: 7000

Parabens! Score 7000 superou o recorde!

Score 5: 5099*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()
{

    int i, score[5], record = 5000;

    for (i = 0; i < 5; i++)
    {

        printf("Digite o score %d do jogador:", i + 1);

        scanf("%d", &score[i]);

        if (score[i] > record)
        {

            printf("Parabens! Score %d superou o recorde!\n", score[i]);

            record = score[i];
        }
    }

    return 0;
}