#include <stdio.h>
#include <stdlib.h>

// Dados os vetores x e y, ambos de tamanho n definido pelo usuario. Considere k como:
// Ki = Xi + Yi
// Organize em v os endereços de x e y que resultam no primeiro k de valor PAR

int main ()
{
    int n;
    int *x = NULL, *y = NULL, *k = NULL, **v = NULL;

    puts("insira a quantidade de vetores:");
    scanf("%d", &n);

    x = malloc(n * sizeof(int));
    y = malloc(n * sizeof(int));
    k = malloc(n * sizeof(int));
    v = malloc(2 * sizeof(int*));

    for(int i=0; i<n; i++)
    {
        printf("insira o valor de x[%d]:\n", i);
        scanf("%d", (x+i));
        printf("insira o valor de y[%d]:\n", i);
        scanf("%d", (y+i));
        *(k+i) = *(x+i) + *(y+i);
        
        if(!(*(k+i) % 2))
        {
            v[0] = x+i;
            v[1] = y+i;
            printf("v[0] = [%p]\n", v[0]);
            printf("v[1] = [%p]\n", v[1]);
            break;
        }
    }

    free(x); free(y); free(k); free(v);

    return 0;
}