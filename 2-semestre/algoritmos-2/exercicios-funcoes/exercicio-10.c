#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias
de acordo com o número digitado pelo usuário. Caso o usuário digite um número abaixo de 1 ou acima de 12,
imprima na tela “mês inválido”
Exemplo: Entrada = 4. Saída = abril.  */

void imprimirMes(int mes) {
	int dias;
	switch (mes) {
		case 1: 
			dias = 31;
			printf("Janeiro, %d dias", dias);
		break;
		case 2: 
			dias = 28;
			printf("Fevereiro, %d dias", dias);
		break;
		case 3: 
			dias = 31;
			printf("Marco, %d dias", dias);
		break;
		case 4: 
			dias = 30;
			printf("Abril, %d dias", dias);
		break;
		case 5: 
			dias = 31;
			printf("Maio, %d dias", dias);
		break;
		case 6: 
			dias = 30;
			printf("Junho, %d dias", dias);
		break;
		case 7: 
			dias = 31;
			printf("Julho, %d dias", dias);
		break;
		case 8: 
			dias = 31;
			printf("Agosto, %d dias", dias);
		break;
		case 9: 
			dias = 30;
			printf("Setembro, %d dias", dias);
		break;
		case 10: 
			dias = 31;
			printf("Outubro, %d dias", dias);
		break;
		case 11: 
			dias = 30;
			printf("Novembro, %d dias", dias);
		break;
		case 12: 
			dias = 31;
			printf("Dezembro, %d dias", dias);
		break;
		default: printf("Mes invalido.");
	}
}

int main(int argc, char *argv[]) {
		int mes;
		printf("Digite o numero do mes: ");
		scanf("%d", &mes);
		
		imprimirMes(mes);
	return 0;
}