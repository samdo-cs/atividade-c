#include <stdio.h>

// Faca um programa capaz de ler um valor real
// e escreve-lo com apenas uma casa decimal.

int main ()
{
    float valor;

    puts("insira um valor real: ");
    scanf("%f", &valor);

    printf("valor real com apenas uma casa decimal: %.1f", valor);

    return 0;
}