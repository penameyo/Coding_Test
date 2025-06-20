#include <stdio.h>

int main()
{
    int N, v, result = 0;
    int A[N];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &v);
    
    for (int i = 0; i < N; i++)
    {
        if (v == A[i])
            result++; 
    }

    printf("%d\n", result);
    
    

}