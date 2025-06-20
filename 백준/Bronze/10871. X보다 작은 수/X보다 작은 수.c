#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,X;
    int A[10000];
    
    scanf("%d %d\n", &N, &X);
    
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < X)
        {
            printf("%d ",A[i]);
        }
        
    }

    return 0;
    
}