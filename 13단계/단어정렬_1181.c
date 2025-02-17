#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int length;
	char text[51];
} word;
int compare(const void *a, const void *b) {
	word A = *(word *)a;
	word B = *(word *)b;
	
	if (A.length > B.length) { // 길이비교
		return 1;
	}
	else if (A.length < B.length){
		return -1;
	}
	return strcmp(A.text, B.text); // 길이 같으면 텍스트 비교
}
int main(void) {
	int n;
	word arr[20000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i].text);
		arr[i].length = strlen(arr[i].text);
	}

	qsort(arr, n, sizeof(word), compare);

	printf("%s\n", arr[0].text);
	for (int i = 1; i < n; i++) {
		if (strcmp(arr[i - 1].text, arr[i].text)) { // 중복되면 출력안함
			printf("%s\n", arr[i].text);
		}
	}



}
