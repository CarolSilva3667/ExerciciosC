#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    int opção;
    float num1, num2, resultado;
    
    do
    {
        //exibir o menu
        printf("\n---- Calculadora simples ----\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opção);
        
        switch(opção){
            case 1:
            printf("Digite dois numeros");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
            
            case 2:
            printf("Digite dois numeros");
            scanf("%f %f", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
            
            case 3:
            printf("Digite dois numeros");
            scanf("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
            
            case 4:
            printf("Digite dois numeros");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0){
                resultado = num1 / num2;
            }
            else {
                printf("ERRO: Divisão por zero!!\n");
            }
            break;
            
            case 0:
            printf("Saindo...\n");
            break;
            default:
            printf("Opção inválida! Tente Novamente.\n");
        }
        printf("Pressione Enter para continuar....");
        getchar();
        getchar();
        
        system("clear");
    } while (opção != 0);
    return 0;
}