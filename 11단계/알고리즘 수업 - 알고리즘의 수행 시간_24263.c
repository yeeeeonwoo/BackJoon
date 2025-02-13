#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n); //시간복잡도는 n
    printf("1"); // O(N)이므로 1
}
