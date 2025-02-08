#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int N, sum = 0;
	char num[100];
	scanf("%d", &N);
	scanf("%s", num);
	for (int i = 0; i < N; i++) {
		sum += num[i] - '0';// 지금 문자열에 저장되어있으므로 아스키값으로 되어있음 숫자로 바꿔야하니까 '0' 빼기
	}
	printf("%d", sum);
}
