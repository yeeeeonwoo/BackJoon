#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, input, number[10000000], count[10001];
	scanf("%d", &n);
	//계수정렬
	for (int i = 0; i < 10001; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < n; i++) { // 입력받고
		scanf("%d", &input);
		count[input]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%d\n", i);
		}
	}
}
