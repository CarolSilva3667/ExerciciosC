#include <stdio.h>

int main() {
    int código;
    
    printf("--==Menu FashionMix==--\n");
    printf("Digite o código do produto: \n");
    printf("1 - camiseta\n");
    printf("2 - calça\n");
    printf("3 - casaco\n");
    scanf("%d", &código);
    
    switch (código) {
            case 1:
            printf("Produto: Camisa\nPreço: R$ 30.00\n");
            break;
            case 2:
            printf("Produto: Calça\nPreço: R$ 120.00\n");
            break;
            case 3:
            printf("Produto: Casaco\nPreço: R$ 230.00\n");
            break;
            default:
            printf("Código inválido! Escolha entre 1, 2 ou 3.\n");
            break;
    }


    return 0;
}