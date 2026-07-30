//
//  Estimativa de Corridas para Atingir a Meta
//
#include <stdio.h>

float calcularGanhoCorrida(float valorKm, float kmCorrida) {

    float ganhoHora = 18.0;
    float tempoCorrida = 20.0 / 60.0;

    return (valorKm * kmCorrida) + (ganhoHora * tempoCorrida);
}

int calcularCorridas(float meta, float ganhoCorrida) {

    int corridas = meta / ganhoCorrida;

    if (meta > (corridas * ganhoCorrida)) {
        corridas++;
    }

    return corridas;
}

int main() {

    float meta;
    float valorKm;
    float kmCorrida;
    float ganhoCorrida;
    int corridas;

    printf("Meta do dia (R$): ");
    scanf("%f", &meta);

    printf("Valor recebido por km (R$): ");
    scanf("%f", &valorKm);

    printf("KM medio por corrida: ");
    scanf("%f", &kmCorrida);

    ganhoCorrida = calcularGanhoCorrida(valorKm, kmCorrida);

    corridas = calcularCorridas(meta, ganhoCorrida);

    printf("\nResumo\n");
    printf("Meta do dia       : R$ %.2f\n", meta);
    printf("Valor por km      : R$ %.2f\n", valorKm);
    printf("KM por corrida    : %.1f km\n", kmCorrida);
    printf("Ganho por corrida : R$ %.2f\n", ganhoCorrida);
    printf("Corridas estimadas: %d\n", corridas);

    return 0;
}