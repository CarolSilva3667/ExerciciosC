#include <stdio.h>

typedef struct {
    char Marca[50];
    int Ano;
    float quilometragem;
} Carro;

    Carro carros[5];
    int numCarros = 0;

int main() {
    
    printf("---- Carros para Revisão ----\n");

    while (numCarros < 5) {
       
        printf("\nCarro %d\n", numCarros + 1);
        printf("Marca: ");
        scanf("%s", carros[numCarros].Marca);
        printf("Ano: ");
        scanf("%d", &carros[numCarros].Ano);
        printf("Quilometragem: \n");
        scanf("%f", &carros[numCarros].quilometragem);
        numCarros++;
    }

    printf("\n---- Carros com mais de 100.000 KM ----\n");
    for (int i = 0; i < numCarros; i++) {
        if (carros[i].quilometragem > 100000) {
            printf("Marca: %s\n", carros[i].Marca);
            printf("Ano: %d\n", carros[i].Ano);
            printf("Quilometragem: %.2f KM\n", carros[i].quilometragem);
        }
    }

    return 0;
}