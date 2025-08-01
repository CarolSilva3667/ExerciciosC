#include <stdio.h>

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produto;

int main() {
    
    Produto produtos[5] = {
        {"Pão francês", 076, 10.00},
        {"Suco de Maracuja", 132, 8.90},
        {"Bolacha recheada", 294, 6.00},
        {"leite com café", 368, 12.30},
        {"Bolo de morango", 621, 15.50}
    };

    printf("--== Produtos com preço superior a R$ 10.00 ==--\n");
    for (int i = 0; i < 5; i++) {
        if (produtos[i].preco > 10.00) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
        printf("----------------------\n");
        }
    }

    return 0;
}