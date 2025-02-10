#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//시간제한 있을 때는 반복문으로 풀면 시간초과 뜸, 여러번 탐색하지 않아도 되게끔 한줄로
int main() {
	int A, B, V, day;
	scanf("%d %d %d", &A, &B, &V);
	day = (V - B) / (A - B);
	if ((V - B) % (A - B) != 0) {
		day += 1;
	}
	printf("%d", day);
}
