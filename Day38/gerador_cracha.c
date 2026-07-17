//
// gerador de crachá:
//
// saída:
// Digite o nome:Guilherme Oliveira
//
// Digite o cargo:Operador
//
//
// ======================
// Nome : Guilherme Oliveira
// Cargo: Operador
// ID   : GO-2026
// ======================
//
#include <stdio.h>
#include <string.h>

void gerarCracha(char nome[], char cargo[]) {

    int tamanhoNome = strlen(nome);
    int tamanhoCargo = strlen(cargo);

    if (nome[tamanhoNome - 1] == '\n') {
        nome[tamanhoNome - 1] = '\0';
    }

    if (cargo[tamanhoCargo - 1] == '\n') {
        cargo[tamanhoCargo - 1] = '\0';
    }

    char primeira = nome[0];
    char segunda = '\0';

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ' && nome[i + 1] != '\0') {
            segunda = nome[i + 1];
            break;
        }
    }

    if (segunda == '\0') {
        segunda = 'X';
    }

    if (primeira >= 'a' && primeira <= 'z') {
        primeira -= 32;
    }

    if (segunda >= 'a' && segunda <= 'z') {
        segunda -= 32;
    }

    printf("\n======================\n");
    printf("Nome : %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("ID   : %c%c-2026\n", primeira, segunda);
    printf("======================\n");
}

int main() {

    char nome[100];
    char cargo[100];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o cargo: ");
    fgets(cargo, sizeof(cargo), stdin);

    gerarCracha(nome, cargo);

    return 0;
}