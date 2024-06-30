#include <stdio.h>
#include <stdlib.h>

/* 1. Crie a seguinte matriz de números inteiros com os valores abaixo. Mostre os valores na tela.
1 12 45 76
2 5 87 3
 */

int main(int argc, char *argv[]) {
	int matriz[2][4];
	
	matriz[0][0] = 1;
	matriz[0][1] = 12;
	matriz[0][2] = 45;
	matriz[0][3] = 76;
	matriz[1][0] = 2;
	matriz[1][1] = 5;
	matriz[1][2] = 87;
	matriz[1][3] = 3;
	
	printf("%d ", matriz[0][0]);
	printf("%d ", matriz[0][1]);
	printf("%d ", matriz[0][2]);
	printf("%d\n", matriz[0][3]);
	printf("%d ", matriz[1][0]);
	printf("%d ", matriz[1][1]);
	printf("%d ", matriz[1][2]);
	printf("%d ", matriz[1][3]);
	return 0;
}