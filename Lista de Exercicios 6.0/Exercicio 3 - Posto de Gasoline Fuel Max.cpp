#include <stdio.h>
#include <stdlib.h>

int main(){
    float Gasolina, Etanol, Diesel, quantidade, total;
    int opção, escolha;
    
    do {
        printf("Escolha qual combustível deseja: \n");
        printf("1 - Gasolina\n");
        printf("2 - Etanol\n");
        printf("3 - Diesel\n");
        printf("4 - Sair\n");
        scanf("%d", &escolha);
        
        switch (escolha){
            case 1:
            printf("Digite a quantidade de litros que deseja: \n");
            scanf("%f", &quantidade);
            total = quantidade * 6.27;
            printf("O valor total a ser pago é de R$%.2f\n",total);
            break;
            
            case 2:
            printf("Digite a quantidade de litros que deseja: \n");
            scanf("%f", &quantidade);
            total = quantidade * 4.13;
            printf("O valor total a ser pago é de R$%.2f\n",total);
            break;
            
            case 3:
            printf("Digite a quantidade de litros que deseja: \n");
            scanf("%f", &quantidade);
            total = quantidade * 6.03;
            printf("O valor total a ser pago é de R$%.2f\n",total);
            break;
            
            case 4: 
            printf("Saindo...\n");
            break;
            
            default:
            printf("opçao invalida! \n");
        }
    } while (escolha != 4);
    
    return 0;
}