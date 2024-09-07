#include <stdio.h>

// Sabendo que os argumentos da funcao “printf” podem ser 
// expressoes (a+b, a/b, a*b...), e nao somente argumentos, 
// faca um programa capaz de ler um valor inteiro X 
// e escrever seu triplo, seu quadrado, e seu meio. 

int main ()
{
    int x;

    puts("insira um valor inteiro x: ");
    scanf("%d", &x);

    printf("seu triplo: %d\n", x*3);
    printf("seu quadrado: %d\n", x*x);
    printf("seu meio: %.1f", (float)x/2);

    return 0;
}