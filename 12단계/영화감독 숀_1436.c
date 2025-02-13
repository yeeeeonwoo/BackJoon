#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//다시 풀어보기
	int n, cnt = 0, num = 666;
	scanf("%d", &n);
	while (1) {
		int cons6 = 0;
		int cur = num;
		while (cur > 0) {
			int digit = cur % 10;
			if (digit == 6) cons6++; //1의자리가 6이면 cons6+1
			else cons6 = 0; // 아니면 0
			if (cons6 == 3) { //3번연속 1의자리가 6이면 666 포함이라는 뜻
				cnt++;
				break;
			}
			cur = cur / 10;
		}
		if (cnt == n) break;
		num++;
	}
	printf("%d", num);
}
