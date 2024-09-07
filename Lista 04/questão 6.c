#include <stdio.h>
#include <stdlib.h>

#define TAM 100

// Escreva um programa que copie uma string para outra usando ponteiros.

void copiar_string (const char *original, char *copia);

int main ()
{
    char str1[TAM], str2[TAM];
    char *pstr1 = NULL;
    char *pstr2 = NULL;

    puts("insira a string:");
    fgets(str1, TAM, stdin);

    pstr1 = str1;
    pstr2 = str2;

    copiar_string(pstr1, pstr2);

    printf("string 1: \n%s", str1);
    printf("string 2: \n%s", str2);

    return 0;
}

void copiar_string (const char *original, char *copia)
{
    for (int k=0; k<TAM; k++)
    {
        *(copia+k) = *(original+k);
        if (*(copia+k) == '\0') break;
    }
}