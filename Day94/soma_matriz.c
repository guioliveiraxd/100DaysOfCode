//
//  Soma de cada linha da matriz
//
#include <stdio.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        int soma = 0;

        for (int j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }

        printf("Linha %d = %d\n", i + 1, soma);
    }

    return 0;
}