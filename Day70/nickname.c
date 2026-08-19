//
//  Gerador de Nickname
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char prefixos[][20] = {
        "Dark",
        "Shadow",
        "Fire",
        "Ghost",
        "Cyber",
        "Night",
        "X",
        "Neo"
    };

    char sufixos[][20] = {
        "Wolf",
        "Gamer",
        "Player",
        "Hunter",
        "Dragon",
        "King",
        "Master",
        "Legend"
    };

    int quantidadePrefixos = 8;
    int quantidadeSufixos = 8;

    srand(time(NULL));

    int prefixo = rand() % quantidadePrefixos;
    int sufixo = rand() % quantidadeSufixos;
    int numero = rand() % 1000;

    printf("Nickname gerado:\n");
    printf("%s%s%d\n", prefixos[prefixo], sufixos[sufixo], numero);

    return 0;
}