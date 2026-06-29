//
// Beecrowd 1180 - menor posicao
//
#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int vetor[N];
    int menor, posicao;

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);

        if (i == 0) {
            menor = vetor[i];
            posicao = i;
        }
        else if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}