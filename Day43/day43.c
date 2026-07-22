//
//  Medalhas Campeonato
//
#include <stdio.h>

void mostrarRanking(int a, int b, int c) {

    printf("\n=== RANKING ===\n");

    if (a >= b && a >= c) {

        printf("1º Lugar: Jogador A\n");

        if (b >= c) {
            printf("2º Lugar: Jogador B\n");
            printf("3º Lugar: Jogador C\n");
        } else {
            printf("2º Lugar: Jogador C\n");
            printf("3º Lugar: Jogador B\n");
        }

    } else if (b >= a && b >= c) {

        printf("1º Lugar: Jogador B\n");

        if (a >= c) {
            printf("2º Lugar: Jogador A\n");
            printf("3º Lugar: Jogador C\n");
        } else {
            printf("2º Lugar: Jogador C\n");
            printf("3º Lugar: Jogador A\n");
        }

    } else {

        printf("1º Lugar: Jogador C\n");

        if (a >= b) {
            printf("2º Lugar: Jogador A\n");
            printf("3º Lugar: Jogador B\n");
        } else {
            printf("2º Lugar: Jogador B\n");
            printf("3º Lugar: Jogador A\n");
        }
    }
}

int main() {

    int jogadorA;
    int jogadorB;
    int jogadorC;

    printf("Pontuacao do Jogador A: ");
    scanf("%d", &jogadorA);

    printf("Pontuacao do Jogador B: ");
    scanf("%d", &jogadorB);

    printf("Pontuacao do Jogador C: ");
    scanf("%d", &jogadorC);

    mostrarRanking(jogadorA, jogadorB, jogadorC);

    return 0;
}