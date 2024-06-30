#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz[4][4];
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			matriz[i][j] = i + j;
		}
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");	
	}
	return 0;
}