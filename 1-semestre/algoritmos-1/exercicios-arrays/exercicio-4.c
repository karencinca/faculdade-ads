#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C que deve obter do usuário o nome do produto, o
preço por unidade do produto e a quantidade que o usuário quer comprar desse
produto. Ao final seu programa deve mostrar na tela o nome do produto com o valor
total a ser cobrado do usuário. */

int main(int argc, char *argv[]) {
	char nome[20];
	float preco;
	int qtd;
	float total;
	
	printf("Digite o nome do produto: ");
	gets(nome);
	
	printf("Informe o preco do produto por unidade: ");
	scanf("%f", &preco);
	
	printf("Informe a quantidade: ");
	scanf("%d", &qtd);
	
	total = preco * qtd;
	
	puts("Produto: ");
	puts(nome);
	
	printf("Valor total: %.2f", total);
	
	return 0;
}