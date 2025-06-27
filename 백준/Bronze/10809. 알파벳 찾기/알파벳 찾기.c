#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int result[26];
    char S[101];


    scanf("%s", S);

    // 결과를 모두 -1로 초기화
    for (int i = 0; i < 26; i++)
    {
        result[i] = -1;
    }

    for (int j = 0; j < strlen(S); j++)
    {
        // Alphabet의 번호 배정
        int index = S[j] - 'a';

        // -1이라면? (처음에 나왔을 때만)
        if (result[index] == -1)
        {
            result[index] = j;
        }
            
    }

    // 문자열 출력하기
    for (int k = 0; k < 26; k++)
    {
        printf("%d ", result[k]);
    }

    return 0;
    
    
}