//
//  Beecrowd 1168 - LED
//
#include <stdio.h>
#include <string.h>

int calcularLeds(char numero[]) {

    int leds = 0;

    for (int i = 0; i < strlen(numero); i++) {

        if (numero[i] == '0') {
            leds += 6;
        } else if (numero[i] == '1') {
            leds += 2;
        } else if (numero[i] == '2') {
            leds += 5;
        } else if (numero[i] == '3') {
            leds += 5;
        } else if (numero[i] == '4') {
            leds += 4;
        } else if (numero[i] == '5') {
            leds += 5;
        } else if (numero[i] == '6') {
            leds += 6;
        } else if (numero[i] == '7') {
            leds += 3;
        } else if (numero[i] == '8') {
            leds += 7;
        } else if (numero[i] == '9') {
            leds += 6;
        }

    }

    return leds;
}

int main() {

    char numero[101];
    int total;

    printf("Digite um numero: ");
    scanf("%s", numero);

    total = calcularLeds(numero);

    printf("%d leds\n", total);

    return 0;
}