#include <stdio.h>

// Escreva um programa que calcule o produto entre
// um valor dado x por 2 elevado a um valor dado n.
// Obs.: Utilize operadores binários.

int main()
{
    int x;
    int n;
    int potencia = 2;

    puts("insira um valor x");
    scanf("%d", &x);
    puts("insira um valor n");
    scanf("%d", &n);

    for(int k=1; k<n; k++)
    {
        potencia = potencia*2;
    }

    printf("valor final: %d", x*potencia);

    return 0;
}