#include <stdio.h>
#include <stdlib.h>

/* Faça uma função capaz de receber por parâmetro 1 número inteiro. Então imprima na tela uma mensagem.
Chame a função na main.
Exemplo: se o valor passado for 5. Imprimir: “O número passado foi 5” */

void imprimeNumero(int numero) {
	printf("O numero passado foi %d", numero);
}

int main(int argc, char *argv[]) {
	imprimeNumero(5);
	return 0;
}