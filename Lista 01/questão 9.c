#include <stdio.h>

// Escreva um programa que leia um valor numerico inteiro e 
// apresente como resultado os seus valores sucessor e antecessor. 

int main ()
{
    int x, ant, suc;

    puts("insira um valor:");
    scanf("%d", &x);

    suc = x+1;
    ant = x-1;

    printf("seu sucessor: %d\n", suc);
    printf("seu antecessor: %d", ant);

    return 0;
}