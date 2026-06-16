#include <stdio.h>

int main() {
    int N, numero, somapositivos;
    somapositivos = 0;

    printf("Digite a quantidade que deseja ler:\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite seu numero:\n");
        scanf("%d", &numero);

        if (numero > 0) {
            somapositivos += numero;
        }
    }
    printf("Soma dos positivos: %d\n", somapositivos);

    return 0;
}