#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n != -1) {
		int num[100000] = { 0 }; // 약수들 저장할 배열
		int sum = 0;
		int k = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i; // 약수들의 합 저장
				num[k] = i; // 약수 판별하고 저장
				k++;
			}
		}
		if (n == sum) { //완전수일 때
			printf("%d = ", n);
			for (int i = 0; i < k - 1; i++) {
				printf("%d + ", num[i]);
			}
			printf("%d\n", num[k - 1]);

		}
		else { // 완전수가 아닐 때
			printf("%d is NOT perfect.\n", n);
		}
		scanf("%d", &n);
	}
}
