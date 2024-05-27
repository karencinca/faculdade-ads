#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C com 3 arrays de números inteiros com 10
posições cada um. Obtenha do usuário os números para os 2 primeiros arrays.
Depois calcule a multiplicação do primeiro array pelo segundo array, ou seja,
multiplique os valores de mesmo índice. O resultado da multiplicação deve ser
armazena no 3º array. */

int main(int argc, char *argv[]) {
	int arrayum[10];
	int arraydois[10];
	int arraytres[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero para a primeira coluna: ");
		scanf("%d", &arrayum[i]);
	}
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero para a segunda coluna: ");
		scanf("%d", &arraydois[i]);
	}
	
	for (i = 0; i < 10; i++) {
		arraytres[i] = arrayum[i] * arraydois[i];
		
		printf("%d X %d = %d\n", arrayum[i], arraydois[i], arraytres[i]);
	}
	return 0;
}