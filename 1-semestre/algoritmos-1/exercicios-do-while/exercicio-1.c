#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, contador;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        for (contador = num2; contador <= num1; contador++) {
            printf("%d\n", contador);
        }
    } else {
        for (contador = num1; contador <= num2; contador++) {
            printf("%d\n", contador);
        }
    }

    return 0;
}
