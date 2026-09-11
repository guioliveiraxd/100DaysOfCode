//
//  Soma numeros ate digitar zero
//
#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma += numero;

        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}