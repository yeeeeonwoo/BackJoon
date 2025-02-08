#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int N, max = -1;
	double sum = 0.0;
	int score[1000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0; i < N; i++) {
		sum += (double)score[i] / max * 100;

	}
	printf("%lf", sum / N);
}
