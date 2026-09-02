package ProjetoConta.src;

import java.util.Scanner;

public class ContaTeste {

    public Conta cc = new Conta();

    public void execCadastrar(Scanner scanner) {

        System.out.print("Digite o número da conta: ");
        cc.setConta(scanner.nextLine());

        System.out.print("Digite a agência: ");
        cc.setAgencia(scanner.nextLine());

        System.out.print("Digite o nome do cliente: ");
        cc.setNomeCliente(scanner.nextLine());

        cc.setSaldo(0);
    }

    public void execConsultar() {
        cc.imprimir();
    }

    public void execSacar(Scanner scanner) {

        System.out.print("Digite o valor do saque: ");
        double valor = scanner.nextDouble();

        if (cc.sacar(valor)) {
            System.out.println("Saque realizado");
        } else {
            System.out.println("Saque não realizado");
        }
    }

    public void execDepositar(Scanner scanner) {

        System.out.print("Digite o valor do depósito: ");
        double valor = scanner.nextDouble();

        cc.depositar(valor);

        System.out.println("Depósito realizado");
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ContaTeste teste = new ContaTeste();

        int opcao;

        do {
            System.out.println("\n1 - Cadastrar");
            System.out.println("2 - Depositar");
            System.out.println("3 - Sacar");
            System.out.println("4 - Consultar");
            System.out.println("0 - Sair");
            System.out.print("Escolha uma opção: ");

            opcao = scanner.nextInt();
            scanner.nextLine();

            switch (opcao) {

                case 1:
                    teste.execCadastrar(scanner);
                    break;

                case 2:
                    teste.execDepositar(scanner);
                    break;

                case 3:
                    teste.execSacar(scanner);
                    break;

                case 4:
                    teste.execConsultar();
                    break;

                case 0:
                    System.out.println("Programa encerrado.");
                    break;

                default:
                    System.out.println("Opção inválida.");
            }

        } while (opcao != 0);

        scanner.close();
    }
}