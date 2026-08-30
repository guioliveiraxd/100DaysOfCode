//
//  Monitor de Servidor
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarStatus(int cpu, int ram, int temperatura, int latencia)
{
    if (cpu >= 90 || ram >= 90 || temperatura >= 80 || latencia >= 150)
    {
        return 2;
    }

    if (cpu >= 70 || ram >= 70 || temperatura >= 65 || latencia >= 80)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int cpu;
    int ram;
    int temperatura;
    int latencia;
    int status;

    srand(time(NULL));

    printf("Monitor de Servidor\n\n");

    for (int ciclo = 1; ciclo <= 20; ciclo++)
    {
        cpu = rand() % 101;
        ram = rand() % 101;
        temperatura = 40 + rand() % 51;
        latencia = 20 + rand() % 181;

        status = verificarStatus(cpu, ram, temperatura, latencia);

        printf("Ciclo %d\n", ciclo);
        printf("CPU: %d%%\n", cpu);
        printf("RAM: %d%%\n", ram);
        printf("Temperatura: %d C\n", temperatura);
        printf("Latencia: %d ms\n", latencia);

        if (status == 0)
        {
            printf("Status: NORMAL\n");
        }
        else if (status == 1)
        {
            printf("Status: ALERTA\n");
        }
        else
        {
            printf("Status: CRITICO\n");
        }

        printf("\n");
    }

    printf("Monitoramento encerrado.\n");

    return 0;
}