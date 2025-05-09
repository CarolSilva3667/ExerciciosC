//Biblioteca
#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    float n1,n2,n3,n4,media;
    char nome [20];
    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);
    printf("Digite as quatro notas do aluno:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1+n2+n3+n4) / 4;
    if (media>5)
    {
        printf("Aluno Aprovado, sua nota é:%.2f", media);
    }
    else if (media>3)
    {
        printf("Aluno em Recuperação, sua nota é: %.2f", media);
    }
   return 0; 
}
