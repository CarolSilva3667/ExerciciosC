#include <stdio.h>

int main (){
    float nota, soma = 0, media;
    int i;
    
    for (i = 1; i <= 7; i++){
        do{
            printf("Digite a nota dada pelo cliente %d: ", i);
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("Nota inválida! Digite um valor entre 1 e 10.\n");
            }
        } while (nota < 0 || nota > 10);
        soma += nota;
    }
    media = soma / 7;
    printf("Média das notas: %.2f\n", media);
    
    if (media >= 8){
        printf("Média boa!\n");
    } else if (media >= 5) {
        printf("Média razoável.\n");
    } else {
        printf("Média ruim.\n");
    }
    return 0;
}