// Desafio: Número Perfeito

// Um número é chamado de perfeito quando a soma de seus divisores (exceto ele mesmo) é igual ao próprio número.

#include <stdio.h>
int main() {
    int n, i;
    int soma = 0;

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma = soma + i;
        }
    }
    if (soma == n) {
        printf("Numero perfeito\n");
    } else {
        printf("Nao e perfeito\n");
    }
    return 0;
}
