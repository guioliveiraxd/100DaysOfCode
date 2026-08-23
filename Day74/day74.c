//
//  Ex2 aula 4 lp
//
#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    do
    {
        printf("Digite um numero entre 0 e 20: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 20)
        {
            printf("Numero invalido.\n");
        }
        else
        {
            soma += numero;
        }
    }
    while (numero != 0);

    printf("\nSoma dos numeros: %d\n", soma);

    return 0;
}