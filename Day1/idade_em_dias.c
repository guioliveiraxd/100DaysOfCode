/*
Leia um valor inteiro correspondente à idade de uma pessoa (em dias) e imprima-o em anos, meses e dias, seguido da respectiva mensagem “ano(s)”, “mes(es)”, “dia(s)”.

Nota: apenas para facilitar o cálculo, considere o ano inteiro com 365 dias e 30 dias em cada mês. Nos casos da prova, nunca haverá uma situação que permita 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício para testar o raciocínio matemático básico.

Entrada
O arquivo de entrada contém 1 valor inteiro.

Saída
Imprima a saída, como no exemplo a seguir.
*/

#include <stdio.h>

int main() {
    int entrada;
    int anos, meses, dias;

    scanf("%d", &entrada);

    anos = entrada / 365;
    entrada = entrada % 365;

    meses = entrada / 30;
    dias = entrada % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}