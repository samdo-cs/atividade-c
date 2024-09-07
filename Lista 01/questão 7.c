#include <stdio.h>

// Faca um programa que leia uma quantidade de 
// horas, minutos e segundos e imprima o total de segundos. 

int main ()
{
    int horas, minutos, segundos, total;

    puts("insira a quantidade de horas:");
    scanf("%d", &horas);
    
    puts("insira a quantidade de minutos:");
    scanf("%d", &minutos);
    
    puts("insira a quantidade de segundos:");
    scanf("%d", &segundos);

    total = (horas*3600) + (minutos*60) + segundos;

    printf("total de segundos: %d", total);

    return 0;
}