//
// Simulado fatec maratona2025 / Exercício: decisao do agricultor

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double temperatura, umidade;
    int chuva;

    for(int i = 0; i < n; i++) {
        scanf("%lf %lf %d", &temperatura, &umidade, &chuva);

        if(chuva == 1) {
            printf("NAO REGAR\n");

        } else {
            if(temperatura > 30.0 && umidade < 50.0)
                printf("REGAR\n");
            else
                printf("NAO REGAR\n");
        }
    }

    return 0;
}
