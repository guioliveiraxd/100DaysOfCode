//
// Vídeo YT - pedra, papel e tesoura em C
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int jogador, computador;
    int vitorias = 0, derrotas = 0, empates = 0;

    srand(time(NULL));

    while (1) {

        printf("\n===== PEDRA PAPEL TESOURA =====\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &jogador);

        if (jogador == 0)
            break;

        if (jogador < 1 || jogador > 3) {
            printf("Opcao invalida!\n");
            continue;
        }

        computador = rand() % 3 + 1;

        printf("\nVoce escolheu: ");

        switch (jogador) {
            case 1:
                printf("Pedra\n");
                break;
            case 2:
                printf("Papel\n");
                break;
            case 3:
                printf("Tesoura\n");
                break;
        }

        printf("Computador escolheu: ");

        switch (computador) {
            case 1:
                printf("Pedra\n");
                break;
            case 2:
                printf("Papel\n");
                break;
            case 3:
                printf("Tesoura\n");
                break;
        }

        if (jogador == computador) {
            printf("Empate!\n");
            empates++;
        }
        else if ((jogador == 1 && computador == 3) ||
                 (jogador == 2 && computador == 1) ||
                 (jogador == 3 && computador == 2)) {
            printf("Voce venceu!\n");
            vitorias++;
                 }
        else {
            printf("Computador venceu!\n");
            derrotas++;
        }

    }

    printf("\n====================\n");
    printf("RESULTADO FINAL\n");
    printf("====================\n");
    printf("Vitorias: %d\n", vitorias);
    printf("Derrotas: %d\n", derrotas);
    printf("Empates: %d\n", empates);

    return 0;
}