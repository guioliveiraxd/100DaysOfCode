#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int positivos = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            positivos++;
        }

    } while (numero != 0);

    printf("\nSoma dos positivos: %d\n", soma);
    printf("Quantidade de positivos: %d\n", positivos);

    return 0;
}