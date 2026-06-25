//Receba um valor inteiro e informe a quantidade mínima de cédulas necessárias para formar esse valor usando:

//100, 50, 20, 10, 5, 2 e 1

#include <stdio.h>

int main() {
    int valor;
    int original;

    scanf("%d", &valor);

    original = valor;

    int nota100 = valor / 100;
    valor %= 100;
    int nota50 = valor / 50;
    valor %= 50;
    int nota20 = valor / 20;
    valor %= 20;
    int nota10 = valor / 10;
    valor %= 10;
    int nota5 = valor / 5;
    valor %= 5;
    int nota2 = valor / 2;
    valor %= 2;
    int nota1 = valor;

    printf("%d\n", original);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}