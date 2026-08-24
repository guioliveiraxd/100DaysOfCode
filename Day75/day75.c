//
//  Maior Numero - exercicio prática
//
#include <stdio.h>

int main()
{
    int numero;
    int maior;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            maior = numero;
        }
        else if (numero > maior)
        {
            maior = numero;
        }
    }

    printf("\nMaior numero: %d\n", maior);

    return 0;
}