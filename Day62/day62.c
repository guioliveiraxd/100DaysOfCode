//
//  Simulador de Producao
//
#include <stdio.h>

int main() {

    int horas;
    int producao;
    int total = 0;
    int maiorProducao = 0;
    int melhorHora = 0;

    printf("Quantas horas de producao? ");
    scanf("%d", &horas);

    for (int i = 1; i <= horas; i++) {

        printf("Pecas produzidas na hora %d: ", i);
        scanf("%d", &producao);

        total += producao;

        if (producao > maiorProducao) {

            maiorProducao = producao;
            melhorHora = i;
        }
    }

    printf("\nResultado\n");
    printf("Total produzido: %d pecas\n", total);
    printf("Media por hora: %.2f pecas\n", (float)total / horas);
    printf("Melhor hora: %d\n", melhorHora);
    printf("Producao na melhor hora: %d pecas\n", maiorProducao);

    return 0;
}