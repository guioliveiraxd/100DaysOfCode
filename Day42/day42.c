// pokemon com struct
#include <stdio.h>

struct Pokemon {
    char nome[20];
    char tipo[20];
    int ataque;
    int defesa;
    int vida;
};

int main() {

    struct Pokemon p1 = {"Charmander", "Fogo", 80, 50, 100};
    struct Pokemon p2 = {"Squirtle", "Agua", 60, 75, 100};
    struct Pokemon p3 = {"Bulbasaur", "Planta", 55, 80, 100};

    int opcao;

    printf("Escolha seu Pokemon inicial:\n");
    printf("1 - Charmander\n");
    printf("2 - Squirtle\n");
    printf("3 - Bulbasaur\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("\nPokemon escolhido!\n");
            printf("Nome: %s\n", p1.nome);
            printf("Tipo: %s\n", p1.tipo);
            printf("Ataque: %d\n", p1.ataque);
            printf("Defesa: %d\n", p1.defesa);
            printf("Vida: %d\n", p1.vida);
            break;

        case 2:
            printf("\nPokemon escolhido!\n");
            printf("Nome: %s\n", p2.nome);
            printf("Tipo: %s\n", p2.tipo);
            printf("Ataque: %d\n", p2.ataque);
            printf("Defesa: %d\n", p2.defesa);
            printf("Vida: %d\n", p2.vida);
            break;

        case 3:
            printf("\nPokemon escolhido!\n");
            printf("Nome: %s\n", p3.nome);
            printf("Tipo: %s\n", p3.tipo);
            printf("Ataque: %d\n", p3.ataque);
            printf("Defesa: %d\n", p3.defesa);
            printf("Vida: %d\n", p3.vida);
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}