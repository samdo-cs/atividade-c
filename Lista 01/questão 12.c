#include <stdio.h>

// Escreva um programa que peca ao usuario para digitar dois numeros, 
// obtenha-os do usuario e imprima a soma, o produto, a diferenca, 
// o quociente e o resto da divisao dos dois numeros. 

int main ()
{
    int a, b;

    puts("insira um valor a:");
    scanf("%d", &a);

    puts("insira um valor b:");
    scanf("%d", &b);

    printf("valor da soma: %d \n", a+b);
    printf("valor da diferenca: %d \n", a-b);
    printf("valor do produto: %d \n", a*b);
    printf("valor do quociente: %.2f \n", (float)a/b);
    printf("valor do resto: %d", a%b);

    return 0;
}