//
// mascarando senhas em c
//
#include <stdio.h>
#include <string.h>

void mascarar_senha(char *frase) {

    int tamanho = strlen(frase);

    if (frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    for (int i = 0; i < tamanho; i++) {

        if (frase[i] == ' ') {
            frase[i] = '-';
        } else {
            frase[i] = '*';
        }
    }

    printf("\nSenha mascarada:\n%s\n", frase);
}

int main() {

    char buffer[100];

    printf("Digite a senha: ");
    fgets(buffer, sizeof(buffer), stdin);

    mascarar_senha(buffer);

    return 0;
}