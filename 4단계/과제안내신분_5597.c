#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int student_list[30] ={0}; //제출안함(0)
	
	for (int i = 0; i < 28; i++) {
		int n;
		scanf("%d", &n);
		student_list[n-1] = 1; //제출함(1)
	}
	for (int i = 0; i < 30; i++) {
		if (student_list[i] == 0) {
			printf("%d\n", i+1);
		}
	}
}
