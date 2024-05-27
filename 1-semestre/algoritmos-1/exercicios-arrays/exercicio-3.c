#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C com um array de números inteiros com 10
posições (tamanho 10). Obtenha 10 valores digitados pelo usuário. Calcule a soma
desses valores 10 após a leitura deles. O resultado da soma NÃO deve ser
armazenado no array. Imprima esse resultado na tela. OBS: UTILIZE LAÇOS DE
REPETIÇÃO */

int main(int argc, char *argv[]) {
	int array[10];
	int soma = 0;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero inteiro: ");
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < 10; i++) {
		soma+=array[i];
	}
	
	printf("Soma: %d", soma);
	
	return 0;
}