#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que adicione dois numeros usando ponteiros. Alem do valor da soma, imprima
// tambem o endereco de memoria onde o valor resultante dessa soma esta armazenado.

int main ()
{
    int x, y, soma;
    int *px = NULL, *py = NULL, *psoma = NULL;

    px = &x;
    py = &y;
    psoma = &soma;

    puts("insira um valor x:");
    scanf("%d", px);

    puts("insira um valor y:");
    scanf("%d", py);

    *psoma = *px + *py;

    printf("soma: %d + %d = [%p] %d", *px, *py, psoma, *psoma);

    return 0;
}