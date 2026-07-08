// Problema - Promoção da Lanchonete
//  Código | Produto      | Preço
//  ------ | ------------ | --------
//  1      | Hambúrguer   | R$ 18,00
//  2      | Batata Frita | R$ 10,00
//  3      | Refrigerante | R$ 7,00
//  4      | Milk Shake   | R$ 15,00
//
// A primeira linha contém um inteiro N, indicando a quantidade de produtos comprados.
//
// Nas próximas N linhas haverá um código de produto.
//
// Saída
//
// Imprima:
//
// VALOR = R$ xx.xx
// DESCONTO = R$ xx.xx
// TOTAL = R$ xx.xx
#include <stdio.h>

int main() {
    int N;
    int codigo;

    double valor = 0;
    double desconto = 0;
    double total;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf("%d", &codigo);

        switch (codigo) {

            case 1:
                valor += 18.0;
                break;

            case 2:
                valor += 10.0;
                break;

            case 3:
                valor += 7.0;
                break;

            case 4:
                valor += 15.0;
                break;

        }

    }

    if (valor > 50.0) {
        desconto = valor * 0.10;
    }
    total = valor - desconto;

    printf("VALOR = R$ %.2lf\n", valor);
    printf("DESCONTO = R$ %.2lf\n", desconto);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}