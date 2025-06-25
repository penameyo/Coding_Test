#include <stdio.h>

int main(void) {
    int notes[8];
    int i;

    // 8개의 음을 공백으로 구분하여 입력받습니다.
    for (i = 0; i < 8; i++) {
        scanf("%d", &notes[i]);
    }

    // 판별을 위한 플래그 변수 (1: true, 0: false)
    int is_ascending = 1;
    int is_descending = 1;

    // 배열을 순회하며 ascending 또는 descending 패턴에 맞는지 확인합니다.
    for (i = 0; i < 8; i++) {
        // ascending 패턴: 배열의 i번째 요소는 i+1 이어야 합니다. (notes[0] == 1, notes[1] == 2, ...)
        if (notes[i] != i + 1) {
            is_ascending = 0; // 패턴이 깨졌으므로 false로 변경
        }

        // descending 패턴: 배열의 i번째 요소는 8-i 이어야 합니다. (notes[0] == 8, notes[1] == 7, ...)
        if (notes[i] != 8 - i) {
            is_descending = 0; // 패턴이 깨졌으므로 false로 변경
        }
    }

    if (is_ascending) {
        printf("ascending\n");
    } else if (is_descending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}

