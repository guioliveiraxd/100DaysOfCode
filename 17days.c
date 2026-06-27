#include <stdio.h>
#include <string.h>

#define MAX_FILA 15
#define MAX_BRINQUEDO 5

struct Crianca {
    char nome[30];
    int idade;
    int energia;
};

int main() {

    struct Crianca fila[MAX_FILA];

    int i;
    int totalCriancas;
    int inicioFila = 0;
    int rodada = 1;

    printf("Quantas criancas estao na fila? (max %d): ", MAX_FILA);
    scanf("%d", &totalCriancas);

    if (totalCriancas > MAX_FILA)
        totalCriancas = MAX_FILA;

    // Cadastro das crianças
    for(i = 0; i < totalCriancas; i++) {

        printf("\nCrianca %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", fila[i].nome);

        printf("Idade: ");
        scanf("%d", &fila[i].idade);

        fila[i].energia = 100;
    }

    printf("\n==============================\n");
    printf("INICIANDO O PULA-PULA\n");
    printf("==============================\n");

    while(inicioFila < totalCriancas) {

        printf("\n===== Rodada %d =====\n", rodada);

        printf("\nEntraram no brinquedo:\n");

        int entrou = 0;

        for(i = inicioFila; i < totalCriancas && entrou < MAX_BRINQUEDO; i++) {

            printf("- %s (%d anos)\n",
                   fila[i].nome,
                   fila[i].idade);

            fila[i].energia -= 30;

            entrou++;
        }

        printf("\nBrincando...\n");

        printf("\nSaindo do brinquedo:\n");

        entrou = 0;

        for(i = inicioFila; i < totalCriancas && entrou < MAX_BRINQUEDO; i++) {

            printf("%s saiu com %d de energia.\n",
                   fila[i].nome,
                   fila[i].energia);

            entrou++;
        }

        inicioFila += MAX_BRINQUEDO;

        if(inicioFila < totalCriancas)
            printf("\nRestam %d criancas na fila.\n",
                   totalCriancas - inicioFila);
        else
            printf("\nNao ha mais criancas na fila.\n");

        rodada++;
    }

    printf("\n==============================\n");
    printf("O parque encerrou as atividades!\n");
    printf("==============================\n");

    return 0;
}