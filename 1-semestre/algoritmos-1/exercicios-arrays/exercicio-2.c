#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C com um array de números inteiros com 4 posições
(tamanho 4). Obtenha 3 valores digitados pelo usuário e armazene no array (índices 0
até 2). Calcule a soma desses 3 valores, o resultado deve ser armazenado na última
posição do array. Imprima o resultado na tela. OBS: NÃO UTILIZE LAÇO DE REPETIÇÃO */

int main(int argc, char *argv[]) {
	int array[4];
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &array[0]);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &array[1]);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &array[2]);
	
	array[3] = array[0] + array[1] + array[2];
	
	printf("Soma dos tres valores: %d", array[3]);
	return 0;
}