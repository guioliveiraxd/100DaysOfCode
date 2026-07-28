//
//  Codificador de Mensagem - youtube
//
#include <stdio.h>
#include <string.h>

void deslocarLetras(char texto[]) {
    for (int i = 0; i < strlen(texto); i++) {

        if ((texto[i] >= 'A' && texto[i] <= 'Z') ||
            (texto[i] >= 'a' && texto[i] <= 'z')) {

            texto[i] += 2;
            }
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

void diminuirInicio(char texto[]) {

    int limite = 5;

    if (strlen(texto) < 5) {
        limite = strlen(texto);
    }

    for (int i = 0; i < limite; i++) {
        texto[i] -= 2;
    }
}

int main() {

    char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    deslocarLetras(texto);

    inverter(texto);

    diminuirInicio(texto);

    printf("\nMensagem criptografada:\n");
    printf("%s\n", texto);

    return 0;
}