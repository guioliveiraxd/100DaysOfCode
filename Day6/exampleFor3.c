#include <stdio.h>

int main() {
    int N, maior, N2;

    printf("Digite quantos numeros inteiros vai inserir: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        printf("Digite o valor do numero: ");
        scanf("%d", &N2);
        if (i == 0) {
            maior = N2;
        }
        if (N2 > maior) {
            maior = N2;
        }
    }
    printf("Maior: %d\n", maior);
    return 0;
}