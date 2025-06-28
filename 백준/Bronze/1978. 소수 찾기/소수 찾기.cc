#include <iostream>

using namespace std;

// N개의 수를 입력 받고 그 중 소수의 개수를 출력
int main()
{
    // N의 개수 선언
    int N = 0;

    scanf("%d", &N);
        
    int result = 0;

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        // 0 또는 1이다? 소수가 아니기에 거름
        if (num <= 1)
            continue;
        
        bool isTrue = true;
        // 2부터 세기
        for (int j = 2; j < num; j++)
        {
            // 2부터 나눠보기 나눠 떨어지면 소수아님
            if (num % j == 0)
                isTrue = false;
        }
        if(isTrue)
        {
            result++;
        }
        
    }

    printf("%d", result);

    return 0;
}