/* Par ou Ímpar
Dificuldade: Fácil | Tópico: Condicionais
   Descrição
   Dado um número inteiro n, determine se ele é par ou ímpar.
   Exemplos
   Entrada  | Saída
   n = 4    | "Par"
   n = 7    | "Impar"
   n = 0    | "Par"
   Restrições
   -1000 <= n <= 1000
   Dica
   O operador % retorna o resto da divisão.
   O que acontece quando você divide um número par por 2?
*/

#include <stdio.h>

int main() {
    int entrada;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada);

    if (entrada < -1000 || entrada > 1000) {
        printf("Número invalido\n");
    } else if (entrada % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}