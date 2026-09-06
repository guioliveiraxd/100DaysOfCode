//
//  Sistema de Chamados de Manutencao
//
#include <stdio.h>

struct Chamado
{
    int numero;
    char equipamento[50];
    char problema[100];
    int prioridade;
    int status;
};

int main()
{
    struct Chamado chamados[20];

    int quantidade = 0;
    int opcao;
    int numero;
    int encontrou;

    do
    {
        printf("\n--- SISTEMA DE MANUTENCAO ---\n");
        printf("1 - Abrir chamado\n");
        printf("2 - Listar chamados\n");
        printf("3 - Buscar chamado\n");
        printf("4 - Encerrar chamado\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            if (quantidade >= 20)
            {
                printf("\nLimite de chamados atingido.\n");
                continue;
            }

            chamados[quantidade].numero = quantidade + 1;

            printf("\nEquipamento: ");
            scanf(" %[^\n]", chamados[quantidade].equipamento);

            printf("Problema: ");
            scanf(" %[^\n]", chamados[quantidade].problema);

            printf("Prioridade:\n");
            printf("1 - Baixa\n");
            printf("2 - Media\n");
            printf("3 - Alta\n");
            printf("Escolha: ");
            scanf("%d", &chamados[quantidade].prioridade);

            chamados[quantidade].status = 1;

            printf("\nChamado #%03d aberto com sucesso!\n",
                   chamados[quantidade].numero);

            quantidade++;
        }
        else if (opcao == 2)
        {
            if (quantidade == 0)
            {
                printf("\nNenhum chamado cadastrado.\n");
                continue;
            }

            printf("\n--- CHAMADOS ---\n");

            for (int i = 0; i < quantidade; i++)
            {
                printf("\nChamado #%03d\n",
                       chamados[i].numero);

                printf("Equipamento: %s\n",
                       chamados[i].equipamento);

                printf("Problema: %s\n",
                       chamados[i].problema);

                printf("Prioridade: %d\n",
                       chamados[i].prioridade);

                if (chamados[i].status == 1)
                {
                    printf("Status: Aberto\n");
                }
                else
                {
                    printf("Status: Encerrado\n");
                }
            }
        }
        else if (opcao == 3)
        {
            printf("\nDigite o numero do chamado: ");
            scanf("%d", &numero);

            encontrou = 0;

            for (int i = 0; i < quantidade; i++)
            {
                if (chamados[i].numero == numero)
                {
                    encontrou = 1;

                    printf("\nChamado #%03d\n",
                           chamados[i].numero);

                    printf("Equipamento: %s\n",
                           chamados[i].equipamento);

                    printf("Problema: %s\n",
                           chamados[i].problema);

                    printf("Prioridade: %d\n",
                           chamados[i].prioridade);

                    if (chamados[i].status == 1)
                    {
                        printf("Status: Aberto\n");
                    }
                    else
                    {
                        printf("Status: Encerrado\n");
                    }

                    break;
                }
            }

            if (encontrou == 0)
            {
                printf("\nChamado nao encontrado.\n");
            }
        }
        else if (opcao == 4)
        {
            printf("\nDigite o numero do chamado: ");
            scanf("%d", &numero);

            encontrou = 0;

            for (int i = 0; i < quantidade; i++)
            {
                if (chamados[i].numero == numero)
                {
                    encontrou = 1;

                    if (chamados[i].status == 1)
                    {
                        chamados[i].status = 0;
                        printf("\nChamado encerrado.\n");
                    }
                    else
                    {
                        printf("\nEsse chamado ja esta encerrado.\n");
                    }

                    break;
                }
            }

            if (encontrou == 0)
            {
                printf("\nChamado nao encontrado.\n");
            }
        }
        else if (opcao != 0)
        {
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 0);

    printf("\nSistema encerrado.\n");

    return 0;
}