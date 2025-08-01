#include <stdio.h>

#define num_produtos 10

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void ValorTotal(Produto produtos[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("\nValor total do estoque: R$ %.2f\n", total);
}

int main() {
    Produto produtos[num_produtos];

    for (int i = 0; i < num_produtos; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);
        
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
        
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

    ValorTotal(produtos, num_produtos);

    return 0;
}