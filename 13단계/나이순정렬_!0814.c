#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int age;
	char name[101];
} people;

int compare(const void *a, const void *b) {
	people *A = (people *)a;
	people *B = (people *)b;
	
	if (A->age > B->age) { // 길이비교
		return 1;
	}
	else if (A->age < B->age) {
		return -1;
	}
	else return 0;
}

int main(void) {
	int n;
	scanf("%d", &n);
	people* p_people = (people*)malloc(sizeof(people) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &p_people[i].age, p_people[i].name);
	}

	qsort(p_people, n, sizeof(people), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %s\n", p_people[i].age, p_people[i].name);
	}
	free(p_people);
	return 0;

}
