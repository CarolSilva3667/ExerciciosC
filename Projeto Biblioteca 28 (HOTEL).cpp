#include <stdio.h>
#include <string.h>

#define MAX_HOSPEDES 5
#define TAM_NOME 50
#define TAM_TEL 20

typedef struct {
    char nome[TAM_NOME];
    char telefone[TAM_TEL];
} Hospede;

Hospede hospedes[MAX_HOSPEDES];
int totalHospedes = 0;

void checkIn() {
    if (totalHospedes >= MAX_HOSPEDES) {
        printf("Hotel cheio. Não é possível fazer mais check-ins.\n");
    } else {
        printf("Digite o nome do hóspede: ");
        scanf(" %[^\n]", hospedes[totalHospedes].nome);

        printf("Digite o telefone do hóspede: ");
        scanf(" %[^\n]", hospedes[totalHospedes].telefone);

        totalHospedes++;
        printf("Check-in realizado com sucesso!\n");
    }
}

void listarHospedes() {
    if (totalHospedes == 0) {
        printf("Nenhum hóspede registrado.\n");
    } else {
        printf("Lista de Hóspedes:\n");
        for (int i = 0; i < totalHospedes; i++) {
            printf("%d. Nome: %s | Telefone: %s\n", i + 1, hospedes[i].nome, hospedes[i].telefone);
        }
    }
}

void servicoQuarto() {
    int opcao;
    printf("Serviço de Quarto:\n");
    printf("1. Toalhas\n");
    printf("2. Limpeza\n");
    printf("3. Comida\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Toalhas serão entregues em breve.\n");
            break;
        case 2:
            printf("Limpeza solicitada. Por favor, aguarde.\n");
            break;
        case 3:
            printf("Cardápio enviado para o quarto.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void fazerPedido() {
    int pedido;
    printf("Menu de Pedidos:\n");
    printf("1. Sanduíche - R$15\n");
    printf("2. Refrigerante - R$6\n");
    printf("3. Café - R$4\n");
    printf("Escolha seu pedido: ");
    scanf("%d", &pedido);

    switch (pedido) {
        case 1:
            printf("Você pediu um Sanduíche. Será entregue em breve.\n");
            break;
        case 2:
            printf("Você pediu um Refrigerante. Será entregue em breve.\n");
            break;
        case 3:
            printf("Você pediu um Café. Será entregue em breve.\n");
            break;
        default:
            printf("Pedido inválido.\n");
    }
}

int main() {
    int escolha;
    do {
        printf("\n------ Menu do Hotel ------\n");
        printf("1. Check-in\n");
        printf("2. Listar Hóspedes\n");
        printf("3. Serviço de Quarto\n");
        printf("4. Fazer Pedido\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                checkIn();
                break;
            case 2:
                listarHospedes();
                break;
            case 3:
                servicoQuarto();
                break;
            case 4:
                fazerPedido();
                break;
            case 5:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 5);

    return 0;
}
