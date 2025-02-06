#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, C, h, m;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if (B + C < 60) {
		printf("%d %d", A, B + C);
	}
	else {
		h = (B + C) / 60;
		m = (B + C) % 60;

		if (A + h < 24) {
			printf("%d %d", A + h, m);
		}
		else {
			printf("%d %d", A + h - 24, m);
		}
	}
}
