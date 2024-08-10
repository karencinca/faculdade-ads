#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. Então imprima na tela uma mensagem.
Chame a função na main.
Exemplo: se o valor passado for 5. Imprimir: “O próximo número é 6” */

void imprimirNumero(int numero) {
	int proxNum = numero + 1;
	printf("O proximo numero eh %d", proxNum);
}

int main(int argc, char *argv[]) {
	imprimirNumero(5);
	return 0;
}