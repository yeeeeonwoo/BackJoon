#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int T, C, q = 0, d = 0, n = 0, p = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &C);
		q = C / 25;
		d = (C % 25) / 10;
		n = ((C % 25) % 10) / 5;
		p = ((C % 25) % 10) % 5;
		printf("%d %d %d %d\n", q, d, n, p);
	}
}
