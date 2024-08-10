#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro os valores de A, B, C. A função deverá retornar a soma dos
parâmetros. */

int somar(int A, int B, int C) {
	int soma = A + B + C;
	return soma;
}

int main(int argc, char *argv[]) {
	int resultado = somar(1, 2, 3);
	printf("Resultado da soma: %d", resultado);
	return 0;
}