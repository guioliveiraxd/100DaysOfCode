//
//  Jogo da Velha
//
#include <stdio.h>

void mostrarTabuleiro(char tabuleiro[3][3])
{
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", tabuleiro[i][j]);

            if (j < 2)
            {
                printf("|");
            }
        }

        printf("\n");

        if (i < 2)
        {
            printf("---|---|---\n");
        }
    }

    printf("\n");
}

int verificarVitoria(char tabuleiro[3][3], char jogador)
{
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == jogador &&
            tabuleiro[i][1] == jogador &&
            tabuleiro[i][2] == jogador)
        {
            return 1;
        }

        if (tabuleiro[0][i] == jogador &&
            tabuleiro[1][i] == jogador &&
            tabuleiro[2][i] == jogador)
        {
            return 1;
        }
    }

    if (tabuleiro[0][0] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][2] == jogador)
    {
        return 1;
    }

    if (tabuleiro[0][2] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][0] == jogador)
    {
        return 1;
    }

    return 0;
}

int main()
{
    char tabuleiro[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int posicao;
    int linha;
    int coluna;
    char jogador = 'X';

    printf("Jogo da Velha\n");
    printf("Jogador X vs Jogador O\n");

    for (int jogada = 1; jogada <= 9; jogada++)
    {
        mostrarTabuleiro(tabuleiro);

        printf("Jogador %c, escolha uma posicao: ", jogador);
        scanf("%d", &posicao);

        if (posicao < 1 || posicao > 9)
        {
            printf("Posicao invalida.\n");
            jogada--;
            continue;
        }

        linha = (posicao - 1) / 3;
        coluna = (posicao - 1) % 3;

        if (tabuleiro[linha][coluna] == 'X' ||
            tabuleiro[linha][coluna] == 'O')
        {
            printf("Essa posicao ja esta ocupada.\n");
            jogada--;
            continue;
        }

        tabuleiro[linha][coluna] = jogador;

        if (verificarVitoria(tabuleiro, jogador))
        {
            mostrarTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogador);
            return 0;
        }

        if (jogador == 'X')
        {
            jogador = 'O';
        }
        else
        {
            jogador = 'X';
        }
    }

    mostrarTabuleiro(tabuleiro);
    printf("Empate!\n");

    return 0;
}