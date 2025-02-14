#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int tmp;
	char num[11];
	scanf("%s", num);
	int len = strlen(num);

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (num[j] < num[j+1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%c", num[i]);
	}
}
