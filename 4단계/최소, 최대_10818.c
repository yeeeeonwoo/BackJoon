#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, max = -1000000, min = 1000000;
	scanf("%d", &n);
	int num[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++) {
		if (num[i] < min) {
			min = num[i];
		}
		if (num[i] > max) {
			max = num[i];
		}
	}
	printf("%d %d", min, max);
}
