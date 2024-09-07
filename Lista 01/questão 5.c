#include <stdio.h>

// Escreva um programa que pegue o valor de uma conta de restaurante
// e imprima o valor total a ser pago, considerando que 
// o restaurante cobra 10% de taxa para o garcom. 

int main ()
{
    float valorconta, valortotal;
    
    puts("insira o valor da conta: ");
    scanf("%f", &valorconta);

    valortotal = valorconta*(110.0/100.0);

    printf("valor total: %.2f", valortotal);

    return 0;
}