//
//  Calculadora de Dividendos
//
#include <stdio.h>

float calcularDividendosAnuais(float investimento, float dy) {

    return investimento * (dy / 100);
}

float calcularDividendosMensais(float dividendosAnuais) {

    return dividendosAnuais / 12;
}

int main() {

    float investimento;
    float dy;

    float dividendosAnuais;
    float dividendosMensais;

    printf("Valor investido (R$): ");
    scanf("%f", &investimento);

    printf("Dividend Yield (%%): ");
    scanf("%f", &dy);

    dividendosAnuais = calcularDividendosAnuais(investimento, dy);

    dividendosMensais = calcularDividendosMensais(dividendosAnuais);

    printf("\nResumo\n");
    printf("Valor investido......: R$ %.2f\n", investimento);
    printf("Dividend Yield.......: %.2f%%\n", dy);
    printf("Dividendos por ano...: R$ %.2f\n", dividendosAnuais);
    printf("Dividendos por mes...: R$ %.2f\n", dividendosMensais);

    return 0;
}