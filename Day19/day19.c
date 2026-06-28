// exercicio becrowd > positivo e media 1064
#include <stdio.h>

int main() {
    float numero;
    float soma = 0;
    int positivos = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &numero);

        if(numero > 0) {
            soma += numero;
            positivos++;
        }
    }
    printf("%d valores positivos\n", positivos);

    if(positivos > 0)
        printf("%.1f\n", soma / positivos);
    return 0;

}