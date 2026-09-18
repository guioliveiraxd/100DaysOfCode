//
//  Compressao e Descompressao
//
#include <stdio.h>

int main()
{
    char texto[100];
    char comprimido[200];
    char descomprimido[200];

    int posicao = 0;
    int posicaoDes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    // Compressao
    for (int i = 0; texto[i] != '\0'; i++)
    {
        int contador = 1;

        while (texto[i] == texto[i + 1])
        {
            contador++;
            i++;
        }

        comprimido[posicao++] = texto[i];

        // Funciona para contagens de 1 a 9
        comprimido[posicao++] = contador + '0';
    }

    comprimido[posicao] = '\0';

    printf("\nComprimido: %s\n", comprimido);

    // Descompressao
    for (int i = 0; comprimido[i] != '\0'; i += 2)
    {
        char letra = comprimido[i];
        int quantidade = comprimido[i + 1] - '0';

        for (int j = 0; j < quantidade; j++)
        {
            descomprimido[posicaoDes++] = letra;
        }
    }

    descomprimido[posicaoDes] = '\0';

    printf("Descomprimido: %s\n", descomprimido);

    return 0;
}