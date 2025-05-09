#include <stdio.h>

int main () {
    int numero[4];
    int media;
    
    printf("Digite a primeira nota: ");
    scanf("%d", &numero[0]);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &numero[1]);
    
    printf("Digite a terceira nota: ");
    scanf("%d", &numero[2]);
    
    printf("Digite a quarta nota: ");
    scanf("%d", &numero[3]);
    
    media = (numero [0] + numero [1] + numero [2] + numero [3])/4;
    
    printf("A media das notas é: %d\n", media);
    
return 0;
}