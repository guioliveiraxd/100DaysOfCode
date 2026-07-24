//
// Created by guiol on 24/07/2026.
//
//
//  Sistema de XP - Monstros
//
#include <stdio.h>

int calcularXP(int nivelMonstro) {
    return nivelMonstro * 50;
}

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
    int nivelMonstro;
    int xpGanho;
    int xpTotal;
    int nivelJogador;

    printf("XP atual: ");
    scanf("%d", &xpAtual);

    printf("Nivel do monstro: ");
    scanf("%d", &nivelMonstro);

    xpGanho = calcularXP(nivelMonstro);

    xpTotal = xpAtual + xpGanho;

    nivelJogador = calcularNivel(xpTotal);

    printf("\nResumo\n");
    printf("XP atual        : %d\n", xpAtual);
    printf("Nivel monstro   : %d\n", nivelMonstro);
    printf("XP ganho        : %d\n", xpGanho);
    printf("XP total        : %d\n", xpTotal);
    printf("Nivel jogador   : %d\n", nivelJogador);

    return 0;
}