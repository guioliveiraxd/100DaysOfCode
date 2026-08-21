#include <stdio.h>

int buscaBinaria(int numeros[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (numeros[meio] == alvo) {
            return meio;
        }

        if (alvo > numeros[meio]) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int numeros[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = 8;
    int alvo = 11;

    int resultado = buscaBinaria(numeros, tamanho, alvo);

    printf("Posicao: %d\n", resultado);

    return 0;
}