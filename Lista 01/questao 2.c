# include <stdio.h>

// Faca um programa que leia um valor inteiro decimal X e escreva,
// na tela, este mesmo valor nas bases hexadecimal e octal. 
// Ex.: Entre com o valor: 10 
// Hexadecimal: A 
// Octal: 12 

int main ()
{
    int x;
    
    puts("insira um valor: ");
    scanf("%d", &x);

    printf("valor em hexadecimal: %x\n", x);
    printf("valor em octal: %o\n", x);

    return 0;
}