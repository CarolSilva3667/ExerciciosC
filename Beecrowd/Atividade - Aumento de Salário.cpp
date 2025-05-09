#include <stdio.h>
 
int main() {
    float salario, reajuste, novoSal, Reajuste;
    int percentual;
    scanf("%f",&salario);
    
    if(salario <=400){
        percentual = 15;
    }
    else if(salario <= 800.00){
        percentual = 12;
    }
    else if(salario <= 1200.00){
        percentual = 10;
    }
    else if(salario<=2000.00){
        percentual = 7;
    }
    else{
        percentual = 4;
    }
    novoSal = salario + salario * percentual / 100;
    printf("Novo salario: %.2f\n",novoSal);
    printf("Reajuste ganho: %.2f\n",(novoSal - salario));
    printf("Em percentual: %d %%", percentual);
    return 0;
}