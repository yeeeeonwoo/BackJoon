#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++) {
		sum += i;
	}
	printf("%d", sum);
}
