#include <stdio.h>

int main() {
    float meta;
    float deposito;
    float total = 0;
    int quantidadeDepositos = 0;

    printf("Qual a sua meta de economia? R$ ");
    scanf("%f", &meta);

    do {
        printf("\nQuanto deseja depositar? R$ ");
        scanf("%f", &deposito);

        total += deposito;
        quantidadeDepositos++;

        printf("Total acumulado: R$ %.2f\n", total);

        if (total < meta) {
            printf("Faltam R$ %.2f para atingir a meta.\n", meta - total);
        }

    } while (total < meta);

    printf("\nMeta atingida!\n");
    printf("Meta: R$ %.2f\n", meta);
    printf("Depositos realizados: %d\n", quantidadeDepositos);
    printf("Total economizado: R$ %.2f\n", total);

    return 0;
}