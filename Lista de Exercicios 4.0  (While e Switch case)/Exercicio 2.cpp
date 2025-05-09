#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    int opcao;
    float saldo, saque, saldoF, deposito, valorA;
    saldo = 1000;
    do
    {
     printf("\n--- Caixa Eletrônico ---\n");
     printf("1 - Sacar dinheiro\n");
     printf("2 - Depositar dinheiro\n");
     printf("3 - Consultar saldo\n");
     printf("0 - Sair\n");
     scanf("%d", &opcao);
     
     switch (opcao) {
         case 1: 
         printf("Informe o valor do saque\n");
         scanf("%f", &saque);
         
         if (saque > saldo) {
            printf("ERRO: Saque inválido!!");
         } 
         else
         {
            printf("Saque realizado com sucesso\n");
         }
         break;
         
         case 2:
         printf("Informe o valor do deposito\n");
         scanf("%f", &deposito);
         valorA = deposito + saldo;
         printf("O valor do seu saldo é: %.2f\n",valorA);
         break;
         
         case 3:
         printf("Você escolheu consultar saldo\n");
         break;
         
         case 0:
         printf("Saindo...\n");
         break;
         
         default:
         printf("Opção inválida! Tente Novamente.\n");
     }
        // system("clear");
    } while (opcao != 0);
    return 0;
}