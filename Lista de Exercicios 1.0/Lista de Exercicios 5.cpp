//Lista de Exercicios
#include <stdio.h>
#include <locale.h>

//Inicio
int main(){
    setlocale(LC_ALL,"");
    float Download, velocidade, minutos, tamanhoMB; 
    printf("Informe a tamanho do Download em MB:\n");
    scanf("%f", &Download);
    printf("Informe a velocidade da internet em Mbps:\n");
    scanf("%f", &velocidade);
    minutos = (tamanhoMB / velocidade/8) / 60;
    printf("O tempo aproximado de download do arquivo é: %.2f \n", minutos);
    return 0;
}