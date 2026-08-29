//
//  Simulador de Bateria
//
#include <stdio.h>

int main()
{
    int bateria = 100;
    int opcao;
    int consumo;

    printf("Simulador de Bateria\n\n");

    while (bateria > 0)
    {
        printf("Bateria atual: %d%%\n\n", bateria);

        printf("1 Navegar na internet (-10%%)\n");
        printf("2 Assistir video (-15%%)\n");
        printf("3 Jogar (-25%%)\n");
        printf("4 Musica (-5%%)\n");
        printf("0 Encerrar\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            break;
        }

        if (opcao == 1)
        {
            consumo = 10;
        }
        else if (opcao == 2)
        {
            consumo = 15;
        }
        else if (opcao == 3)
        {
            consumo = 25;
        }
        else if (opcao == 4)
        {
            consumo = 5;
        }
        else
        {
            printf("\nOpcao invalida.\n\n");
            continue;
        }

        bateria -= consumo;

        if (bateria < 0)
        {
            bateria = 0;
        }

        printf("\nAtividade realizada!\n");
        printf("Bateria restante: %d%%\n\n", bateria);

        if (bateria <= 20 && bateria > 0)
        {
            printf("Aviso: bateria fraca!\n\n");
        }
    }

    if (bateria == 0)
    {
        printf("Bateria acabou!\n");
    }
    else
    {
        printf("Simulacao encerrada.\n");
    }

    return 0;
}