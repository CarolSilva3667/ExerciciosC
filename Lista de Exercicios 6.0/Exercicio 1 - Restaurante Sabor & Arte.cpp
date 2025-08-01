#include <stdio.h>
#include <locale.h>

int main() {
    int PratosPrincipais, Sobremesa, Bebida;
    float preçodospratos = 70.0, preçodasobremesa = 15.0, preçodabebida = 7.00;
    float valordospratos = 0.0, valordasobremesa = 0.0, valordasbebidas = 0.0;
    float desconto = 0.0, total = 0.0;

    printf("Quantidade de pratos principais pedidos pelo cliente: ");
    scanf("%d", &PratosPrincipais);
    if (PratosPrincipais > 0) {
        valordospratos = PratosPrincipais * preçodospratos;
        total += valordospratos;
    } else {
        printf("Nenhum prato principal foi pedido!\n");
    }

    printf("Quantidade de sobremesas pedidas pelo cliente (0 - nenhuma): ");
    scanf("%d", &Sobremesa);
    if (Sobremesa > 0) {
        valordasobremesa = Sobremesa * preçodasobremesa;
        total += valordasobremesa;
    } else {
        printf("Nenhuma sobremesa foi pedida!\n");
    }

    printf("Quantidade de bebidas pedidas pelo cliente (0 - nenhuma): ");
    scanf("%d", &Bebida);
    if (Bebida > 0) {
        valordasbebidas = Bebida * preçodabebida;
        total += valordasbebidas;
    } else {
        printf("Nenhuma bebida foi pedida!\n");
    }

    if (PratosPrincipais > 3) {
        desconto += total * 0.10;
    }

    if (Sobremesa > 0 && Bebida > 0) {
        desconto += total * 0.05;
    }

    float Valortotal = total - desconto;

    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", Valortotal);

    return 0;
}