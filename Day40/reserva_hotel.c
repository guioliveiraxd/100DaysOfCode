//
//  Simulador de Reserva de Hotel - prática
//
#include <stdio.h>
#include <string.h>

float calcularTotal(int diarias, float valorDiaria) {

    float total = diarias * valorDiaria;

    if (diarias > 5) {
        total = total * 0.90;
    }

    return total;
}

void exibirReserva(char nome[], int diarias, float valorDiaria, float total) {
    printf("      RESERVA DO HOTEL\n");
    printf("Hospede : %s", nome);
    printf("Diarias : %d\n", diarias);
    printf("Valor   : R$ %.2f\n", valorDiaria);

    if (diarias > 5) {
        printf("Desconto: 10%% aplicado\n");
    } else {
        printf("Desconto: Nao aplicado\n");
    }

    printf("Total   : R$ %.2f\n", total);
    printf("==============================\n");
}

int main() {

    char nome[100];
    int diarias;
    float valorDiaria;
    float total;

    printf("Nome do hospede: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Quantidade de diarias: ");
    scanf("%d", &diarias);

    printf("Valor da diaria: R$ ");
    scanf("%f", &valorDiaria);

    total = calcularTotal(diarias, valorDiaria);

    exibirReserva(nome, diarias, valorDiaria, total);

    return 0;
}