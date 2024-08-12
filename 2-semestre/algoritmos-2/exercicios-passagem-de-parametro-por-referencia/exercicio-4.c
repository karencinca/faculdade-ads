#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função para o cálculo do volume e área de uma esfera */

void calcularVolumeArea(float raio, float *volume, float *area) {
	*volume = 4 * 3.1415 * raio * raio * raio / 3;
	*area = 4 * 3.1415 * raio * raio;
}

int main(int argc, char *argv[]) {
	float volume = 0;
	float area = 0;
	float raio = 10;
	calcularVolumeArea(raio, &volume, &area);
	printf("Volume: %f \nArea: %f", volume, area);
	return 0;
}