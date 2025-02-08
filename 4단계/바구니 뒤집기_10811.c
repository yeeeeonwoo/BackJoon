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

	for (int o = 0; o < m; o++) {
		scanf("%d %d", &i, &j);
		while (i < j) { // i가 j보다 작을 때만 반복해야 두 번 switch되는거 방지
			tmp = basket[i];
			basket[i] = basket[j];
			basket[j] = tmp;
			// i랑 j랑 바꾸고 i는 1늘리고 j는 1줄이면 다음 switch할 거 나옴
			i++;
			j--;
		}
	}
	for (int o = 1; o <= n; o++) {
		printf("%d ", basket[o]);
	}
}
