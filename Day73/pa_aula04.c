//
// Exercicio 1 - LP Aula 4
//
#include <stdio.h>

int main() {
    int a1 = 1; // Primeiro termo fixo
    int r; // Razão inserida pelo usuário
    int n = 10; // Total de termos

    printf("Digite a razão (r) da PA: ");
    scanf("%d", &r);

    printf("\nProgressão Aritmética: ");

    // Laço para calcular e imprimir os 10 termos
    for (int i = 0; i < n; i++) {
        int termo = a1 + i * r;
        printf("%d", termo);

        // Formatação: adiciona vírgula entre os números
        if (i < n - 1) {
            printf(", ");
        }
    }
    return 0;
}