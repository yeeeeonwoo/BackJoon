#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char C;
	scanf("%c", &C);
	printf("%d", (int)C); // ascii코드는 문자를 int형으로 형변환해주면됨(애초에 문자를 숫자로 표현한거니까)
}
