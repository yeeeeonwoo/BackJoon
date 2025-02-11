#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long int n; // 범위때문에 오버플로우
    scanf("%ld", &n);
    printf("%ld", n * 4);
}
