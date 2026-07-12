//
//  Verificacao de numero repetido no vetor - yt
//
#include <stdio.h>

int main() {
    int N;

    printf("Quantos numeros? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }

    int repetido = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (vet[i] == vet[j]) {
                repetido = 1;
                break;
            }
        }

        if (repetido) {
            break;
        }
    }

    if (repetido) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}