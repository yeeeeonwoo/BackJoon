#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[10]; // 배열크기 딱 안맞추니까 컴파일 에러 떴었음 조심하기
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] = num[i] % 42; //42로 나눈 나머지로 싹 저장
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (num[j] >= 0 && num[i] == num[j]) { //0보다 크거나 같은!! 으로 해야함 왜냐면 나머지가 0일수도 있으니까, 그러면 중복이라 -1로 저장된 것들은 다음 중복체크할 때 포함안됨
				num[j] = -1; // 겹치면 -1로 바꾸기
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] != -1) {
			cnt++;
		}
	}
	printf("%d", cnt);
}
