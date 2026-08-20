//
//  Inverter Array
//
#include <stdio.h>

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int aux;

    printf("Array original:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    for (int i = 0; i < tamanho / 2; i++)
    {
        aux = numeros[i];
        numeros[i] = numeros[tamanho - 1 - i];
        numeros[tamanho - 1 - i] = aux;
    }

    printf("\n\nArray invertido:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}