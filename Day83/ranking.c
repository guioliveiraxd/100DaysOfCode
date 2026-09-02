//
//  Ranking de Jogadores
//
#include <stdio.h>
#include <string.h>

struct Jogador
{
    char nome[50];
    int pontos;
};

int main()
{
    struct Jogador jogadores[5];
    struct Jogador aux;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do jogador %d: ", i + 1);
        scanf(" %[^\n]", jogadores[i].nome);

        printf("Digite os pontos: ");
        scanf("%d", &jogadores[i].pontos);

        printf("\n");
    }

    // Ordena do maior para o menor
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (jogadores[i].pontos < jogadores[j].pontos)
            {
                aux = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = aux;
            }
        }
    }

    printf("\nRanking:\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d - %s | %d pontos\n",
               i + 1,
               jogadores[i].nome,
               jogadores[i].pontos);
    }

    return 0;
}