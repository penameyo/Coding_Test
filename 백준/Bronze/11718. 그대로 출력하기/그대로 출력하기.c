#include <stdio.h>


int main()
{
    // NULL 포함 각 줄은 최대 100자!
    char input[101];

    // fgets = EOF에 도달하거나 오류가 발생할 때까지
    // stdin에서 한줄씩 읽어오기
    // 성공적으로 읽으면 NULL이 아닌 포인터를 반환하는 함수 구조
    
    while (fgets(input, sizeof(input), stdin) != NULL)
    {
        printf("%s", input);
    }
    
    return 0;
    
}