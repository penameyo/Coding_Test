#include <iostream>

// 팩토리얼을 계산하는 함수
int factorial(int n) {
    // 0! 또는 1!은 1을 반환
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int result = 1;
    // 2부터 n까지의 수를 모두 곱함
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main()
 {
    int N, K;

    scanf("%d %d", &N, &K);

    int result = factorial(N) / (factorial(K) * factorial(N - K));

    printf("%d\n", result);

    return 0;
}