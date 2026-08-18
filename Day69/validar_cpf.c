#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int calcular_digito(const int cpf[], int peso_inicial, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += cpf[i] * (peso_inicial - i);
    }
    int resto = soma % 11;
    return (resto < 2) ? 0 : (11 - resto);
}

bool validar_cpf(const int cpf[]) {
    bool todos_iguais = true;
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            todos_iguais = false;
            break;
        }
    }
    if (todos_iguais) return false;

    int d1 = calcular_digito(cpf, 10, 9);
    if (d1 != cpf[9]) return false;

    int d2 = calcular_digito(cpf, 11, 10);
    if (d2 != cpf[10]) return false;

    return true;
}

int main(void) {
    char entrada[20];
    int cpf[11];
    int idx = 0;

    printf("Digite o CPF (com ou sem pontuacao): ");
    if (scanf("%19s", entrada) != 1) {
        printf("Erro ao ler a entrada.\n");
        return 1;
    }

    for (int i = 0; entrada[i] != '\0' && idx < 11; i++) {
        if (isdigit((unsigned char)entrada[i])) {
            cpf[idx++] = entrada[i] - '0';
        }
    }

    if (idx != 11) {
        printf("Erro: O CPF deve conter exatamente 11 digitos numericos.\n");
        return 1;
    }

    if (validar_cpf(cpf)) {
        printf("CPF VALIDO!\n");
    } else {
        printf("CPF INVALIDO!\n");
    }

    return 0;
}