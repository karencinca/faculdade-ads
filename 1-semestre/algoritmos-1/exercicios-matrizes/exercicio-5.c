/*Crie uma matriz de números inteiros de tamanho 3x4. Leia os valores do usuário. Após a leitura,
percorra a matriz e substitua os valores negativos por 0. Mostre a matriz na tela. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz[3][4];
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite um numero: ");
			scanf("%d", &matriz[i][j]);	
		}
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = 0;
			}	
			printf("%d ", matriz[i][j]);	
		}
		printf("\n");
	}
	return 0;
}