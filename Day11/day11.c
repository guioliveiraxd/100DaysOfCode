#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int positivos = 0;
    float media;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            positivos++;
        }

    } while (numero != 0);

    if (positivos > 0) {
        media = (float)soma / positivos;

        printf("\nSoma: %d\n", soma);
        printf("Quantidade de positivos: %d\n", positivos);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum numero positivo foi digitado.\n");
    }
    return 0;
}
