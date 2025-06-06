#include <stdio.h>

int soma(int a, int b);
void subtrair(int a, int b);
int dividir(int a, int b);
void multiplicar(int a, int b);

void media(float a, float b);
int menu();

int main()
{
    int v1, v2, opcao;
    do{
       opcao = menu();
       
       scanf("%d", &v1);
       scanf("%d", &v2);
       
       switch(opcao) {
        case 1:
            printf("\nresultado = %d\n", soma(v1, v2));
            break;
            
        case 2:
            subtrair(v1, v2);
            break;
            
        case 3: 
            multiplicar(v1, v2);
            break;
            
        case 4:
            dividir(v1, v2);
            break; 
            
        case 5:
            media(v1, v2);
        default:
            break;
            
    }
    
} while(opcao != 0);
    return 0;
}

int soma(int a, int b) {
    int res = a + b;
    
    if(res % 2 == 0) printf("\nPAR");
    
    return res;
}



void subtrair(int a, int b) {
    int resultado = a - b;
    
    printf("\nresultado - \n%d", resultado);
}

int dividir(int a, int b) {
    int resultado = a / b;
    
    printf("\nresultado - \n%d", resultado);
}

void multiplicar(int a, int b) {
    int resultado = a * b;
    
    printf("\nresultado - \n%d", resultado);
}

void media(float a, float b) {
    float resultado = (a + b)/2;
    
    printf("\nresultado - \n%f", resultado);
}

int menu() {
    int opcao;
    
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Média\n");
    printf("0 - Sair\n");
    printf("Informe a operação: ");
    scanf("%d", &opcao);
}