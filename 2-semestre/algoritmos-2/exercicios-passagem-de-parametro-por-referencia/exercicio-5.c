#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do
vetor e o número de vezes que esse elemento ocorreu no vetor. */

void contarComparar(int *n, int m, int *maior, int *qtd) {
	int i;
	*maior = n[0];
	*qtd=0;
	
	for (i=0; i<m; i++) {
		if (n[i] > *maior) {
			*maior = n[i];
		}
	}
	
	for (i=0; i<m; i++) {
		if (*maior == n[i]) {
			++*qtd;
		}
	}
}

int main(int argc, char *argv[]) {
	int vetor[5] = {2, 3, 4, 5, 5};
	int maior, qtd;
	contarComparar(vetor, 5, &maior, &qtd);
	printf("Maior: %d", maior);
	printf("\nQuantidade: %d", qtd);
	return 0;
}