//
//  Conversor de Bases
//
#include <stdio.h>

void decimalParaBinario(int numero)
{
    int binario[32];
    int i = 0;

    if (numero == 0)
    {
        printf("0");
        return;
    }

    while (numero > 0)
    {
        binario[i] = numero % 2;
        numero /= 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binario[i]);
    }
}

void decimalParaHexadecimal(int numero)
{
    char hexadecimal[] = "0123456789ABCDEF";
    char resultado[32];
    int i = 0;

    if (numero == 0)
    {
        printf("0");
        return;
    }

    while (numero > 0)
    {
        resultado[i] = hexadecimal[numero % 16];
        numero /= 16;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", resultado[i]);
    }
}

int binarioParaDecimal(long long binario)
{
    int decimal = 0;
    int base = 1;

    while (binario > 0)
    {
        int digito = binario % 10;

        decimal += digito * base;

        base *= 2;
        binario /= 10;
    }

    return decimal;
}

int main()
{
    int opcao;
    int numero;

    do
    {
        printf("\n--- CONVERSOR DE BASES ---\n");
        printf("1 - Decimal para Binario\n");
        printf("2 - Decimal para Hexadecimal\n");
        printf("3 - Binario para Decimal\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nDigite um numero decimal: ");
            scanf("%d", &numero);

            printf("Binario: ");
            decimalParaBinario(numero);
            printf("\n");
        }
        else if (opcao == 2)
        {
            printf("\nDigite um numero decimal: ");
            scanf("%d", &numero);

            printf("Hexadecimal: ");
            decimalParaHexadecimal(numero);
            printf("\n");
        }
        else if (opcao == 3)
        {
            long long binario;

            printf("\nDigite um numero binario: ");
            scanf("%lld", &binario);

            printf("Decimal: %d\n",
                   binarioParaDecimal(binario));
        }
        else if (opcao != 0)
        {
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 0);

    printf("\nConversor encerrado.\n");

    return 0;
}