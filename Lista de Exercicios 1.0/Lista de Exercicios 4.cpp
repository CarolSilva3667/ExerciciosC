//Lista de Exercicios
#include <stdio.h>
#include <locale.h>

//Inicio
int main(){
    setlocale(LC_ALL,"");
    float Farenheit, Celsius;
    printf("Informe qual é o Farenheit:\n");
    scanf("%f", &Farenheit);
    Celsius = (5*(Farenheit-32)/9);
    printf("A temperatura em graus Celsius: %f \n", Celsius);
    return 0;
}