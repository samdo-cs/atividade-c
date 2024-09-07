#include <stdio.h>

// Escreva um programa que leia uma temperatura em graus Celsius
// e apresente convertida em graus Fahrenheit. 
// A formula de versao e F = (9 * C + 160) / 5 
// sendo F a temperatura Fahrenheit e C a temperatura em Celsius. 

int main ()
{
    float celsius, fahrenheit;

    puts("insira a temperatura em Celcius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("temperatura convertida em Fahrenheit: %.2f F", fahrenheit);

    return 0;
}