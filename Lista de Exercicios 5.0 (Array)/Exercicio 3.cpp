//Lista de Exercicios - Array

#include <stdio.h>

int main () {
    int n[5], i;
    printf("Digite 5 Números: \n");
    for(i=0; i<5; i++){
        scanf("%d", &n[i]);
    }
    printf("Ordem Inversa: \n");
    for(i=4; i>=0; i--){
        printf("%d ", n[i]);
    }
    return 0;
}