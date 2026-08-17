//
//  Selection Sort
//
#include <stdio.h>

int main()
{
    int numeros[] = {5, 2, 9, 1, 7};
    int tamanho = 5;
    int menor;
    int aux;

    for (int i = 0; i < tamanho - 1; i++)
    {
        menor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (numeros[j] < numeros[menor])
            {
                menor = j;
            }
        }

        aux = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = aux;
    }

    printf("Numeros ordenados:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}