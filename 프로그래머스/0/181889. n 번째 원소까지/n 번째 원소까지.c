#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {

    int* answer = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        answer[i] = num_list[i];
    }
    return answer;
}

int main()
{
    int num_list1[] = {};
    size_t len1 = sizeof(num_list1) / sizeof(num_list1[0]);
    int n1 = 1;
    int* result1 = solution(num_list1, len1, n1);

    for (int i = 0; i < n1; i++) 
    {
        printf("%d", result1[i]);
    }
    free(result1);
}