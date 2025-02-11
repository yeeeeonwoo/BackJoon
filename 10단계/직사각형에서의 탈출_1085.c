#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = x; // 먼저 x를 최소값으로 설정
	if (y < min) min = y;
	if ((w - x) < min) min = (w - x);
	if ((h - y) < min) min = (h - y);
	printf("%d", min);
}
