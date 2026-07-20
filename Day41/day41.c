//
//  Simulador de Cofrinho Digital
//
#include <stdio.h>

float depositar(float saldo, float valor) {
    return saldo + valor;
}

float sacar(float saldo, float valor) {

    if (valor > saldo) {
        printf("\nSaldo insuficiente!\n");
        return saldo;
    }

    return saldo - valor;
}

void consultarSaldo(float saldo) {
    printf("\nSaldo atual: R$ %.2f\n", saldo);
}

int main() {

    float saldo = 0.0;
    float valor;
    int opcao;

    do {

        printf("\n=========================\n");
        printf("    COFRINHO DIGITAL\n");
        printf("=========================\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar saldo\n");
        printf("4 - Sair\n");
        printf("=========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:

                printf("\nValor para deposito: R$ ");
                scanf("%f", &valor);

                saldo = depositar(saldo, valor);

                printf("Deposito realizado com sucesso!\n");
                break;

            case 2:

                printf("\nValor para saque: R$ ");
                scanf("%f", &valor);

                saldo = sacar(saldo, valor);
                break;

            case 3:

                consultarSaldo(saldo);
                break;

            case 4:

                printf("\nObrigado por utilizar o Cofrinho Digital!\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}