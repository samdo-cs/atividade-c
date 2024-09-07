#include <stdio.h>

// Escreva um programa que receba a entrada de um numero de tres dıgitos, 
// separe o numero em seus dıgitos componentes e reconstrua um numero com os 
// componentes na ordem inversa. 
// Exemplo: para entrada de 123, a resposta do programa seria 321. 

int main ()
{
    int num, num_inv, uni, dez, cen;

    puts("insira um numero de 3 digitos: ");
    scanf("%d", &num);

    uni = num/100;
    dez = (num%100) / 10;
    cen = (num % 100) % 10;

    num_inv = (cen*100)+(dez*10)+(uni);

    printf("numero com os componentes na ordem inversa: \n" "%d", num_inv);

    return 0;
}