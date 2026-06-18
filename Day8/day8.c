/*

Desafio - Caixa Eletrônico
Crie um programa que simule um caixa eletrônico.
O programa deve:
1. Pedir uma senha ao usuário.
2. A senha correta é 1234.
3. Enquanto a senha estiver errada, pedir novamente.
4. Quando a senha estiver correta, exibir:
   "Acesso liberado!"
Obrigatório:
- Utilizar a estrutura do...while.
- Contar quantas tentativas foram necessárias.
- Exibir a quantidade de tentativas ao final.
Exemplo:
Digite a senha: 1111
Senha incorreta!
Digite a senha: 2222
Senha incorreta!
Digite a senha: 1234
Acesso liberado!
Tentativas: 3
*/
#include <stdio.h>
int main() {
   int senha;
   int tentativas = 0;
   do {
      printf("Digite a senha: ");
      scanf("%d", &senha);
      tentativas++;
      if (senha != 1234) {
         printf("Senha incorreta!\n");
      }
   } while (senha != 1234);
   printf("Acesso liberado!\n");
   printf("Tentativas: %d\n", tentativas);
   return 0;
}