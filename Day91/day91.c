//
//  Gerador de Sequencia - Fibonacci
//
#include <stdio.h>

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}