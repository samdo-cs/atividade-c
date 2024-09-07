#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10
#define TAM 5

int main ()
{
    int x[TAM];
    int *px = NULL;

    px = x;

    srand(time(NULL));
    for(int k = 0; k<TAM; k++)
    {
        x[k] = rand() % MX;
    }

    for(int k = 0; k<TAM; k++)
    {
        printf("[%p] %d\n", (px+k), x[k]);
    }

    return 0;
}