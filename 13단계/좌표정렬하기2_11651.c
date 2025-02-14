#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y;
}Point;

int compare(const void* a, const void* b) {
	Point* p1 = (Point*)a;
	Point* p2 = (Point*)b;

	if (p1->y == p2->y) { // y가 같으면 x비교
		return p1->x - p2->x;
	}
	return p1->y - p2->y; // 아니면 y로 비교
}

int main(void) {
	int n;
	scanf("%d", &n);

	Point points[100000];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &points[i].x, &points[i].y);
	}

	qsort(points, n, sizeof(Point), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", points[i].x, points[i].y);
	}
}
