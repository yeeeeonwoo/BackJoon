#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//시간제한 있을 때는 반복문으로 풀면 시간초과 뜸, 여러번 탐색하지 않아도 되게끔 한줄로
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	while (a!=0 || b!=0) {
		if (b % a == 0) {
			printf("factor\n");
		}
		else if (a % b == 0) {
			printf("multiple\n");
		}
		else {
			printf("neither\n");
		}
		scanf("%d %d", &a, &b);
	}
	
}
