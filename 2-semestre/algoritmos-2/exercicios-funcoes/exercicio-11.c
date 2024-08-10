#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida
em graus Celsius. A fórmula de conversão é: C = (Fahrenheit – 32) * (5.0/9.0), sendo F a temperatura em
Fahrenheit e C a temperatura em Celsius. */

float converteFahrenheitParaCelsius(float fahrenheit) {
	float celsius = (fahrenheit - 32) * (5.0/9.0);
	return celsius;
}

int main(int argc, char *argv[]) {
	float celsius = converteFahrenheitParaCelsius(60);
	printf("Celsius: %.2f", celsius);
	return 0;
}