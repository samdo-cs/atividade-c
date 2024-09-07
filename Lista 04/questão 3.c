#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que solicite iterativamente um numero do usuario e imprima sempre o menor
// valor fornecido. Crie um criterio para finalizacao do programa. Utilize ponteiros.

int main ()
{
    int num, menor;
    int *pnum = NULL, *pmenor = NULL;

    pnum = &num;
    pmenor = &menor;

    puts("insira os valores:\n(digite 0 para encerrar)");
    scanf("%d", pnum);

    *pmenor = *pnum;

    do {
        printf("menor valor: %d\n", *pmenor);
        scanf("%d", pnum);
        
        if (*pmenor > *pnum)
        {
            *pmenor = *pnum;
        }
        
    } while (*pnum != 0);

    puts("programa encerrado!");

    return 0;
}