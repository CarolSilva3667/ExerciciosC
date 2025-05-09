//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int opcao;
    printf("Selecione o dia (1-4):\n");
    printf("1 - Verão\n");
    printf("2 - Outono\n");
    printf("3 - Inverno\n");
    printf("4 - Primavera\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Você escolheu Verão!\n");
        break;
        
        case 2:
        printf("Você escolheu Outono!\n");
        break;
        
        case 3:
        printf("Você escolheu Inverno!\n");
        break;
        
        case 4:
        printf("Você escolheu Primavera!\n");
        break;
        
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    return 0;
}