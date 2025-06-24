#include <stdio.h>


int hyojin(int a, int b)
{
    int result;
    scanf("%d%d", &a, &b);
    
    result = ((a + b) * (a - b));

    printf("%d", result);
}

int main()
{
    int A = 0;
    int B = 0;

    hyojin(A, B);

    return 0;

}