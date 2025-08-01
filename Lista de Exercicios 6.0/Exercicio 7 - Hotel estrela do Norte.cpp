#include <stdio.h>

int main() {
    int quartos[10];
    int ocupados = 0;

    for (int i = 0; i < 10; i++) {
        printf("O quarto %d está ocupado? (1 = Sim, 0 = Não): ", i + 1);
        scanf("%d", &quartos[i]);

        if (quartos[i] == 1) {
            ocupados++;
        }
    }

    float taxa_ocupacao = (ocupados / 10.0) * 100;
    printf("Taxa de ocupação do hotel: %.2f%%\n", taxa_ocupacao);

    return 0;
}