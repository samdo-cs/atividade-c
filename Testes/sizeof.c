#include <stdio.h>

// Crie uma vari ́avel para cada um dos 5 tipos basicos e use
// sizeof(...) em conjunto com printf(...) para mostrar o
// tamanho dos tipos basicos em C na arquitetura do seu
// computador.

int main ()
{   
    printf("tamanho de char: %u bytes\n", sizeof(char));
    printf("tamanho de int: %u bytes \n", sizeof(int));
    printf("tamanho de float: %u bytes \n", sizeof(float));
    printf("tamanho de double: %u bytes \n", sizeof(double));
    printf("tamanho de void: %u bytes \n", sizeof(void));

    return 0;
}