//
//  Calculadora de Tinta
//
#include <stdio.h>

float calcularArea(float altura, float largura) {

    return altura * largura;
}

float calcularLitros(float area, float rendimento) {

    return area / rendimento;
}

int calcularLatas(float litros) {

    return (int)(litros / 18);
}

int calcularGaloes(float litrosRestantes) {

    int galoes = (int)(litrosRestantes / 3.6);

    if (litrosRestantes > galoes * 3.6) {
        galoes++;
    }

    return galoes;
}

int main() {

    float altura;
    float largura;
    float rendimento;

    float area;
    float litros;
    float litrosRestantes;

    int latas;
    int galoes;

    printf("Altura da parede (m): ");
    scanf("%f", &altura);

    printf("Largura da parede (m): ");
    scanf("%f", &largura);

    printf("Rendimento da tinta (m²/L): ");
    scanf("%f", &rendimento);

    area = calcularArea(altura, largura);

    litros = calcularLitros(area, rendimento);

    latas = calcularLatas(litros);

    litrosRestantes = litros - (latas * 18);

    galoes = calcularGaloes(litrosRestantes);

    printf("\nResumo\n");
    printf("Area da parede: %.2f m²\n", area);
    printf("Tinta necessaria: %.2f litros\n", litros);
    printf("Latas de 18L: %d\n", latas);
    printf("Galoes de 3.6L: %d\n", galoes);

    return 0;
}