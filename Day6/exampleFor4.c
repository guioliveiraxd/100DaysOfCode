#include <stdio.h>
int main() {
    int N, numero, contador;
    printf("Digite a quantidade que deseja ler:  \n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite seu numero: \n");
        scanf("%d", &numero);
        if (numero >50) {
            contador ++;
        }
    }
    printf("Quantidade de numeros maiores que 50 = %d\n", contador);

    return 0;

}