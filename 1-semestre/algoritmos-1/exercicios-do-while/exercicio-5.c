#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int menu, produto;
	int quantidade=0;
	float percentualDescontoMouse=10.00;
	float percentualDescontoTeclado=10.00;
	float percentualDescontoMonitor=10.00;
	float percentualDescontoImpressora=10.00;
	float desconto, totalComDesconto;
	float mouse, teclado, monitor, impressora;
	float valorComDescontoMouse, valorComDescontoTeclado, valorComDescontoMonitor, valorComDescontoImpressora;
	
	float descontoMouse, descontoTeclado, descontoMonitor, descontoImpressora;
	
	do {
		printf("MENU:\n");
		printf("1 - Sair\n");
		printf("2 - Vender produto\n");
		printf("3 - Definir descontos da promocao Black Friday\n");
		printf("4 - Imprimir descontos dos produtos\n");
		printf("5 - Mostrar a quantia vendida por cada produto em REAIS\n");
		scanf("%d", &menu);
		
		switch (menu) {
			case 2:
				printf("Digite o codigo do produto: ");
				scanf("%d", &produto);
				
				printf("Informe a quantidade: ");
				scanf("%d", &quantidade);
				
				switch (produto) {
					case 1000: 
						printf("Mouse.\n");
						desconto = 19.90 * percentualDescontoMouse / 100.00;
						valorComDescontoMouse = 19.90 - desconto;
						totalComDesconto = quantidade * valorComDescontoMouse;
						mouse+=totalComDesconto;
						printf("Total com desconto aplicado: R$ %.2f\n", mouse);
						break;
					case 1001:
						printf("Teclado.\n");
						desconto = 100.00 * percentualDescontoTeclado / 100.00;
						valorComDescontoTeclado = 100.00 - desconto;
						totalComDesconto = quantidade * valorComDescontoTeclado;
						teclado+=totalComDesconto;
						printf("Total com desconto aplicado: R$ %.2f\n", teclado);
						break;
					case 1002:
						printf("Monitor.\n");
						desconto = 999.99 * percentualDescontoMonitor / 100.00;
						valorComDescontoMonitor = 999.99 - desconto;
						totalComDesconto = quantidade * valorComDescontoMonitor;
						monitor+=totalComDesconto;
						printf("Total com desconto aplicado: R$ %.2f\n", monitor);
						break;
					case 1003:
						printf("Impressora.\n");
						desconto = 1500.00 * percentualDescontoImpressora / 100.00;
						valorComDescontoImpressora = 1500.00 - desconto;
						totalComDesconto = quantidade * valorComDescontoImpressora;
						impressora+=totalComDesconto;
						printf("Total com desconto aplicado: R$ %.2f\n", impressora);
						break;
					default :
						printf("Codigo invalido!\n");
						break;
				}
				break;
			case 3:
				printf("Informe o codigo do produto: ");
				scanf("%d", &produto);
				
				switch (produto) {
					case 1000:
						printf("Digite o percentual de desconto do mouse: ");
						scanf("%f", &percentualDescontoMouse);
						break;
					case 1001:
						printf("Digite o percentual de desconto do teclado: ");
						scanf("%f", &percentualDescontoTeclado);
						break;
					case 1002:
						printf("Digite o percentual de desconto do monitor: ");
						scanf("%f", &percentualDescontoMonitor);
						break;
					case 1003:
						printf("Digite o percentual de desconto da impressora: ");
						scanf("%f", &percentualDescontoImpressora);
						break;
					default:
						printf("Codigo invalido!\n");
				}
				break;
			case 4:
				descontoMouse = 19.90 * percentualDescontoMouse / 100.00;
				descontoTeclado = 100.00 * percentualDescontoTeclado / 100.00;
				descontoMonitor = 999.99 * percentualDescontoMonitor / 100.00;
				descontoImpressora = 1500.00 * percentualDescontoImpressora / 100.00;
				
				printf("Percentual de desconto do mouse: %.1f%%. Valor do desconto: R$ %.2f\n", percentualDescontoMouse, descontoMouse);
				printf("Percentual de desconto do teclado: %.1f%%. Valor do desconto: R$ %.2f\n", percentualDescontoTeclado, descontoTeclado);
				printf("Percentual de desconto do monitor: %.1f%%. Valor do desconto: R$ %.2f\n", percentualDescontoMonitor, descontoMonitor);
				printf("Percentual de desconto da impressora: %.1f%%. Valor do desconto: R$ %.2f\n", percentualDescontoImpressora, descontoImpressora);
				break;
			case 5:
				printf("Total mouse: R$ %.2f\n", mouse);
				printf("Total teclado: R$ %.2f\n", teclado);
				printf("Total monitor: R$ %.2f\n", monitor);
				printf("Total impressora: R$ %.2f\n", impressora);
				break;
			default:
				printf("Codigo invalido!\n");
				break;
		}
		
	} while (menu != 1);
	return 0;
}