#include <stdio.h>

// Declare duas variaveis (int a = 3, b = 2) e troque os
// valores armazenados nelas, de forma que a variavel a
// contenho o valor da variavel b e vice-versa (Obs: use
// a operacao de atribuicao, logicamente)


int main ()
{
    int a = 3;
    int b = 2;
    int c;      // variável temporária de armazenamento

    printf("valor de a: %d \n", a);
    printf("valor de b: %d \n", b);

    c = a;
    a = b;
    b = c;

    printf("valor de a: %d \n", a);
    printf("valor de b: %d \n", b);

    return 0;
}