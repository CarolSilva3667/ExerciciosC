#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char produto[30];
	float valor;
	int quantidade;
} Venda;

int numVendas = 0;
Venda vendas[10];

//Cadastro de Vendas.
//Faturamento Total.
//MC)dia de Quantidades.

void cadastrarVendas();
void listarVendas();
void calcularFaturamento();
void mediaQuantidadeVendida();
void finalizaFuncao();

int main() {

	int opcao;

	do {
		printf("\n--== Mercado SENAI ==--\n");
		printf("1 - Registrar Venda\n");
		printf("2 - Relatório de Vendas\n");
		printf("3 - Calcular Faturamento\n");
		printf("4 - Média da Quantidade de Vendas\n");
		printf("0 - Sair\n");
		printf("Selecione uma opção: ");
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
			cadastrarVendas();
			break;
		case 2: 
			listarVendas();
			break;
			
		case 3:
			calcularFaturamento();
			break;
			
		case 4:
			mediaQuantidadeVendida();
			break;
			
		case 0:
			printf("\nObrigado!\n");
			break;
			
		default:
			printf("\nOpção Invalida!\n");
			break;
		}

	} while(opcao != 0);
	return 0;
}

void cadastrarVendas() {
    system("clear");
    printf("\n--== Nova Venda ==--\n");
	printf("Produto: ");
	scanf("%s", vendas[numVendas].produto);
	printf("Valor Unitario: ");
	scanf("%f", &vendas[numVendas].valor);
	printf("Quantidade: ");
	scanf("%d", &vendas[numVendas].quantidade);
	numVendas++;
	finalizaFuncao();
}

void listarVendas() {
    system("clear");
    printf("\n--== Minhas Vendas ==--\n");
    for(int i = 0; i < numVendas; i++) {
        printf("Numero da Venda: %d\n", i+1);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Valor Unitario: %.2f\n", vendas[i].valor);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("----------------------\n");
    }
    finalizaFuncao();
}

void calcularFaturamento() {
    system("clear");
    printf("\n--== Meu Faturamento ==--\n");
    float faturamento = 0;
    for(int i = 0; i < numVendas; i++) {
        faturamento += (vendas[i].valor * vendas[i].quantidade);
    }
    printf("Faturamento R$ %.2f\n", faturamento);
    finalizaFuncao();
}

void mediaQuantidadeVendida() {
    system("clear");
    printf("\n--== Média Quantidade Vendida ==--\n");
    float media = 0;
    int contagem = 0;
    for(int i = 0; i < numVendas; i++) {
        contagem += vendas[i]. quantidade;
    }
    media = contagem / numVendas;
    printf("Média da Quantidade: %.2f\n", media);
    finalizaFuncao();
}

void finalizaFuncao() {
    printf("Enter para continuar...");
    getchar();
    getchar();
    system("clear");
}