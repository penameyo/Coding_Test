#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;

    char ch_A[5];
    char ch_B[5];
    char sum[10];

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    printf("%d\n", A + B - C);

    sprintf(ch_A, "%d", A);
    sprintf(ch_B, "%d", B);

    strcpy(sum, ch_A);
    strcat(sum, ch_B);

    printf("%d\n", atoi(sum) - C);


}