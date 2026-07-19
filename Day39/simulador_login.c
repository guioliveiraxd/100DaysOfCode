//
//  Simulador de Login
//
#include <stdio.h>
#include <string.h>

int realizarLogin(char usuario[], char senha[]) {

    if (strcmp(usuario, "admin") == 0 &&
        strcmp(senha, "123456") == 0) {

        return 1;
        }

    return 0;
}

int main() {

    char usuario[50];
    char senha[50];

    printf("Usuario: ");
    fgets(usuario, sizeof(usuario), stdin);

    printf("Senha: ");
    fgets(senha, sizeof(senha), stdin);

    usuario[strcspn(usuario, "\n")] = '\0';
    senha[strcspn(senha, "\n")] = '\0';

    if (realizarLogin(usuario, senha)) {
        printf("\nLogin realizado com sucesso!\n");
    } else {
        printf("\nUsuario ou senha incorretos.\n");
    }

    return 0;
}