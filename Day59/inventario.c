//
//  Simulador de Inventario
//
#include <stdio.h>
#include <string.h>

struct Item {

    char nome[30];
    int quantidade;
    int valor;

};

void adicionar(struct Item *item, int quantidade) {

    item->quantidade += quantidade;

    printf("\n%d unidade(s) adicionada(s).\n", quantidade);
}

void remover(struct Item *item, int quantidade) {

    if (quantidade <= item->quantidade) {

        item->quantidade -= quantidade;

        printf("\n%d unidade(s) removida(s).\n", quantidade);

    } else {

        printf("\nQuantidade insuficiente.\n");
    }
}

int calcularValorTotal(struct Item item) {

    return item.quantidade * item.valor;
}

void mostrarItem(struct Item item) {

    printf("\nItem: %s\n", item.nome);
    printf("Quantidade: %d\n", item.quantidade);
    printf("Valor unitario: R$ %d\n", item.valor);
    printf("Valor total: R$ %d\n", calcularValorTotal(item));
}

int main() {

    struct Item item;

    strcpy(item.nome, "Pocao de Vida");

    item.quantidade = 5;
    item.valor = 20;

    mostrarItem(item);

    adicionar(&item, 3);

    remover(&item, 2);

    mostrarItem(item);

    return 0;
}