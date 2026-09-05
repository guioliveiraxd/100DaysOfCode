//
//  Sistema de Chamada da Faculdade
//
#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[50];
    int presente;
};

int main()
{
    struct Aluno alunos[10];

    int quantidade;
    int matricula;
    int encontrou;
    int presentes = 0;
    int opcao;

    printf("Sistema de Chamada\n\n");

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        alunos[i].presente = 0;
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1 - Registrar presenca\n");
        printf("2 - Listar alunos\n");
        printf("3 - Ver quantidade de presentes\n");
        printf("0 - Encerrar\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nDigite a matricula: ");
            scanf("%d", &matricula);

            encontrou = 0;

            for (int i = 0; i < quantidade; i++)
            {
                if (alunos[i].matricula == matricula)
                {
                    encontrou = 1;

                    if (alunos[i].presente == 0)
                    {
                        alunos[i].presente = 1;
                        presentes++;

                        printf("Presenca registrada para %s.\n",
                               alunos[i].nome);
                    }
                    else
                    {
                        printf("Este aluno ja esta presente.\n");
                    }

                    break;
                }
            }

            if (encontrou == 0)
            {
                printf("Matricula nao encontrada.\n");
            }
        }
        else if (opcao == 2)
        {
            printf("\nLista de alunos:\n\n");

            for (int i = 0; i < quantidade; i++)
            {
                printf("Matricula: %d\n", alunos[i].matricula);
                printf("Nome: %s\n", alunos[i].nome);

                if (alunos[i].presente == 1)
                {
                    printf("Status: Presente\n");
                }
                else
                {
                    printf("Status: Ausente\n");
                }

                printf("\n");
            }
        }
        else if (opcao == 3)
        {
            printf("\nPresentes: %d\n", presentes);
            printf("Ausentes: %d\n", quantidade - presentes);
        }
        else if (opcao != 0)
        {
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 0);

    printf("\nChamada encerrada.\n");

    return 0;
}