//
//  Simulador de Semaforo
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int carrosA = 0;
    int carrosB = 0;

    srand(time(NULL));

    printf("Simulador de Semaforo\n\n");

    for (int minuto = 1; minuto <= 20; minuto++)
    {
        int chegaramA = rand() % 6;
        int chegaramB = rand() % 6;

        carrosA += chegaramA;
        carrosB += chegaramB;

        int estadoA;
        int estadoB;

        if (minuto % 3 == 1)
        {
            estadoA = 0;
            estadoB = 2;
        }
        else if (minuto % 3 == 2)
        {
            estadoA = 1;
            estadoB = 1;
        }
        else
        {
            estadoA = 2;
            estadoB = 0;
        }

        printf("Minuto %d\n\n", minuto);

        if (estadoA == 0)
        {
            printf("Semaforo A: VERDE\n");

            int passaram = 1 + rand() % 4;

            if (passaram > carrosA)
            {
                passaram = carrosA;
            }

            carrosA -= passaram;
            printf("Carros que passaram: %d\n", passaram);
        }
        else if (estadoA == 1)
        {
            printf("Semaforo A: AMARELO\n");
            printf("Carros aguardando: %d\n", carrosA);
        }
        else
        {
            printf("Semaforo A: VERMELHO\n");
            printf("Carros aguardando: %d\n", carrosA);
        }

        printf("\n");

        if (estadoB == 0)
        {
            printf("Semaforo B: VERDE\n");

            int passaram = 1 + rand() % 4;

            if (passaram > carrosB)
            {
                passaram = carrosB;
            }

            carrosB -= passaram;
            printf("Carros que passaram: %d\n", passaram);
        }
        else if (estadoB == 1)
        {
            printf("Semaforo B: AMARELO\n");
            printf("Carros aguardando: %d\n", carrosB);
        }
        else
        {
            printf("Semaforo B: VERMELHO\n");
            printf("Carros aguardando: %d\n", carrosB);
        }

        printf("\nCarros na fila A: %d\n", carrosA);
        printf("Carros na fila B: %d\n", carrosB);
        printf("\n");
    }

    printf("Simulacao encerrada.\n");

    return 0;
}