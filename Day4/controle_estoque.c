/*
Desafio #Day4 - Controle de Estoque

Problema:
Uma loja deseja verificar quais produtos precisam ser repostos.
Seu programa deve:
1. Ler a quantidade de produtos cadastrados.
2. Ler o estoque de cada produto.
3. Considerar que um produto precisa de reposição se tiver menos de 10 unidades.
4. Exibir quantos produtos precisam de reposição.
Entrada:
A primeira linha contém um número inteiro N (1 ≤ N ≤ 50),
representando a quantidade de produtos.
As próximas N linhas contêm um número inteiro,
representando o estoque de cada produto.
Saída:
Exiba:
Produtos para reposição: X
Exemplo de Entrada:
5
20
8
15
3
12
Exemplo de Saída:
Produtos para reposição: 2
*/
#include <stdio.h>

int main() {
    int quantidadeProdutos;
    int estoque;
    int reposicao = 0;

    scanf("%d", &quantidadeProdutos);

    for (int i = 1; i <= quantidadeProdutos; i++) {
        scanf("%d", &estoque);
        if (estoque < 10) {
            reposicao++;
        }
    }
    printf("Produtos para reposicao: %d\n", reposicao);
    return 0;
}