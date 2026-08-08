//
//  Simulador de Parcelas
//
#include <stdio.h>

float calcularJuros(float valor, float taxa) {

    return valor + (valor * taxa / 100);
}

int main() {

    float valor;
    float taxaInicial;
    float valorParcela;

    int parcelas;

    printf("Valor da compra: R$ ");
    scanf("%f", &valor);

    printf("Quantidade de parcelas: ");
    scanf("%d", &parcelas);

    printf("Aumento de juros por parcela (%%): ");
    scanf("%f", &taxaInicial);

    printf("\nSimulacao\n");

    for (int i = 1; i <= parcelas; i++) {

        float taxa = 0;

        if (i > 2) {
            taxa = (i - 2) * taxaInicial;
        }

        valorParcela = calcularJuros(valor, taxa) / i;

        printf("%dx - Juros: %.2f%% - Parcela: R$ %.2f\n",
               i, taxa, valorParcela);
    }

    return 0;
}