#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 이렇게 풀어야 색종이가 3개 이상 겹칠 때에도 정확히 중복을 계산할 수 있음
    int N, a, b;
    int paper[101][101] = { 0 }; // 도화지 크기를 100x100으로 가정

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        // 10x10 영역을 1로 채우기
        for (int x = a; x < a + 10; x++) {
            for (int y = b; y < b + 10; y++) {
                paper[x][y] = 1;
            }
        }
    }

    int area = 0;
    // 색종이가 덮인 부분을 계산
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            if (paper[x][y] == 1) {
                area++;
            }
        }
    }

    printf("%d", area);
    return 0;
}

