//
//  Calcular quantos tratamentos podem ser realizados > exercicio da maratona que participei feito em C (python lá)
//
#include <stdio.h>

int menor(int a, int b, int c) {
    int m = a;

    if (b < m) {
        m = b;
    }

    if (c < m) {
        m = c;
    }

    return m;
}

int tratamentos(int s1, int s2, int s3) {
    return menor(s1, s2, s3);
}

int main() {
    int a, b, c;

    printf("Digite os tres suprimentos: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", tratamentos(a, b, c));

    return 0;
}