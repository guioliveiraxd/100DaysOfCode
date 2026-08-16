//
//  Bubble Sort
//
#include <stdio.h>

int main()
{
    int numeros[] = {5, 2, 9, 1, 7};
    int tamanho = 5;
    int aux;

    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - 1 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    printf("Numeros ordenados:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}