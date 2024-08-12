#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a média dos alunos. */

float calcularMedia(float *n, int m) {
	int i;
	float soma, media;
	for (i=0; i<m; i++) {
		soma += n[i];
	}
	media = soma / m;
	return media;
}

int main(int argc, char *argv[]) {
	float notas[10] = {10, 7, 5.5, 3.8, 6, 9.5, 4.8, 3.8, 7.3, 5};
	float media = calcularMedia(notas, 10);
	printf("Media: %.2f", media);
	return 0;
}