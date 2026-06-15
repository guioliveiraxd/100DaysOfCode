#include <stdio.h>
int main() {
    int qntd_a_repetir, numerosDigitados, pares;

    printf("Digite quantos numeros serao digitados: \n");
    scanf("%d", &qntd_a_repetir);

    pares = 0;

    for (int i = 0; i < qntd_a_repetir; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &numerosDigitados);

        if (numerosDigitados % 2 == 0) {
            pares++;
        }
    }
    printf("Quantidade de pares = %d\n", pares);
    return 0;
}