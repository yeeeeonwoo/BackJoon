#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int num) {
	if (num < 2) return 0;
	if (num == 2) return 1;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}
int main() {
	int m, n, number, min = 10001, sum = 0;
	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = m; i <= n; i++) {
		if (is_prime(i) == 1) {
			if (i < min) {
				min = i;
			}
			sum += i;
		}
	}
	if (sum == 0) printf("-1");
	else {
		printf("%d\n%d", sum, min);
	}
}
