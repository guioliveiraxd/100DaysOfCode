//
//  Simulador de Conta Bancaria
//
#include <stdio.h>
#include <string.h>

struct Conta {

    char titular[50];
    int numero;
    float saldo;

};

void depositar(struct Conta *conta, float valor) {

    conta->saldo += valor;

}

void sacar(struct Conta *conta, float valor) {

    if (valor <= conta->saldo) {

        conta->saldo -= valor;
        printf("\nSaque realizado.\n");

    } else {

        printf("\nSaldo insuficiente.\n");

    }

}

void mostrarConta(struct Conta conta) {

    printf("\nTitular: %s\n", conta.titular);
    printf("Conta..: %d\n", conta.numero);
    printf("Saldo..: R$ %.2f\n", conta.saldo);

}

int main() {

    struct Conta conta;

    strcpy(conta.titular, "Guilherme Oliveira");
    conta.numero = 1001;
    conta.saldo = 500.00;

    mostrarConta(conta);

    depositar(&conta, 200);

    sacar(&conta, 150);

    mostrarConta(conta);

    return 0;
}