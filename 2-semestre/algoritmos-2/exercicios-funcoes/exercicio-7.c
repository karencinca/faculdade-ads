#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. A sua função deverá multiplicar o
parâmetro por 2. A função deverá retornar o novo valor. Chame a função na main. */

int multiplica(int num) {
	int resultado = num * 2;
	return resultado;
}

int main(int argc, char *argv[]) {
	int valor = multiplica(3);
	printf("Valor: %d", valor);
	return 0;
}