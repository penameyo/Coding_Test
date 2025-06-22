#include <stdio.h>
#include <string.h>

int main()
{
    // 등급의 배열 포인터
    char* G[13] = {
        "A+", "A0", "A-", 
        "B+", "B0", "B-", 
        "C+", "C0", "C-", 
        "D+", "D0", "D-", 
        "F"
    };

    // 점수의 배열 포인터
    char* score[13] = {
        "4.3", "4.0", "3.7", 
        "3.3", "3.0", "2.7", 
        "2.3", "2.0", "1.7", 
        "1.3", "1.0", "0.7", 
        "0.0"
    };

    // 입력 배열
    char input[3];

    scanf("%s", input);

    for (int i = 0; i < 13; i++)
    {
        // 문자열 비교 조건식 추가
        if (strcmp(input, G[i]) == 0)
        {
            printf("%s\n", score[i]);
            
            // 맞다면 loop 탈출
            break;
        }
    }
    return 0;
}