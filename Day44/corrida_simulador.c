//
//  Simulador de Ganhos da Corrida
//
#include <stdio.h>

float calcularGanhoKm(float valorCorrida, float km) {
    return valorCorrida / km;
}

float calcularGanhoHora(float valorCorrida, int minutos) {

    float corridasPorHora;

    corridasPorHora = 60.0 / minutos;

    return valorCorrida * corridasPorHora;
}

int main() {
    float km;
    float valorCorrida;
    float ganhoKm;
    float ganhoHora;
    int minutos;

    printf("Distancia da corrida (km): ");
    scanf("%f", &km);

    printf("Valor recebido (R$): ");
    scanf("%f", &valorCorrida);

    printf("Tempo da corrida (min): ");
    scanf("%d", &minutos);

    ganhoKm = calcularGanhoKm(valorCorrida, km);
    ganhoHora = calcularGanhoHora(valorCorrida, minutos);

    printf("\nResumo da corrida\n");
    printf("Distancia: %.2f km\n", km);
    printf("Tempo: %d minutos\n", minutos);
    printf("Valor recebido : R$ %.2f\n", valorCorrida);
    printf("Ganho por km: R$ %.2f\n", ganhoKm);
    printf("Ganho por hora: R$ %.2f\n", ganhoHora);

    return 0;
}