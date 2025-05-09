//Lista de Exercicios
#include <stdio.h>
#include <locale.h>

//Inicio
int main(){
    setlocale(LC_ALL,"");
    int raio, area;
    printf("Informe o raio do circulo:\n");
    scanf("%d", &raio);
    area = 3.14*(raio*2);
    printf("A area do circulo é: %d \n",area);
    return 0;
}