#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main () {
    Aluno aluno[3];
    int opcao;
    
    for(int i = 0; i < 3; i++){
        printf("\nAluno %d:\n",i + 1);
        printf("Nome:\n");
        scanf("%[^\n]",aluno[i].nome);
        printf("Média:\n");
        scanf("%f",&aluno[i].media);
        printf("Matricula:\n");
        scanf("%d",&aluno[i].matricula);
    }
    
    do{
        printf("1 - Listar todos os alunos\n");
        printf("2 - Mostrar aluno com maior média\n");
        printf("3 - Buscar aluno por matricula\n");
        printf("0 - Sair\n");
        scanf("%d",&opcao);
        
        switch(opcao) {
            case 1:
            for(int i = 0; i < 3; i++){
                printf("Nome:%s, Matricula:%d, Média:%.2f\n", aluno[i].nome, aluno[i].matricula, aluno[i].media);
            }
            break;
            
            case 2:
            int max = 0;
            for(int i = 1; i < 3; i++){
                if(aluno[i].media > aluno[max].media){
                  max = i;  
                }
            }
            printf("Aluno com maior média: %s (%.2f)\n", aluno[max].nome, aluno[max].media);
            break;
            
            case 3:
            int mat;
            printf("Matricula:\n");
            scanf("%d", &mat);
            int achou = 0;
            for(int i = 0; i < 3; i++){
                if(aluno[i].matricula == mat){
                    printf("Aluno %s, média %.2f\n", aluno[i].nome, aluno[i].media);
                    achou = 1;
                    break;
                }
                if(!achou){
                    printf("Aluno não encontrado\n");
                }
            }
            break;
            
            case 0: 
            break;
            
            default:
            printf("Opção inválida!!!\n");
        }
    } while (opcao != 0);
    
    return 0;
}