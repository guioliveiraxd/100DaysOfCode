//
//  Primeira letra que nao repete
//
#include <stdio.h>

#include <string.h>

int main()
{
    char palavra[100];
    int quantidade[256] = {0};

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        quantidade[(unsigned char)palavra[i]]++;
    }

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (quantidade[(unsigned char)palavra[i]] == 1)
        {
            printf("Primeira letra que nao repete: %c\n", palavra[i]);
            return 0;
        }
    }

    printf("Nenhuma letra encontrada.\n");

    return 0;
}