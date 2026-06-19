#include <stdio.h>
int main() {
    int numero;
    int maior = 0;
    int quantidade = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (quantidade == 0 && numero != 0) {
            maior = numero;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero != 0) {
            quantidade++;
        }

    } while (numero != 0);
    printf("\nMaior numero: %d\n", maior);
    printf("Quantidade digitada: %d\n", quantidade);
    return 0;
}