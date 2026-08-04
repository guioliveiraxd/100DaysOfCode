//
//  Simulador de Controle de Acesso
//
#include <stdio.h>
#include <string.h>

int acessoAluno(int dia) {

    if (dia >= 1 && dia <= 5) {
        return 1;
    }

    return 0;
}

int acessoFuncionario(int dia, int autorizacao) {

    if (dia >= 1 && dia <= 5) {
        return 1;
    }

    if (autorizacao == 1) {
        return 1;
    }

    return 0;
}

int acessoTerceiro(int evento) {

    if (evento == 1) {
        return 1;
    }

    return 0;
}

int main() {

    char nome[50];

    int tipo;
    int dia;

    int autorizacao = 0;
    int evento = 0;

    printf("=== CONTROLE DE ACESSO ===\n\n");

    printf("Escaneando credencial...\n\n");

    printf("Nome: ");
    scanf(" %[^\n]", nome);

    printf("\nPerfil\n");
    printf("1 - Aluno\n");
    printf("2 - Funcionario\n");
    printf("3 - Administrador\n");
    printf("4 - Terceiro\n");
    printf("Opcao: ");
    scanf("%d", &tipo);

    printf("\nDia da semana\n");
    printf("1 - Segunda\n");
    printf("2 - Terca\n");
    printf("3 - Quarta\n");
    printf("4 - Quinta\n");
    printf("5 - Sexta\n");
    printf("6 - Sabado\n");
    printf("7 - Domingo\n");
    printf("8 - Feriado\n");
    printf("Opcao: ");
    scanf("%d", &dia);

    if (tipo == 2 && dia >= 6) {

        printf("\nAdministrador autorizou a entrada?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        printf("Opcao: ");
        scanf("%d", &autorizacao);

    }

    if (tipo == 4) {

        printf("\nEvento Portas Abertas?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        printf("Opcao: ");
        scanf("%d", &evento);

    }

    printf("\n-------------------------------\n");
    printf("Nome......: %s\n", nome);

    switch (tipo) {

        case 1:

            printf("Perfil....: Aluno\n");

            if (acessoAluno(dia)) {

                printf("Status....: ACESSO LIBERADO\n");

            } else {

                printf("Status....: ACESSO NEGADO\n");
                printf("Motivo....: Fora do horario academico.\n");

            }

            break;

        case 2:

            printf("Perfil....: Funcionario\n");

            if (acessoFuncionario(dia, autorizacao)) {

                printf("Status....: ACESSO LIBERADO\n");

            } else {

                printf("Status....: ACESSO NEGADO\n");
                printf("Motivo....: Necessita autorizacao do administrador.\n");

            }

            break;

        case 3:

            printf("Perfil....: Administrador\n");
            printf("Status....: ACESSO LIBERADO\n");

            break;

        case 4:

            printf("Perfil....: Terceiro\n");

            if (acessoTerceiro(evento)) {

                printf("Status....: ACESSO LIBERADO\n");

            } else {

                printf("Status....: ACESSO NEGADO\n");
                printf("Motivo....: Evento nao autorizado.\n");

            }

            break;

        default:

            printf("Perfil....: Desconhecido\n");
            printf("Status....: ACESSO NEGADO\n");

    }

    printf("-------------------------------\n");

    return 0;
}