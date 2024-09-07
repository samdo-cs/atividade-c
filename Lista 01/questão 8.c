#include <stdio.h>

// Escreva um programa que receba um valor inteiro e apresente 
// o resultado do valor lido elevado ao quadrado. 

int main ()
{
    int x;

    puts("insira um valor inteiro: ");
    scanf("%d", &x);

    x = x*x;

    printf("valor elevado ao quadrado: %d", x);

    return 0;
}