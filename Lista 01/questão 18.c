#include <stdio.h>

// Escreva um programa que leia o raio de um cırculo e imprima seu diametro, 
// o valor de sua circunferencia e sua area. Use o valor de 3,14159 para “pi”. 
// Faca cada um destes calculos dentro da instrucoes (ou instrucoes) printf
// e use o especificador de conversao %f.

int main ()
{
    float raio;
    float pi = 3.14159;

    puts("insira o valor do raio: ");
    scanf("%f", &raio);

    printf("valor do diametro: %f \n", raio*2);
    printf("valor da circunferencia: %f \n", 2*pi*raio);
    printf("valor da area: %f \n", pi*(raio*raio));

    return 0;
}