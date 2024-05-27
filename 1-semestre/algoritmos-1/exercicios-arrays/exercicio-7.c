#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float array[15];
	int i, qtd;
	char comprar[4];
	float total;
	
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
		
		printf("Digite a quantidade do produto que deseja comprar: ");
		scanf("%d", &qtd);
		
		total = qtd * array[i];
		
		printf("\nValor gasto com o produto: %.2f\n", total);
		
		printf("Deseja comprar novamente(SIM, NAO)?");
		fflush(stdin);
		scanf("%[^\n]s", comprar);
			
	} while (strcmp(comprar, "SIM")==0);
	return 0;
}