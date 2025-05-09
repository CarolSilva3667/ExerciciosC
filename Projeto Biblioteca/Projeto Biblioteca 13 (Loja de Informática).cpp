#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int opcao, quantidade, i;
    float preco, total = 0;
    char escolha;
    
    do{
        printf("\n-----Loja de Informática-----\n");
        printf("Selecione os produtos que deseja comprar (1-4):\n");
        printf("1 - Teclado\n");
        printf("2 - Mouse\n");
        printf("3 - Monitor\n");
        printf("4 - Placa de Vídeo\n");
        printf("5 - Sair\n");
        printf("Escolha um produto: ");
        scanf("%d", &opcao);
        
        if(opcao == 5){
            break;
        }
        printf("Quantas unidades deseja comprar? ");
        scanf("%d", &quantidade);
        
        switch (opcao){
            case 1:
            preco = 100.00;
            break;
            case 2:
            preco = 50.00;
            break;
            case 3:
            preco = 800.00;
            break;
            case 4:
            preco = 2000.00;
            break;
            default:
            printf("Opção inválida!\n");
            continue;
        }
    float subtotal = 0;
    for (i = 0;i < quantidade; i++){
        subtotal += preco;
    }
    total += subtotal;
    printf("Item adicionado ao carrinho!Total Parcial: R$ %.2f\n", total);
    
    printf("\nDeseja comprar mais produtos(s/n)?: ");
    scanf(" %c", &escolha);
    
    } while (escolha == 's' || escolha == 'S');
    
    printf("\n-----Resumo da Compra -----\n");
    printf("Total da compra: R$ %.2f\n", total);
    printf("Agradecemos Sua Preferência!!");
    
    return 0;
}
