#include <stdio.h>

// Extrapole o valor limite de variaveis do tipo inteiro.
// Imprima o resultado e veja o que acontece.

int main ()
{
    int x;  // int limite de 32 bits

    x = 2147483647;

    printf("valor de x: %d\n", x);

    x = x + 1;

    printf("valor de x: %d", x);

    return 0;
}