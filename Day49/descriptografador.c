//
//  Descriptografador de Mensagem - do codigo anterior
//
#include <stdio.h>
#include <string.h>

void aumentarInicio(char texto[]) {

    int limite = 5;

    if (strlen(texto) < 5) {
        limite = strlen(texto);
    }

    for (int i = 0; i < limite; i++) {
        texto[i] += 2;
    }
}

void inverter(char texto[]) {

    int inicio = 0;
    int fim = strlen(texto) - 1;

    while (inicio < fim) {

        char aux = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = aux;

        inicio++;
        fim--;
    }
}

void voltarLetras(char texto[]) {

    for (int i = 0; i < strlen(texto); i++) {

        if ((texto[i] >= 'C' && texto[i] <= 'Z') ||
            (texto[i] >= 'c' && texto[i] <= 'z')) {

            texto[i] -= 2;
            } else if (texto[i] == 'B') {
                texto[i] = '@';
            } else if (texto[i] == 'A') {
                texto[i] = '?';
            } else if (texto[i] == 'b') {
                texto[i] = '`';
            } else if (texto[i] == 'a') {
                texto[i] = '_';
            }
    }
}

int main() {

    char texto[100];

    printf("Digite a mensagem criptografada: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    aumentarInicio(texto);

    inverter(texto);

    voltarLetras(texto);

    printf("\nMensagem descriptografada:\n");
    printf("%s\n", texto);

    return 0;
}