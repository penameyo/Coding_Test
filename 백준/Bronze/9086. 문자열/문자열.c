#include <stdio.h>
#include <string.h>


int main()
{
    int T;
    char input[1001];

    // 몇 줄을 입력 받을지?
    scanf("%d\n", &T);
    
    // T개의 줄을 입력받기
    for (int i = 0; i < T; i++)
    {
        scanf("%s\n", input);
        
        // 방금 입력받은 문자열의 길이는?
        int len = strlen(input);
        
        // 각 줄의 첫번째 문자와 마지막 문자 출력 후 줄바꿈하기
        printf("%c%c\n",input[0], input[len - 1]);

    }
    

    return 0;
}