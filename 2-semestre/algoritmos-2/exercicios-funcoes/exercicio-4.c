#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 2 números inteiros. Então imprima na tela uma mensagem.
Chame a função na main.
Exemplo: se os valores passados forem 5 e 6. Imprimir: “Os números passados foram 5 e 6” */

void imprimeNumeros(int num1, int num2) {
	printf("Os numeros passados foram %d e %d", num1, num2);
}

int main(int argc, char *argv[]) {
	imprimeNumeros(5, 6);
	return 0;
}