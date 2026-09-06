//
//  Sistema de Emprestimo de Ferramentas
//
#include <stdio.h>

struct Ferramenta
{
    int codigo;
    char nome[50];
    int disponivel;
};

int main()
{
    struct Ferramenta ferramentas[10];

    int quantidade = 0;
    int opcao;
    int codigo;
    int encontrou;

    do
    {
        printf("\n--- EMPRESTIMO DE FERRAMENTAS ---\n");
        printf("1 - Cadastrar ferramenta\n");
        printf("2 - Listar ferramentas\n");
        printf("3 - Retirar ferramenta\n");
        printf("4 - Devolver ferramenta\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            if (quantidade >= 10)
            {
                printf("\nLimite de ferramentas atingido.\n");
                continue;
            }

            ferramentas[quantidade].codigo = quantidade + 1;

            printf("\nNome da ferramenta: ");
            scanf(" %[^\n]", ferramentas[quantidade].nome);

            ferramentas[quantidade].disponivel = 1;

            printf("Ferramenta cadastrada com codigo %03d.\n",
                   ferramentas[quantidade].codigo);

            quantidade++;
        }
        else if (opcao == 2)
        {
            printf("\n--- FERRAMENTAS ---\n");

            for (int i = 0; i < quantidade; i++)
            {
                printf("\nCodigo: %03d\n",
                       ferramentas[i].codigo);

                printf("Nome: %s\n",
                       ferramentas[i].nome);

                if (ferramentas[i].disponivel == 1)
                {
                    printf("Status: Disponivel\n");
                }
                else
                {
                    printf("Status: Emprestada\n");
                }
            }
        }
        else if (opcao == 3)
        {
            printf("\nDigite o codigo da ferramenta: ");
            scanf("%d", &codigo);

            encontrou = 0;

            for (int i = 0; i < quantidade; i++)
            {
                if (ferramentas[i].codigo == codigo)
                {
                    encontrou = 1;

                    if (ferramentas[i].disponivel == 1)
                    {
                        ferramentas[i].disponivel = 0;

                        printf("\nFerramenta retirada com sucesso.\n");
                    }
                    else
                    {
                        printf("\nEssa ferramenta ja esta emprestada.\n");
                    }

                    break;
                }
            }

            if (encontrou == 0)
            {
                printf("\nFerramenta nao encontrada.\n");
            }
        }
        else if (opcao == 4)
        {
            printf("\nDigite o codigo da ferramenta: ");
            scanf("%d", &codigo);

            encontrou = 0;

            for (int i = 0; i < quantidade; i++)
            {
                if (ferramentas[i].codigo == codigo)
                {
                    encontrou = 1;

                    if (ferramentas[i].disponivel == 0)
                    {
                        ferramentas[i].disponivel = 1;

                        printf("\nFerramenta devolvida com sucesso.\n");
                    }
                    else
                    {
                        printf("\nEssa ferramenta ja esta disponivel.\n");
                    }

                    break;
                }
            }

            if (encontrou == 0)
            {
                printf("\nFerramenta nao encontrada.\n");
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