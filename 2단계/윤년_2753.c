#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year;
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
		else {
			printf("1");
		}
	}
	else {
		printf("0");
	}
}
