// Two Sum - desafio

#include <stdio.h>

int main() {

    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int tamanho = 4;

    for (int i = 0; i < tamanho; i++) {

        for (int j = i + 1; j < tamanho; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indices: %d e %d\n", i, j);
                return 0;
            }
        }
    }

    printf("Nenhum par encontrado.\n");

    return 0;
}