#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int dict(char alpha) {
	if (alpha == 'A' || alpha == 'B' || alpha == 'C') {
		return 3;
	}
	else if (alpha == 'D' || alpha == 'E' || alpha == 'F') {
		return 4;
	}
	else if (alpha == 'G' || alpha == 'H' || alpha == 'I') {
		return 5;
	}
	else if (alpha == 'J' || alpha == 'K' || alpha == 'L') {
		return 6;
	}
	else if (alpha == 'M' || alpha == 'N' || alpha == 'O') {
		return 7;
	}
	else if (alpha == 'P' || alpha == 'Q' || alpha == 'R' || alpha == 'S') {
		return 8;
	}
	else if (alpha == 'T' || alpha == 'U' || alpha == 'V') {
		return 9;
	}
	else {
		return 10;
	}
}

int main(void) {
	char word[16];
	scanf("%s", word);
	int len = strlen(word);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += dict(word[i]);
	}
	printf("%d", sum);
}
