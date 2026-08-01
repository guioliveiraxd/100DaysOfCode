//
//  Controle de Pecas Produzidas
//
#include <stdio.h>

int calcularAprovadas(int produzidas, int defeituosas) {

    return produzidas - defeituosas;
}

float calcularTaxaDefeito(int produzidas, int defeituosas) {

    if (produzidas == 0) {
        return 0;
    }

    return (float) defeituosas / produzidas * 100;
}

float calcularAproveitamento(int produzidas, int aprovadas) {

    if (produzidas == 0) {
        return 0;
    }

    return (float) aprovadas / produzidas * 100;
}

int calcularFaltaMeta(int meta, int aprovadas) {

    if (aprovadas >= meta) {
        return 0;
    }

    return meta - aprovadas;
}

int main() {

    int meta;
    int produzidas;
    int refugos;

    int aprovadas;
    int falta;

    float defeitos;
    float aproveitamento;

    printf("Meta do dia: ");
    scanf("%d", &meta);

    printf("Pecas produzidas: ");
    scanf("%d", &produzidas);

    printf("Pecas defeituosas: ");
    scanf("%d", &refugos);

    if (refugos > produzidas) {

        printf("\nQuantidade invalida.\n");
        return 0;
    }

    aprovadas = calcularAprovadas(produzidas, refugos);

    defeitos = calcularTaxaDefeito(produzidas, refugos);

    aproveitamento = calcularAproveitamento(produzidas, aprovadas);

    falta = calcularFaltaMeta(meta, aprovadas);

    printf("\nResumo da Producao\n");
    printf("Meta do dia........: %d\n", meta);
    printf("Produzidas.........: %d\n", produzidas);
    printf("Aprovadas..........: %d\n", aprovadas);
    printf("Defeituosas........: %d\n", refugos);
    printf("Taxa de defeitos...: %.2f%%\n", defeitos);
    printf("Aproveitamento.....: %.2f%%\n", aproveitamento);

    if (falta == 0) {
        printf("Status.............: Meta atingida!\n");
    } else {
        printf("Faltam.............: %d pecas\n", falta);
    }

    return 0;
}