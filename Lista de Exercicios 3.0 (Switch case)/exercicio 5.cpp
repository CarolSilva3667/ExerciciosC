//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Selecione o dia (1-4):\n");
    printf("1 - X-Burguer R$10.00\n");
    printf("2 - X-Salada R$12,00\n");
    printf("3 - X-Bacon R$15.00\n");
    printf("4 - Hot Dog R$8.00\n");
    printf("5 - Refrigerante R$5.00\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Você escolheu X-Burguer!\n");
        break;
        
        case 2:
        printf("Você escolheu X-Salada!\n");
        break;
        
        case 3:
        printf("Você escolheu X-Bacon!\n");
        break;
        
        case 4:
        printf("Você escolheu Hot Dog!\n");
        break;
        
        case 5:
        printf("Você escolheu Refrigerante!\n");
        break;
        
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    return 0;
}