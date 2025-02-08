#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, x, cnt=0;
	int num[10000];
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (num[i] < x) {
			printf("%d ", num[i]);
		}
	}
}
