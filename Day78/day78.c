//
//  Campo Minado Simplificado
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5
#define BOMBAS 5

void colocarBombas(int campo[TAMANHO][TAMANHO])
{
    int bombasColocadas = 0;

    while (bombasColocadas < BOMBAS)
    {
        int linha = rand() % TAMANHO;
        int coluna = rand() % TAMANHO;

        if (campo[linha][coluna] == 0)
        {
            campo[linha][coluna] = 1;
            bombasColocadas++;
        }
    }
}

int contarBombasAoRedor(int campo[TAMANHO][TAMANHO], int linha, int coluna)
{
    int quantidade = 0;

    for (int i = linha - 1; i <= linha + 1; i++)
    {
        for (int j = coluna - 1; j <= coluna + 1; j++)
        {
            if (i >= 0 && i < TAMANHO &&
                j >= 0 && j < TAMANHO)
            {
                quantidade += campo[i][j];
            }
        }
    }

    return quantidade;
}

int main()
{
    int campo[TAMANHO][TAMANHO] = {0};
    int linha;
    int coluna;

    srand(time(NULL));

    colocarBombas(campo);

    printf("Campo Minado Simplificado\n");
    printf("O campo possui %d linhas e %d colunas.\n", TAMANHO, TAMANHO);
    printf("Escolha uma posicao entre 1 e 5.\n\n");

    printf("Digite a linha: ");
    scanf("%d", &linha);

    printf("Digite a coluna: ");
    scanf("%d", &coluna);

    linha--;
    coluna--;

    if (linha < 0 || linha >= TAMANHO ||
        coluna < 0 || coluna >= TAMANHO)
    {
        printf("\nPosicao invalida.\n");
        return 0;
    }

    if (campo[linha][coluna] == 1)
    {
        printf("\nBOOM! Voce encontrou uma bomba!\n");
    }
    else
    {
        int bombasAoRedor = contarBombasAoRedor(campo, linha, coluna);

        printf("\nPosicao segura!\n");
        printf("Bombas ao redor: %d\n", bombasAoRedor);
    }

    return 0;
}