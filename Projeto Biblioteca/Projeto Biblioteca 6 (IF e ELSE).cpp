//Biblioteca
#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    char nome[20], sx;
    printf("Digite seu nome");
    scanf("%s", nome);
    printf("Informe seu sexo (F para feminino e M para masculino)");
    scanf(" %c", &sx);
    if (sx=='F' || sx=='f')
    {
        printf("%s é do sexo feminino",nome);
    }
    else if (sx=='M' || sx=='m')
    {
        printf("%s é do sexo masculino",nome);
    }
    else{
        printf("Entrada inválida, digite F ou M =D");
    }
   return 0; 
}
