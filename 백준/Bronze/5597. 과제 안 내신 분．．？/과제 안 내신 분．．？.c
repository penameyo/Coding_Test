#include <stdio.h>

int main() {
    int arr[31] = {0}; // 1~30번, 0번은 사용 안 함
    int n;

    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        arr[n] = 1; // 제출한 학생 체크
    }

    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0)
            printf("%d\n", i); // 제출 안 한 학생 출력
    }
    return 0;
}