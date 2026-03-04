#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] > 64 && s1[i] < 97)
            s1[i] = s1[i] + 32;
        else
            s1[i] = s1[i] - 32;
        
        printf("%c", s1[i]);
    }

    return 0;
}
