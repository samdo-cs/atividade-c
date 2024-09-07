#include <stdio.h>

// Diga a ordem de calculo dos operadores em cada uma das instrucoes em C a 
// seguir e mostre o valor de x depois que cada instrucao for executada.

// • x = 7 + 3*6/2-l 
// • x = 2%2 + 2*2-2/2; 
// • x = (3 * 9 * (3 + (9*3/ (3) ) ) ); 

int main ()
{
    int x;

    x = 7+3*6/2-1;    // esquerda > direita

    printf("valor de x: %d \n", x);

    x = 2%2+2*2-2/2;    //esquerda > direita

    printf("valor de x: %d \n", x);

    x = (3*9*(3+(9*3/(3))));    // parênteses têm prioridade

    printf("valor de x: %d", x);

    return 0;
}