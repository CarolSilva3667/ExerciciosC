#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, n, tabuada, res;
    
    do 
    {
        //exibir menu
        printf("\n------ Tabuada ------\n");
        printf("Digite um numero para a tabuada\n");
        scanf("%d", &n);
        
        for (tabuada = 1; tabuada <=10; tabuada++){
            printf("%d x %d = %d\n", n, tabuada,res = tabuada * n);
        }
    
     printf("Digite 1 para contiuar e 0 para sair: ");
     scanf("%d", &opcao);
     
     if(opcao == 1 ){
        system("clear");
     }
     
    }while (opcao != 0);
    
    return 0;
}