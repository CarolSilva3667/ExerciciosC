#include <stdio.h>
 
int main() {
    int X,Z,soma=0,contador=0,Natual;
    scanf("%d",&X);
    scanf("%d",&Z);
    
    while(Z<=X){
        scanf("%d",&Z);
    }
    Natual = X;
    while(soma<=Z){
        soma+=Natual;
        contador++;
        Natual++;
    }
    printf("%d\n",contador);
    return 0;
}