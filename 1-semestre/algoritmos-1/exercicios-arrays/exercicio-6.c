#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C com um array para armazenar o preço de 15
produtos. Peça para o usuário digitar o preço desses 15 produtos, armazene esses
valores no array criado. Posteriormente mostre o índice e preço do produto lado a
lado. Peça ao usuário que escolha um índice. Depois mostre na tela o preço do
produto que corresponde ao índice escolhido pelo usuário.
 */

int main(int argc, char *argv[]) {
	
	float array[15];
	int i;
	printf("Digite o valor dos produtos: \n");
	for (i=0; i<15; i++) {
		
		scanf("%f", &array[i]);
	}
	
	printf("Indice - valor\n");
	for (i=0; i<15; i++) {
		printf("%d: %.2f\n", i, array[i]);
	}
	
	do {
		printf("Digite o indice do produto que deseja comprar: ");
		scanf("%d", &i);
		
		printf("Valor: %.2f\n", array[i]);	
	} while (i >= 0 && i < 15);	
	
	return 0;
}