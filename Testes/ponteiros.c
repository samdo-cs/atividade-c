#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;
    int *px = NULL;

    puts("digite o valor de x:");
    scanf("%d", &x);

    px = &x;

    printf("[%p] %d", px, x);

    return 0;
}