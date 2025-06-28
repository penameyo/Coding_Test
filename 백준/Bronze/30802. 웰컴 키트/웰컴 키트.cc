#include <iostream>
#include <string.h>

using namespace std;

// 티셔츠 사이즈는 6개 s m l xl xxl xxxl
// 같은 사이즈 T장 묶음으로만 주문
// 펜은 한 종류 P자루씩 묶음 / 한자루씩 묶음
// N명의 참가자 중 티셔츠는 s m l xl xxl xxxl명이다
// 티셔츠는 남아도 되는데 부족하면 안됨
// 펜은 남거나 부족하면 안되고 정확이 딱맞
int main()
{
    // 참가자 수 입력받기
    long long N;
    scanf("%lld", &N);

    // 티셔츠 사이즈별 신청자 수
    long long size[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%lld ", &size[i]);
    }

    // T장 묶음
    long long T = 0;

    // P 자루 묶음
    long long P = 0;
    
    // T와 P 받아오기
    scanf("%lld %lld", &T, &P);

    // T 몇 개 필요한지?
    long long shirts = 0;

    for (int i = 0; i < 6; i++)
    { 
        shirts += (size[i] / T);

        if (size[i] % T != 0)
        {
            shirts ++;
        }
        
    }

    // 셔츠 총 몇 묶음?
    printf("%lld\n", shirts);
    
    // 펜 몇개 필요한지?
    printf("%lld %lld", N / P, N % P);

    return 0;

}