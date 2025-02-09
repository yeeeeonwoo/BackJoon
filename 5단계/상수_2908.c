#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[4], b[4]; // 문자열 마지막 부분은 자동으로 널문자 들어가니까 한 칸 더
	char tmp;

	scanf("%s %s", a, b);

	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;

	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;

	if (strcmp(a, b) > 0) {
		printf("%s", a);
	}
	else {
		printf("%s", b);
	}
	
}
