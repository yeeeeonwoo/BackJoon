#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	// 무한반복문 쓰면 출력 초과가 뜸 -> EOF 활용
	while (scanf("%d %d", &a, &b) != EOF){
		printf("%d", a + b);
	}
}
