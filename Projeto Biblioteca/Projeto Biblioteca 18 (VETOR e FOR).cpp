#include <stdio.h>

int main () {
    int numero[5];
    int i;
    
    printf("Informe 5 numeros: \n");
    for(i = 0; i < 5; i++){
        printf("Numero %d: \n", i + 1);
        scanf("%d", &numero [i]);
    }
    
    printf("Os numeros digitados foram:\n");
    for(i = 0; i < 5; i++){
        printf("%d", numero[i]);
    }
return 0;
}