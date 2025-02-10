#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 10진법에서 n진법으로 바꿔주는 함수
char num_change(int n) {
	if (n >= 0 && n <= 9) {
		return n + '0'; // 0~9도 신경쓰기
	}
	return (n - 10) + 'A';
}
int main(void) {
	int n, b, i = 0;
	char remain[10000];
	scanf("%d %d", &n, &b);
	//do while 문 사용
	do {
		remain[i++] = num_change(n % b);
		n = n / b;
	} while (n > 0);

	for (int j = i-1; j >= 0; j--) {
		printf("%c", remain[j]);
	}
}
