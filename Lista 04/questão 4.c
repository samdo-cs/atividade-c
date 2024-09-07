#include <stdio.h>
#include <stdlib.h>

#define TAM 3

// Escreva um programa que leia um vetor do usuario e imprima seus valores e seus enderecos. 
// Teste o vetor com tipos de dados diferentes, analise os enderecos.
// O que voce observou?

int main ()
{
    int type_int[TAM];
    int *ptype_int = NULL;
    
    ptype_int = type_int;

    for(int k=0; k<TAM; k++)
    {
        printf("insira o valor de int[%d]\n", k);
        scanf("%d", (ptype_int+k));
    }

    puts("\nvetores:");
    for(int k=0; k<TAM; k++)
    {
        printf("int[%d] = [%p] %d\n", k, (ptype_int+k), *(ptype_int+k));
    }

    // type_int consome 4 bytes

    float type_float[TAM];
    float *ptype_float = NULL;
    
    ptype_float = type_float;

    printf("\n");
    for(int k=0; k<TAM; k++)
    {
        printf("insira o valor de float[%d]\n", k);
        scanf("%f", (ptype_float+k));
    }

    puts("\nvetores:");
    for(int k=0; k<TAM; k++)
    {
        printf("float[%d] = [%p] %.1f\n", k, (ptype_float+k), *(ptype_float+k));
    }

    // type_float consome 4 bytes

    char type_char[TAM];
    char *ptype_char = NULL;
    
    ptype_char = type_char;

    printf("\n");
    for(int k=0; k<TAM; k++)
    {
        printf("insira o valor de char[%d]\n", k);
        scanf(" %c", (ptype_char+k));
    }

    puts("\nvetores:");
    for(int k=0; k<TAM; k++)
    {
        printf("char[%d] = [%p] %c\n", k, (ptype_char+k), *(ptype_char+k));
    }

    // type_char consome 1 byte

    return 0;
}