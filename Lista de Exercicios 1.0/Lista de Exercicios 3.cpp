//Lista de Exercicios
#include <stdio.h>
#include <locale.h>

//Inicio
int main(){
    setlocale(LC_ALL,"");
    int Horas, HTrabalhadas, Mês, Salario;
    printf("Informe o total de ganho por Horas:\n");
    scanf("%d", &Horas);
    printf("Informe o total de Horas Trabalhadas:\n");
    scanf("%d", &HTrabalhadas);
    printf("Informe o mês atual:\n");
    scanf("%d", &Mês);
    Salario = Horas * HTrabalhadas;
    printf("O Salário deste Mês é:%d \n ", Salario);
    return 0;
}