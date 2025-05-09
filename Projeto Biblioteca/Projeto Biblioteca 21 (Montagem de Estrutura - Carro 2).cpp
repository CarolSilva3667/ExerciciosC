#include <stdio.h>

typedef struct{
    char modelo[30];
    int ano;
    float preco;
} Carro;

int main () {
    Carro carro[3];  
    int i;
    float soma = 0.00;
    for(i = 0; i < 3; i++){
    printf("Digite o modelo do carro: ");
    scanf(" %[^\n]",carro[i].modelo);
    
    printf("Digite o ano do carro: ");
    scanf("%d", &carro[i].ano);
    
    printf("Digite o preço do carro: ");
    scanf("%f", &carro[i].preco);
    soma += carro[i].preco;
    }
    for(i = 0; i < 3; i++){
    printf("Modelo: %s\n", carro[i].modelo);
    printf("Ano: %d\n",carro[i].ano);
    printf("Preço: %.2f\n",carro[i].preco);
    }
    
    printf("total gasto: %.2f",soma);
return 0;
}