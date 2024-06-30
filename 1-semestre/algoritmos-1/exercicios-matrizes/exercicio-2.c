#include <stdio.h>
#include <stdlib.h>

/* Crie uma matriz de números inteiros com os valores abaixo. Faça uso de FOR para atribuir valores
para as células. Mostre a matriz na tela.
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
 */

int main(int argc, char *argv[]) {
	int matriz[4][4];
	int i, j;
	
	for (i = 1; i <= 4; i++) {
		matriz[0][i] = i;
		printf("%d ", matriz[0][i]);
		
	for (j = 1; j <= 4; j++) {
			matriz[j][0] = i;
			printf("%d ", matriz[j][0]);	
		}	
		printf("\n");
	}
	
	return 0;
}