//Algoritimo
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int caminhao, alqueires, viagens;
    printf("informe a quantidade de caminhões:\n");
    scanf("%d",&caminhao);
    printf("informe a quantidade de alquieres:\n");
    scanf("%d",&alqueires);
    viagens = (alqueires * 250) / (caminhao * 18);
    printf("serão necessarias um total de %d viagens", viagens);
    return 0;
}