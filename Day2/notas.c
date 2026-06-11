/*
 Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres
 de uma disciplina anual. em seguida mostrar  a nota final
 que o aluno obteve(com uma casa decimal) no ano juntamente com um texto explicativo.
 Caso a nota final do aluno sera inferior a 60.00, mostrar a mensagem "Reprocvado", conforme exemplos:
 */
#include <stdio.h>
int main() {
    double nota1, nota2;

    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);


    printf("NOTA FINAL = %.1lf\n", nota1 + nota2);
    if (nota1 + nota2 / 2 < 60.0) {
        printf("REPROVADO\n");
    }

    return 0;




}


