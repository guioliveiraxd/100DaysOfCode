//
//  Funcao para verificar se um numero e par
//
#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }

    return 0;
}

int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if (ehPar(N)) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }

    return 0;
}