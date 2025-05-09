//Biblioteca

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int opcao;
    float nota1, nota2, nota3, nota4, media;
    
    printf("Selecione a Materia(1-4):\n");
    printf("1 - Português\n");
    printf("2 - Matemática\n");
    printf("3 - Biologia\n");
    printf("4 - Ciências\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
        printf("Você escolheu Português!\n");
        printf("Digite as quatro notas: ");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 2:
        printf("Você escolheu Matemática!\n");
        printf("Digite as quatro notas: ");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 3:
        printf("Você escolheu Biologia!\n");
        printf("Digite as quatro notas: ");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 4:
        printf("Você escolheu Ciências!\n");
        printf("Digite as quatro notas: ");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    printf("Média Final: %2.f\n", media);
    
    if(media>=9.0)
    {
        printf("Conceito A\n");
        printf("Status: Aprovado");
    }
    else if (media>=7.5)
    {
        printf("Conceito B\n");
        printf("Status: Aprovado");
    }
    else if(media>=6.0)
    {
        printf("Conceito C\n");
        printf("Status: Aprovado");
    }
    else if(media>=4.0)
    {
        printf("Conceito D\n");
        printf("Status: Reprovado");
    }
    else
    {
        printf("Conceito E\n");
        printf("Status: Reprovado =(");
    }
    return 0;
}