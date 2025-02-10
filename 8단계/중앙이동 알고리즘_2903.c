#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	scanf("%d", &n);
	//정수 연산이라 pow쓰면 틀릴수도
    // pow(2, n) 대신 (1LL << n) 사용
    long long result = (1LL << n) + 1;
    result = result * result;  // 제곱 계산

    printf("%lld\n", result);  // long long 타입으로 출력
    return 0;
}
