#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0, len;
	char S[1000000];
	scanf("%[^\n]s", S);
	len = strlen(S);
	if (len == 1 && S[0] == ' ') {
		printf("%d", cnt);
		return 0;
	}
	for (int i = 1; i < len-1; i++) {
		if (S[i] == ' ') {
			cnt = cnt + 1;
		}
	}
	printf("%d", cnt + 1);
	return 0;
}
