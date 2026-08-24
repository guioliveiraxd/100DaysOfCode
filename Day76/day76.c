//
//  Busca Linear e Busca Binaria
//
#include <stdio.h>

int buscaLinear(int numeros[], int tamanho, int procurado, int *comparacoes)
{
    *comparacoes = 0;

    for (int i = 0; i < tamanho; i++)
    {
        (*comparacoes)++;

        if (numeros[i] == procurado)
        {
            return i;
        }
    }

    return -1;
}

int buscaBinaria(int numeros[], int tamanho, int procurado, int *comparacoes)
{
    int inicio = 0;
    int fim = tamanho - 1;

    *comparacoes = 0;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;

        (*comparacoes)++;

        if (numeros[meio] == procurado)
        {
            return meio;
        }

        if (numeros[meio] < procurado)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    return -1;
}

int main()
{
    int numeros[] = {
        2, 5, 8, 12, 15, 19, 23, 27, 31, 36,
        42, 48, 53, 59, 64, 71, 78, 85, 92, 100
    };

    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int procurado;
    int comparacoesLinear;
    int comparacoesBinaria;

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &procurado);

    int resultadoLinear = buscaLinear(
        numeros,
        tamanho,
        procurado,
        &comparacoesLinear
    );

    int resultadoBinaria = buscaBinaria(
        numeros,
        tamanho,
        procurado,
        &comparacoesBinaria
    );

    printf("\nBusca Linear\n");
    printf("Comparacoes: %d\n", comparacoesLinear);

    if (resultadoLinear != -1)
    {
        printf("Numero encontrado na posicao: %d\n", resultadoLinear);
    }
    else
    {
        printf("Numero nao encontrado.\n");
    }

    printf("\nBusca Binaria\n");
    printf("Comparacoes: %d\n", comparacoesBinaria);

    if (resultadoBinaria != -1)
    {
        printf("Numero encontrado na posicao: %d\n", resultadoBinaria);
    }
    else
    {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}