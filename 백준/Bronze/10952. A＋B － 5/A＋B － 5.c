#include <stdio.h>

int main()
{
    int A, B;

    // 조건 반복문 사용
    while (1)
    {
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0)
        {
            break;
        }

        printf("%d\n", A + B);
        
    }
    
}