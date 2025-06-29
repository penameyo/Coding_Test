#include <iostream>

using namespace std;

int main()
{
    // 입력부
    int N = 0;
    int M = 0;
    scanf("%d %d", &N, &M);


    // N개의 카드 수 만큼 적혀있는 수를 입력받기

    // 적혀있는 번호 받기
    int num[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    // 출력부

    int total_sum = 0;

    // N개의 카드 수 만큼 반복하면서, 적혀있는 번호가 M과 가장 가까운 카드 3장의 합을 출력
    // 3개의 합을 찾기 위해 브루트포스(Brute-force) 사용
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = num[i] + num[j] + num[k];

                if (sum <= M && sum > total_sum)
                {
                    total_sum = sum;
                }
                
            }
            
        }
        
        
    }
    
    printf("%d\n", total_sum);

    return 0;
    
}