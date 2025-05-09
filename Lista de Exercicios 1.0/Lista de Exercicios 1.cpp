//Lista de Exercicios
#include <stdio.h>
#include <locale.h>

//Inicio
int main(){
    setlocale(LC_ALL,"");
    int n1, n2, n3, n4, media;
    printf("informe a primeira nota:\n");
    scanf("%d", &n1);
    printf("Informe a segunda nota:\n");
    scanf("%d", &n2);
    printf("informe a terceira nota:\n");
    scanf("%d", &n3);
    printf("informe a quarta nota:\n");
    scanf("%d", &n4);
    media = (n1+n2+n3+n4)/n4;
    printf("A media é:%d \n", media);
    return 0;
}