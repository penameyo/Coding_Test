#include <iostream>

using namespace std;

int main()
{
    // 방 번호 N
    long long N;
    
    scanf("%lld", &N);

    // N까지 가는 최단거리
    long long result = 1;

    // 최단거리 범위의 방 번호 구분
    long long number = 1;

    if (N == 1)
    {
        result = 1;
        printf("%lld", result);
        return 0;
    }
    
    else
    while (number < N)
    {
        number += 6LL * result;

        result++;
    }
    
    printf("%lld\n", result);
    
}