#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C com um array de números inteiros com 4 posições
(tamanho 4). Atribua os valores 40, 33, 3, 6 ao array. Depois faça as seguintes
operações e mostre os resultados na tela:
a. SOMAR: Valor da 1ª posição com da 2ª posição do array.
b. SUBTRAÇÃO (MENOS): Valor da 1ª posição com da 3ª posição do array.
c. MULTIPLICAÇÃO (VEZES): Valor da 2ª posição com da 4ª posição do array.
d. DIVISÃO: Valor da 4ª posição com da 3ª posição do array.
 */

int main(int argc, char *argv[]) {
	int numeros[4];
	
	numeros[0] = 40;
	numeros[1] = 33;
	numeros[2] = 3;
	numeros[3] = 6;
	
	int somar = numeros[0] + numeros[1];
	int menos = numeros[0] - numeros[2];
	int vezes = numeros[1] * numeros[3];
	float divisao = numeros[3] / numeros[2];
	
	printf("Soma: %d\nSubtracao: %d \nMultiplicacao: %d \nDivisao: %.1f", somar, menos, vezes, divisao);
	return 0;
}