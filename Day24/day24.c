//curso udemy - Exercício - Maior valor do vetor

#include <stdio.h>

int main() {
    int N;
    int posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES: ");
    for (int i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }

    maior = vet[0];
    posicao = 0;

    for (int i = 1; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\n\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR = %d\n", posicao);

    return 0;
}