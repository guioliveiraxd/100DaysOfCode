//
//  Contador de segmentos de LED
//
#include <stdio.h>

int segmentos(int numero)
{
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    return leds[numero];
}

int main()
{
    int numero;
    int total = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        int digito = numero % 10;

        total += segmentos(digito);

        numero /= 10;
    }

    printf("Quantidade de segmentos: %d\n", total);

    return 0;
}