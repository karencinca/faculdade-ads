/*Crie um array para guardar até 10 nomes de clientes. Leia os 10 nomes digitados pelo usuário.
Depois peça para o usuário digitar um nome para ser procurado no array. Então o seu programa
deverá executar uma pesquisa linear para encontrar esse nome. Assim que encontra o nome, imprima
o índice do array.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CLIENTES 10
#define TAM_STRING 20

char clientes[MAX_CLIENTES][TAM_STRING];

int main(int argc, char *argv[]) {
	int i;
	
	for (i = 1; i <= MAX_CLIENTES; i++) {
		printf("Digite o nome do cliente %d: ", i);
		fflush(stdin);
		scanf("%[^\n]s", clientes[i]);
	}
	
	char nomeProcurado[TAM_STRING];
	
	printf("\nDigite o nome que deseja buscar: ");
	fflush(stdin);
	scanf("%[^\n]s", nomeProcurado);
	
	for (i = 1; i <= MAX_CLIENTES; i++) {
		if (strcmp(nomeProcurado, clientes[i])==0) {
			printf("Encontrado do indice %d.", i);
			break;
		}
	}
	if (i == MAX_CLIENTES) printf("Nao localizado.");
	
	return 0;
}