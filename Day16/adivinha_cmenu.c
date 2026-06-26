#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int recordes[3] = {999, 999, 999}; /* tentativas minimas por dificuldade */
    int opcao;

    do {
        printf("\n=== ADIVINHE O NUMERO ===\n");
        printf("1. Facil   (1-50)\n");
        printf("2. Medio   (1-100)\n");
        printf("3. Dificil (1-500)\n");
        printf("4. Recordes\n");
        printf("0. Sair\n");
        printf("> ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            case 2:
            case 3: {
                int limites[3] = {50, 100, 500};
                int limite = limites[opcao - 1];
                int segredo = rand() % limite + 1;
                int chute, tentativas = 0;
                printf("\nNumero entre 1 e %d. Boa sorte!\n", limite);

                do {
                    printf("Chute: ");
                    scanf("%d", &chute);
                    tentativas++;

                    if (chute < segredo) {
                        printf("Muito baixo!\n");
                    } else if (chute > segredo) {
                        printf("Muito alto!\n");
                    } else {
                        printf("\nAcertou em %d tentativa(s)!\n", tentativas);
                        if (tentativas < recordes[opcao - 1]) {
                            recordes[opcao - 1] = tentativas;
                            printf("Novo recorde nessa dificuldade!\n");
                        }
                    }
                } while (chute != segredo);
                break;
            }

            case 4:
                printf("\n--- RECORDES ---\n");
                printf("Facil:   %s\n", recordes[0] == 999 ? "---" : "");
                if (recordes[0] != 999) printf("Facil:   %d tentativas\n",   recordes[0]);
                if (recordes[1] != 999) printf("Medio:   %d tentativas\n",   recordes[1]);
                if (recordes[2] != 999) printf("Dificil: %d tentativas\n",   recordes[2]);
                if (recordes[0] == 999 && recordes[1] == 999 && recordes[2] == 999)
                    printf("Nenhum recorde ainda.\n");
                break;

            case 0:
                printf("Ate mais!\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);
    return 0;
}