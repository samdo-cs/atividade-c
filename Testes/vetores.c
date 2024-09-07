#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main ()
{
    int num;
    int random[10];
    
    puts("insira um valor:");
    scanf("%d", &num);

    srand(time(NULL));

    for(int k=0; k<10; k++)
    {
        random[k] = rand() % MX;
        printf("[%d] = %d\n", k, random[k]);
    }

    for(int k = 0; k<10; k++)
    {
        if(num == random[k])
        printf("%d corresponde ao vetor [%d]\n", num, k);
    }

    return 0;
}