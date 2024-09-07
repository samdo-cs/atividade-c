#include <stdio.h>

// Escreva um programa que leia duas variaveis A e B e efetue
// a troca dos valores. O objetivo e que a variavel A passe a conter
// o valor de B e a variavel B passe a possuir o valor de A. 
// Apresente os valores apos a efetivacao do processamento da troca. 

int main ()
{
    int a;
    int b;
    int c;  // variável de armazenamento temporário

    puts("digite o valor de a:");
    scanf("%d", &a);
    puts("digite o valor de b:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("valor de a: %d \n", a);
    printf("valor de b: %d \n", b);

    return 0;
}