#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int qtd;
    int *vetor = NULL;

    puts("insira a quantidade de vetores:");
    scanf("%d", &qtd);

    vetor = malloc(qtd * sizeof(int));

    if (!vetor)
    {
        puts("memoria indisponivel!");
        exit(1);
    }

    puts("preencha os vetores:");
    for(int k=0; k<qtd; k++)
    {
        printf("vetor[%d] = ", k);
        scanf("%d", vetor+k);
    }
    printf("\n");

    for(int k=0; k<qtd; k++)
    {
        printf("vetor[%d] = %d\n", k, *(vetor+k));
    }

    free(vetor);

    return 0;
}