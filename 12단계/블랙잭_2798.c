#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, p = 0, max = 0;
	int card[100], sum[1000000];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (card[i] + card[j] + card[k] <= m) {
					sum[p] = card[i] + card[j] + card[k];
					p++;
				}
			}
		}
	}

	for (int i = 0; i <= p; i++) {
		if (sum[i] > max) {
			max = sum[i];
		}
	}
	printf("%d", max);
}
