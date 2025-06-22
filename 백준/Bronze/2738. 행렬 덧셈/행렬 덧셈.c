#include <stdio.h>

int main()
{
    int N = 0;
    int M = 0;

    scanf("%d %d", &N, &M);

    int A[N][M];
    int B[N][M];
    int result[N][M];

    // 행렬 A 입력받기
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
        
    }

    // 행렬 B 입력받기
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // 행렬 A와 행렬 B의 덧셈
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    // 행렬의 덧셈 결과 출력
   for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}