#include <stdio.h>

// Escreva um programa que calcule e apresente o valor
// do volume de um caixa retangular utilizando a formula 
// VOLUME = COMPRIMENTO * LARGURA * ALTURA.

int main ()
{
    int comprimento, largura, altura, volume;
    
    puts("insira o comprimento: ");
    scanf("%d", &comprimento);
    
    puts("insira a largura: ");
    scanf("%d", &largura);
    
    puts("insira a altura: ");
    scanf("%d", &altura);

    volume = comprimento * largura * altura;

    printf("volume da caixa: %d", volume);

    return 0;
}