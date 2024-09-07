#include <stdio.h>

// Escreva um programa que leia dois inteiros e entao determine e imprima se 
// o primeiro e multiplo do segundo. Obs.: Nao utilizar estrutura de decisao if. 

int main ()
{
    int x, y;

    puts("insira um valor x: ");
    scanf("%d", &x);
    
    puts("insira um valor y: ");
    scanf("%d", &y);

    (x%y == 0) ? printf("%d e multiplo de %d", x, y) : printf("%d nao e multiplo de %d", x, y);
    
    return 0;
}