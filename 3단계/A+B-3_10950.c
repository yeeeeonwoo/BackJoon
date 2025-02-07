#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b); // 입력 스트림과 출력 스트림은 별개라서 그 합을 바로 출력해도 상관없음
	}
}
