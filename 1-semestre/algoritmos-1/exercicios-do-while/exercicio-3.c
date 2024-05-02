#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num, contador;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num > 0) {
		for (contador = 2; contador <= num; contador++) {
			if (contador % 2 == 0) {
				printf("%d\n", contador);	
			}
		}
	}
		
	else if (num < 0) {
		for (contador = -2; contador >= num; contador--) {
			if (contador % 2 == 0) {
				printf("%d\n", contador);	
			}
		}
	}
	
	return 0;
}