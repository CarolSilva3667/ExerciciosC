#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char marca[50];
    char modelo[50];
    int ano;
    float valor;
    int combustivel; // 0 - Gasolina, 1 - Etanol, 2 - Diesel, 3 - DieselS10
    char cor[30];
} Veiculo;

Veiculo veiculos[MAX];
int totalVeiculo = 0;

void cadastrarVeiculo() {
    if (totalVeiculo < MAX) {
        printf("ID: ");
        scanf("%d", &veiculos[totalVeiculo].id);
        printf("Marca: ");
        scanf("%s", veiculos[totalVeiculo].marca);
        printf("Modelo: ");
        scanf("%s", veiculos[totalVeiculo].modelo);
        printf("Ano: ");
        scanf("%d", &veiculos[totalVeiculo].ano);
        printf("Valor: ");
        scanf("%f", &veiculos[totalVeiculo].valor);
        printf("Combustível (0-Gasolina, 1-Etanol, 2-Diesel, 3-DieselS10): ");
        scanf("%d", &veiculos[totalVeiculo].combustivel);
        printf("Cor: ");
        scanf("%s", veiculos[totalVeiculo].cor);
        totalVeiculo++;
        printf("Veículo cadastrado com sucesso!\n");
    } else {
        printf("Limite de veículos atingido.\n");
    }
}

void listarVeiculos() {
    for (int i = 0; i < totalVeiculo; i++) {
        printf("\nID: %d\nMarca: %s\nModelo: %s\nAno: %d\nValor: %.2f\nCombustível: %d\nCor: %s\n",
               veiculos[i].id, veiculos[i].marca, veiculos[i].modelo, veiculos[i].ano,
               veiculos[i].valor, veiculos[i].combustivel, veiculos[i].cor);
    }
}

void buscarVeiculo() {
    int idBusca;
    printf("Digite o ID do veículo que deseja buscar: ");
    scanf("%d", &idBusca);
    for (int i = 0; i < totalVeiculo; i++) {
        if (veiculos[i].id == idBusca) {
            printf("\nID: %d\n");
            printf("ID: %d\n",veiculos[i].id);
            printf("Marca: %s\n");
            printf("")
            return;
        }
    }
    printf("Veículo não encontrado.\n");
}

void filtrarPorCombustivel() {
    int tipo;
    printf("Digite o tipo de combustível (0-Gasolina, 1-Álcool, 2-Diesel, 3-Elétrico): ");
    scanf("%d", &tipo);
    for (int i = 0; i < totalVeiculo; i++) {
        if (veiculos[i].combustivel == tipo) {
            printf("\nID: %d\nMarca: %s\nModelo: %s\nAno: %d\nValor: %.2f\nCor: %s\n",
                   veiculos[i].id, veiculos[i].marca, veiculos[i].modelo,
                   veiculos[i].ano, veiculos[i].valor, veiculos[i].cor);
        }
    }
}

int main() {
    int opcao;
    do {
        
        printf("\n ----- Conssecionária SENAI -----\n");
        printf("1 - Cadastrar Veículo\n");
        printf("2 - Listar Veículos\n");
        printf("3 - Buscar Veículo\n");
        printf("4 - Filtrar por Combustível\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
            cadastrarVeiculo(); 
            break;
            
            case 2: 
            listarVeiculos(); 
            break;
            
            case 3: 
            buscarVeiculo(); 
            break;
            
            case 4: 
            filtrarPorCombustivel(); 
            break;
            
            case 0: 
            printf("Saindo...\n"); 
            break;
            
            default: 
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}