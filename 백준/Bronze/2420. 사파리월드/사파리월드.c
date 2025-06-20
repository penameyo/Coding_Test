#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N,M;

    scanf("%ld %ld", &N, &M);
    
    printf("%ld", labs(N - M));

    return 0;
}