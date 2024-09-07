#include <stdio.h>

int main ()
{
    int x[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) 
        {
            printf("%d ", x[i][j]);
        }
        puts("");
    }

    // usuário inserindo as matrizes:
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++) 
    //     {
    //         scanf("%d", &x[i][j]);
    //     }
    // }

    return 0;
}