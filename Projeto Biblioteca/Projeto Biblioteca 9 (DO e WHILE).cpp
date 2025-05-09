//BIBLIOTECA
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    float n1, n2, media;
    int resp;
    
    do
    {
        printf("Digite a primeira a nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota:  ");
        scanf("%f", &n2);
        
        media = (n1 + n2)/2;
        printf("Media do aluno e = %.2f\n", media);
        
        printf("Digite 1 para continuar ou 2 para sair \n");
        scanf("%d", &resp);
        
        system("clear");
    } while(resp==1);
    return 0;
}