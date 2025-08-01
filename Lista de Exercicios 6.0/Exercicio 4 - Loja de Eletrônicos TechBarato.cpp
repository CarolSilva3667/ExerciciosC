#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, i;
    int num[10], maior, menor;
    
    printf("Informe 10 Valores: ");
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    maior = num[0];
    menor = num[0];
    
    for(i = 2; i < 10; i++) {
        if(maior > num[i]){
            maior = num[i];
        }
        if (menor < num[i]){
            menor = num[i];
        }
    }
    
    printf("O Maior valor é: %d\n", maior);
    printf("O Menor valor é: %d\n", menor);

return 0;
}