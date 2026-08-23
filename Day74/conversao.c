
//
//  aula 4, ex4 - lp
//
#include <stdio.h>

int main()
{
    float celsius;

    printf("Tabela de conversao Fahrenheit para Celsius\n\n");

    for (int fahrenheit = 0; fahrenheit <= 100; fahrenheit++)
    {
        celsius = (fahrenheit - 32) / 1.8;

        printf("%3d F = %6.2f C\n", fahrenheit, celsius);
    }

    return 0;
}