//
//  Simulador de Dado
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int quantidade;
    int resultados[6] = {0};

    srand(time(NULL));

    printf("Quantas vezes deseja jogar o dado? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        int dado = rand() % 6 + 1;

        resultados[dado - 1]++;
    }

    printf("\nResultado\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Numero %d: %d vezes\n", i + 1, resultados[i]);
    }

    return 0;
}