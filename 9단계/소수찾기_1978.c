#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int num) {
	if (num < 2) {
		return 0;
	}
	if (num == 2) {
		return 1;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}
int main() {
	int n, number, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		if(is_prime(number)==1) cnt++;
	}
	printf("%d", cnt);
}
