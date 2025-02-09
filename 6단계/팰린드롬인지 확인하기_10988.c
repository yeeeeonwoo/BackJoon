#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[101];
	scanf("%s", word);
	int len = strlen(word);
	int palindrome = 1;
	for (int i = 0; i < len / 2; i++) {
		if (word[i] != word[len - 1 - i]) {
			palindrome = 0;
			break;
		}
		else {
			palindrome = 1;
		}
	}
	printf("%d", palindrome);
}
