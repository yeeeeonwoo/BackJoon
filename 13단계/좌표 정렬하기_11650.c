#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//구조체 정의
typedef struct {
	int x, y;
}Point;

int compare(const void* a, const void* b) {
	Point* p1 = (Point*)a;
	Point* p2 = (Point*)b;

	if (p1->x == p2->x) {
		return p1->y - p2->y; // x가 같으면 y비교
	}
	return p1->x - p2->x; // x가 다르면 x기준으로 정렬
}

int main() {
	//버블 정렬은 시간초과 떠서 퀵정렬 시도
	int n;
	scanf("%d", &n);

	Point points[100000]; //구조체배열

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &points[i].x, &points[i].y);
	}
	//qsort 정렬
	qsort(points, n, sizeof(Point), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", points[i].x, points[i].y);
	}
}
