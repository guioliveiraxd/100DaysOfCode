//
//  Leetcode - Problema - Segunda Maior Nota
//
#include <stdio.h>

int main() {

    int N;
    printf("Digite: ");
    scanf("%d", &N);

    int nota;
    int maior = -1;
    int segundoMaior = -1;

    for (int i = 0; i < N; i++) {

        scanf("%d", &nota);

        if (nota > maior) {

            segundoMaior = maior;
            maior = nota;

        } else if (nota > segundoMaior && nota != maior) {

            segundoMaior = nota;

        }

    }

    if (segundoMaior == -1) {
        printf("NAO EXISTE SEGUNDA MAIOR\n");
    } else {
        printf("o segundo maior eh: %d\n", segundoMaior);
    }

    return 0;
}