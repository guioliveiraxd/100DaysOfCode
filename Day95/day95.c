//
//  Conta de Energia
//
#include <stdio.h>

int main()
{
    int consumo;
    float valor;

    printf("Digite o consumo em kWh: ");
    scanf("%d", &consumo);

    if (consumo <= 100)
    {
        valor = consumo * 0.50;
    }
    else if (consumo <= 200)
    {
        valor = (100 * 0.50) + ((consumo - 100) * 0.75);
    }
    else
    {
        valor = (100 * 0.50) +
                (100 * 0.75) +
                ((consumo - 200) * 1.00);
    }

    printf("Valor da conta: R$ %.2f\n", valor);

    return 0;
}