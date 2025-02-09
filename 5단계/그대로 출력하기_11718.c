#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char word;
	while (scanf("%c", &word) != EOF) { //EOF 잘활용하기
		printf("%c", word);
	}
}
