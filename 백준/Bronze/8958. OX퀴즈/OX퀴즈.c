#include <stdio.h>
#include <string.h>

int main()
{

    // 테스트 케이스
    int test_case = 0;
    // OX 몇개?
    char quiz[82];

    // 테스트 케이스 입력받기
    scanf("%d", &test_case);

    // 퀴즈 입력 반복문
    for (int i = 0; i < test_case; i++)
    {
        // 연속 몇번?
        int load = 0;
        // 최종 점수
        int score = 0;

        scanf("%s", quiz);

        // O 만났을 때
        for (int j = 0; j < strlen(quiz); j++)
        {
            if (quiz[j] == 'O')
            {
                load++;
                score += load;
            }
            // X 만났을 때
            else
                load = 0;
            
        }
        
        // 최종 점수 출력
        printf("%d\n", score);

    }

    return 0;
    
}