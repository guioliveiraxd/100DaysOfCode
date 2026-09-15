//
//  Elevador Lotado
//
#include <stdio.h>

int main()
{
    int andares;
    int entram;
    int saem;
    int pessoas = 0;
    int maior = 0;

    printf("Digite a quantidade de andares: ");
    scanf("%d", &andares);

    for (int i = 1; i <= andares; i++)
    {
        printf("\nAndar %d\n", i);

        printf("Quantas pessoas sairam: ");
        scanf("%d", &saem);

        printf("Quantas pessoas entraram: ");
        scanf("%d", &entram);

        pessoas = pessoas - saem + entram;

        if (pessoas > maior)
        {
            maior = pessoas;
        }
    }

    printf("\nLotacao maxima: %d pessoas\n", maior);

    return 0;
}