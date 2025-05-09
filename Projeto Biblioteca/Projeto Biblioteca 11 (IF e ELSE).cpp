#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int numero;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero == 7) {
            printf("Programa encerrado.\n");
            break;
        }
    } while (1);

    return 0;
}