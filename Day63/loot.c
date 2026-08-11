//
//  Simulador de Loot
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int monstros;
    int chance;
    int drops = 0;

    srand(time(NULL));

    printf("Quantidade de monstros: ");
    scanf("%d", &monstros);

    printf("Chance de drop (%%): ");
    scanf("%d", &chance);

    for (int i = 1; i <= monstros; i++) {

        int sorteio = rand() % 100 + 1;

        if (sorteio <= chance) {

            drops++;

            printf("Monstro %d: DROP!\n", i);

        } else {

            printf("Monstro %d: Sem drop.\n", i);

        }
    }

    printf("\nResultado\n");
    printf("Monstros derrotados: %d\n", monstros);
    printf("Itens encontrados: %d\n", drops);
    printf("Taxa real de drop: %.2f%%\n",
           (float)drops / monstros * 100);

    return 0;
}