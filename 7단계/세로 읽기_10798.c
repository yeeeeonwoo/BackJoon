#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char num[5][16] = { 0 };
    for (int i = 0; i < 5; i++) {
        scanf("%c", num[i]);
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (num[j][i] != NULL) {
                printf("%c", num[j][i]);
            }
        }
    }
}
