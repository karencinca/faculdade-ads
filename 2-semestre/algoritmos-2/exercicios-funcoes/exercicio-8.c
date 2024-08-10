#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro dois números e retorne a multiplicação desses números, ou seja,
o primeiro parâmetro multiplicado pelo segundo parâmetro. Chame a função na main. */

int multiplica(int num1, int num2) {
	int resultado = num1 * num2;
	return resultado;
}

int main(int argc, char *argv[]) {
	int valor = multiplica(2, 3);
	printf("Valor: %d", valor);
	return 0;
}