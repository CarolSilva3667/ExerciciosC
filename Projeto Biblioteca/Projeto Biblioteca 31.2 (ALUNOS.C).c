#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"

void cadastrarAluno(Aluno *aluno, int *conta) {
    printf("Cadastrar Aluno\n");
    printf("Informe a Matricula: ");
    scanf("%d", &aluno->matricula);
    printf("Informe o Nome: ");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1;
}
