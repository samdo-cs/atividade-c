#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que troque o valor de dois numeros utilizando ponteiros.

int main ()
{
    int x, y ,aux;
    int *px = NULL, *py = NULL, *paux = NULL;

    px = &x;
    py = &y;
    paux = &aux;

    puts("insira um valor x:");
    scanf("%d", px);

    puts("insira um valor y:");
    scanf("%d", py);

    *paux = *px;
    *px = *py;
    *py = *paux;

    printf("x = %d, y = %d", *px, *py);

    return 0;
}