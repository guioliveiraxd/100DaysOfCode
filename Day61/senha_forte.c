//
//  Analisador de Senha
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int senhaForte(char senha[]) {

    int tamanho = strlen(senha);
    int maiuscula = 0;
    int minuscula = 0;
    int numero = 0;

    if (tamanho < 8) {
        return 0;
    }

    for (int i = 0; i < tamanho; i++) {

        if (isupper(senha[i])) {
            maiuscula = 1;
        }

        if (islower(senha[i])) {
            minuscula = 1;
        }

        if (isdigit(senha[i])) {
            numero = 1;
        }
    }

    if (maiuscula && minuscula && numero) {
        return 1;
    }

    return 0;
}

int main() {

    char senha[50];

    printf("Digite sua senha: ");
    scanf("%49s", senha);

    if (senhaForte(senha)) {

        printf("Senha forte!\n");

    } else {

        printf("Senha fraca!\n");

    }

    return 0;
}