#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int tmp, number[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
	}
	// 버블정렬
	for (int i = 0; i < 4; i++) { // 한번 정렬할 때마다 가장 큰 원소자리는 보장되므로 정렬 횟수가 하나씩 줄어들음
		for (int j = 0; j < 4; j++) { // 인접한 애들끼리 바꾸기
			if (number[j] > number[j + 1]) {
				tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		sum += number[i];
	}
	printf("%d\n%d", sum / 5, number[2]);
}
