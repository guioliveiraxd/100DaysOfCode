#include <stdio.h>

struct Personagem {
    char nome[20];
    int vida;
    int ataque;
};

int main() {
    struct Personagem heroi;

    printf("Nome do heroi: ");
    scanf("%s", heroi.nome);

    heroi.vida = 100;
    heroi.ataque = 15;

    printf("\n%s\n", heroi.nome);
    printf("Vida: %d\n", heroi.vida);
    printf("Ataque: %d\n", heroi.ataque);

    return 0;
}