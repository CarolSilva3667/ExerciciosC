#include <stdio.h>

int main() {
    int filmes;

    do {
        printf("Quantos filmes você deseja alugar?: ");
        scanf("%d", &filmes);

        if (filmes < 1 || filmes > 5) {
            printf("Número inválido! Por favor digite um valor entre 1 e 5.\n");
        }
    } while (filmes < 1 || filmes > 5);

    printf("Você alugou %d filme(s).\n", filmes);

    return 0;
}