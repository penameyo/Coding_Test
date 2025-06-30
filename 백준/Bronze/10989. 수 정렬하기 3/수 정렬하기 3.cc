#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int counts[10001] = {0};

    // N개의 숫자를 입력받으면서 각 숫자가 몇 번 나왔는지!
    for (int i = 0; i < N; ++i)
    {
        int num;
        scanf("%d", &num);
        counts[num]++; // 입력받은 숫자에 해당하는 칸의 값을 1 증가
    }

    // 배열을 처음부터 순회하며 정렬된 결과를 출력
    for (int i = 1; i <= 10000; ++i)
    {
        // counts[i]에 저장된 횟수만큼 숫자 i를 출력
        for (int j = 0; j < counts[i]; ++j)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}