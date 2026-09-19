//
//  Jogo da Forca - Dia 100
//
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[] = "programacao";
    char descoberta[50];
    char letra;

    int erros = 0;
    int acertou;
    int terminou = 0;

    int tamanho = strlen(palavra);

    // Cria os espaços da palavra
    for (int i = 0; i < tamanho; i++)
    {
        descoberta[i] = '_';
    }

    descoberta[tamanho] = '\0';

    while (erros < 6 && !terminou)
    {
        printf("\nPalavra: ");

        for (int i = 0; i < tamanho; i++)
        {
            printf("%c ", descoberta[i]);
        }

        printf("\nErros: %d/6", erros);

        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        acertou = 0;

        // Procura a letra na palavra
        for (int i = 0; i < tamanho; i++)
        {
            if (palavra[i] == letra)
            {
                descoberta[i] = letra;
                acertou = 1;
            }
        }

        if (acertou)
        {
            printf("Acertou!\n");
        }
        else
        {
            erros++;
            printf("Errou!\n");
        }

        // Verifica se terminou
        if (strcmp(palavra, descoberta) == 0)
        {
            terminou = 1;
        }
    }

    if (terminou)
    {
        printf("\n====================\n");
        printf("VOCE VENCEU!\n");
        printf("Palavra: %s\n", palavra);
        printf("====================\n");
    }
    else
    {
        printf("\n====================\n");
        printf("VOCE PERDEU!\n");
        printf("A palavra era: %s\n", palavra);
        printf("====================\n");
    }

    return 0;
}