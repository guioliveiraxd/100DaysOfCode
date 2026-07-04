#include <stdio.h>

int main() {

    int tamanho;
    int quantidade;
    int adicional;
    double total = 0;
    printf("         LOJA DE ACAI\n");
    printf("1 - 300ml .......... R$ 12.00\n");
    printf("2 - 500ml .......... R$ 16.00\n");
    printf("3 - 700ml .......... R$ 20.00\n");

    printf("\nEscolha o tamanho: ");
    scanf("%d", &tamanho);

    switch (tamanho) {

    case 1:
        total = 12.00;
        break;

    case 2:
        total = 16.00;
        break;

    case 3:
        total = 20.00;
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;

    }

    printf("\nQuantos adicionais deseja? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {

        printf("\nAdicionais:\n");
        printf("1 - Leite em po .......... R$ 2.00\n");
        printf("2 - Leite condensado ..... R$ 2.50\n");
        printf("3 - Pacoca ............... R$ 2.00\n");
        printf("4 - Granola .............. R$ 3.00\n");
        printf("5 - Banana ............... R$ 2.50\n");

        printf("Escolha o adicional %d: ", i);
        scanf("%d", &adicional);

        switch (adicional) {

        case 1:
            total = total + 2.00;
            break;

        case 2:
            total = total + 2.50;
            break;

        case 3:
            total = total + 2.00;
            break;

        case 4:
            total = total + 3.00;
            break;

        case 5:
            total = total + 2.50;
            break;

        default:
            printf("Adicional invalido!\n");
            i--;
            break;

        }

    }
    printf("RESUMO DO PEDIDO\n");
    switch (tamanho) {

    case 1:
        printf("Acai: 300ml\n");
        break;

    case 2:
        printf("Acai: 500ml\n");
        break;

    case 3:
        printf("Acai: 700ml\n");
        break;

    }

    printf("Quantidade de adicionais: %d\n", quantidade);
    printf("Valor total: R$ %.2lf\n", total);

    printf("\nObrigado pela preferencia!\n");

    return 0;
}