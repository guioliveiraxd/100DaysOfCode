//
// Simulado fatec maratona2025 / Exercício: triangulo
//
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {

    double a, b, angulo;

    while(1) {

        scanf("%lf %lf %lf", &a, &b, &angulo);

        if(a == 0 && b == 0 && angulo == 0)
            break;

        double radianos = angulo * PI / 180.0;

        double area = (a * b * sin(radianos)) / 2.0;

        printf("%.4lf\n", area);

    }

    return 0;
}