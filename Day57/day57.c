//
//  Sistema de Cadastro de Usuarios
//
#include <stdio.h>
#include <string.h>

struct Usuario {

    char nome[50];
    char cracha[20];
    char perfil[20];

};

void cadastrarUsuario(struct Usuario *usuario) {

    printf("\nNome: ");
    scanf(" %[^\n]", usuario->nome);

    printf("Cracha: ");
    scanf("%s", usuario->cracha);

    printf("\nPerfil\n");
    printf("1 - Aluno\n");
    printf("2 - Funcionario\n");
    printf("3 - Administrador\n");
    printf("4 - Terceiro\n");
    printf("Opcao: ");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            strcpy(usuario->perfil, "Aluno");
            break;

        case 2:
            strcpy(usuario->perfil, "Funcionario");
            break;

        case 3:
            strcpy(usuario->perfil, "Administrador");
            break;

        case 4:
            strcpy(usuario->perfil, "Terceiro");
            break;

        default:
            strcpy(usuario->perfil, "Desconhecido");
    }

    printf("\nUsuario cadastrado com sucesso!\n");
}

void mostrarUsuario(struct Usuario usuario) {

    printf("\nCadastro\n");
    printf("Nome....: %s\n", usuario.nome);
    printf("Cracha..: %s\n", usuario.cracha);
    printf("Perfil..: %s\n", usuario.perfil);
}

int main() {

    struct Usuario usuario;

    int opcao;

    do {

        printf("\n=== SISTEMA DE CADASTRO ===\n");
        printf("1 - Cadastrar usuario\n");
        printf("2 - Mostrar cadastro\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrarUsuario(&usuario);
                break;

            case 2:
                mostrarUsuario(usuario);
                break;

            case 0:
                printf("\nSistema encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida.\n");

        }

    } while (opcao != 0);

    return 0;
}