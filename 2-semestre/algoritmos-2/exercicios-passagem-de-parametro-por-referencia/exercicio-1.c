#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um array de 10 valores inteiros e retorne a sua soma. */

int somarValores(int *n, int m) {
	int i;
	int soma = 0;
	for (i=0; i<m; i++) {
		soma+=n[i];
	}
	return soma;
}

int main(int argc, char *argv[]) {
	int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int resultado = somarValores(vetor, 10);
	printf("Soma dos valores: %d", resultado);
	return 0;
}