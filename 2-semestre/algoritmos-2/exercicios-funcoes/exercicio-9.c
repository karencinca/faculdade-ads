#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro dois números e retorne o maior deles. Chame a função na main. */

int comparar(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	} else {
		return num2;
	}
}

int main(int argc, char *argv[]) {
	int maiorValor = comparar(1, 5);
	printf("O maior valor eh %d", maiorValor);
	return 0;
}