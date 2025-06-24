#include <stdio.h>


int hyojin(long long a, long long b)
{
    long long result;
    scanf("%lld%lld", &a, &b);
    
    result = ((a + b) * (a - b));

    printf("%lld", result);
}

int main()
{
    long long A = 0;
    long long B = 0;

    hyojin(A, B);

    return 0;

}