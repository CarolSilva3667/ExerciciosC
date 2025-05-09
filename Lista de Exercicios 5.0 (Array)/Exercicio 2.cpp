//Lista de Exercicios - Array

#include <stdio.h>
#include <locale.h>

int main () {
    int n[8], par = 0, impar = 0;
    
    printf("Digite 8 Números: \n");
    for(int i = 0; i<8; i++){
        scanf("%d", &n[i]);
        if(n[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("Par: %d\n",par);
    printf("Impar: %d\n",impar);
    return 0;
}