#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	
	char word[1000001];
	int count[26] = { 0 }; // 각 알파벳이 몇번 나왔는지 저장
	scanf("%s", word);
	int len = strlen(word);

	//각 단어의 빈도수 세기(소문자일지 대문자일지 모르니까 다 세기)
	for (int i = 0; i < len; i++) {
		char ch = word[i];
		if (ch >= 'A' && ch <= 'Z') {
			count[ch - 'A']++;
		}
		else if (ch >= 'a' && ch <= 'z') {
			count[ch - 'a']++;
		}
	}

	int max_count = 0;
	char max_char = '?';
	int duplicate = 0;

	for (int i = 0; i < 26; i++) {
		if (count[i] > max_count) {
			max_count = count[i];
			max_char = 'A' + i; // 대문자로 변환
			duplicate = 0;
		}
		else if (count[i] == max_count) {
			duplicate = 1;
		}
	}

	if (duplicate) {
		printf("?");
	}
	else {
		printf("%c", max_char);
	}
}
