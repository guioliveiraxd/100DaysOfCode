//
//  Calculadora de Cashback
//
#include <stdio.h>

float calcularCashback(float valorCompra, int categoria) {

    if (categoria == 1) {
        return valorCompra * 0.02;
    } else if (categoria == 2) {
        return valorCompra * 0.05;
    } else if (categoria == 3) {
        return valorCompra * 0.10;
    }

    return 0;
}

int main() {

    float valorCompra;
    float cashback;
    float valorFinal;
    int categoria;

    printf("Valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nCategoria do cliente\n");
    printf("1 - Bronze\n");
    printf("2 - Prata\n");
    printf("3 - Ouro\n");
    printf("Opcao: ");
    scanf("%d", &categoria);

    cashback = calcularCashback(valorCompra, categoria);

    valorFinal = valorCompra - cashback;

    printf("\nResumo\n");
    printf("Valor da compra : R$ %.2f\n", valorCompra);
    printf("Cashback        : R$ %.2f\n", cashback);
    printf("Valor final     : R$ %.2f\n", valorFinal);

    return 0;
}