//
//  Calculadora de Consumo de Energia
//
#include <stdio.h>
float calcularConsumoDiario(float potencia, float horas) {

    return (potencia * horas) / 1000;
}

float calcularConsumoMensal(float consumoDiario) {

    return consumoDiario * 30;
}

float calcularCustoMensal(float consumoMensal, float valorKwh) {

    return consumoMensal * valorKwh;
}

int main() {
    char aparelho[50];

    float potencia;
    float horas;
    float valorKwh;

    float consumoDiario;
    float consumoMensal;
    float custoMensal;

    printf("Nome do aparelho: ");
    scanf(" %[^\n]", aparelho);

    printf("Potencia (W): ");
    scanf("%f", &potencia);

    printf("Horas de uso por dia: ");
    scanf("%f", &horas);

    printf("Valor do kWh (R$): ");
    scanf("%f", &valorKwh);

    consumoDiario = calcularConsumoDiario(potencia, horas);

    consumoMensal = calcularConsumoMensal(consumoDiario);

    custoMensal = calcularCustoMensal(consumoMensal, valorKwh);

    printf("\nResumo\n");
    printf("Aparelho: %s\n", aparelho);
    printf("Consumo diario: %.2f kWh\n", consumoDiario);
    printf("Consumo mensal: %.2f kWh\n", consumoMensal);
    printf("Gasto mensal: R$ %.2f\n", custoMensal);

    return 0;
}