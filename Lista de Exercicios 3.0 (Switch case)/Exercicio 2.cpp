//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    char dia;
    int opcao, data;
    printf("Selecione o dia (1-7):\n");
    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Março\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Você escolheu Janeiro!\n");
        break;
        
        case 2:
        printf("Você escolheu Fevereiro!\n");
        break;
        
        case 3:
        printf("Você escolheu Março!\n");
        break;
        
        case 4:
        printf("Você escolheu Abril!\n");
        break;
        
        case 5:
        printf("Você escolheu Maio!\n");
        break;
        
        case 6:
        printf("Você escolheu Junho!\n");
        break;
        
        case 7:
        printf("Você escolheu Julho!\n");
        break;
        
        case 8:
        printf("Você escolheu Agosto!\n");
        break;
        
        case 9:
        printf("Você escolheu Setembro!\n");
        break;
        
        case 10:
        printf("Você escolheu Outubro!\n");
        break;
        
        case 11:
        printf("Você escolheu Novembro!\n");
        break;
        
        case 12:
        printf("Você escolheu Dezembro!\n");
        break;
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    return 0;
}