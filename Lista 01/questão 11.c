#include <stdio.h>

// Elabore um programa que apresente o valor da conversao em dolar de 
// um valor lido em real. O programa deve solicitar o valor da cotacao 
// do dolar e tambem a quantidade de reais que o usuario deseja converter. 

int main ()
{
    float real, dolar, cotacao;
    
    puts("insira o valor da cotacao do dolar: ");
    scanf("%f", &cotacao);
    
    puts("insira o valor em real: ");
    scanf("%f", &real);

    dolar = real/cotacao;                                                              

    printf("valor do dolar: %.2f$", dolar);

    return 0;
}