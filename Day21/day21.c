// Desafio: Pirâmide de números
//
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int j = 1;

        while (j <= i) {
            printf("%d", j);
            j++;
        }

        printf("\n");
    }

    return 0;
}
