#include <stdio.h>

// Escrever um programa que receba um valor inteiro do usuario e apresente
// o seu valor absoluto (modulo). Nao utilize estrutura de decisao if.

int main ()
{
    int x, modulo;

    puts("insira um valor x: ");
    scanf("%d", &x);

    modulo = (x>0) ? x : -x;

    printf("valor absoluto (modulo): %d", modulo);

    return 0;
}