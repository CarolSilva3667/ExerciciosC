//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    float n1, n2;
    char operador;
    printf("Digite o primeiro numero");
    scanf("%f", &n1);
    printf("Digite o segundo numero");
    scanf("%f", &n2);
    printf("Escolha os operadores matemáticos +, -, *, /");
    scanf(" %c", &operador);
    switch(operador){
        case '+':
        printf("O resultao é %2.f\n", n1+n2);
        break;
        
        case '-':
        printf("O resultado é %2.f\n", n1-n2);
        break;
        
        case '*':
        printf("O resultado é %2.f\n", n1*n2);
        break;
        
        case '/':
        printf("O resultado é %2.f\n", n1/n2);
        break;
        
    }
    return 0;
}