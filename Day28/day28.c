//
// Simulado fatec maratona2025 / Exercício: Problema F - Suprimentos
//
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int saldo = 0;
    int menor = 0;

    for (int i = 0; i < n; i++) {

        int x;
        scanf("%d", &x);

        saldo += x;

        if (saldo < menor)
            menor = saldo;

    }

    printf("%d\n", -menor);

    return 0;
}