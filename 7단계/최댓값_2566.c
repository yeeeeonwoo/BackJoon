#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int num[9][9];
    int max = 0, index1 = 0, index2 = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &num[i][j]);
            if (num[i][j] > max) {
                max = num[i][j];
                index1 = i;
                index2 = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", index1 + 1, index2 + 1);
}
