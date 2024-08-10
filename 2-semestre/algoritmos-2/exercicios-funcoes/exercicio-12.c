#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse
cilindro. */

float calcularVolume(float raio, float altura) {
	float volume = 3.1415 * (raio * raio) * altura;
	return volume;
}

int main(int argc, char *argv[]) {
	float raio = 10;
	float altura = 10;
	float volume = calcularVolume(raio, altura);
	printf("Volume = %.2f", volume);
	return 0;
}