#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int max_index;
	int num[9];
	int max = -1;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max) {
			max = num[i];
			max_index = i;
		}
	}
	printf("%d\n%d", max, max_index+1);
}
