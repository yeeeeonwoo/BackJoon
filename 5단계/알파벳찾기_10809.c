#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char S[101];
	int result[26];
	for (int i = 0; i < 26; i++) {
		result[i] = -1;
	}
	scanf("%s", S);

	// 모든 알파벳에 대해 검사하는게 아니라 문자열에 있는 알파벳들이 처음 나온 위치를 저장
	for (int i = 0; i < strlen(S); i++) {
		int index = S[i] - 'a';
		if (result[index] == -1){ // -1일때(아직 처음 나온게 없을때)만 저장해야 첫번째 위치 저장가능
			result[index] = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", result[i]);
	}
}
