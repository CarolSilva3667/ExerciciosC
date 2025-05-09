#include <stdio.h>

int main () {
    int numero[3];
    int soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero[0]);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &numero[1]);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero[2]);
    
    soma = numero [0] + numero [1] + numero [2];
    
    printf("A soma dos numeros é: %d\n", soma);
    
return 0;
}