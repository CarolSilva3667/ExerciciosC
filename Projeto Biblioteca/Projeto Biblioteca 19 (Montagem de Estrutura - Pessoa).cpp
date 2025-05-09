#include <stdio.h>

//Montagem de Estrutura
struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main () {
    struct Pessoa pessoa1 ={"Ana", 25, 1.70};
    
    printf("Nome: %s\n",pessoa1.nome);
    printf("Idade: %d\n",pessoa1.idade);
    printf("Altura: %.2f\n",pessoa1.altura);
    
    return 0;
}