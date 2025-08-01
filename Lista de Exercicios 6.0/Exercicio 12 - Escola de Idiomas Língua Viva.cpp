#include <stdio.h>

int main() {
	float Notas[5][4];
	float Media[5];

	printf("--- Seja Bem Vindo(a) ao Língua Viva ---\n");

	for (int i = 0; i < 5; i++) {
		printf("\n--- Aluno %d ---\n", i + 1);
		float Soma = 0;
		for (int j = 0; j < 4; j++) {
			printf("Digite a nota da prova %d: ", j + 1);
			scanf("%f", &Notas[i][j]);
			Soma += Notas[i][j];
		}
		Media[i] = Soma / 4;
	}

	printf("\nResultados:\n");

	for (int i = 0; i < 5; i++) {
		printf("\n--- Aluno %d ---\n", i + 1);
		printf("Média final: %.2f\n", Media[i]);
		if (Media[i] >= 6) {
			printf("Situação: Aprovado\n");
		} else {
			printf("Situação: Reprovado\n");
		}
	}

	return 0;
}