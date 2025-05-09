#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL,"");
    int opcao, num, res, tabuada;
    
    do 
    {
        printf("\n---- Tabuada ----\n");
        printf("Digite um numero para conderir a tabuada\n");
        scanf("%d", &num);
        printf("A tabuada de %d é: \n",num);
        for (tabuada = 1; tabuada <= 10; tabuada++){
            res = tabuada * num;
            printf("%d x %d = %d\n", num, tabuada, res);
        }
        printf("Digite \n1-sair\n0-voltar");
        scanf("%d", &opcao);
        system("clear");
    }while (opcao != 1);
    
    return 0;
}