//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    char dia;
    int opcao, data;
    printf("Selecione o dia (1-7):\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda\n");
    printf("3 - Terça\n");
    printf("4 - Quarta\n");
    printf("5 - Quinta\n");
    printf("6 - Sexta\n");
    printf("7 - Sabádo\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Você escolheu Domingo!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 2:
        printf("Você escolheu Segunda!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 3:
        printf("Você escolheu Terça!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 4:
        printf("Você escolheu Quarta!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 5:
        printf("Você escolheu Quinta!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 6:
        printf("Você escolheu Sexta!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        case 7:
        printf("Você escolheu Sabádo!\n");
        printf("Digite a data: ");
        scanf("%d", &data);
        break;
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    return 0;
}