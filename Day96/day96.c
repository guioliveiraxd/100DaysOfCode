//
//  Palavra mais frequente
//
#include <stdio.h>
#include <string.h>

int main()
{
    char palavras[20][30];
    int quantidade[20] = {0};
    int total = 0;

    printf("Digite 10 palavras:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%s", palavras[i]);

        int encontrada = 0;

        for (int j = 0; j < total; j++)
        {
            if (strcmp(palavras[i], palavras[j]) == 0)
            {
                quantidade[j]++;
                encontrada = 1;
                break;
            }
        }

        if (!encontrada)
        {
            quantidade[total] = 1;
            total++;
        }
    }

    int maior = 0;
    int posicao = 0;

    for (int i = 0; i < total; i++)
    {
        if (quantidade[i] > maior)
        {
            maior = quantidade[i];
            posicao = i;
        }
    }

    printf("\nPalavra: %s\n", palavras[posicao]);
    printf("Quantidade: %d\n", maior);

    return 0;
}