#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um array de 10 valores com vírgula e retorne a sua soma. */

float somarValores(float *n, int m) {
	int i;
	float soma;
	for (i=0; i<m; i++) {
		soma += n[i];
	}
	return soma;
}

int main(int argc, char *argv[]) {
	float vetor[10] = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 3.2, 9.5};
	float resultado = somarValores(vetor, 10);
	printf("Soma dos valores: %.2f", resultado);
	return 0;
}