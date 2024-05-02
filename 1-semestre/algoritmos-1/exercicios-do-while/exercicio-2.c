#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int menu;
    int votoPrefeito;
    int eleitores=0;
    int neo=0, agente=0; /*prefeitos*/
    int trinity=0, morpheus=0, cypher=0, brown=0, jones=0, oraculo=0, garoto=0; /*vereadores*/
    int votoVereador;
    int totalVotosVereador=0;
    int vereadoresEleitos;

    do {
        printf("MENU\n");
        printf("0 - Sair\n");
        printf("1 - Votar para prefeito e vereador\n");
        printf("2 - Imprimir quantos eleitores votaram\n");
        printf("3 - Imprimir quantos votos cada prefeito recebeu\n");
        printf("4 - Imprimir quantos votos cada vereador recebeu\n");
        printf("5 - Imprimir quem foi eleito\n");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("Vote para prefeito: ");
            scanf("%d", &votoPrefeito);

            switch (votoPrefeito) {
            case 99:
                printf("Voce votou no Neo.\n");
                neo++;
                break;
            	
            case 87:
                printf("Voce votou no Agente Smith.\n");
                agente++;
                break;
                
            default:
            	printf("Numero invalido!");
            	break;

			}
			
			printf("Vote para vereador: ");
			scanf("%d", &votoVereador);

                switch (votoVereador)
                {
                case 99001:
                    printf("Voce votou no Trinity.\n");
                    trinity++;
                    eleitores++;
                    totalVotosVereador++;
                    break;
                
                case 99002:
                    printf("Voce votou no Morpheus.\n");
                    morpheus++;
                    eleitores++;
                    totalVotosVereador++;
                    break;

                case 87111:
                    printf("Voce votou no Cypher.\n");
                    cypher++;
                    eleitores++;
                    totalVotosVereador++;
                    break;
                
                case 87112:
                    printf("Voce votou no agente Brown.\n");
                    brown++;
                    eleitores++;
                    totalVotosVereador++;
                    break;

                case 87113:
                    printf("Voce votou no Agente Jones.\n");
                    jones++;
                    eleitores++;
                    totalVotosVereador++;
                    break;

                case 76301:
                    printf("Voce votou no Oraculo.\n");
                    oraculo++;
                    eleitores++;
                    totalVotosVereador++;
                    break;

                case 76302:
                    printf("Voce votou no Garoto Colher.\n");
                    garoto++;
                    eleitores++;
                    totalVotosVereador++;
                    break;

                default:
                    printf("Numero invalido!\n");
                    break;
                }
        }
        
        if (menu == 2) {
        	printf("Numero de eleitores: %d\n", eleitores);
		}
		
		if (menu == 3) {
			printf("Votos Neo: %d\n", neo);
			printf("Votos Agente Smith: %d\n", agente);
		}
		
		if (menu ==4) {
			printf("Trinity: %d votos.\n", trinity);
			printf("Morpheus: %d votos.\n", morpheus);
			printf("Cypher: %d votos.\n", cypher);
			printf("Agente Brown: %d votos.\n", brown);
			printf("Agente Jones: %d votos.\n", jones);
			printf("Oraculo: %d votos.\n", oraculo);
			printf("Garoto Colher: %d votos.\n", garoto);
		}

        if (menu == 5) {
        	if (neo > agente) {
            	printf("Neo foi eleito para prefeito.\n\n");
	        } else if (agente > neo) {
	            printf("Agente Smith foi eleito para prefeito.\n\n");
	        } else {
	            printf("Empate. Havera segundo turno para prefeito.\n\n");
	        }
	        
	        vereadoresEleitos = totalVotosVereador * 10 / 100;
	        
	        if (trinity > vereadoresEleitos) {
	        	printf("Trinity foi eleito vereador.\n");
			}
			
			if (morpheus > vereadoresEleitos) {
	        	printf("Morpheus foi eleito vereador.\n");
			}
			
			if (cypher > vereadoresEleitos) {
	        	printf("Cypher foi eleito vereador.\n");
			}
			
			if (brown > vereadoresEleitos) {
	        	printf("Agente Brown foi eleito vereador.\n");
			}
			
			if (jones > vereadoresEleitos) {
	        	printf("Agente Jones foi eleito vereador.\n");
			}
			
			if (oraculo > vereadoresEleitos) {
	        	printf("Oraculo foi eleito vereador.\n");
			}
			
			if (garoto > vereadoresEleitos) {
	        	printf("Garoto Colher foi eleito vereador.\n");
			}
		}

    } while (menu != 0);
    return 0;
}