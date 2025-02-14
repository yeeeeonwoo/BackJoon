#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, tmp, number[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { // 입력받고
		scanf("%d", &number[i]);
	}
	for (int i = 1; i < n; i++) { // 힙으로 자료구조 바꾸기(Heapify-up)
		int child = i;
		while(child>0) {
			int root = (child - 1) / 2;
			if (number[root] < number[child]) {
				tmp = number[root];
				number[root] = number[child];
				number[child] = tmp;
			}
			child = root;
		} 
	}
	for (int i = n - 1; i > 0; i--) { //힙정렬, i는 현재 힙크기(정렬된 부분 뺀 나머지 부분들)
		tmp = number[0];
		number[0] = number[i];
		number[i] = tmp; // 루트랑 마지막 요소 교환

		int root = 0; // 루트에서 다시 힙 속성 유지(heapify-down)
		while (2 * root + 1 < i) {
			int child = 2 * root + 1; // 왼쪽자식
			if (child + 1 < i && number[child] < number[child + 1]) { // 오른쪽 자식이 더 크면 오른쪽 자식으로 이동(부모노드는 항상 자식노드 둘중에 더 작은 자식과 비교할 수 있게)
				child++;
			}
			if (number[root] >= number[child]) break; //힙 성질 만족하면 종료(더 교환할 필요 없음)

			//만족못하면 부모 자식 교환
			tmp = number[root];
			number[root] = number[child];
			number[child] = tmp;
			//자식이 새로운 부모가 됨
			root = child;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", number[i]);
	}
}
