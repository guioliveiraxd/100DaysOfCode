//
// Beecrowd 1094 - Experiências
//
#include <stdio.h>

int main() {
    int N;
    int quantidade;
    char tipo;
    int total = 0;
    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {

        scanf("%d %c", &quantidade, &tipo);

        total += quantidade;

        switch(tipo) {

            case 'C':
                coelhos += quantidade;
                break;

            case 'R':
                ratos += quantidade;
                break;

            case 'S':
                sapos += quantidade;
                break;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (coelhos * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (ratos * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (sapos * 100.0) / total);

    return 0;
}