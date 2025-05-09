//Lista de Exercicios - Array

#include <stdio.h>
#include <locale.h>

int main () {
    int numero[6], soma = 0, i;
    printf("Digite os 6 Números: \n");
    for(i=0; i<6; i++){
        scanf("%d", &numero[i]);
        soma += numero[i];
    }
    printf("Soma dos Números: %d\n", soma);
    return 0;
}