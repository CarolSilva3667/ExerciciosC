#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char descricao[100];
    char horario[100];
    int concluida;
} Tarefas;

int total = 0;
Tarefas tarefa[100];

void Adicionartarefas();
void listarTarefas();
void concluirTarefa();

int main() {
    int opcao;

    do {
        printf("\n--== Lista de Tarefas ==--\n");
        printf("1 - Adicionar tarefa\n");
        printf("2 - Listar tarefa\n");
        printf("3 - Concluir tarefa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
     
        switch (opcao) {
            case 1:
                Adicionartarefas();
                break;
            case 2:
                listarTarefas();
                break;
            case 3:
                concluirTarefa(); 
                break;
            default:
                printf("\nOpção Inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void Adicionartarefas() {
    system("clear");
        printf("\nTarefa %d:\n", total + 1);
        printf("Titulo: \n");
        scanf(" %[^\n]", tarefa[total].titulo);
        printf("Descrição: \n");
        scanf(" %[^\n]", tarefa[total].descricao);
        printf("Horário: \n");
        scanf(" %[^\n]", tarefa[total].horario);
        tarefa[total].concluida == 0;
        total++;
}


void listarTarefas() {
    system("clear");
    printf("\n--== Suas Tarefas ==--\n");
    if (total == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    for (int i = 0; i < total; i++) {
        printf("\nTarefa %d\n", i + 1);
        printf("Título: %s\n", tarefa[total].titulo);
        printf("Descrição: %s\n", tarefa[total].descricao);
        printf("Horário: %s\n", tarefa[total].horario);
        printf("Status: %s\n", tarefa[total].concluida ? "Concluída" : "Pendente");
    }
}

void concluirTarefa() {
    int opcaoconcluir;
    system("clear");
    printf("Qual tarefa deseja concluir: \n");
    scanf("%d", &opcaoconcluir);
    for (int i = 0; i < total; i++) {
        if(i == opcaoconcluir){
            tarefa[i].concluida = 1;
            printf("Status da terefa alterado");
            }
            else {
                printf("Tarefa não foi encontrada");
            }
    }
   
}