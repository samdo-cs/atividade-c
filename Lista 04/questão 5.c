#include <stdio.h>
#include <stdlib.h>

#define TAM 100

// Escreva um programa que encontre o tamanho de uma string fornecida.
// Utilize ponteiros.

int main ()
{
    char str[TAM];
    char *pstr = NULL;
    int tamanho = 0;

    puts("insira a string:");
    fgets(str, TAM, stdin);

    pstr = str;

    while (*pstr != '\0')
    {
        tamanho++;
        pstr++;
    }

    // for(int k=0; k<TAM; k++)
    // {
    //     if (*(pstr+k) =='\0') break;
    //     tamanho++;
    // }

    printf("tamanho da string: %d", tamanho);

    return 0;
}