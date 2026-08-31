//
//  Rotacao de Array
//
#include <stdio.h>

int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6, 7};
    int tamanho = 7;
    int posicoes;
    int aux;

    printf("Array original:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n\nQuantas posicoes deseja rotacionar? ");
    scanf("%d", &posicoes);

    for (int i = 0; i < posicoes; i++)
    {
        aux = numeros[tamanho - 1];

        for (int j = tamanho - 1; j > 0; j--)
        {
            numeros[j] = numeros[j - 1];
        }

        numeros[0] = aux;
    }

    printf("\nArray rotacionado:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}