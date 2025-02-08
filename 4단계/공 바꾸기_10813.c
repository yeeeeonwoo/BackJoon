#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m, i, j, tmp;
	scanf("%d %d", &n, &m);
	int basket[100];
	// 바구니 초기화
	for (int o = 1; o <= n; o++) {
		basket[o] = o;
	}

	for (int o = 1; o <= m; o++) {
		scanf("%d %d", &i, &j);
		tmp = basket[i];
		basket[i] = basket[j];
		basket[j] = tmp;
	}

	for (int o = 1; o <= n; o++) {
		printf("%d ", basket[o]);
	}
	
}
