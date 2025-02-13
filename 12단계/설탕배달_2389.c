#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, k = 0, cnt = 0;
	scanf("%d", &n);
	int min = n + 1; // min을 너무 크게 잡으니까 오버플로우 발생
	if (n == 3) {
		printf("1");
		return 0;
	}
	if (n == 4) {
		printf("-1");
		return 0;
	}
	for (int i = 0; i <= n / 3; i++) {
		for (int j = 0; j <= n / 5; j++) {
			if (3 * i + 5 * j == n) {
				int count = i + j;
				if (count < min) {
					min = count;
				}
			}
		}
	}
	if (min == n+1) { //min이 그대로라면 만들 수 없는 경우니까 -1 출력
		printf("-1");
	}
	else { 
		printf("%d", min); 
	}
	return 0;
}
