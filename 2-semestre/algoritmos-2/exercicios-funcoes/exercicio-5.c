#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 2 números com vírgula. Então imprima na tela uma
mensagem. Chame a função na main.
Exemplo: se os valores passados forem 5 e 6. Imprimir: “A soma de 5 e 6 é 11” */

void imprimeSoma(float num1, float num2) {
	float soma = num1 + num2;
	printf("A soma de %.2f e %.2f eh %.2f", num1, num2, soma);
}

int main(int argc, char *argv[]) {
	imprimeSoma(1.5, 1.5);
	return 0;
}