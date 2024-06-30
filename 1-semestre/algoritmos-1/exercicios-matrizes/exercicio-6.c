/*Crie um array para guardar até 10 nomes de clientes. Leia os 10 nomes digitados pelo usuário. Ao final mostre o índice do array seguido do nome armazenado. */

#include <stdio.h>
#include <stdlib.h>

#define MAX_CLIENTES 10
#define TAM_STRING 20

char clientes[MAX_CLIENTES][TAM_STRING];

int main(int argc, char *argv[]) {
	int i;
	
	for (i = 0; i < MAX_CLIENTES; i++) {
		printf("Digite o nome do cliente %d: ", i);
		fflush(stdin);
		scanf("%[^\n]s", clientes[i]);
	}
	
	for (i = 0; i < MAX_CLIENTES; i++) {
		printf("%d - %s\n", i, clientes[i]);
	}	
	return 0;
}