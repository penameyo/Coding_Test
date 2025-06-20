#include <stdio.h>

int main()
{
    int N, i;
    int result = 1;

    scanf("%d",&N);

    if (N <= 1)
    {
        printf("1");
    }

    else
    {
    for (i = 1; i <= N; i++)
        {
            result = (i * result);
        }

        printf("%d", result);
    }

}