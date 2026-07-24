//
// sistema de xp (jogo)
//
#include <stdio.h>

int calcularNivel(int xp) {

    if (xp >= 1000) {
        return 5;
    } else if (xp >= 700) {
        return 4;
    } else if (xp >= 400) {
        return 3;
    } else if (xp >= 200) {
        return 2;
    }

    return 1;
}

int main() {

    int xpAtual;
    int xpGanho;
    int xpTotal;
    int nivel;

    printf("XP atual: ");
    scanf("%d", &xpAtual);

    printf("XP ganho: ");
    scanf("%d", &xpGanho);

    xpTotal = xpAtual + xpGanho;

    nivel = calcularNivel(xpTotal);

    printf("\nResumo\n");
    printf("XP atual : %d\n", xpAtual);
    printf("XP ganho : %d\n", xpGanho);
    printf("XP total : %d\n", xpTotal);
    printf("Nivel    : %d\n", nivel);

    return 0;
}