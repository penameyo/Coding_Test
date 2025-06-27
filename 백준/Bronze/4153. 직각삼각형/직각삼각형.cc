#include <iostream>
#include <math.h>

int main()
{
    double A = 0;
    double B = 0;
    double C = 0;
    

    while(true)
    {
        // 세 변의 길이 입력받기
        scanf("%lf %lf %lf", &A, &B, &C);

        // 세 변의 길이가 모두 000이다? 반복문 탈출
        if (A == 0 && B == 0 && C == 0)
        {
            break;
        }

        // pow : 제곱연산자. 즉, A^2 + B^2 = C^2 의 피타고라스 연산 수행
        if (pow(A, 2) + pow(B, 2) == pow(C, 2) ||
            pow(B, 2) + pow(C, 2) == pow(A, 2) ||
            pow(A, 2) + pow(C, 2) == pow(B, 2)
           )
            // 조건을 충족한다면 직각삼각형이므로 right
            printf("right\n");

        // 조건을 충족하지 못할 경우 wrong 출력
        else
            printf("wrong\n");    

    }

    return 0;
        
}