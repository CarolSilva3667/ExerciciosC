//Lista de Exercicios - Array

#include <stdio.h>

int main () {
    float notas[6], soma = 0.0, media;
    int i;
    printf("Digite 6 Números: \n");
    for(i=0; i<6; i++){
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/6;
    printf("Média: %2.f\n", media);
    printf("Notas acima da Média:\n");
    for(i=0; i<6; i++){
        if(notas[i] > media){
            printf("%2.f", notas[i]);
        }
    }
    return 0;
}