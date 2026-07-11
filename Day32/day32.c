//
//  LeetCode 941 - Valid Mountain Array
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

    int i = 0;

    while (i < N - 1 && vet[i] < vet[i + 1]) {
        i++;
    }

    if (i == 0 || i == N - 1) {
        printf("NAO\n");
        return 0;
    }

    while (i < N - 1 && vet[i] > vet[i + 1]) {
        i++;
    }

    if (i == N - 1) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}