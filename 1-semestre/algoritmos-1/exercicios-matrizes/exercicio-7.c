/*Crie um array para guardar até 10 nomes de clientes. Leia os 10 nomes digitados pelo usuário. Ao
final, peça ao usuário para digitar um índice de 0 à 10. Depois mostre o nome que está armazenado
no índice escolhido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CLIENTES 10
#define TAM_STRING 20

char clientes[MAX_CLIENTES][TAM_STRING];

int main(int argc, char *argv[]) {
	int i;
	
	for (i = 1; i <= MAX_CLIENTES; i++) {
		printf("Digite o nome do cliente: ");
		fflush(stdin);
		scanf("%[^\n]s", clientes[i]);
	}
	
	int indice;
	printf("Digite um indice de 1 a 10: ");
	scanf("%d", &indice);
	
	for (i = 1; i <= MAX_CLIENTES; i++) {
		if (indice == i) {
			printf("%s", clientes[indice]);
		}
	}
	
	return 0;
}