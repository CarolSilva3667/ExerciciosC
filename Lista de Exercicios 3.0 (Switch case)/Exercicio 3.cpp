//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int opcao;
    float dolar, euro, libra, valor, conversao;
    printf("Digite o valor em reais que deseja converter\n");
    scanf("%f", &conversao);
    printf("Selecione o dia (1-3):\n");
    printf("1 - Dólar - 5,86\n");
    printf("2 - Euro - 6,38\n");
    printf("3 - Libra - 7,57\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
        printf("Você escolheu Dólar!\n");
        scanf("%f", &valor);
        conversao = valor * 5.86;
        printf("O valor em Dólar é: %.2f", conversao);
        break;
        
        case 2:
        printf("Você escolheu Euro!\n");
        printf ("digite o valor em reais");
        scanf ("%f", &valor);
        conversao = valor / 6.38;
        printf("O valor em Euro é: %.2f", conversao);
        break;
        
        case 3:
        printf("Você escolheu Libra!\n");
        printf ("digite o valor em reais");
        scanf ("%f", &valor);
        conversao = valor / 7.57;
        printf("O valor em Libra é: %.2f", conversao);
        break;
        
        default:
        printf("Opção inválida! Programa Encerrado");
        
        return 1;
    }
    return 0;
}