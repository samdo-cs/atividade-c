#include <stdio.h>

// Escreva um programa que receba um numero inteiro e entao determine e imprima 
// se ele e par ou ımpar. Obs.: Nao utilizar estrutura de decisao if.

int main ()
{
    int x;

    puts("insira um valor: ");
    scanf("%d", &x);

    (x%2) ? puts("impar") : puts("par"); 

    return 0;
}