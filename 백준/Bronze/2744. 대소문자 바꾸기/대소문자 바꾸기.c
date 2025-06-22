#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++)
    {
        // 대문자일 경우
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            printf("%c", arr[i] - 'A' + 'a');
        }

        // 소문자일 경우
        else
            printf("%c", arr[i] - 'a' + 'A');
    }

    return 0;
    
}