//
//  Simulador de Investimento
//
#include <stdio.h>
#include <math.h>

double calcularMontante(double valor, double taxa, int anos) {

    return valor * pow(1 + taxa / 100, anos);
}

int main() {

    double valor;
    double taxa;

    printf("Valor investido (R$): ");
    scanf("%lf", &valor);

    printf("Rendimento anual (%%): ");
    scanf("%lf", &taxa);

    printf("\nResumo do investimento\n");
    printf("Valor inicial : R$ %.2lf\n", valor);
    printf("Taxa anual    : %.2lf%%\n\n", taxa);

    printf("Após 1 ano  : R$ %.2lf\n", calcularMontante(valor, taxa, 1));
    printf("Após 2 anos : R$ %.2lf\n", calcularMontante(valor, taxa, 2));
    printf("Após 5 anos : R$ %.2lf\n", calcularMontante(valor, taxa, 5));
    printf("Após 10 anos: R$ %.2lf\n", calcularMontante(valor, taxa, 10));

    return 0;
}