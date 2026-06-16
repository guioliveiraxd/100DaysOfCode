//
//
//
#include <stdio.h>

int main() {
    char resp;
    double c, f;

    do {
        printf("Digite a temperatura em celsius:\n");
        scanf("%lf", &c);

        f = 9.0 * c / 5.0 + 32.0;

        printf("Equivalente em Fahrenheit: %.1lf\n", f);

        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');
    return 0;
}