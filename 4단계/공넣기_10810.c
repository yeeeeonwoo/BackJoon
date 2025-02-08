#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);
	int basket[100];
	// 바구니 초기화
	for (int o = 1; o <= n; o++) {
		basket[o] = 0;
	}

	for (int o = 1; o <= m; o++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int p = i; p <= j; p++) {
			basket[p] = k;
		}
	}

	for (int o = 1; o <= n; o++) {
		printf("%d ", basket[o]);
	}
	
}
