#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    int opcao;
    float quilômetros, Celsius, quilogramas, metros, valor, conversao;
    
    do
    {
        //exibir o menu
        printf("Digite o valor que deseja converter: \n");
        scanf("%f", &conversao);
        printf("Selecione o conversor correspondente com o que deseja (1-4):\n");
        printf("1 - quilômetros\n");
        printf("2 - Celsius\n");
        printf("3 - quilogramas\n");
        printf("4 - metros\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
            printf("Você escolheu quilômetros!\n");
            scanf("%f", &valor);
            conversao = valor * 1.60934;
            printf("O valor em Milhas é: %.2f", conversao);
            break;
            
            case 2:
            printf("Você escolheu Celsius!\n");
            scanf("%f", &valor);
            conversao = valor * 1.8 + 32;
            printf("O valor em Fahrenheit é: %.2f", conversao);
            break;
            
            case 3:
            printf("Você escolheu quilogramas!\n");
            scanf("%f", &valor);
            conversao = valor * 2.2046;
            printf("O valor em Libras é: %.2f", conversao);
            break;
            
            case 4:
            printf("Você escolheu Metros!\n");
            scanf("%f", &valor);
            conversao = valor / 100;
            printf("O valor em Centimetros é: %.2f", conversao);
            break;
            
            case 0:
            printf("Saindo...\n");
            break;
            default:
            printf("Opção inválida! Tente Novamente.\n");
        }
        system("clear");
    } while (opcao != 0);
    return 0;
}