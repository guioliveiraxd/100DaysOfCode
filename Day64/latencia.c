#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcularRisco(int latencia, int perda)
{
    int risco = 0;

    if (latencia > 50)
        risco += 30;

    if (latencia > 100)
        risco += 30;

    if (perda > 2)
        risco += 20;

    if (perda > 5)
        risco += 20;

    if (risco > 100)
        risco = 100;

    return risco;
}

int main()
{
    srand(time(NULL));

    int latenciaA = 20;
    int perdaA = 0;

    int latenciaB = 30;
    int perdaB = 0;

    int conexaoAtual = 1;

    printf("Simulador de monitoramento de internet\n\n");

    for (int minuto = 1; minuto <= 20; minuto++)
    {
        if (minuto >= 5)
        {
            latenciaA += rand() % 20;
            perdaA += rand() % 3;
        }

        latenciaB = 25 + rand() % 15;
        perdaB = rand() % 2;

        int riscoA = calcularRisco(latenciaA, perdaA);
        int riscoB = calcularRisco(latenciaB, perdaB);

        printf("Minuto: %d\n\n", minuto);

        printf("Internet A\n");
        printf("Latencia: %d ms\n", latenciaA);
        printf("Perda de pacotes: %d%%\n", perdaA);
        printf("Risco: %d%%\n\n", riscoA);

        printf("Internet B\n");
        printf("Latencia: %d ms\n", latenciaB);
        printf("Perda de pacotes: %d%%\n", perdaB);
        printf("Risco: %d%%\n\n", riscoB);

        if (riscoA >= 50 && conexaoAtual == 1)
        {
            printf("A Internet A apresenta sinais de instabilidade.\n");

            if (riscoB < riscoA)
            {
                printf("A Internet B apresenta melhor qualidade.\n");
                printf("Alterando para a Internet B.\n");

                conexaoAtual = 2;
            }
        }

        printf("Conexao atual: Internet %d\n\n", conexaoAtual);
    }

    printf("Simulacao encerrada.\n");

    return 0;
}