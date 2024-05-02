#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int menu;
	int jogo;
	int dlc;
	int minecraft=0, battlefield=0; /*jogos*/
	int bee=0, cute=0, ninjas=0, vehicle=0, medic=0; /*DLCs*/
	int votosJogos=0;
	int votosDlc=0;
	int dlcEscolhido;
	
	do {
		printf("MENU:\n");
		printf("0 - Sair\n");
		printf("1 - Votar no jogo\n");
		printf("2 - Votar no DLC\n");
		printf("3 - Imprimir quantos jogadores votaram\n");
		printf("4 - Imprimir quantos votos cada jogo recebeu\n");
		printf("5 - Imprimir quantos votos cada DLC recebeu\n");
		printf("6 - Imprimir o jogo mais votado\n");
		printf("7 - Imprimir DLC escolhido (+ de 20%%)\n");
		scanf("%d", &menu);
		
		switch (menu) {
			case 1:
				printf("Digite o codigo do jogo escolhido: ");
				scanf("%d", &jogo);
				
				switch (jogo) {
					case 100:
						printf("Voce escolheu Minecraft!\n");
						minecraft++;
						votosJogos++;
						break;
						
					case 101:
						printf("Voce escolhei Battlefield!\n");
						battlefield++;
						votosJogos++;
						break;
						
					default: 
						printf("Codigo invalido!");
						break;
				}
				break;
				
			case 2:
				printf("Digite o codigo do DLC para votar: ");
				scanf("%d", &dlc);
				
				switch (dlc) {
					case 1001:
						printf("Voce votou no Bee Kingdom!\n");
						bee++;
						votosDlc++;
						break;
					case 1002:
						printf("Voce votou no Cute Teens!\n");
						cute++;
						votosDlc++;
						break;
					case 1003:
						printf("Voce votou nos Ninjas HD!\n");
						ninjas++;
						votosDlc++;
						break;
					case 1010:
						printf("Voce votou no Kit Vehicle!\n");
						vehicle++;
						votosDlc++;
						break;
					case 1011:
						printf("Voce votou no Kit Medic!\n");
						medic++;
						votosDlc++;
						break;
					default: 
						printf("Codigo invalido!\n");
						break;
				}
				break;
				
			case 3: 
				printf("Total de jogadores que votaram: %d\n", votosJogos);
				break;
				
			case 4:
				printf("Total de votos Minecraft: %d\n", minecraft);
				printf("Total de votos Battlefield: %d\n", battlefield);
				break;
				
			case 5:
				printf("Total de votos Bee Kingdom: %d\n", bee);
				printf("Total de votos Cute Teens: %d\n", cute);
				printf("Total de votos Ninjas HD: %d\n", ninjas);
				printf("Total de votos Kit Vehicle: %d\n", vehicle);
				printf("Total de votos Kit Medic: %d\n", medic);
				break;
				
			case 6:
				if (minecraft > battlefield) {
					printf("Minecraft foi o jogo mais votado.\n");
				} else if (battlefield > minecraft) {
					printf("Battlefield foi o jogo mais votado.\n");
				} else {
					printf("Os dois jogos tiveram a mesma quantidade de votos.\n");
				}
				break;
				
			case 7: 
				dlcEscolhido = votosDlc * 20 / 100;
				
				if (bee > dlcEscolhido) {
					printf("Bee Kingdom foi escolhido.\n");
				}
				
				if (cute > dlcEscolhido) {
					printf("Cute Teens foi escolhido.\n");
				}
				
				if (ninjas > dlcEscolhido) {
					printf("Ninjas HD foi escolhido.\n");
				}
				
				if (vehicle > dlcEscolhido) {
					printf("Kit Vehicle foi escolhido.\n");
				}
				
				if (medic > dlcEscolhido) {
					printf("Kit Medic foi escolhido.\n");
				}
				break;
		}

} while (menu != 0);

	return 0;
}