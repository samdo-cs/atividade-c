#include <stdio.h>

int soma (int *, int *);

int main ()
{
    int x, y, res;

    puts("insira um valor x:");
    scanf("%d", &x);
    puts("insira um valor y:");
    scanf("%d", &y);

    res = soma(&x,&y);

    printf("resultado: %d", res);

    return 0;
}

int soma (int *a, int *b)
{
    int res = (*a)+(*b);
    return res;
}