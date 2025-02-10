#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 10진수로 바꿔주는 함수
int num_change(char alpha) {
	if (alpha >= '0' && alpha <= '9') {
		return alpha - '0';
	}
	int num[26];
	for (int i = 0; i < 26; i++) {
		num[i] = i + 10;
	}
	int diff = alpha - 'A';
	return num[diff];
}
int main(void) {
	int n, len, sum = 0;
	char number[10000];
	int changed[10000];
	scanf("%s %d", number, &n);
	len = strlen(number);
	for (int i = len - 1; i >= 0; i--) {
		changed[i] = num_change(number[i]); // 10진수로 바꾸고
		for (int j = i+1; j < len; j++) { // 자릿수맞게 n곱해주기
			changed[i] *= n;
		}
		sum += changed[i];
	}

	printf("%d", sum);
}
