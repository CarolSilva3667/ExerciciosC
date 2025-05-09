//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main (){
    setlocale(LC_ALL,"");//Passar localização
    char nome[20];
    float sal, reajuste, novoSal;
    printf("Digite seu nome:\n");
    scanf("%s",nome);
    printf("Digite seu salário:\n");
    scanf("%f",&sal);
    printf("Digite o percentual de reajuste:\n");
    scanf("%f",&reajuste);
    novoSal = sal + sal * reajuste / 100;
    printf("%s seu salário reajustado é de %.2f",nome,novoSal);
    return 0;
}