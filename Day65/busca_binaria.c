#include <stdio.h>
#include <string.h>

int buscarNome(char nomes[][30], int quantidade, char nome[])
{
    int inicio = 0;
    int fim = quantidade - 1;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;

        int comparacao = strcmp(nomes[meio], nome);

        if (comparacao == 0)
            return meio;

        if (comparacao < 0)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

int main()
{
    char nomes[][30] = {
        "Ana",
        "Bruno",
        "Carlos",
        "Daniel",
        "Eduardo",
        "Fernanda",
        "Gabriel",
        "Guilherme",
        "Joao",
        "Lucas",
        "Marcos",
        "Pedro",
        "Rafael",
        "Ricardo",
        "Victor"
    };

    int quantidade = sizeof(nomes) / sizeof(nomes[0]);

    char busca[30];

    printf("Digite o nome que deseja procurar: ");
    scanf("%29s", busca);

    int resultado = buscarNome(nomes, quantidade, busca);

    if (resultado != -1)
    {
        printf("\nNome encontrado!\n");
        printf("Posicao: %d\n", resultado);
    }
    else
    {
        printf("\nNome nao encontrado.\n");
    }

    return 0;
}