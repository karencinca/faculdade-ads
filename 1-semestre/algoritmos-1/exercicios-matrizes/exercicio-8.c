/*Crie um array para guardar até 10 nomes de clientes. Leia os 10 nomes digitados pelo usuário. Ao
final, peça ao usuário para digitar um índice de 0 à 10. Depois apague o texto que está no índice
escolhido pelo usuário. Sugestões:
a. use o comando strcpy com um espaço em branco para apagar
b. atribua ‘\0’ a primeira letra da frase.*/

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
	
	int indice;
	
	printf("Digite o indice do cliente que deseja apagar: ");
	scanf("%d", &indice);
	
	for (i = 1; i <= MAX_CLIENTES; i++) {
		if (indice == i) {
			//strcpy(clientes[indice], " "); (outra opcão)
			clientes[indice][0] = '\0';
		}
	}
	
	printf("Lista atualizada: \n");
	for (i = 1; i <= MAX_CLIENTES; i++) {
		printf("%s \n", clientes[i]);
	}
	
	return 0;
}