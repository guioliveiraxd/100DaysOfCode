//
//  Sistema de Senha de Atendimento
//
#include <stdio.h>

int main()
{
    int proximaSenha = 1;
    int senhaAtual = 0;
    int opcao;
    int aguardando = 0;

    printf("Sistema de Senha de Atendimento\n\n");

    do
    {
        printf("1 - Retirar senha\n");
        printf("2 - Chamar proxima senha\n");
        printf("3 - Ver senha atual\n");
        printf("4 - Ver pessoas aguardando\n");
        printf("0 - Encerrar\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nSua senha: A%03d\n", proximaSenha);

            proximaSenha++;
            aguardando++;
        }
        else if (opcao == 2)
        {
            if (aguardando > 0)
            {
                senhaAtual++;

                printf("\nChamando senha: A%03d\n", senhaAtual);

                aguardando--;
            }
            else
            {
                printf("\nNao existem pessoas aguardando.\n");
            }
        }
        else if (opcao == 3)
        {
            if (senhaAtual > 0)
            {
                printf("\nSenha atual: A%03d\n", senhaAtual);
            }
            else
            {
                printf("\nNenhuma senha foi chamada ainda.\n");
            }
        }
        else if (opcao == 4)
        {
            printf("\nPessoas aguardando: %d\n", aguardando);
        }
        else if (opcao != 0)
        {
            printf("\nOpcao invalida.\n");
        }

        printf("\n");

    } while (opcao != 0);

    printf("Sistema encerrado.\n");

    return 0;
}