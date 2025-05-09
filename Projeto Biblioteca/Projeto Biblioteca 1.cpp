//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int a,b,c,d;
    printf("informe o primeiro número:\n");
    scanf("%d", &a);
    printf("informe o segundo número:\n");
    scanf("%d", &b);
    printf("informe o terceiro número:\n");
    scanf("%d", &c);
    //processamento
    d=(a+b)/c;
    printf("O resultado é:%d",d);
    return 0;
}