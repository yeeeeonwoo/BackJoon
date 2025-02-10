#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int N, layer=1, maxlayer=1;
	scanf("%d", &N);
	while (N > maxlayer) {
		maxlayer += 6 * layer;
		layer++;
	}
	printf("%d", layer);
}
