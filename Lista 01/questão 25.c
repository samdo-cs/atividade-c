#include <stdio.h>

// Escreva um programa que leia um tempo em segundos e imprima 
// quantas horas, minutos e segundos ha neste tempo.

int main ()
{
    int tempo, horas, minutos, segundos;
    puts("insira o tempo em segundos:");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo - (horas*3600)) / 60;
    segundos = tempo - (horas*3600) - (minutos*60);
    
    printf("horas: %d\n", horas);
    printf("minutos: %d\n", minutos);
    printf("segundos: %d\n", segundos);

    return 0;
}