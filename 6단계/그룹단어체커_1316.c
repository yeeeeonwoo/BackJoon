#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N, cnt = 0;
    char preword[101];
    char word[101];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", word);
        int group = 1;
        for (int j = 0; j < strlen(word); j++) {
            for (int k = 0; k < j - 1; k++){ // -1을 활용해 이전 문자를 체크하는 방식 잘 기억하기
                if (word[j] == word[k] && word[j] != word[j - 1]) {
                    group = 0;
                    break;
                }
            }
            if (group == 0) {
                break;
            }
        }
        if (group == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
}
