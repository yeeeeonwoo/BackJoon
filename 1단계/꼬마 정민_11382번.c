#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long A, B, C; // int로는 1조까지 입력받을 수 없어서 long long으로
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld", A + B + C);
}
