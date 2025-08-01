#include <stdio.h>

typedef struct {
    char Nome[50];
    int Idade;
    float IMC;
} Aluno;

void classificarAluno(Aluno aluno) {
    printf("\n--- Classificação do Aluno ---\n");
    printf("Nome: %s\n", aluno.Nome);
    printf("Idade: %d anos\n", aluno.Idade);
    printf("IMC: %.2f\n", aluno.IMC);

    if (aluno.IMC >= 30) {
        printf("Classificação: Obeso\n");
    } else if (aluno.IMC >= 25) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Saudável\n");
    }
}

int main() {
    Aluno aluno;
    printf("\n--- Seja Bem Vindo a Academia Corpo em Movimento ---\n");
    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.Nome);
    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno.Idade);
    printf("Informe o IMC do aluno: ");
    scanf("%f", &aluno.IMC);

    classificarAluno(aluno);
    
    return 0;
}