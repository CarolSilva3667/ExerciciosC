#include <stdio.h>

#include "alunos.h"
#include "notas.h"

void calcularMedia(Aluno alunos[], Nota notas[]);

int main() {
    int opcao;
    Aluno alunos[10];
    Nota notas[50];
    int contAluno = 0, contNota = 0;
    
    do {
        
        printf("\n------ Sistema Escolar ------\n");
        printf("1 - Cadastrar Aluno\n");
        printf("2 - Cadastrar nota\n");
        printf("3 - Calcular Média\n");
        printf("0 - Sair\n");
        printf("Selecione uma opcão: ");
        scanf("%d", &opcao);
     
     switch(opcao) {
        case 1:
            cadastrarAluno(&alunos[contAluno], &contAluno);
            break;
        case 2:
            cadastrarNota(&notas[contNota], &contNota);
            break;
        case 3:
            calcularMedia(alunos, notas);
            break;
        case 0:
            break;
        default:
            break;
     }
    
    }while(opcao != 0);
    
    return 0;
}

void calcularMedia(Aluno alunos[], Nota notas[]) {
    int matricula, qntNotas = 0;
    float media = 0;
    printf("Informe uma matricula: ");
    scanf("%d", &matricula);
    for(int i = 0; i < 10; i++){
        if(alunos[i].matricula == matricula);
          printf("Nome: %s\n", alunos[i].nome);
          break;
        }
    
    for(int i = 0; i < 50; i++) {
        if(alunos[i].matricula == matricula) {
            media += notas[i].nota;
            qntNotas++;
        }
    }
    printf("Média %.2f\n", (media / qntNotas));
}
