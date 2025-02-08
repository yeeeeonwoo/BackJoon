#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m, cnt=0;
	int num[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		if (m == num[i]) {
			cnt = cnt +1;
		}
	}
	printf("%d", cnt);
	
}
